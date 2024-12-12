#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

#include "common.h"
#include "game/object.h"

void SprAttrSet(s16, s16, s32);
void SprAttrReset(s16, s16, s32);
s16 HuAudFXPlay(s32);
void func_800E52F8(void);
void func_800E5000(void);
void func_800F64FC(void);
void func_8001C814_1D414(s16, s32, s32);
void func_8001C1A0_1CDA0(s16, f32, f32, f32);
void func_8000B460_C060(omObjData*, u16, s32);
void func_8001C5B4_1D1B4(s16, s16);
void func_80106850_4F10A0_name_73(omObjData*, s32);
void func_8001C0C4_1CCC4(s16, f32, f32, f32);
u16 func_8000B108_BD08(s32 arg0, s32 arg1);
void func_800359E0_365E0(board_overlay_entrypoint*, s16);

#endif