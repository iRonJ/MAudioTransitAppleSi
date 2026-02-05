# M-Audio Transit Firmware Loader (macOS)

This repo contains a working macOS firmware loader for the M-Audio Transit USB
device. The implementation is based on the GHIDRA decompile in
`ghirdaexport/`, and it now brings the device up as a USB Audio device
(`0x0763:0x2006`).

## What Worked (Final Flow)

These steps match the GHIDRA decompile and are required for a successful load:

1. **Match the device using IOKit, not libusb**.
   - The device shows up as `IOUSBDevice` on older macOS and `IOUSBHostDevice`
     on newer macOS. We try both.
2. **Open the device and set the first configuration**.
3. **Find the DFU interface number** and use it as `wIndex` for DFU requests.
4. **Read the DFU Functional Descriptor** and use `wTransferSize`.
5. **Use the 2-byte M-Audio firmware header** (big-endian version).
   - Skip the update if the device `bcdDevice >= firmware version`.
6. **Check for a DFU suffix**.
   - If missing, swap the DFU poll timeout bytes (GHIDRA behavior).
7. **DFU download**:
   - `DFU_GETSTATUS` -> `DFU_CLRSTATUS` on error.
   - Send all blocks with `DFU_DNLOAD` in `wTransferSize` chunks.
   - Send the final **zero-length** DNLOAD packet.
8. **Finalize using device re-enumeration**:
   - GHIDRA calls the device vtable at +0x94, which matches
     `USBDeviceReEnumerate(dev, 0)`.
   - This is the key step that makes macOS see the audio device.

After this, macOS prompts to allow the device and it enumerates as:

```
USB Vendor ID: 0x0763
USB Product ID: 0x2006
USB Product Version: 0x0101
```

## What Did Not Work (Earlier Attempts)

These were tried and failed before aligning with the GHIDRA behavior:

- **libusb/PyUSB**: timed out because it bypasses IOKit and the loader uses
  IOKit-specific control transfers.
- **Matching only `IOUSBDevice`**: failed on modern macOS where the class is
  `IOUSBHostDevice`.
- **Treating the firmware header as 20 bytes**: incorrect for this device.
  The correct header is **2 bytes** (version).
- **Skipping the DFU interface number**: DFU requests require `wIndex` set to
  `bInterfaceNumber`.
- **Using only `ResetDevice`**: firmware download succeeded but the device
  stayed at `0x2806`. The correct call is `USBDeviceReEnumerate`.

## Firmware Extraction

Run the extractor to pull FIRM resources and name them correctly:

```
python3 extract_firmware.py
```

This creates files like:

- `firmware_628.dfu.bin` (used for the loader mode device)
- `firmware_320.dfu-app-mode.bin`
- `firmware_110.cypress.bin`, etc.

The loader auto-selects a firmware file based on the device product/version
and the stream name (`dfu`), but you can also pass a path explicitly.

## Build and Run

```
clang -framework IOKit -framework CoreFoundation -o maudio_iokit_loader maudio_iokit_loader.c
sudo ./maudio_iokit_loader
```

Expected successful output includes:

```
Downloading firmware (5803 bytes in 91 blocks, 64 bytes/block)...
Download complete (91 blocks)
Finalizing...
=== SUCCESS ===
Device should re-enumerate to PID 0x2006.
```

Then verify:

```
system_profiler SPUSBDataType | grep -A6 0x2006
```

## Auto‑Load on Plug‑In (User‑Level)

```
make
make install
```

This installs the loader to `~/.local/bin/maudio_iokit_loader` and installs a
LaunchAgent at `~/Library/LaunchAgents/com.maudio.transit.fwloader.plist` to run
in `--watch` mode (IOKit match notifications, no polling). It also copies firmware into
`~/Library/Application Support/MaudioTransit/firmware`. Logs go to
`~/Library/Logs/maudio_iokit_loader.log`.

To remove:

```
make uninstall
```

Optional flags:

```
make install WATCH_DEBUG=1
make install FW_DIR_SRC="$PWD/extracted boot_fw_maudio"
```

## Auto‑Load on Plug‑In (System‑Level)

If you need root‑level access (or want the loader to run even when no user is
logged in), use the system LaunchDaemon:

```
make
sudo make install-system
```

Remove it with:

```
sudo make uninstall-system
```

The system install copies firmware into
`/Library/Application Support/MaudioTransit/firmware`.

## Manual Watch Mode

```
./bin/maudio_iokit_loader --watch --debug
./bin/maudio_iokit_loader --watch --firmware-dir "extracted boot_fw_maudio"
```

`--watch` uses IOKit match notifications (no polling). `--debug` logs every
matched USB device with vendor/product IDs.

## Troubleshooting

- If you see `bStatus=15 bState=10`, the device is in `dfuERROR`. Unplug the
  device, wait 5 seconds, replug, and rerun the loader.
- If it still enumerates as `0x2806`, check that `USBDeviceReEnumerate` is
  called (present in the current loader) and give it ~10-15 seconds.
- If it shows as `0x2006` but no audio device appears, that is likely a driver
  or OS compatibility issue, not the firmware loader.
- Known issue: **audio above 48 kHz can be garbled on analog output**.
  The decompiled kext indicates the original driver used **packed 24‑bit**
  (3‑byte) audio at higher sample rates to fit USB 1.1 bandwidth. The macOS
  class driver may be sending 24‑bit with 32‑bit padding or selecting a
  different alternate setting, which would explain the corruption. This points
  to a **device firmware bit‑packing expectation** rather than the loader.

## Difference to Linux Loader

The legacy Linux loader (`madfuload-1.2/madfuload.c`) is simpler and less
device-specific. Compared to the macOS loader here:

- It does **not** skip the 2‑byte M‑Audio firmware header.
- It does **not** handle the DFU suffix (length adjustment).
- It only waits using **byte 3** of `bwPollTimeout` (or not at all).
- It does not track DFU state transitions (`DNLOAD_SYNC`, `DNBUSY`,
  `MANIFEST_*`).
- It always issues a plain `USBDEVFS_RESET` at the end (no
  `USBDeviceReEnumerate`).

In practice, the macOS loader’s extra steps are required to match the GHIDRA
behavior and reliably re‑enumerate to `0x2006`.

## Key Files

- `maudio_iokit_loader.c`: working macOS firmware loader.
- `ghirdaexport/firmware_loader.c`: GHIDRA-based logic reference.
- `extract_firmware.py`: firmware resource extractor.
