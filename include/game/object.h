#ifndef _GAME_OBJECT_H
#define _GAME_OBJECT_H

#include "ultra64.h"
#include "object.h"
#include "common_structs.h"
#include "process.h"


#define OM_GET_WORK_PTR(object, type) ((type *)(&((object)->work[0])))
#define OM_GET_DATA_PTR(object, type) ((type *)(((object)->data)))

struct om_obj_data;
typedef void (*omObjFunc)(struct om_obj_data *);

typedef struct om_obj_data {
/* 0x00 */ u16 stat;
/* 0x02 */ s16 next_idx_alloc;
/* 0x04 */ s16 prio;
/* 0x06 */ s16 prev;
/* 0x08 */ s16 next;
/* 0x0A */ s16 next_idx;
/* 0x0C */ s16 group;
/* 0x0E */ u16 group_idx;
/* 0x10 */ u32 unk10;
/* 0x14 */ omObjFunc func;
/* 0x18 */ Vec trans;
/* 0x24 */ Vec rot;
/* 0x30 */ Vec scale;
/* 0x3C */ u16 mdlcnt;
/* 0x40 */ s16 *model;
/* 0x44 */ u16 mtncnt;
/* 0x48 */ s16 *motion;
/* 0x4C */ u32 work[4];
/* 0x5C */ void *data;
} omObjData;

Process* omInitObjMan(s16 max_objs, s32 prio);
void omSetStatBit(omObjData *obj, u16 stat);
void omOvlReturnEx(s16 level);
omObjData* omAddObjEx(Process *objman_process, s16 prio, u16 mdlcnt, u16 mtncnt, s16 group, omObjFunc func);
omObjData* omAddObj(s16 priority, u16 arg1, u16 arg2, s16 arg3, omObjFunc func);
Process* omAddPrcObj(process_func func, u16 priority, s32 stackSize, s32 extDataSize);

#endif //_GAME_OBJECT_H