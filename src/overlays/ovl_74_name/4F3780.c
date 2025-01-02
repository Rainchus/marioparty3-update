#include "common.h"
#include "game/gamework_data.h"
#include "game/object.h"
#include "game/wipe.h"

void Hu3DCamSetPerspective(s16 camIndex, f32 fov, f32 near, f32 far);
void ScissorSet(u8 camIndex, f32 arg1, f32 arg2, f32 arg3, f32 arg4);
void ViewportSet(u8 camIndex, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
void func_8000B690_C290(s32);
void func_800142A0_14EA0(s32);
void func_80019514_1A114(s32, s32, s32, s32);
void func_80037258_37E58(void);
void func_800E66E0_FA300_shared_board(void);
void func_800E69D8_FA5F8_shared_board(void);
void func_80105E0C_4F3BEC_name_74(void);
void func_80105EF4_4F3CD4_name_74(void);
void func_801060A4_4F3E84_name_74(void);
void func_80106660_4F4440_name_74(void);
void func_80106BA0_4F4980_name_74(void);
void func_80107400_4F51E0_name_74(void);
void func_80107D10_4F5AF0_name_74(void);
void func_80108130_4F5F10_name_74(void);
extern u8 D_80108F8C_4F6D6C_name_74[4];
void func_8004B340_4BF40(omObjData*);
void func_80105CAC_4F3A8C_name_74(omObjData*);
void func_80105E64_4F3C44_name_74(omObjData*);

void func_801059A0_4F3780_name_74(void) {
    s16 var_a0_2;
    s16 var_a1;
    s16 i;
    s16 j;

    var_a1 = 0;
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < MAX_PLAYERS; j++) {
            if (i != GwPlayer[j].group) {
                continue;
            }
            D_80108F8C_4F6D6C_name_74[var_a1] = j;
            var_a1++;

            if (var_a1 >= 4) {
                break;
            }
        }
        if (var_a1 >= 4) {
            break;
        }
    }
    func_800142A0_14EA0(0x78);
    omInitObjMan(0x1E, 0x1E);
    func_8000B690_C290(1);
    ScissorSet(0U, 0.0f, 0.0f, 320.0f, 240.0f);
    ViewportSet(0U, 640.0f, 480.0f, 511.0f, 640.0f, 480.0f, 511.0f);
    Hu3DCamSetPerspective(0, 30.0f, 80.0f, 8000.0f);
    omSetStatBit(omAddObj(0x7FDA, 0U, 0U, -1, func_8004B340_4BF40), 0xA0);
    func_80019514_1A114(1, 0xFF, 0xFF, 0xFF);
    
    for (var_a0_2 = 0, i = 0; i < MAX_PLAYERS; i++) {
        if (GwPlayer[i].minigameCoins == 3) {
            var_a0_2++;
        }
    }

    if (var_a0_2 >= 4) {
        func_80037258_37E58();
        func_800E69D8_FA5F8_shared_board();
        func_800E66E0_FA300_shared_board();
        omOvlReturnEx(1);
        return;
    }
    func_801060A4_4F3E84_name_74();
    omAddPrcObj(func_80108130_4F5F10_name_74, 0x1001U, 0x2000, 0);
    omAddPrcObj(func_80107400_4F51E0_name_74, 0x1001U, 0x2000, 0);
    omAddPrcObj(func_80107D10_4F5AF0_name_74, 0x1001U, 0x2000, 0);
    omAddPrcObj(func_80106660_4F4440_name_74, 0x1001U, 0x2000, 0);
    omAddPrcObj(func_80106BA0_4F4980_name_74, 0x1001U, 0x2000, 0);
    omAddObj(0, 0, 0, -1, func_80105CAC_4F3A8C_name_74);
    omAddObj(0, 0, 0, -1, func_80105E64_4F3C44_name_74);
    func_80105EF4_4F3CD4_name_74();
    func_80105E0C_4F3BEC_name_74();
    HuWipeFadeIn(0xFF, 0x10);
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80105CAC_4F3A8C_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80105E0C_4F3BEC_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80105E64_4F3C44_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80105EF4_4F3CD4_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80105F50_4F3D30_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80105F78_4F3D58_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_801060A4_4F3E84_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80106660_4F4440_name_74);

void func_80106908_4F46E8_name_74(void) {
}

void func_80106910_4F46F0_name_74(void) {
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80106918_4F46F8_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_801069FC_4F47DC_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80106BA0_4F4980_name_74);

void func_80106E98_4F4C78_name_74(void) {
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80106EA0_4F4C80_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80106ED0_4F4CB0_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80107260_4F5040_name_74);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_74_name/4F3780", D_80108908_4F66E8_name_74);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_74_name/4F3780", D_80108920_4F6700_name_74);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_74_name/4F3780", D_801089A0_4F6780_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80107400_4F51E0_name_74);

void func_801075EC_4F53CC_name_74(void) {
}

void func_801075F4_4F53D4_name_74(void) {
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_801075FC_4F53DC_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80107610_4F53F0_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80107B5C_4F593C_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80107BDC_4F59BC_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80107C44_4F5A24_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80107CA4_4F5A84_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80107D10_4F5AF0_name_74);

void func_80107F94_4F5D74_name_74(void) {
}

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_74_name/4F3780", D_801089C0_4F67A0_name_74);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_74_name/4F3780", D_801089D0_4F67B0_name_74);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_74_name/4F3780", D_801089D4_4F67B4_name_74);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_74_name/4F3780", D_801089D8_4F67B8_name_74);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_74_name/4F3780", D_80108A00_4F67E0_name_74);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_74_name/4F3780", D_80108A10_4F67F0_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80107F9C_4F5D7C_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_801080A0_4F5E80_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80108130_4F5F10_name_74);

void func_8010829C_4F607C_name_74(void) {
}

void func_801082A4_4F6084_name_74(void) {
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_801082AC_4F608C_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_801082C0_4F60A0_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80108510_4F62F0_name_74);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_74_name/4F3780", func_80108858_4F6638_name_74);
