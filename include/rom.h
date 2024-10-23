#ifndef __ROM_H
#define __ROM_H

#include <libultra.h>


s32 dmaStart(OSIoMesg * msg, u8 pri, s32 direction, u8* src, u8* dest, u32 size, OSMesgQueue * retQueue);
s32 dmaRead(u8* src, u8* dest, s32 size);
s32 dmaReadOvl(u8* src, u8* dest, s32 size);

#endif