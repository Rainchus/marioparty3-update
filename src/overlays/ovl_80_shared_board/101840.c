#include "common.h"
#include "ovl_80.h"

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EDC20_101840_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EDC40_101860_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EDC4C_10186C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EDC58_101878_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EDC74_101894_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EDC90_1018B0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EDF90_101BB0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EDFAC_101BCC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EDFC8_101BE8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EE2A4_101EC4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EE2C0_101EE0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EE2DC_101EFC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EE614_102234_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EE688_1022A8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EE694_1022B4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EE6C0_1022E0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EE700_102320_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EE740_102360_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EE7AC_1023CC_shared_board);

u32 func_800EE884_1024A4_shared_board(s32 arg0, s16 arg1, s16 arg2) {
    omObjData* obj;
    UnkBoard* temp_s1;
    s32 i;
    s32 ret;

    for (i = 0; i < ARRAY_COUNT(D_80105718_119338_shared_board); i++) {
        temp_s1 = &D_80105718_119338_shared_board[i];
        if (temp_s1->unk_08 == NULL) {
            break;
        }
    }

    if (i != 0x10) {
        obj = omAddObj(0x2000, 0U, 0U, -1, func_800EE7AC_1023CC_shared_board);
        temp_s1->unk_08 = obj;
        obj->work[0] = i;
        temp_s1->unk_04 = arg0;
        temp_s1->unk_00 = arg1;
        temp_s1->unk_02 = arg2;
        ret = i;
    } else {
        ret = -1;
    }
    return ret;
}

void func_800EE94C_10256C_shared_board(s32 arg0, s16 arg1, s32 arg2) {
    func_800D9D84_ED9A4_shared_board(arg0, arg1, 0, 0xA, arg2);
}

void func_800EE97C_10259C_shared_board(s32 arg0) {
    while (!(func_800D9E0C_EDA2C_shared_board(arg0) & 1)) {
        HuPrcVSleep();
    }
}

s32 BoardPlayerRankCalc(s32 player) {
    s32 rank;
    s32 i;
    s32 score[4];

    for (i = 0; i < 4; i++) {
        score[i] = func_800EECB0_1028D0_shared_board(i);
    }

    for (rank = 0, i = 0; i < 4; i++) {
        if ((i != player) && (score[player] < score[i])) {
            rank++;
        }
    }
    return rank;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EEA58_102678_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EECB0_1028D0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EECF0_102910_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EEE84_102AA4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EEF80_102BA0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EEFEC_102C0C_shared_board);

void func_800EF068_102C88_shared_board(void) {
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EF070_102C90_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EF0D8_102CF8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EF200_102E20_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/101840", D_80102320_115F40_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EF208_102E28_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EF3BC_102FDC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EF67C_10329C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EF698_1032B8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EF768_103388_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EF844_103464_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EF898_1034B8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EF8F4_103514_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EFA34_103654_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EFD8C_1039AC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EFE0C_103A2C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EFE58_103A78_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EFEF4_103B14_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800EFFE8_103C08_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800F01D0_103DF0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800F0ABC_1046DC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800F0BF8_104818_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800F0C64_104884_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800F0D14_104934_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800F0E28_104A48_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800F0E34_104A54_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800F0EF0_104B10_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800F102C_104C4C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800F1C94_1058B4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800F1D34_105954_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/101840", func_800F1EC8_105AE8_shared_board);
