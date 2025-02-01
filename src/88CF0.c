#include "common.h"

//this function having "mul" at the beginning of its name actually -
//causes the compiler to put a NOP at the top of the function
//when this is called, it jumps to after the nop??
//it's currently in undefined_syms.txt to force the address
f32 multVecGetLengthSqr(f32 arg0, f32 arg1, f32 arg2) {
    return (arg0 * arg0) + (arg1 * arg1) + (arg2 * arg2);
}
