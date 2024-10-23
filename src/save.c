#include "common.h"
#include "pad.h"

s32 _CheckFlag(s32 arg0);

typedef struct GW_COMMON {
    u8 unk_00;
    char unk_01[0xA3];
} GW_COMMON; //sizeof 0xA4

typedef struct GW_STORY {
    char unk_00[0x74];
} GW_STORY;

extern u8 D_800CD0B6[];
extern GW_COMMON GwCommon;
extern GW_STORY GwStory;
extern u8 D_800CC0DE[];
extern u8 D_800CC153[];
extern u16 D_800CC0CA[];
extern s32 D_800B1A30;

void GWInit(void) {
    GW_COMMON* gw = &GwCommon;
    
    bzero(&GwCommon, sizeof(GwCommon));
    bzero(&GwStory, sizeof(GwStory));
    
    gw->unk_00 = 0x91;
    GwSystem.current_board_index = 0;
    GwSystem.unk10 = 0;
}

void GWMgNoSet(s8 arg0) {
    GwSystem.unk10 = arg0;
}

// bit position to byte + bit position
void GWMgBitGet(s16 bitPos, s16* byteIdx, s16* bitIdx) {
    s16 pos;

    if (bitPos < 0 && GwSystem.unk10 > 0) {
       pos = GwSystem.unk10 - 1;
    } else {
        if (bitPos < 0) {
            pos = 0;
        } else {
            pos = bitPos;
        }
    }
    
    *byteIdx = pos / 8;
    *bitIdx  = pos % 8;
}

// set bit
void GWMgUnlockSet(s16 bitPos) {
    s16 outBytePos;
    s16 outBitPos;

    GWMgBitGet(bitPos, &outBytePos, &outBitPos);
    D_800CC0DE[outBytePos] |= (1 << outBitPos);
}

// clear bit
void GWMgUnlockReset(s16 bitPos) {
    s16 outBytePos;
    s16 outBitPos;

    GWMgBitGet(bitPos, &outBytePos, &outBitPos);
    D_800CC0DE[outBytePos] &= ~(1 << outBitPos);
}

// check bit
s32 GWMgUnlockCheck(s16 arg0) {
    s16 sp10;
    s16 sp12;

    GWMgBitGet(arg0, &sp10, &sp12);
    return D_800CC0DE[sp10] & (1 << sp12);
}

void GWMgRecordSet(s16 arg0, s16 arg1) {
    if (_CheckFlag(0xF) == 0) {
        D_800CC0CA[arg0] = arg1;
    }
}

u16 GWMgRecordGet(s16 arg0) {
    return D_800CC0CA[arg0];
}

void GWBoardNoSet(s8 boardIndex) {
    GwSystem.current_board_index = boardIndex;
}

INCLUDE_ASM(s32, "save", GWBoardRecordGet);

INCLUDE_ASM(s32, "save", GWPlayNumGet);

INCLUDE_ASM(s32, "save", GWPlayNumInc);

INCLUDE_ASM(s32, "save", GWCharPlayNumInc);

INCLUDE_ASM(s32, "save", func_80035E3C_36A3C);

INCLUDE_ASM(s32, "save", func_80035E60_36A60);

INCLUDE_ASM(s32, "save", func_80035E88_36A88);

s32 _CheckFlag(s32 arg0) {
    return D_800CC153[arg0 / 8] & (1 << (arg0 % 8));
}

INCLUDE_ASM(s32, "save", _SetFlag);

INCLUDE_ASM(s32, "save", _ClearFlag);

s32 GWBoardFlagCheck(s32 input) {
    s32 byteValue;
    s32 adjustedIndex;
    s32 byteIndex;
    s32 bitIndex;
    s32 mask;

    byteValue = D_800CD0B6[input / 8];

    if (input >= 0) {
        adjustedIndex = input;
    } else {
        adjustedIndex = input + 7;
    }

    // Calculate the byte index (divide by 8)
    byteIndex = adjustedIndex >> 3;

    // Calculate the bit index
    bitIndex = input - (byteIndex << 3);

    mask = (1 << bitIndex);

    return byteValue & mask;
}


void GWBoardFlagSet(s32 input) {
    s32 adjustedInput;
    s32 byteIndex;
    s32 bitIndex;

    // Adjust input if negative to handle division by 8 correctly
    if (input < 0) {
        adjustedInput = input + 7;
    } else {
        adjustedInput = input;
    }
    
    // Calculate the byte index in the array
    byteIndex = adjustedInput >> 3; // Same as dividing by 8
    
    // Temporary variable to handle bit position calculation
    bitIndex = input;
    
    if (input < 0) {
        bitIndex = input + 7;
    }
    
    // Calculate the bit position within the byte
    bitIndex = bitIndex >> 3 << 3;
    
    // Set the specific bit in the byte at byteIndex
    D_800CD0B6[byteIndex] = D_800CD0B6[byteIndex] | (1 << (input - (bitIndex)));
}

void GWBoardFlagClear(s32 input) {
    s32 adjustedInput;
    s32 byteIndex;
    s32 bitIndex;

    // Adjust input if negative to handle division by 8 correctly
    if (input < 0) {
        adjustedInput = input + 7;
    } else {
        adjustedInput = input;
    }
    
    // Calculate the byte index in the array
    byteIndex = adjustedInput >> 3; // Same as dividing by 8
    
    // Temporary variable to handle bit position calculation
    bitIndex = input;
    
    if (input < 0) {
        bitIndex = input + 7;
    }
    
    // Calculate the bit position within the byte
    bitIndex = bitIndex >> 3 << 3;
    
    // Set the specific bit in the byte at byteIndex
    D_800CD0B6[byteIndex] = D_800CD0B6[byteIndex] & ~(1 << (input - (bitIndex)));
}

void GWContErrorSet(void)
{
    if (CheckControllerRead(0) != FALSE)
    {
        D_800B1A30 = TRUE;
        return;
    }
    D_800B1A30 = FALSE;
}

INCLUDE_ASM(s32, "save", GWContErrorGet);
