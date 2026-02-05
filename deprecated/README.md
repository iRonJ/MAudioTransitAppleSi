# Deprecated Python Loader

The Python/PyUSB loader in this repo is deprecated on macOS.

## Why it fails on macOS

- PyUSB uses libusb, which does not use the macOS IOKit USB stack.
- The original driver (per GHIDRA) performs an **IOKit-only** call to
  `USBDeviceReEnumerate` to make the device re-enumerate as PID `0x2006`.
- libusb does not expose `USBDeviceReEnumerate`, so the device stays in loader
  mode (`0x2806`) even when the DFU transfer succeeds.

## What to use instead

Use the IOKit-based C loader:

```
make
sudo ./bin/maudio_iokit_loader
```
