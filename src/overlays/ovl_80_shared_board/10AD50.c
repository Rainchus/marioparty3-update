#include "common.h"
#include "ovl_80.h"

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10AD50", func_800F7130_10AD50_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10AD50", func_800F71A8_10ADC8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10AD50", func_800F7240_10AE60_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10AD50", func_800F74E4_10B104_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10AD50", func_800F7578_10B198_shared_board);

//All items you can carry from item space
void func_800F7610_10B230_shared_board(void) {
    s32 itemsEnd = -1;
    s32 i = 0;
    s32* boardItemIds = D_80105630_119250_shared_board;
    
    for (; i < 3; i++) {
        boardItemIds = &D_80105630_119250_shared_board[i];
        while (1) {
            *boardItemIds = D_80101A50_115670_shared_board[func_800EEF80_102BA0_shared_board(9.0f)];
            if (*boardItemIds != itemsEnd) {
                itemsEnd = *boardItemIds;
                break;
            }
        }
    }
}

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/10AD50", D_80102520_116140_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10AD50", func_800F76A4_10B2C4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10AD50", func_800F7CF0_10B910_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10AD50", func_800F7D10_10B930_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10AD50", func_800F7D4C_10B96C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10AD50", func_800F7D98_10B9B8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10AD50", func_800F7DD4_10B9F4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10AD50", func_800F7E1C_10BA3C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10AD50", func_800F7E64_10BA84_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10AD50", func_800F7EAC_10BACC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10AD50", func_800F7EF4_10BB14_shared_board);

//Baby bowser gives all skeleton keys
void func_800F7F30_10BB50_shared_board(void) {
    func_800EC590_1001B0_shared_board(5, 0x3C20);
    D_80105630_119250_shared_board[0] = D_80105630_119250_shared_board[1] = D_80105630_119250_shared_board[2] = ITEM_SKELETON_KEY;
    func_800F76A4_10B2C4_shared_board(0);
    func_800EC590_1001B0_shared_board(5, 0x3C1D);
}

//Baby bowser gives warp blocks from item space
void func_800F7F7C_10BB9C_shared_board(void) {
    func_800EC590_1001B0_shared_board(5, 0x3C21);
    D_80105630_119250_shared_board[0] = D_80105630_119250_shared_board[1] = D_80105630_119250_shared_board[2] = ITEM_WARP_BLOCK;
    func_800F76A4_10B2C4_shared_board(0);
    func_800EC590_1001B0_shared_board(5, 0x3C1D);
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10AD50", func_800F7FC8_10BBE8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10AD50", func_800F7FE8_10BC08_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10AD50", func_800F85C0_10C1E0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10AD50", func_800F85E4_10C204_shared_board);
