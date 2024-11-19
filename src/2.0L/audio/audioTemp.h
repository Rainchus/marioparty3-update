#include <libaudio.h>

//this global is used and is not standard in libultra -
//so this temp header file has been created for now

typedef struct Unk {
    ALPlayer* unk_00;
    ALSynth* unk_04;
    ALSynth* unk_08;
    ALSynth* unk_0C;
} Unk;

extern Unk* D_800A2884_A3484;