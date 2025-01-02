#include "common.h"

extern s32 D_800A1EA0_A2AA0;

INCLUDE_ASM("asm/nonmatchings/52F30", func_80052330_52F30);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80052468_53068);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80052518_53118);

INCLUDE_ASM("asm/nonmatchings/52F30", func_800525C8_531C8);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80052700_53300);

INCLUDE_ASM("asm/nonmatchings/52F30", func_8005279C_5339C);

INCLUDE_ASM("asm/nonmatchings/52F30", func_800528EC_534EC);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80052A90_53690);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80052DD8_539D8);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80052E14_53A14);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80052E68_53A68);

INCLUDE_ASM("asm/nonmatchings/52F30", func_800530AC_53CAC);

INCLUDE_ASM("asm/nonmatchings/52F30", func_8005338C_53F8C);

INCLUDE_ASM("asm/nonmatchings/52F30", func_800534C8_540C8);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80053558_54158);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80054170_54D70);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80054218_54E18);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80054658_55258);

//SetSprPos?
void func_80054904_55504(s16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    ESprite* temp = D_800CDD70_CE970[arg0];
    ESprite2* temp_v1 = temp->unk_10[arg1];

    if ((temp_v1->unk_48 != (f32) arg2) || (temp_v1->unk_4C != (f32) arg3)) {
        temp->unk_0C = 1;
        temp_v1->unk_48 = (f32) arg2;
        temp_v1->unk_4C = (f32) arg3;
    }
}

INCLUDE_ASM("asm/nonmatchings/52F30", func_800549C0_555C0);

INCLUDE_ASM("asm/nonmatchings/52F30", func_800549F4_555F4);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80054B1C_5571C);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80054EE0_55AE0);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80054FF8_55BF8);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80055024_55C24);

INCLUDE_ASM("asm/nonmatchings/52F30", func_800550B4_55CB4);

INCLUDE_ASM("asm/nonmatchings/52F30", func_800550F4_55CF4);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80055140_55D40);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80055194_55D94);

INCLUDE_ASM("asm/nonmatchings/52F30", func_800551AC_55DAC);

INCLUDE_ASM("asm/nonmatchings/52F30", SprScale);

void SprPriSet(s16 arg0, s16 arg1, u16 arg2) {
    ESprite2* temp_a0;

    temp_a0 = D_800CDD70_CE970[arg0]->unk_10[arg1];
    if (temp_a0->unk_14 != arg2) {
        temp_a0->unk_14 = arg2;
        D_800A1EA0_A2AA0 = 1;
    }
}

INCLUDE_ASM("asm/nonmatchings/52F30", func_800552DC_55EDC);

INCLUDE_ASM("asm/nonmatchings/52F30", SprAttrReset);

INCLUDE_ASM("asm/nonmatchings/52F30", SprAttrSet);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80055420_56020);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80055458_56058);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80055484_56084);

INCLUDE_ASM("asm/nonmatchings/52F30", func_800554C4_560C4);

INCLUDE_ASM("asm/nonmatchings/52F30", func_800554F0_560F0);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80055520_56120);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80055548_56148);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80055588_56188);

INCLUDE_ASM("asm/nonmatchings/52F30", func_800555B8_561B8);

INCLUDE_ASM("asm/nonmatchings/52F30", func_800555E8_561E8);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80055628_56228);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80055670_56270);

INCLUDE_ASM("asm/nonmatchings/52F30", func_800557A0_563A0);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80055810_56410);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80055DBC_569BC);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80055FF4_56BF4);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80056054_56C54);

INCLUDE_ASM("asm/nonmatchings/52F30", func_800560B8_56CB8);

INCLUDE_ASM("asm/nonmatchings/52F30", func_800560D8_56CD8);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80056108_56D08);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80056128_56D28);

INCLUDE_ASM("asm/nonmatchings/52F30", func_8005614C_56D4C);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80056180_56D80);

INCLUDE_ASM("asm/nonmatchings/52F30", func_800561D0_56DD0);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80056230_56E30);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80056254_56E54);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80056260_56E60);

INCLUDE_ASM("asm/nonmatchings/52F30", func_8005627C_56E7C);

INCLUDE_ASM("asm/nonmatchings/52F30", func_800562BC_56EBC);

INCLUDE_ASM("asm/nonmatchings/52F30", func_8005630C_56F0C);

INCLUDE_ASM("asm/nonmatchings/52F30", func_800563A4_56FA4);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80056650_57250);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80056758_57358);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80056BAC_577AC);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80056C28_57828);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80056C74_57874);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80056C98_57898);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80056CD0_578D0);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80056D18_57918);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80056F80_57B80);

INCLUDE_ASM("asm/nonmatchings/52F30", func_800570A8_57CA8);

INCLUDE_ASM("asm/nonmatchings/52F30", func_8005712C_57D2C);

INCLUDE_ASM("asm/nonmatchings/52F30", func_80057158_57D58);

INCLUDE_ASM("asm/nonmatchings/52F30", func_800571C8_57DC8);
