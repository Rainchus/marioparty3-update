#include "common.h"
#include "../ovl_80_shared_board/ovl_80.h"

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_51_name/3C6310", func_801059A0_3C6310_name_51);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_51_name/3C6310", func_80105A68_3C63D8_name_51);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_51_name/3C6310", func_80105AAC_3C641C_name_51);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_51_name/3C6310", func_80105B04_3C6474_name_51);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_51_name/3C6310", func_80105C9C_3C660C_name_51);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_51_name/3C6310", func_80105CD4_3C6644_name_51);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_51_name/3C6310", func_80105DEC_3C675C_name_51);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_51_name/3C6310", func_80105F9C_3C690C_name_51);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_51_name/3C6310", func_801060A4_3C6A14_name_51);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_51_name/3C6310", func_80106100_3C6A70_name_51);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_51_name/3C6310", func_801066E0_3C7050_name_51);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_51_name/3C6310", func_80106768_3C70D8_name_51);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_51_name/3C6310", func_80107178_3C7AE8_name_51);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_51_name/3C6310", func_801072B0_3C7C20_name_51);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_51_name/3C6310", func_801072FC_3C7C6C_name_51);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_51_name/3C6310", func_80107358_3C7CC8_name_51);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_51_name/3C6310", func_80107384_3C7CF4_name_51);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_51_name/3C6310", D_80107510_3C7E80_name_51);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_51_name/3C6310", D_80107520_3C7E90_name_51);

s32 func_801073B0_3C7D20_name_51(void) {
    s32 sp10[] = {4, 7, 0xA, 0xD, 0x10, 0x13};

    Hu3DCamInit(1);
    func_800E6630_FA250_shared_board(hvq_data_ROM_START);
    func_800E69BC_FA5DC_shared_board(sp10[GwSystem.current_board_index]);
    return func_800E9344_FCF64_shared_board(1000.0f, 10000.0f);
}

void func_80107450_3C7DC0_name_51(void) {
    func_800E69D8_FA5F8_shared_board();
    func_800E66E0_FA300_shared_board();
}
