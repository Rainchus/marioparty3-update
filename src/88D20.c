#include "common.h"

f32 multVecGetLengthSqr(f32 arg0, f32 arg1, f32 arg2);

void HuVecGetLength(f32 arg0, f32 arg1, f32 arg2) {
    HuSqrtf(multVecGetLengthSqr(arg0, arg1, arg2));
}
