#include "common.h"

INCLUDE_ASM("asm/nonmatchings/decode", HuDecodeNone);

INCLUDE_ASM("asm/nonmatchings/decode", HuDecodeLZ);

INCLUDE_ASM("asm/nonmatchings/decode", HuDecodeSlide);

INCLUDE_ASM("asm/nonmatchings/decode", HuDecodeFslide);

INCLUDE_ASM("asm/nonmatchings/decode", HuDecodeRLE);

INCLUDE_ASM("asm/nonmatchings/decode", HuDecode);
