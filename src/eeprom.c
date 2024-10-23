#include "common.h"

typedef struct UnkEepStruct {
    char unk_00[0x10];
} UnkEepStruct;

typedef struct unkfunc_8001AFD8 {
    s16 unk0;
    struct unkfunc_8001AFD8* unk4; //is this correct?
    s16 unk8;
} unkfunc_8001AFD8;

typedef struct unkfunc_8007EE0C {
    void* _InitEepromFunc; //func pointer
    unkfunc_8001AFD8* unk4; //is this correct?
    s32 unk8;
    OSMesgQueue* mesgQueue;
} unkfunc_8007EE0C;

typedef struct UnkEep {
    u16 unk0;
    char unk2[2];
    u8* unk4;
    u16 unk8;
} UnkEep;

extern u8 D_80097710_98310[];
extern u8 D_800D0450[];
extern OSMesgQueue D_800CE1A0;
extern u8 D_800AC7F0;
extern u8 D_800AC7F1;
s32 func_8000C9C8_D5C8(s8);
extern u8 D_800D0E50[];
void ClearCommonBuf(void);
//some kind of osEepromLongWrite wrapper?
s32 WriteEeprom(OSMesgQueue* arg0, u8 arg1, u8* arg2, s32 arg3);
s32 RequestSIFunction(unkfunc_8007EE0C* arg0, void* _InitEeprom, UnkEep** arg2, s32 arg3);

s32 _InitEeprom(s8** arg0) {
    s16 eepromProbeResult;
    s32 var_s1;
    s16 i;

    D_800AC7F0 = 0;
    D_800AC7F1 = 0xFF;
    var_s1 = 0;
    eepromProbeResult = osEepromProbe(&D_800CE1A0);
    if ((eepromProbeResult) == 0) {
        for (i = 0; i < 4; i++) {
            eepromProbeResult = osEepromProbe(&D_800CE1A0);
            if (eepromProbeResult != 0) {
                break;
            }
        }

        ASSERT(i != 4);
    }

    ASSERT(eepromProbeResult == EEPROM_TYPE_16K);

    if (osEepromLongRead(&D_800CE1A0, 0, D_800D0E50, EEPROM_BLOCK_SIZE) != 0) {
        return EEPROM_TYPE_16K;
    }

    i = 0;
    if (D_80097710_98310[i] != 0) {
        while (1) {
            if (D_800D0E50[i] != D_80097710_98310[i]) {
                var_s1 = 1;
                //Write "HUDSON\0\0" header
                for (i = 0; i < 8; i++) {
                    D_800D0E50[i] = D_80097710_98310[i];
                }

                for (i = 0; i < EEPROM_BLOCK_SIZE; i++) {
                    D_800D0E50[i] = D_80097710_98310[i];
                }
                
                ClearCommonBuf();
                WriteEeprom(&D_800CE1A0, 1, D_800D0450, 0x18);
                
                for (i = 0; i < 3; i++) {
                    if (func_8000C9C8_D5C8(i)) {
                        return EEPROM_TYPE_16K;
                    }
                }
                
                for (i = 0; i < 8; i++) {
                    D_800D0E50[i] = D_80097710_98310[i];
                }
                
                if (WriteEeprom(&D_800CE1A0, 0, D_800D0E50, 8) == 0) {
                    **arg0 = var_s1;
                    return 0;
                }
                return EEPROM_TYPE_16K;
            }      
            i++;
            if (D_80097710_98310[i] == 0) {
                break;
            }
        }
    }
    **arg0 = var_s1;
    return 0;
}

s32 InitEeprom(unkfunc_8001AFD8* arg0) {
    unkfunc_8007EE0C sp10;
    unkfunc_8001AFD8* sp20 = arg0; //?

    return RequestSIFunction(&sp10, &_InitEeprom, &sp20, 1);
}

INCLUDE_ASM(s32, "eeprom", _WriteEeprom);

INCLUDE_ASM(s32, "eeprom", WriteEepromBox2);

INCLUDE_ASM(s32, "eeprom", WriteEepromBox);

INCLUDE_ASM(s32, "eeprom", func_8000C6C0_D2C0);

INCLUDE_ASM(s32, "eeprom", _ReadEeprom);

INCLUDE_ASM(s32, "eeprom", ReadEepromBox);

INCLUDE_ASM(s32, "eeprom", WriteEepromCommonBuf);

INCLUDE_ASM(s32, "eeprom", ReadEepromCommonBuf);

INCLUDE_ASM(s32, "eeprom", func_8000C9C8_D5C8);

INCLUDE_ASM(s32, "eeprom", ClearBoxBuf);

INCLUDE_ASM(s32, "eeprom", ClearCommonBuf);

INCLUDE_ASM(s32, "eeprom", _DestroyEeprom);

INCLUDE_ASM(s32, "eeprom", DestroyEeprom);

u16 CalcChecksumEeprom(u8* data, u16 startIndex, u16 size) {
    u16 checksum = 0;
    u16 remainingBytes = size - 1;

    while (size--) {
        checksum += data[startIndex];
        startIndex += 1;
        remainingBytes += 0xFFFF;
    }

    return ~checksum;
}

s32 WriteEeprom(OSMesgQueue* arg0, u8 arg1, u8* arg2, s32 arg3) {
    UnkEepStruct sp10;

    osEepromLongRead(arg0, (arg1 ^ 1), (u8*)&sp10, 8);
    return osEepromLongWrite(arg0, arg1, arg2, arg3);
}
