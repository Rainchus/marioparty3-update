#include "common.h"
#include "ovl_80.h"

extern s8 D_800D20B1_D2CB1;
extern s32 D_80101780_1153A0_shared_board;
extern s16 D_8010559C_1191BC_shared_board[];
extern s16 D_801018E4_115504_shared_board[4][2];
extern s32 D_80101790_1153B0_shared_board;
extern f32 D_801055C8_1191E8_shared_board;
extern s16 D_801055E4_119204_shared_board;
extern Vec2f D_801055CC_1191EC_shared_board;
extern Vec2f D_801055DC_1191FC_shared_board;
extern Vec2f D_801055D4_1191F4_shared_board;

void func_80055024_55C24(s16, s16, s16, s32);
void func_800551D8_55DD8(s16, s32, f32, f32);
void func_80055294_55E94(s16, s16, u16);
void func_800F2E30_106A50_shared_board(s32);

void func_800DAA40_EE660_shared_board(s32 arg0) {
    UnkDiceRelatedInner* temp_s0 = &D_800CDBC8_CE7C8[arg0].UnkDiceInner;

    if ((temp_s0->unk_28 == -1) && (temp_s0->dice->unk_4C == 1)) {
        temp_s0->unk_28 = HuAudFXPlay(0x100);
    }
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DAAAC_EE6CC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DAF1C_EEB3C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DB318_EEF38_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DB56C_EF18C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DB5DC_EF1FC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DB6A8_EF2C8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DB884_EF4A4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DBC2C_EF84C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DBE6C_EFA8C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DBEC0_EFAE0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DBFBC_EFBDC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DC024_EFC44_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DC06C_EFC8C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DC08C_EFCAC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DC0E0_EFD00_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DC104_EFD24_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DC128_EFD48_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DC718_F0338_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DC9F8_F0618_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DCA64_F0684_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DCB8C_F07AC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DCBCC_F07EC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DCCE0_F0900_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DCD00_F0920_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DCD2C_F094C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DCD64_F0984_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DCD9C_F09BC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DCDD4_F09F4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DD6C4_F12E4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DD724_F1344_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DDBC8_F17E8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DDC3C_F185C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DDDD4_F19F4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DDE3C_F1A5C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DE414_F2034_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DE48C_F20AC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DE5B0_F21D0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DE5EC_F220C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DE7E4_F2404_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DE84C_F246C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DE858_F2478_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DE868_F2488_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DE874_F2494_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DE8D8_F24F8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DE97C_F259C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DE988_F25A8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DE9AC_F25CC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DE9B8_F25D8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DEAA0_F26C0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DEB2C_F274C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DEB50_F2770_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DEBF0_F2810_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DEC90_F28B0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DECBC_F28DC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DECF0_F2910_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_80102070_115C90_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DED3C_F295C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DF7F4_F3414_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DF854_F3474_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DF8B4_F34D4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DF9EC_F360C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DFAD4_F36F4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800DFBA8_F37C8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E00EC_F3D0C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E00FC_F3D1C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E01DC_F3DFC_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_801020B0_115CD0_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_801020C8_115CE8_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_801020E0_115D00_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E0534_F4154_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E0A14_F4634_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E0A64_F4684_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E0C3C_F485C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E0C94_F48B4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E0F84_F4BA4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E0FE0_F4C00_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E11C0_F4DE0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E1230_F4E50_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E13F0_F5010_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E1450_F5070_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E17B0_F53D0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E1828_F5448_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E18FC_F551C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E1934_F5554_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E1F28_F5B48_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E1F48_F5B68_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E1F70_F5B90_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E2074_F5C94_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E20A4_F5CC4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E210C_F5D2C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E21F4_F5E14_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E2260_F5E80_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E22B4_F5ED4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E22CC_F5EEC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E22DC_F5EFC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E2354_F5F74_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E2390_F5FB0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E2904_F6524_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E2954_F6574_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E2960_F6580_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E2974_F6594_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E29E8_F6608_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E2B24_F6744_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E2B4C_F676C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E2BCC_F67EC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E2C4C_F686C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E2C74_F6894_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E2C9C_F68BC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E2CC4_F68E4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E2CEC_F690C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E2E28_F6A48_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E2F38_F6B58_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E3074_F6C94_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E3158_F6D78_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E31E4_F6E04_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E3284_F6EA4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E3394_F6FB4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E3420_F7040_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E3448_F7068_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E3470_F7090_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E3498_F70B8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E34BC_F70DC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E34E0_F7100_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E3584_F71A4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E35F8_F7218_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E3734_F7354_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E378C_F73AC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E3F54_F7B74_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E400C_F7C2C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E4160_F7D80_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E41FC_F7E1C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E44E4_F8104_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_80102180_115DA0_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_80102188_115DA8_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_80102194_115DB4_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_801021A4_115DC4_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_801021AC_115DCC_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_801021B8_115DD8_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_801021C4_115DE4_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_801021D0_115DF0_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_801021DC_115DFC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E455C_F817C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E48F4_F8514_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E4954_F8574_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", PlayerHasItem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E49DC_F85FC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E4A08_F8628_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E4A6C_F868C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E4A7C_F869C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E4A88_F86A8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E4A94_F86B4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E4B18_F8738_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E4B60_F8780_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E4BA0_F87C0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E4C68_F8888_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E4DC0_F89E0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E5100_F8D20_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E53A4_F8FC4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E5604_F9224_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E57C8_F93E8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E57D8_F93F8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E5840_F9460_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E5B80_F97A0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E5B90_F97B0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E5BE4_F9804_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E5CE0_F9900_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E5D40_F9960_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E5DA8_F99C8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E5DD4_F99F4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E60D8_F9CF8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E6120_F9D40_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E61C0_F9DE0_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_801021EC_115E0C_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_801021F0_115E10_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_80102200_115E20_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_80102210_115E30_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_80102220_115E40_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_80102230_115E50_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_80102240_115E60_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_80102250_115E70_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_8010225C_115E7C_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_8010226C_115E8C_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_80102280_115EA0_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_80102290_115EB0_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_801022A0_115EC0_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_801022B8_115ED8_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_801022CC_115EEC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E6264_F9E84_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E639C_F9FBC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E63F0_FA010_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E6404_FA024_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E6420_FA040_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E644C_FA06C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E648C_FA0AC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E6500_FA120_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E650C_FA12C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E6538_FA158_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E6564_FA184_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E6630_FA250_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E66D4_FA2F4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E66E0_FA300_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E6720_FA340_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E69BC_FA5DC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E69D8_FA5F8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E6A40_FA660_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E6A54_FA674_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E6A8C_FA6AC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E6AC4_FA6E4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E6C4C_FA86C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E6C80_FA8A0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E6CF8_FA918_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E6DEC_FAA0C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E6EC8_FAAE8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E6FBC_FABDC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E6FCC_FABEC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E6FDC_FABFC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E7018_FAC38_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E7068_FAC88_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E7130_FAD50_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E71A8_FADC8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E71EC_FAE0C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E7254_FAE74_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E728C_FAEAC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E72C4_FAEE4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E72DC_FAEFC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E7300_FAF20_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E7330_FAF50_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E7358_FAF78_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E7384_FAFA4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E7514_FB134_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E76EC_FB30C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E86CC_FC2EC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E8DC8_FC9E8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E8DD4_FC9F4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E8DE0_FCA00_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E8EDC_FCAFC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E8F54_FCB74_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E9044_FCC64_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E90BC_FCCDC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E92D4_FCEF4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E9328_FCF48_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E9344_FCF64_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E9358_FCF78_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E9730_FD350_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E973C_FD35C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E9748_FD368_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E982C_FD44C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E989C_FD4BC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E98E8_FD508_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E9940_FD560_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E9A54_FD674_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E9A60_FD680_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E9A94_FD6B4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E9AC8_FD6E8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E9AD4_FD6F4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E9AE0_FD700_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E9AF0_FD710_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E9BB0_FD7D0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E9BD0_FD7F0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E9C00_FD820_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E9C28_FD848_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E9C94_FD8B4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E9EF4_FDB14_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800E9F24_FDB44_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EA0B8_FDCD8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EA200_FDE20_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EA284_FDEA4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EA2BC_FDEDC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EA2D0_FDEF0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EA2E4_FDF04_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EA320_FDF40_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EA348_FDF68_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EA358_FDF78_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EA364_FDF84_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EA4CC_FE0EC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EA4F0_FE110_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EA5A4_FE1C4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EA60C_FE22C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EA660_FE280_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EA694_FE2B4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EA6B0_FE2D0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EA6E0_FE300_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EA6F4_FE314_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EAE00_FEA20_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EAE10_FEA30_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EB09C_FECBC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", GetSpaceData);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EB184_FEDA4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EB1B0_FEDD0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EB1CC_FEDEC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EB24C_FEE6C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EB310_FEF30_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EB3C0_FEFE0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EB4F0_FF110_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EB5DC_FF1FC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EB7F0_FF410_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EB820_FF440_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EB8BC_FF4DC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EB97C_FF59C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EB9C0_FF5E0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EBA60_FF680_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EBAC8_FF6E8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EBCB0_FF8D0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EBCBC_FF8DC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EBCC8_FF8E8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EBCD4_FF8F4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EBCFC_FF91C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EBD54_FF974_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EBDAC_FF9CC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EBEAC_FFACC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EBEC8_FFAE8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EBED8_FFAF8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EBEF0_FFB10_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EBF48_FFB68_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EBF98_FFBB8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EBFE8_FFC08_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EC134_FFD54_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EC1E8_FFE08_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EC39C_FFFBC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EC3C0_FFFE0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EC3E4_100004_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EC414_100034_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EC4E4_100104_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EC590_1001B0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EC5B4_1001D4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EC5EC_10020C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EC628_100248_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EC6A8_1002C8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EC6C8_1002E8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EC6EC_10030C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EC70C_10032C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EC8EC_10050C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EC92C_10054C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EC980_1005A0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EC9DC_1005FC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ECA38_100658_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ECAA8_1006C8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ECAB4_1006D4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ECAD0_1006F0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ECB14_100734_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ECB58_100778_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ECB90_1007B0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ECBD0_1007F0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ECC0C_10082C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ECC28_100848_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ECC54_100874_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ECD00_100920_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ECDD4_1009F4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ECE4C_100A6C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", RNGPercentChance);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", GetTurnsElapsed);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ECF18_100B38_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ECF9C_100BBC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ECFC8_100BE8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ED128_100D48_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ED1E4_100E04_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ED20C_100E2C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ED290_100EB0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ED35C_100F7C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ED410_101030_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ED518_101138_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ED5E0_101200_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ED694_1012B4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ED75C_10137C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ED810_101430_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ED91C_10153C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ED998_1015B8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800ED9F8_101618_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EDA58_101678_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EDAF0_101710_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EDB98_1017B8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EDC20_101840_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EDC40_101860_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EDC4C_10186C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EDC58_101878_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EDC74_101894_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EDC90_1018B0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EDF90_101BB0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EDFAC_101BCC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EDFC8_101BE8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EE2A4_101EC4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EE2C0_101EE0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EE2DC_101EFC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EE614_102234_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EE688_1022A8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EE694_1022B4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EE6C0_1022E0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EE700_102320_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EE740_102360_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EE7AC_1023CC_shared_board);

u32 func_800EE884_1024A4_shared_board(s32 arg0, s16 arg1, s16 arg2) {
    omObjData* obj;
    UnkBoard* temp_s1;
    s32 i;
    s32 ret;

    for (i = 0; i < 16; i++) {
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

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EEA58_102678_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EECB0_1028D0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EECF0_102910_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EEE84_102AA4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EEF80_102BA0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EEFEC_102C0C_shared_board);

void func_800EF068_102C88_shared_board(void) {
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EF070_102C90_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EF0D8_102CF8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EF200_102E20_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_80102320_115F40_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EF208_102E28_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EF3BC_102FDC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EF67C_10329C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EF698_1032B8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EF768_103388_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EF844_103464_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EF898_1034B8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EF8F4_103514_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EFA34_103654_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EFD8C_1039AC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EFE0C_103A2C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EFE58_103A78_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EFEF4_103B14_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800EFFE8_103C08_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F01D0_103DF0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F0ABC_1046DC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F0BF8_104818_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F0C64_104884_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F0D14_104934_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F0E28_104A48_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F0E34_104A54_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F0EF0_104B10_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F102C_104C4C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F1C94_1058B4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F1D34_105954_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F1EC8_105AE8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", GetCurrentPlayerIndex);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", GetPlayerStruct);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F217C_105D9C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F2198_105DB8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", AdjustPlayerCoins);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", PlayerHasCoins);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F2260_105E80_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F22C0_105EE0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F2304_105F24_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F2388_105FA8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F244C_10606C_shared_board);

void func_800F2484_1060A4_shared_board(void) {
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F248C_1060AC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F24FC_10611C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F25B4_1061D4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F25D8_1061F8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F2624_106244_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F2660_106280_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F2690_1062B0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F26E8_106308_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F27C4_1063E4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F27D0_1063F0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F2834_106454_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F288C_1064AC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F292C_10654C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F2958_106578_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F29EC_10660C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F2A20_106640_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F2A34_106654_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F2A74_106694_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F2C48_106868_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F2CA4_1068C4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F2D8C_1069AC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F2DDC_1069FC_shared_board);

void func_800F2E30_106A50_shared_board(s32 arg0) {
    UnkCoinThing coinDigits;
    BoardStatus* temp_s2;
    s32 var_v1;
    s32 i;
    
    temp_s2 = &D_801057E0_119400_shared_board[arg0];
    if (temp_s2->unk_08 != GwPlayer[arg0].coins) {
        coinDigits.unk_00[0] = GwPlayer[arg0].coins / 100;
        coinDigits.unk_00[1] = GwPlayer[arg0].coins / 10 % 10;
        coinDigits.unk_00[2] = GwPlayer[arg0].coins % 10;
        if (coinDigits.unk_00[0] == 0) {
            if (coinDigits.unk_00[1] == 0) {
                var_v1 = 1;
            } else {
                var_v1 = 2 | (-(coinDigits.unk_00[0] != 0) & 3);
            }
        } else {
            var_v1 = 2 | (-(coinDigits.unk_00[0] != 0) & 3);
        }
        
        if (var_v1 == 1) {
            SprAttrSet(temp_s2->unkA, 6, 0x8000);
            coinDigits.unk_00[1] = coinDigits.unk_00[2];
        } else {
            SprAttrReset(temp_s2->unkA, 6, 0x8000);
        }
    
        if (coinDigits.unk_00[0] == 0) {
            coinDigits.unk_00[0] = 10;
        }
        for (i = 0; i < 3; i++) {
            func_80055140_55D40(temp_s2->unkA, i + 4, coinDigits.unk_00[i], 0);
            func_800550F4_55CF4(temp_s2->unkA, i + 4, 1);
        }
    
        temp_s2->unk_08 = GwPlayer[arg0].coins;
    }

    if (temp_s2->unk_06 != GwPlayer[arg0].stars) {
        if (GwPlayer[arg0].stars > 99) {
            func_80055140_55D40(temp_s2->unkA, 7, 9, 0);
            func_80055140_55D40(temp_s2->unkA, 8, 9, 0);
        } else {
            if (GwPlayer[arg0].stars > 9) {
                func_80055140_55D40(temp_s2->unkA, 7, (GwPlayer[arg0].stars / 10), 0);
            } else {
                func_80055140_55D40(temp_s2->unkA, 7, 10, 0);
            }
            func_80055140_55D40(temp_s2->unkA, 8, GwPlayer[arg0].stars % 10, 0);
        }
        func_800550F4_55CF4(temp_s2->unkA, 7, 1);
        func_800550F4_55CF4(temp_s2->unkA, 8, 1);
    
        temp_s2->unk_06 = GwPlayer[arg0].stars; //?
    }
    coinDigits.unk_08[0] = GwPlayer[arg0].coins;
    coinDigits.unk_08[1] = GwPlayer[arg0].stars;
    
    for (i = 0; i < 2; i++) {
        if ((i != 0 && temp_s2->counts[i] != coinDigits.unk_08[i]) || (i == 0 && D_801055E8_119208_shared_board[arg0] != 0)) {
            if (temp_s2->unk2[i] == 0) {
                func_800550B4_55CB4(temp_s2->unkA, i + 2, 1.0f);
                temp_s2->unk2[i] = 0xF;
            }
        }

        if (temp_s2->unk2[i] != 0) {
            temp_s2->unk2[i]--;
            if (temp_s2->unk2[i] == 0) {
                if (i != 0 || D_801055E8_119208_shared_board[arg0] == 0) {
                    func_80055140_55D40(temp_s2->unkA, i + 2, 0U, 0);
                    func_800550B4_55CB4(temp_s2->unkA, i + 2, 0);
                    func_800550F4_55CF4(temp_s2->unkA, i + 2, 1);                       
                }
            }
        }
        temp_s2->counts[i] = coinDigits.unk_08[i];
    }
    if (temp_s2->unk1 != -1) {
        func_80055140_55D40(temp_s2->unkA, 0xA, temp_s2->unk1 & 0xFFFF, 0);
        func_800550F4_55CF4(temp_s2->unkA, 0xA, 1);
        return;
    }
    if (temp_s2->unk7 != BoardPlayerRankCalc(arg0)) {
        func_80055140_55D40(temp_s2->unkA, 0xA, BoardPlayerRankCalc(arg0) & 0xFFFF, 0);
        func_800550F4_55CF4(temp_s2->unkA, 0xA, 1);
        temp_s2->unk7 = BoardPlayerRankCalc(arg0);
    }
}

void func_800F3370_106F90_shared_board(void) {
    s32 i, j;

    for (i = 0; i < 4; i++) {
        BoardStatus* boardStatus = &D_801057E0_119400_shared_board[i];
        for (j = 0; j < 0xE; j++) {
            SprAttrSet(boardStatus->unkA, j, 0x8000);
        }
    }
}

void func_800F3400_107020_shared_board(omObjData* arg0) {
    f32 temp_f2;
    f32 temp_f6;
    f32 temp_f8;
    s32 var_v1;
    BoardStatus* temp_s2;
    s32 i, j, k;

    while (1) {
        if (D_800D20B1_D2CB1 == 0) {
            for (i = 0; i < 4; i++) {
                if (D_80101780_1153A0_shared_board != -1 &&
                    D_80101784_1153A4_shared_board != -1 &&
                    i != D_80101780_1153A0_shared_board &&
                    i != D_80101784_1153A4_shared_board) {
                    continue;
                }

                temp_s2 = &D_801057E0_119400_shared_board[i];

                if (temp_s2->unk_00 == 0) {
                    if (temp_s2->unk4[1] & 1) {
                        for (k = 0; k < 14; k++) {
                            SprAttrSet(temp_s2->unkA, k, 0x8000);
                        }
                        continue;
                    }

                    for (k = 0; k < 14; k++) {
                        switch (k) {
                            case 9:
                                if (GwPlayer[i].flags1 & 1) {
                                    break;
                                }
                                continue;
                            case 11:
                            case 12:
                            case 13:
                                if (GwPlayer[i].items[k - 11] == -1) {
                                    continue;
                                }

                                func_80055024_55C24(temp_s2->unkA, k, D_8010559C_1191BC_shared_board[GwPlayer[i].items[k - 11]], 0);
                                func_800550F4_55CF4(temp_s2->unkA, k, 0);
                                func_80055294_55E94(temp_s2->unkA, k, (i * 5) + 0x478E);
                                SprAttrSet(temp_s2->unkA, k, 0);
                                var_v1 = k;
                                if (i >= 2) {
                                    var_v1 = k + 3;
                                }
                                func_80054904_55504(temp_s2->unkA, k, D_801018E4_115504_shared_board[var_v1][0], D_801018E4_115504_shared_board[var_v1][1]);
                                SprAttrSet(temp_s2->unkA, k, 0x8000);
                                if (D_80101790_1153B0_shared_board != 0) {
                                    break;
                                }
                                continue;
                            case 6:
                                if (GwPlayer[i].coins < 10) {
                                    continue;
                                }
                                break;
                        }
                        SprAttrReset(temp_s2->unkA, k, 0x8000);
                    }
                    func_800F2E30_106A50_shared_board(i);
                } else {
                    if (temp_s2->unk4[1] & 1) {
                        for (k = 0; k < 5; k++) {
                            SprAttrSet(temp_s2->unkA, k, 0x8000);
                        }
                        SprAttrSet(temp_s2->unkA, 9, 0x8000);
                        continue;
                    }
                    for (k = 0; k < 2; k++) {
                        SprAttrReset(temp_s2->unkA, k, 0x8000);
                    }
                    for (k = 0; k < 3; k++) {
                        if (temp_s2->unk_40[k] != -1) {
                            SprAttrReset(temp_s2->unkA, (k + 2), 0x8000);
                        }
                    }
                    if ((GwPlayer[i].flags1 & 1) && !(temp_s2->unk4[1] & 1)) {
                        SprAttrReset(temp_s2->unkA, 9, 0x8000);
                    } else {
                        SprAttrSet(temp_s2->unkA, 9, 0x8000);
                    }
                    
                }

                if (temp_s2->unkE > 0) {
                    temp_s2->unkE--;
                    temp_s2->xPos += temp_s2->unk_20;
                    temp_s2->yPos += temp_s2->unk_24;
                    temp_s2->unk_20 += temp_s2->unk_28;
                    temp_s2->unk_24 += temp_s2->unk_2C;
                } else if (temp_s2->unkE == -1) {
                    temp_s2->unkE = -2;
                } else if (temp_s2->unkE != -2) {
                    temp_s2->xPos = temp_s2->unk_18;
                    temp_s2->yPos = temp_s2->unk_1C;
                    temp_s2->unkE = -1;
                }
                func_80054904_55504(temp_s2->unkA, 0,
                                    (s16)((s32)(temp_s2->xPos + 0.5f) + 0x38),
                                    (s16)((s32)(temp_s2->yPos + 0.5f) + 0x13));
            }

            if (D_801055C2_1191E2_shared_board != -1) {
                D_801055C8_1191E8_shared_board += 0.1f;
                if (D_801055C8_1191E8_shared_board > 1.0f) {
                    D_801055C8_1191E8_shared_board = 1.0f;
                }
                func_800551D8_55DD8(D_801055C2_1191E2_shared_board, 0, D_801055C8_1191E8_shared_board, D_801055C8_1191E8_shared_board);
                if (D_801055E4_119204_shared_board > 0) {
                    D_801055E4_119204_shared_board--;
                    D_801055CC_1191EC_shared_board.x += D_801055D4_1191F4_shared_board.x;
                    D_801055CC_1191EC_shared_board.y += D_801055D4_1191F4_shared_board.y;
                    D_801055D4_1191F4_shared_board.x += D_801055DC_1191FC_shared_board.x;
                    D_801055D4_1191F4_shared_board.y += D_801055DC_1191FC_shared_board.y;
                    func_80054904_55504(D_801055C2_1191E2_shared_board, 0,
                                        D_801055CC_1191EC_shared_board.x,
                                        D_801055CC_1191EC_shared_board.y);
                }
            }
        }
        HuPrcVSleep();
    }
}


INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F39C0_1075E0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F3A80_1076A0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F3BD0_1077F0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F3D70_107990_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F3E34_107A54_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F3F0C_107B2C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F3FF4_107C14_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F4190_107DB0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F4348_107F68_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F43FC_10801C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F453C_10815C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F462C_10824C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F4730_108350_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F4798_1083B8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F482C_10844C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F4850_108470_shared_board);

//initialize player UIs
void func_800F4874_108494_shared_board(s32 playerIndex, s16 arg1, s16 arg2) {
    BoardStatus* boardStatus;
    f32 temp_f0;
    f32 temp_f0_2;

    boardStatus = &D_801057E0_119400_shared_board[playerIndex];
    boardStatus->unk_18 = arg1;
    boardStatus->xPos = arg1;
    boardStatus->unk_1C = arg2;
    boardStatus->yPos = arg2;
    boardStatus->unk_20 = boardStatus->unk_24 = 0;
    boardStatus->unkE = -2;
    func_80054904_55504(boardStatus->unkA, 0, arg1 + 0x38, arg2 + 0x13);
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F4924_108544_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F4960_108580_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F4994_1085B4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F5278_108E98_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F52C4_108EE4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F53B4_108FD4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F54FC_10911C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F5644_109264_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F56A8_1092C8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F5828_109448_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F591C_10953C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F59B4_1095D4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F5BF4_109814_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F5D44_109964_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F5D60_109980_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F5D78_109998_shared_board);

//toggle hide player UI bit on
void func_800F5D8C_1099AC_shared_board(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        D_801057E0_119400_shared_board[i].unk4[1] |= 1;
    }
}

//toggle hide player UI bit off
void func_800F5DD8_1099F8_shared_board(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        D_801057E0_119400_shared_board[i].unk4[1] &= ~1;
    }
}

void func_800F5E24_109A44_shared_board(s32 arg0) {
    D_80101784_1153A4_shared_board = arg0;
}

void func_800F5E30_109A50_shared_board(void) {
    s32 i;

    func_800F4190_107DB0_shared_board();
    for (i = 0; i < 4; i++) {
        func_800F43FC_10801C_shared_board(i);
        //i + 4? is this right?
        func_800F4874_108494_shared_board(i, D_80101794_1153B4_shared_board[i + 4][0], D_80101794_1153B4_shared_board[i + 4][1]);
        func_800F4798_1083B8_shared_board(i, GwPlayer[i].turn_status);
    }

    D_80105580_1191A0_shared_board = omAddPrcObj(&func_800F3400_107020_shared_board, 0, 0x2000, 0);
    omPrcSetStatBit(D_80105580_1191A0_shared_board, 0x80);
    D_801055C4_1191E4_shared_board = -1;
    D_801055C2_1191E2_shared_board = -1;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F5EF0_109B10_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F5F4C_109B6C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F5F60_109B80_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F5F7C_109B9C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F5F98_109BB8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F63F0_10A010_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F641C_10A03C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F64E4_10A104_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F66DC_10A2FC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F6724_10A344_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F6748_10A368_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F6780_10A3A0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F6848_10A468_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F688C_10A4AC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F68E0_10A500_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F6928_10A548_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F696C_10A58C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F69B0_10A5D0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F69F8_10A618_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F6A40_10A660_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F6A88_10A6A8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F6AA4_10A6C4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F6AD0_10A6F0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F6BC4_10A7E4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F6E4C_10AA6C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F6ECC_10AAEC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F70F8_10AD18_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F7108_10AD28_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F7114_10AD34_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F7130_10AD50_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F71A8_10ADC8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F7240_10AE60_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F74E4_10B104_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F7578_10B198_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F7610_10B230_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_80102520_116140_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F76A4_10B2C4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F7CF0_10B910_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F7D10_10B930_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F7D4C_10B96C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F7D98_10B9B8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F7DD4_10B9F4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F7E1C_10BA3C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F7E64_10BA84_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F7EAC_10BACC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F7EF4_10BB14_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F7F30_10BB50_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F7F7C_10BB9C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F7FC8_10BBE8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F7FE8_10BC08_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F85C0_10C1E0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F85E4_10C204_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F8610_10C230_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F86B4_10C2D4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F8774_10C394_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F884C_10C46C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F8858_10C478_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F8864_10C484_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F88D0_10C4F0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F88FC_10C51C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F8908_10C528_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F89D0_10C5F0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F8C74_10C894_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F8D48_10C968_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F8D54_10C974_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F8D60_10C980_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F8D6C_10C98C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F8D78_10C998_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F8D84_10C9A4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F915C_10CD7C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F9168_10CD88_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F9174_10CD94_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F9198_10CDB8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F91A4_10CDC4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F92A0_10CEC0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F933C_10CF5C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F93A4_10CFC4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F95FC_10D21C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F965C_10D27C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F96E0_10D300_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F9A68_10D688_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F9C68_10D888_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F9CA0_10D8C0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F9D1C_10D93C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800F9F84_10DBA4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FA104_10DD24_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FA388_10DFA8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FA448_10E068_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FA640_10E260_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FA818_10E438_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FA95C_10E57C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FAB98_10E7B8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FB578_10F198_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FB624_10F244_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FC3D0_10FFF0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FC4E0_110100_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FC594_1101B4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FC7C8_1103E8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FC8A4_1104C4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FC938_110558_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FC968_110588_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FC998_1105B8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FC9E0_110600_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FCA14_110634_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FCA4C_11066C_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_801025CC_1161EC_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", D_801025D0_1161F0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FCA7C_11069C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FF0F8_112D18_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FF158_112D78_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FF41C_11303C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FF75C_11337C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FF788_1133A8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FF794_1133B4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FF7C4_1133E4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FF7F0_113410_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FF800_113420_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FF834_113454_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FF840_113460_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FF900_113520_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FFA0C_11362C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FFA4C_11366C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FFAEC_11370C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FFB30_113750_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FFD0C_11392C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FFE90_113AB0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FFEC4_113AE4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_800FFF44_113B64_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_80100130_113D50_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_8010020C_113E2C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_80100228_113E48_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_8010024C_113E6C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_80100630_114250_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE660", func_8010067C_11429C_shared_board);
