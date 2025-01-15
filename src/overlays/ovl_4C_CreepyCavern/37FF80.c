#include "common.h"

// dlabel D_8011D010_3975F0_CreepyCavern
//     /* 3975F0 8011D010 00000000 */ .word 0x00000000
//     /* 3975F4 8011D014 80107744 */ .word func_80107744_381D24_CreepyCavern
//     /* 3975F8 8011D018 00010000 */ .word 0x00010000
//     /* 3975FC 8011D01C 80107780 */ .word func_80107780_381D60_CreepyCavern
//     /* 397600 8011D020 00020000 */ .word 0x00020000
//     /* 397604 8011D024 80107B90 */ .word func_80107B90_382170_CreepyCavern
//     /* 397608 8011D028 00030000 */ .word 0x00030000
//     /* 39760C 8011D02C 80107C14 */ .word func_80107C14_3821F4_CreepyCavern
//     /* 397610 8011D030 00040000 */ .word 0x00040000
//     /* 397614 8011D034 8011C348 */ .word func_8011C348_396928_CreepyCavern
//     /* 397618 8011D038 FFFF0000 */ .word 0xFFFF0000
//     /* 39761C 8011D03C 00000000 */ .word 0x00000000
// .size D_8011D010_3975F0_CreepyCavern, . - D_8011D010_3975F0_CreepyCavern

void func_80107744_381D24_CreepyCavern(void);
void func_80107780_381D60_CreepyCavern(void);
void func_80107B90_382170_CreepyCavern(void);
void func_80107C14_3821F4_CreepyCavern(void);
void func_8011C348_396928_CreepyCavern(void);

board_overlay_entrypoint D_8011D010_3975F0_CreepyCavern[] = {
    {0, func_80107744_381D24_CreepyCavern},
    {1, func_80107780_381D60_CreepyCavern},
    {2, func_80107B90_382170_CreepyCavern},
    {3, func_80107C14_3821F4_CreepyCavern},
    {4, func_8011C348_396928_CreepyCavern},
    {-1, NULL},
};

void func_801059A0_37FF80_CreepyCavern(void) {
    func_800359E0_365E0(D_8011D010_3975F0_CreepyCavern, D_800A1764_A2364);
}
