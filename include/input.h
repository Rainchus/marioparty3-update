#ifndef _INPUT_H
#define _INPUT_H

#include "libultra.h"

extern s16 D_800C9520[];
extern s16 D_800D0590[];
extern s16 D_800D10F8[];
extern u16 D_800D1350[];
extern s16 D_800D5546[];

extern u8 D_800CBB6E[];
extern s16 D_800CDA7C[];
extern s8 D_800D20A1[];

void ContDataInit(void);
void ContDataUpdate(void);

#endif