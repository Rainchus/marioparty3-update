#ifndef _SIMAN_H
#define _SIMAN_H

#include <libultra.h>

#define HOS_PRIORITY_SIMGR 0x5A

typedef s32 (*HuSiFuncVoid)(void);
typedef s32 (*HuSiFunc)(void *);

typedef struct functionListEntryt {
    struct functionListEntryt *child;
    HuSiFuncVoid func;
    s16 type;
} functionListEntry;

typedef struct {
    HuSiFunc func;
    //functionListEntry *pFuncListEntry;
    void* arg;
    s32 ret;
    OSMesgQueue *recvQueue;
} unkMesg;

typedef struct {
    s32 unk0[4];
    unkMesg* unkMsg;
} unkMesgWrapper;

void InitSI(void);
functionListEntry ** GetSIClientListTable(functionListEntry* entry);
s32 _AddSIClient(functionListEntry* node);
void AddSIClient(functionListEntry* entry, s16 type, void* func);
s32 _RemoveSIClient(functionListEntry* arg0);
void RemoveSIClient(void* entry);
void CallSIClient(s16 type);
s32 RequestSIFunction(unkMesg* siMessg, void* func, void* arg, s32 type);
void AddSchedulerClient(unkMesgWrapper*, OSMesgQueue*, s32);
void SIProc(void* arg0);

extern void *D_800BCD00_BD900;
extern void *D_800BCD80_BD980;
extern OSThread D_800BCE00_BDA00;

extern functionListEntry* D_800BD7B0_BE3B0;
extern functionListEntry* D_800BD7B4_BE3B4;

extern OSMesgQueue D_800CE1A0_CEDA0;
extern OSMesgQueue D_800D1220_D1E20;

#endif