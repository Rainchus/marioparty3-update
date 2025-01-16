#include "ChillyWaters.h"

typedef struct unkfunc_801059D0 {
    f32 unk0;
    f32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    Process* unk14;
} unkfunc_801059D0;

void func_80105A64_31B5D4_ChillyWaters(void);

void func_801059D0_31B540_ChillyWaters(s16 arg0, s16 arg1) {
    Process* process;
    unkfunc_801059D0* temp_v0;

    process = omAddPrcObj(func_80105A64_31B5D4_ChillyWaters, 0x3F00, 0x1000, 0);
    temp_v0 = HuMemAllocTag(sizeof(unkfunc_801059D0), 0x7918);
    process->user_data = temp_v0;
    temp_v0->unk14 = process;
    temp_v0->unk0 = arg0;
    temp_v0->unk4 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B540", func_80105A64_31B5D4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B540", func_80105DB8_31B928_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B540", func_80105E20_31B990_ChillyWaters);