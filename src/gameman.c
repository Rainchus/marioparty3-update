#include "common.h"
#include "common_structs.h"
#include "gameman.h"
#include "malloc.h"
#include "pad.h"
#include "process.h"
#include "game/object.h"
#include "util.h"

struct str800D5298 {
    s32 unk0;
    s32 unk4;
    void *unk8; // mbf0 rom
    void *unkC; // sbf0 rom
    void *unk10; // fxd0 rom
    void *unk14; // audio ram location?
    s32 unk18; // audio ram size?
    s32 unks1C24[3];
    s32 unk28;
    s32 unk2C;
    s32 unks3040[5];
    s32 unk44;
    s32 unks4858[5];
    s32 unk5C;
    s32 unk60;
    s32 unk64;
    s32 unk68;
};
extern struct str800D5298 D_800D5298_D5E98;
extern void* D_800CCF38_CDB38;
extern u8 D_800CCF78_CDB78[];
extern f32 D_800CD288_CDE88[];
extern u16 D_800CD2F4_CDEF4;
extern s32 D_800CDD50_CE950;
extern f32 D_800CE1C8_CEDC8;
extern Process* D_800D0448_D1048;
extern u8 D_800D09A8_D15A8;
extern Vec D_800D138C_D1F8C;
extern Process* D_800D170C_D230C;
extern u8 D_800D1710_D2310;
extern s16 D_800D1F36_D2B36;
extern u16 D_800D4082_D4C82;
extern Vec D_800D54F8_D60F8[];
extern u16 D_800D6A56_D7656;
extern Vec D_800D6ABC_D76BC;
extern Vec D_800D6AE0_D76E0[];
extern u16 D_800A190C_A250C;
extern u16 D_800A190E_A250E;

void func_800007FC_13FC(struct str800D5298 *arg0);
void func_80000EA8_1AA8(struct str800D5298 *arg0);
void func_80000F30_1B30(u32 arg0);
void func_8000BA30_C630(void); // esprite.h
void func_800143F0_14FF0(void);
void func_80014A3C_1563C(u32 arg0);
void func_8001A070_1AC70(void *arg0, void *arg1, u16 arg2, u16 arg3, u16 arg4, u8 arg5); // hmfman.h
void func_8001B0B4_1BCB4(void **arg0, u32 arg1); // hmfman.h
void func_8001BF90_1CB90(u32 arg0, u32 arg1); // hmfman.h
void func_800224BC_230BC(void);
void GWInit(void); // save.h
void GWMgRecordSet(s16 arg0, s16 arg1); // save.h
void func_80036380_36F80(Addr arg0);
void pfInit(void);
void pfClsScr(void);
void func_8004F290_4FE90(void);
s32  func_8004FDC0_509C0(void);
void func_80050800_51400(void);
void func_80050E78_51A78(u32 arg0);
void func_80061B50_62750(void);
void memset(void *dest, int ch, u32 /*size_t*/ n);
void Hu3DCamInit(u32 arg0);

void func_8000E3C0_EFC0(void) {
    s32 i;

    HuPrcVSleep();
    func_8004F290_4FE90();

    D_800D138C_D1F8C.x = 325.0f;
    D_800D138C_D1F8C.y = 0.0f;
    D_800D138C_D1F8C.z = 0.0f;

    D_800CE1C8_CEDC8 = 2250.0f;

    D_800D6ABC_D76BC.x =
    D_800D6ABC_D76BC.y =
    D_800D6ABC_D76BC.z = D_800D138C_D1F8C.y;

    for (i = 0; i < 4; i++) {
        D_800D6AE0_D76E0[i].x = 325.0f;
        D_800D6AE0_D76E0[i].y =
        D_800D6AE0_D76E0[i].z = 0.0f;

        D_800CD288_CDE88[i] = 2250.0f;

        D_800D54F8_D60F8[i].x =
        D_800D54F8_D60F8[i].y =
        D_800D54F8_D60F8[i].z = 0.0f;
    }

    D_800D1710_D2310 = 3;
    D_800D4082_D4C82 = 0x1000;
    D_800CD2F4_CDEF4 = 0x2004;
    D_800D6A56_D7656 = 0x180;
    func_80061B50_62750();
    func_8001A070_1AC70(&HuMemMemoryAllocPerm, &HuMemMemoryFreePerm, D_800D4082_D4C82, D_800CD2F4_CDEF4, D_800D6A56_D7656, D_800D1710_D2310);
    Hu3DCamInit(1);
    pfInit();
    func_80036380_36F80(strings_jp_ROM_START);
    D_800D1F36_D2B36 = 0;

    do {
        if (CheckControllerRead(D_800D1F36_D2B36) != 0) {
            break;
        }
    } while (++D_800D1F36_D2B36 < 4);

    if (D_800D1F36_D2B36 == 4) {
        D_800D1F36_D2B36 = -1;
    }

    HuMemHeapAllocPermSizeGet();
    D_800D0448_D1048 = HuPrcCreate(&func_8000E740_F340, 0xF000, 0x3000, 0);
    HuPrcCreate(&func_8000E78C_F38C, 0x4000, 0x3000, 0);
    D_800D170C_D230C = HuPrcCreate(&func_8000E7B8_F3B8, 0x1000, 0x3000, 0);

    {
        s32 temp_s0 = func_8004FDC0_509C0();
        GWInit();
        func_8000E978_F578();
        func_80000EA8_1AA8(&D_800D5298_D5E98);
        func_80050E78_51A78(0);
        func_80050800_51400();
        if (temp_s0 != 0) {
            omOvlCallEx(0x67, 0, 0x82);
        }
        else {
            omOvlCallEx(0x58, 0, 0x84);
        }
    }

    D_800D5298_D5E98.unk8 = audio_mbf0_ROM_START;
    D_800D5298_D5E98.unkC = audio_sbf0_ROM_START;
    D_800A190E_A250E = 0;
    D_800A190C_A250C = 0;
    D_800D5298_D5E98.unk0 = 0x70418F;
    D_800D5298_D5E98.unk10 = audio_fxd0_ROM_START;
    D_800D5298_D5E98.unk28 = 1;
    D_800D5298_D5E98.unk2C = 0;
    D_800D5298_D5E98.unk14 = (void *)0x802E0000;
    D_800D5298_D5E98.unk18 = 0x80000;
    D_800D5298_D5E98.unk5C = 0x6E;
    D_800D5298_D5E98.unk60 = 0;
    D_800D5298_D5E98.unk64 = 0;
    D_800D5298_D5E98.unk68 = D_800CDD50_CE950;
    D_800D5298_D5E98.unk44 = 0x3C;
    func_800007FC_13FC(&D_800D5298_D5E98);

    if ((D_800D09A8_D15A8 & 1) != 0) {
        func_80000F30_1B30(1);
    }
    else {
        func_80000F30_1B30(0);
    }

    HuPrcKill(HuPrcCurrentGet());

    while (TRUE) {
        HuPrcVSleep();
    }
}

void func_8000E740_F340(void) {
    while (TRUE) {
        HuPrcVSleep();
        func_800224BC_230BC();
        func_800143F0_14FF0();
        func_8001BF90_1CB90(0x2000000, 0x3D0800);
        pfClsScr();
    }
}

void func_8000E78C_F38C(void) {
    while (TRUE) {
        HuPrcVSleep();
        omMain();
    }
}

void func_8000E7B8_F3B8(void) {
    while (TRUE) {
        HuPrcVSleep();
        rand8();
        func_8000BA30_C630(); // esprite
        func_80014A3C_1563C(2);
        func_8001B0B4_1BCB4(&D_800CCF38_CDB38, 2); // hmfman
    }
}

/* Initialize Players */
void func_8000E804_F404(void) {
    s32 i;

    for (i = 0; i < MAX_PLAYERS; i++) {
        memset(&GwPlayer[i], 0, sizeof(GW_PLAYER));
        if (CheckControllerRead(i) != PAD_NOT_INSERTED) {
            D_800CCF78_CDB78[i] = 0;
            GwPlayer[i].flags1 &= ~1;
        } else {
            D_800CCF78_CDB78[i] = 1;
            GwPlayer[i].flags1 |= 1;
        }

        GwPlayer[i].controller_port = i;
        GwPlayer[i].coins = 10;
        GwPlayer[i].coins_mg_bonus = 0;
        GwPlayer[i].group = i;
        GwPlayer[i].cpu_difficulty = 0;
        GwPlayer[i].stars = 0;
        GwPlayer[i].mg_star_coins = 0;
        GwPlayer[i].blueSpacesLandedOn = 0;
        GwPlayer[i].redSpacesLandedOn = 0;
        GwPlayer[i].happeningSpacesLandedOn = 0;
    }
}

/* Initialize Game Save Data */
void func_8000E978_F578(void) {
    func_8000E804_F404();
    GWMgRecordSet(0, 0x64);
    GWMgRecordSet(1, 0xE10);
    GWMgRecordSet(2, 0xE10);
    GWMgRecordSet(3, 0x708);
    GWMgRecordSet(4, 0x3E8);
    GWMgRecordSet(5, 0xE10);
    GWMgRecordSet(6, 0xE10);
    GWMgRecordSet(7, 0xE10);
    GWMgRecordSet(8, 0);
    GWMgRecordSet(9, 0x1518);
}
