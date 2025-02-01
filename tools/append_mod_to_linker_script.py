import os

# filename = 'marioparty3.ld'
# mod_directory = 'src/mod'

# # Check if 'mod_ROM_START = __romPos;' exists in the file
# with open(filename) as file:
#     if any('mod_ROM_START = __romPos;' in line for line in file):
#         print("'mod_ROM_START = __romPos;' already exists. Exiting script.")
#         exit()

# # If the line does not exist, proceed with the rest of the script
# with open(filename) as file:
#     for line_number, line in enumerate(file):
#         if 'audio_fxd0_VRAM_END' in line:
#             next_line = next(file, None)
#             break
# line_number = line_number + 1

# with open(filename, 'r') as file:
#     lines = file.readlines()

# lines.insert(line_number, "\n\t__romPos = 0x2000000;\n")
# line_number += 1

# main_dir = "src/mod/"
# previous_vram_end = "0x80400000"

# def insert_section(lines, line_number, mod_directory, section_name):
#     for filename_c in os.listdir(mod_directory):
#         if filename_c == "mod_overlay_table.data.s":
#             continue  # skip this file
#         if filename_c.endswith(('.c', '.s')):
#             lines.insert(line_number, f"\t\tbuild/{mod_directory}/{filename_c}.o({section_name});\n")
#             line_number += 1
#     return line_number

# for root, dirs, files in os.walk(main_dir):
#     prefix = root.replace(main_dir, "").replace("/", "_")
#     if prefix:
#         prefix += "_"
#     else:
#         prefix = "mod_"

#     # Add the standard section definitions
#     lines.insert(line_number, f"\t{prefix}ROM_START = __romPos;\n")
#     lines.insert(line_number + 1, f"\t{prefix}VRAM = ADDR(.{prefix.rstrip('_')});\n")
#     vram_address = previous_vram_end if prefix != "mod_" else "0x80400000"
#     lines.insert(line_number + 2, f"\t.{prefix.rstrip('_')} {vram_address} : AT({prefix}ROM_START) SUBALIGN(16)\n")
#     lines.insert(line_number + 3, "\t{\n")
#     line_number += 4

#     lines.insert(line_number, f"\t\t{prefix}TEXT_START = .;\n")
#     line_number += 1
#     line_number = insert_section(lines, line_number, root.rstrip('/'), ".text")

#     lines.insert(line_number, f"		. = ALIGN(., 16);\n")
#     line_number += 1
    

#     lines.insert(line_number, f"\t\t{prefix}RODATA_START = .;\n")
#     line_number += 1
#     line_number = insert_section(lines, line_number, root.rstrip('/'), ".rodata")

#     lines.insert(line_number, f"		. = ALIGN(., 16);\n")
#     line_number += 1

#     lines.insert(line_number, f"\t\t{prefix}DATA_START = .;\n")
#     line_number += 1
#     line_number = insert_section(lines, line_number, root.rstrip('/'), ".data")

#     lines.insert(line_number, f"		. = ALIGN(., 16);\n")
#     line_number += 1

#     lines.insert(line_number, "\t}\n")
#     lines.insert(line_number + 1, f"\t__romPos += SIZEOF(.{prefix.rstrip('_')});\n")
#     lines.insert(line_number + 2, f"\t{prefix}ROM_END = __romPos;\n")
#     lines.insert(line_number + 3, f"\t{prefix}VRAM_END = .;\n")
#     line_number += 4

#     previous_vram_end = f"{prefix}VRAM_END"

#     # Add the NOLOAD section for .bss
#     lines.insert(line_number, f"\n\t{prefix.rstrip('_')}_bss_VRAM = ADDR(.{prefix.rstrip('_')}_bss);\n")
#     lines.insert(line_number + 1, f"\t.{prefix.rstrip('_')}_bss (NOLOAD) : SUBALIGN(8)\n")
#     lines.insert(line_number + 2, "\t{\n")
#     lines.insert(line_number + 3, "\t\tFILL(0x00000000);\n")
#     lines.insert(line_number + 4, f"\t\t{prefix.rstrip('_')}_BSS_START = .;\n")
#     line_number += 5
#     line_number = insert_section(lines, line_number, root.rstrip('/'), ".bss")
#     lines.insert(line_number, "\t\t. = ALIGN(., 16);\n")
#     lines.insert(line_number + 1, f"\t\t{prefix.rstrip('_')}_BSS_END = .;\n")
#     lines.insert(line_number + 2, f"\t\t{prefix.rstrip('_')}_BSS_SIZE = ABSOLUTE({prefix.rstrip('_')}_BSS_END - {prefix.rstrip('_')}_BSS_START);\n")
#     lines.insert(line_number + 3, "\t}\n")
#     line_number += 4

# with open(filename, 'w') as file:
#     file.writelines(lines)

# Open the file for reading
with open('asm/entrypoint.s', 'r') as file:
    # Read the contents of the file
    lines = file.readlines()

#new entrypoint.s file
lines[12:38] = [
'    /* 1000 80000400 */  lui $sp, %hi(gThread3Stack)\n'
'    /* 1004 80000404 */  addiu $sp, $sp, %lo(gThread3Stack)\n'
'    /* 1008 80000408 */  lui $a0, 0\n'
'    /* 100C 8000040C */  lui $a1, %hi(mod_ROM_START)\n'
'    /* 1010 80000410 */  addiu $a1, $a1, %lo(mod_ROM_START)\n',
'    /* 1014 80000414 */  lui $a2, %hi(mod_VRAM)\n'
'    /* 1018 80000418 */  addiu $a2, $a2, %lo(mod_VRAM)\n',
'    /* 101C 8000041C */  lui $a3, %hi(mod_ROM_END)\n'
'    /* 1020 80000420 */  addiu $a3, $a3, %lo(mod_ROM_END)\n'
'    /* 1024 80000424 */  jal osPiRawStartDma\n'
'    /* 1028 80000428 */  subu $a3, $a3, $a1\n'
'\n'
'    /* 102C 8000042C */  lui $t0, 0xA460\n'
'pi_loop:\n'
'    /* 1030 80000430 */  lw $t1, 0x0010 ($t0)\n'
'    /* 1034 80000434 */  andi $t2, $t1, 0x0001\n'
'    /* 1038 80000438 */  bnez $t2, pi_loop\n'
'    /* 103C 8000043C */  nop\n'
'    /* 1040 80000440 */  jal mod_boot_func\n'
'    /* 1044 80000444 */  nop\n'
'    /* 1048 80000448 */  nop\n'
'    /* 104C 8000044C */  nop\n'
'    /* 1050 80000450 */  nop\n'
'    /* 1054 80000454 */  nop\n'
'    /* 1058 80000458 */  nop\n'
'    /* 105C 8000045C */  nop\n'
]

# Open the file for writing
with open('asm/entrypoint.s', 'w') as file:
    # Write the modified contents back to the file
    file.writelines(lines)

print("Mod injected into linker script")

