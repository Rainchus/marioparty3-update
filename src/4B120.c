#include "common.h"

void func_800035E8_41E8(s16);
extern s16 D_800A1904_A2504;
extern u16 D_800A1906_A2506;
extern s16 D_800CDBC8_CE7C8;

INCLUDE_ASM("asm/nonmatchings/4B120", HuAudSeqPlay);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004A5C4_4B1C4);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004A650_4B250);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004A670_4B270);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004A72C_4B32C);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004A7C4_4B3C4);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004A880_4B480);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004A918_4B518);

void func_8004A950_4B550(void) {
    D_800A1904_A2504 = -1;
    func_800035E8_41E8(D_800CDBC8_CE7C8);
    D_800A1906_A2506 = (D_800A1906_A2506 & ~(0x08 | 0x2)) | 1;
}

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004A994_4B594);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004A9DC_4B5DC);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004AA04_4B604);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004AA38_4B638);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004AA60_4B660);

INCLUDE_ASM("asm/nonmatchings/4B120", HuAudFXPlay);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004AAD0_4B6D0);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004AB0C_4B70C);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004AB7C_4B77C);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004ABE8_4B7E8);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004AC10_4B810);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004AC5C_4B85C);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004AC98_4B898);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004ACE0_4B8E0);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004AD50_4B950);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004AD70_4B970);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004AD8C_4B98C);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004ADDC_4B9DC);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004AE00_4BA00);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004AE28_4BA28);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004AEF0_4BAF0);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004AFBC_4BBBC);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004B0D4_4BCD4);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004B1AC_4BDAC);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004B25C_4BE5C);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004B2C0_4BEC0);

INCLUDE_ASM("asm/nonmatchings/4B120", func_8004B2C8_4BEC8);
