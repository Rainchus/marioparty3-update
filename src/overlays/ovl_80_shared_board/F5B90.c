#include "common.h"
#include "ovl_80.h"

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E1F70_F5B90_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E2074_F5C94_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E20A4_F5CC4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E210C_F5D2C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E21F4_F5E14_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E2260_F5E80_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E22B4_F5ED4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E22CC_F5EEC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E22DC_F5EFC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E2354_F5F74_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E2390_F5FB0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E2904_F6524_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E2954_F6574_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E2960_F6580_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E2974_F6594_shared_board);

s32 func_800E29E8_F6608_shared_board(void) {
    GW_PLAYER* player;
    GW_SYSTEM* system = &GwSystem;

    player = GetPlayerStruct(CUR_PLAYER);
    if (func_800DEB2C_F274C_shared_board(system->current_player_index) == 3 && player->rev & 0x80) {
        player->rev &= ~0x80;
        func_800EC590_1001B0_shared_board(-1, 0x3A2B);
    } else {
        if (func_800DEB2C_F274C_shared_board(system->current_player_index) == 3) {
            func_800EC590_1001B0_shared_board(-1, 0x3A27);
        }
        if (player->rev & 0x80) {
            player->rev &= ~0x80;
            func_800EC590_1001B0_shared_board(-1, 0x3A29);
        }        
    }

    func_800DCA64_F0684_shared_board(GwSystem.current_player_index);
    D_80102C70_116890_shared_board();
    GwPlayer[GwSystem.current_player_index].itemNo[D_80100F90_114BB0_shared_board] = -1;
    FixUpPlayerItemSlots(GwSystem.current_player_index);
    func_800DE9AC_F25CC_shared_board(GwSystem.current_player_index, 2);
    func_800FF900_113520_shared_board(-1, 2);
    func_800DC128_EFD48_shared_board(GwSystem.current_player_index);
    HuPrcSleep(0xF);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E2B24_F6744_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E2B4C_F676C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E2BCC_F67EC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E2C4C_F686C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E2C74_F6894_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E2C9C_F68BC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E2CC4_F68E4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E2CEC_F690C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E2E28_F6A48_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E2F38_F6B58_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E3074_F6C94_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E3158_F6D78_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E31E4_F6E04_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E3284_F6EA4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E3394_F6FB4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E3420_F7040_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E3448_F7068_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E3470_F7090_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E3498_F70B8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E34BC_F70DC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E34E0_F7100_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E3584_F71A4_shared_board);

f32 HuMathSin(f32);                                 /* extern */
void func_800F696C_10A58C_shared_board(s32, s32, f32, f32); /* extern */
void omDelPrcObj(s32);                                   /* extern */

void func_800E35F8_F7218_shared_board(void) {
    f32 temp_f0;
    f32 var_f20;
    s32* temp_s0;
    s32 prev;

    temp_s0 = HuPrcCurrentGet()->user_data;
    var_f20 = 0.0f;
    prev = *temp_s0;
    while (*temp_s0 != -1) {
        if (*temp_s0 != prev) {
            func_800F696C_10A58C_shared_board(GwSystem.current_player_index, prev, 1.0f, 1.0f);
            var_f20 = 0.0f;
            prev = *temp_s0;
        }
        if (var_f20 > 360.0f) {
            var_f20 -= 360.0f;
        }
        temp_f0 = (HuMathSin(var_f20) * 0.2f) + 1.0f;
        func_800F696C_10A58C_shared_board(GwSystem.current_player_index, *temp_s0, temp_f0, temp_f0);
        HuPrcVSleep();
        var_f20 += 13.0f;
        
    }
    func_800F696C_10A58C_shared_board(GwSystem.current_player_index, prev, 1.0f, 1.0f);
    omDelPrcObj(0);
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E3734_F7354_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E378C_F73AC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E3F54_F7B74_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E400C_F7C2C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E4160_F7D80_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E41FC_F7E1C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E44E4_F8104_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_80102180_115DA0_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_80102188_115DA8_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_80102194_115DB4_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_801021A4_115DC4_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_801021AC_115DCC_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_801021B8_115DD8_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_801021C4_115DE4_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_801021D0_115DF0_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_801021DC_115DFC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E455C_F817C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E48F4_F8514_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E4954_F8574_shared_board);

s32 PlayerHasItem(s32 playerIndex, s32 itemID) {
    s32 i;

    if (playerIndex == CUR_PLAYER) {
        playerIndex = GwSystem.current_player_index;
    }

    for (i = 0; i < ARRAY_COUNT(GwPlayer->itemNo); i++) {
        if (GwPlayer[playerIndex].itemNo[i] == itemID) {
            break;
        }
    }

    if (i == 3) {
        return -1;
    } else {
        return i;
    }
}

s32 PlayerHasEmptyItemSlot(s32 arg0) {
    if (arg0 == CUR_PLAYER) {
        arg0 = GwSystem.current_player_index;
    }
    
    return PlayerHasItem(arg0, -1);
}

void FixUpPlayerItemSlots(s32 arg0) {
    s8* playerItems;
    s32 i;


    if (arg0 == -1) {
        arg0 = GwSystem.current_player_index;
    }

    playerItems = GwPlayer[arg0].itemNo;

    for (i = 0; i < ARRAY_COUNT(GwPlayer->itemNo) - 1; i++) {
        if (playerItems[i] == -1) {
            playerItems[i] = playerItems[i+1];
            playerItems[i+1] = -1;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E4A6C_F868C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E4A7C_F869C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E4A88_F86A8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E4A94_F86B4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E4B18_F8738_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E4B60_F8780_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E4BA0_F87C0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E4C68_F8888_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E4DC0_F89E0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E5100_F8D20_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E53A4_F8FC4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E5604_F9224_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E57C8_F93E8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E57D8_F93F8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E5840_F9460_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E5B80_F97A0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E5B90_F97B0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E5BE4_F9804_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E5CE0_F9900_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E5D40_F9960_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E5DA8_F99C8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E5DD4_F99F4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E60D8_F9CF8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E6120_F9D40_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E61C0_F9DE0_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_801021EC_115E0C_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_801021F0_115E10_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_80102200_115E20_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_80102210_115E30_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_80102220_115E40_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_80102230_115E50_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_80102240_115E60_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_80102250_115E70_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_8010225C_115E7C_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_8010226C_115E8C_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_80102280_115EA0_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_80102290_115EB0_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_801022A0_115EC0_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_801022B8_115ED8_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", D_801022CC_115EEC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E6264_F9E84_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E639C_F9FBC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E63F0_FA010_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E6404_FA024_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E6420_FA040_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E644C_FA06C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E648C_FA0AC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E6500_FA120_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E650C_FA12C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E6538_FA158_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E6564_FA184_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E6630_FA250_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E66D4_FA2F4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E66E0_FA300_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E6720_FA340_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E69BC_FA5DC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E69D8_FA5F8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E6A40_FA660_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E6A54_FA674_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E6A8C_FA6AC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E6AC4_FA6E4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E6C4C_FA86C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E6C80_FA8A0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E6CF8_FA918_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E6DEC_FAA0C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E6EC8_FAAE8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E6FBC_FABDC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E6FCC_FABEC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E6FDC_FABFC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E7018_FAC38_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E7068_FAC88_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E7130_FAD50_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E71A8_FADC8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E71EC_FAE0C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E7254_FAE74_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E728C_FAEAC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E72C4_FAEE4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E72DC_FAEFC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E7300_FAF20_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E7330_FAF50_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E7358_FAF78_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E7384_FAFA4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E7514_FB134_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E76EC_FB30C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E86CC_FC2EC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E8DC8_FC9E8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E8DD4_FC9F4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E8DE0_FCA00_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E8EDC_FCAFC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E8F54_FCB74_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E9044_FCC64_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E90BC_FCCDC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E92D4_FCEF4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E9328_FCF48_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E9344_FCF64_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E9358_FCF78_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E9730_FD350_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E973C_FD35C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E9748_FD368_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E982C_FD44C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E989C_FD4BC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E98E8_FD508_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E9940_FD560_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E9A54_FD674_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E9A60_FD680_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E9A94_FD6B4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E9AC8_FD6E8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E9AD4_FD6F4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E9AE0_FD700_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E9AF0_FD710_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E9BB0_FD7D0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E9BD0_FD7F0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E9C00_FD820_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E9C28_FD848_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E9C94_FD8B4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E9EF4_FDB14_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800E9F24_FDB44_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EA0B8_FDCD8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EA200_FDE20_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EA284_FDEA4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EA2BC_FDEDC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EA2D0_FDEF0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EA2E4_FDF04_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EA320_FDF40_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EA348_FDF68_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EA358_FDF78_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EA364_FDF84_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EA4CC_FE0EC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EA4F0_FE110_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EA5A4_FE1C4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EA60C_FE22C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EA660_FE280_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EA694_FE2B4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EA6B0_FE2D0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EA6E0_FE300_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", DrawSpaces);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EAE00_FEA20_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EAE10_FEA30_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EB09C_FECBC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", GetSpaceData);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EB184_FEDA4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EB1B0_FEDD0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EB1CC_FEDEC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EB24C_FEE6C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EB310_FEF30_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EB3C0_FEFE0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EB4F0_FF110_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EB5DC_FF1FC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EB7F0_FF410_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EB820_FF440_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EB8BC_FF4DC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EB97C_FF59C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EB9C0_FF5E0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EBA60_FF680_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EBAC8_FF6E8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EBCB0_FF8D0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EBCBC_FF8DC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EBCC8_FF8E8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EBCD4_FF8F4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EBCFC_FF91C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EBD54_FF974_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EBDAC_FF9CC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EBEAC_FFACC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EBEC8_FFAE8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/F5B90", func_800EBED8_FFAF8_shared_board);
