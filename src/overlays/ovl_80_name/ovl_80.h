#include "common.h"
#include "game/object.h"
#include "malloc.h"

typedef struct BoardStatus {
    /* 0x00 */ s8 unk_00;
    /* 0x01 */ s8 unk1;
    /* 0x02 */ u8 unk2[2];
    /* 0x04 */ u8 unk4[2];
    /* 0x06 */ s8 unk_06;
    /* 0x07 */ s8 unk7;                             /* inferred */
    /* 0x08 */ s16 unk_08;
    /* 0x0A */ s16 unkA;
    /* 0x0C */ s16 unk_0C;
    /* 0x0E */ s16 unkE;
    /* 0x10 */ f32 xPos;
    /* 0x14 */ f32 yPos;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ f32 unk_20;
    /* 0x24 */ f32 unk_24;
    /* 0x28 */ f32 unk_28;
    /* 0x2C */ f32 unk_2C;
    /* 0x30 */ s32 unk30;
    /* 0x34 */ char pad34[2];
    /* 0x36 */ s16 unk_36;
    /* 0x38 */ u8 unk_38[0xC];
    /* 0x44 */ s16 unk_44[2];
    /* 0x48 */ char pad48[0x1E];
    /* 0x66 */ s16 counts[3]; //star count, coin count?
} BoardStatus; //sizeof 0x6C

typedef struct UnkBoard {
/* 0x00 */ s16 unk_00;
/* 0x02 */ s16 unk_02;
/* 0x04 */ s32 unk_04;
/* 0x08 */ omObjData* unk_08;
} UnkBoard; //sizeof 0x0C

typedef struct UnkBoard2 {
/* 0x00 */ s16 unk_00;
/* 0x04 */ Object* obj;
} UnkBoard2;

typedef struct UnkCoinThing {
/* 0x00 */ u8 unk_00[3];
/* 0x03 */ char unk_03[5];
/* 0x08 */ s16 unk_08[2];
} UnkCoinThing;

extern char D_800D5218_D5E18[];
extern s16 gCoinBlockSpaceIndex;
extern s16 gStarBlockSpaceIndex;

void func_800DA790_EE3B0_name_80(s32, u16, char*, s32, s32);
void func_8001C258_1CE58(s16, s32, s32);
void func_8001C448_1D048(s16);
void func_8001C8E4_1D4E4(s16, s32);
Object* func_800D90C8_ECCE8_name_80(u8, s32);
void func_800D9714_ED334_name_80(Object*);
void func_80055140_55D40(s32, s16, u16, s32);
void func_800550B4_55CB4(s32, s16, f32);
void func_800550F4_55CF4(s16, s16, s32);
void func_80054904_55504(s16, s16, s16, s16);
void func_800F3400_107020_name_80(omObjData*);
void func_800F4190_107DB0_name_80(void);
void func_800F43FC_10801C_name_80(s32);
void func_800F4798_1083B8_name_80(s32, u8);
void func_800F4874_108494_name_80(s32, s16, s16);
s32 func_800EECB0_1028D0_name_80(s32);
s32 func_800D9E0C_EDA2C_name_80(s32);
void SprAttrSet(s16, s16, s32);
void SprAttrReset(s16, s16, s32);
void func_800D9D84_ED9A4_name_80(s32, s16, s32, s32, u16);
void func_800EE7AC_1023CC_name_80(omObjData* func);

extern s16 D_80101794_1153B4_name_80[8][2];
extern Process* D_80105580_1191A0_name_80;
extern s16 D_801055C2_1191E2_name_80;
extern s16 D_801055C4_1191E4_name_80;
extern s32 D_80101784_1153A4_name_80;
extern BoardStatus D_801057E0_119400_name_80[];
extern UnkBoard D_80105718_119338_name_80[16];
extern s32 D_801055E8_119208_name_80[];
extern s32 D_80101F30_115B50_name_80[3];