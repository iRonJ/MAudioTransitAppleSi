import struct
import os

rsrc_path = "/Users/ronj/Documents/MaudioTransit/M-Audio Transit USB.pkg/Contents/Resources/M-Audio Transit USB.pax/Library/StartupItems/M-Audio Firmware Loader/M-Audio Firmware Loader.rsrc"

def extract_resources(path):
    with open(path, "rb") as f:
        data = f.read()

    # Parse Header
    data_offset = int.from_bytes(data[0:4], "big")
    map_offset = int.from_bytes(data[4:8], "big")
    data_len = int.from_bytes(data[8:12], "big")
    map_len = int.from_bytes(data[12:16], "big")

    print(f"Data Offset: {data_offset}")
    print(f"Map Offset: {map_offset}")
    
    # Read Resource Map
    # Map structure:
    # 0-16: Copy of header
    # 16-20: Handle to next resource map
    # 20-22: File reference number
    # 22-24: Resource fork attributes
    # 24-26: Offset from map start to type list
    # 26-28: Offset from map start to name list
    
    map_base = map_offset
    type_list_offset = int.from_bytes(data[map_base+24:map_base+26], "big") + map_base
    name_list_offset = int.from_bytes(data[map_base+26:map_base+28], "big") + map_base
    
    # Type List
    # 0-2: Number of types - 1
    num_types = int.from_bytes(data[type_list_offset:type_list_offset+2], "big") + 1
    print(f"Number of resource types: {num_types}")
    
    current_type_ptr = type_list_offset + 2
    for i in range(num_types):
        res_type = data[current_type_ptr:current_type_ptr+4].decode('mac_roman', errors='ignore')
        num_resources = int.from_bytes(data[current_type_ptr+4:current_type_ptr+6], "big") + 1
        ref_list_offset = int.from_bytes(data[current_type_ptr+6:current_type_ptr+8], "big") + type_list_offset
        
        print(f"Type: {res_type}, Count: {num_resources}")
        
        current_ref_ptr = ref_list_offset
        for j in range(num_resources):
            # Reference List Entry
            # 0-2: Resource ID
            # 2-4: Offset to name (from name list start)
            # 4-5: Attributes
            # 5-8: Offset to data (from data start) + Handle info
            
            res_id = int.from_bytes(data[current_ref_ptr:current_ref_ptr+2], "big")
            name_offset_val = int.from_bytes(data[current_ref_ptr+2:current_ref_ptr+4], "big")
            
            # 24-bit offset to data
            data_ptr_raw = int.from_bytes(data[current_ref_ptr+5:current_ref_ptr+8], "big")
            # Clear high byte (handle info) - usually 0
            rel_data_offset = data_ptr_raw & 0x00FFFFFF
            
            abs_data_offset = data_offset + rel_data_offset
            
            # Data format:
            # 0-4: Length
            # 4...: Data
            res_len = int.from_bytes(data[abs_data_offset:abs_data_offset+4], "big")
            res_data = data[abs_data_offset+4 : abs_data_offset+4+res_len]
            
            print(f"  ID: {res_id}, Length: {res_len}")
            
            if res_type == "FIRM":
                 print(f"  FIRM ID: {res_id}, Length: {res_len}")
                 print(f"    Hex: {res_data[:32].hex()}")
                 print(f"    Ascii: {res_data[:32]}")

                 safe_name = None
                 if name_offset_val != 0xFFFF:
                     name_ptr = name_list_offset + name_offset_val
                     name_len = data[name_ptr]
                     res_name = data[name_ptr+1:name_ptr+1+name_len].decode('mac_roman', errors='ignore')
                     safe_name = res_name.replace("/", "_")

                 if safe_name:
                     filename = f"firmware_{safe_name}.bin"
                 else:
                     filename = f"extracted_FIRM_{res_id}.bin"

                 with open(filename, "wb") as out:
                     out.write(res_data)

            current_ref_ptr += 12
        
        current_type_ptr += 8

if __name__ == "__main__":
    extract_resources(rsrc_path)
