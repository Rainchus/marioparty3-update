/*====================================================================
 * synremoveplayer.c
 *
 * Copyright 1995, Silicon Graphics, Inc.
 * All Rights Reserved.
 *
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Silicon Graphics,
 * Inc.; the contents of this file may not be disclosed to third
 * parties, copied or duplicated in any form, in whole or in part,
 * without the prior written permission of Silicon Graphics, Inc.
 *
 * RESTRICTED RIGHTS LEGEND:
 * Use, duplication or disclosure by the Government is subject to
 * restrictions as set forth in subdivision (c)(1)(ii) of the Rights
 * in Technical Data and Computer Software clause at DFARS
 * 252.227-7013, and/or in similar or successor clauses in the FAR,
 * DOD or NASA FAR Supplement. Unpublished - rights reserved under the
 * Copyright Laws of the United States.
 *====================================================================*/

#include "synthInternals.h"
#include <os_internal.h>
#include "audioTemp.h"

void alSynRemovePlayer(ALSynth *drvr)
{
    ALPlayer *thing;
    ALPlayer *prev = 0;
    OSIntMask mask;

    if (D_800A2884_A3484->unk_00 != 0) {
	    OSIntMask mask = osSetIntMask(OS_IM_NONE);
        for (thing = D_800A2884_A3484->unk_00; thing != 0; thing = thing->next) {
            if (thing == (ALPlayer*)drvr) { //?
		        if (prev) {
                    prev->next = thing->next;
                } else {
                    D_800A2884_A3484->unk_00 = thing->next;
                }
                drvr->head = 0;
		        break;
            }
	        prev = thing;
        }
	    osSetIntMask(mask);
    }
    mask = osSetIntMask(1);

    if (D_800A2884_A3484->unk_0C == drvr) {
        D_800A2884_A3484->unk_0C = 0;
    } else if (D_800A2884_A3484->unk_04 == drvr) {
        D_800A2884_A3484->unk_04 = 0;
    } else if (D_800A2884_A3484->unk_08 == drvr) {
        D_800A2884_A3484->unk_08 = 0;
    }
    osSetIntMask(mask);
}

