#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

#include "common.h"
#include "game/object.h"

void SprAttrSet(s16, s16, u16);
void SprAttrReset(s16, s16, u16);
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
f32 HuMathCos(f32);
s16 func_8000B13C_BD3C(s32);
s16 Hu3DModelCreate(void*, s32);
void* HuReadFileTag(s32 dirAndFile, s32 tag);
void CameraScissorSet(s16 camIndex, RectF* arg1);
void* ReadMainFS(s32);
void CameraViewportSet(s16 camIndex, Vec* arg1, Vec* arg2);
void HuMemMemoryFreePerm(void *ptr);
void* ReadMainFS(s32 dirAndFile);
s32 func_8001443C_1503C(void*, s32, u8);
s32 func_800323CC_32FCC(s32, void*, s32, s32);
void func_80054904_55504(s16, s16, s16, s16);
void func_80055024_55C24(s16, s16, s16, s32);
void func_800552DC_55EDC(s16, s16);
void func_80055140_55D40(s32, s16, u16, s32);
void func_800550B4_55CB4(s32, s16, f32);
void func_800550F4_55CF4(s16, s16, s32);
void SprScale(s16, s16, f32, f32);
void func_80055294_55E94(s16, s16, u16);
void func_80055420_56020(s16, s32, u8, u8, s32);
void func_80055458_56058(s16, s16, u16);
void func_8001C258_1CE58(s16, s32, s32);
void func_8001C448_1D048(s16);
void func_8001C8E4_1D4E4(s16, s32);
void func_80055670_56270(s16);
void HuFreeFilePerm(void*);
s16 func_80055810_56410(void*);

#endif