#include "common.h"
#include "../ovl_80_shared_board/ovl_80.h"

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_801059A0_3CA800_name_53);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_80105AE0_3CA940_name_53);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_80105C60_3CAAC0_name_53);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_80105DC4_3CAC24_name_53);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_80105F8C_3CADEC_name_53);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_80106014_3CAE74_name_53);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_801060A8_3CAF08_name_53);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_801061FC_3CB05C_name_53);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_801062CC_3CB12C_name_53);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_80106388_3CB1E8_name_53);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_801066F0_3CB550_name_53);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_80106CFC_3CBB5C_name_53);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_801071F4_3CC054_name_53);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_8010727C_3CC0DC_name_53);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_80107580_3CC3E0_name_53);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_80107E28_3CCC88_name_53);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_80107E58_3CCCB8_name_53);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_80108B3C_3CD99C_name_53);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_80108BB0_3CDA10_name_53);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_80108C0C_3CDA6C_name_53);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_80108C58_3CDAB8_name_53);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_80108C8C_3CDAEC_name_53);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_53_name/3CA800", D_80108F80_3CDDE0_name_53);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_53_name/3CA800", D_80108F98_3CDDF8_name_53);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_53_name/3CA800", D_80108FB0_3CDE10_name_53);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_53_name/3CA800", D_80108FC0_3CDE20_name_53);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_53_name/3CA800", D_80108FD8_3CDE38_name_53);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_53_name/3CA800", D_80108FF0_3CDE50_name_53);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_53_name/3CA800", D_80109008_3CDE68_name_53);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_53_name/3CA800", D_80109020_3CDE80_name_53);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_53_name/3CA800", D_80109038_3CDE98_name_53);

void func_80108CC0_3CDB20_name_53(void) {
    s32 sp10[] = {3, 6, 9, 0xC, 0xF, 0x12};
    
    Hu3DCamInit(1);
    func_800E6630_FA250_shared_board(hvq_data_ROM_START);
    func_800E69BC_FA5DC_shared_board(sp10[GwSystem.current_board_index]);
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_53_name/3CA800", func_80108D44_3CDBA4_name_53);
