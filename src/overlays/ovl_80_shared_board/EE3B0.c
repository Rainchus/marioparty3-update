#include "common.h"
#include "ovl_80.h"

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE3B0", func_800DA790_EE3B0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE3B0", func_800DA810_EE430_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE3B0", func_800DA8BC_EE4DC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE3B0", func_800DA91C_EE53C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE3B0", func_800DA938_EE558_shared_board);

void func_800DA948_EE568_shared_board(void) {
}

//this needs a \0 due to rodata splitting problems
void func_800DA950_EE570_shared_board(s32 arg0, s16 arg1) {
    sprintf(D_800D5218_D5E18, "KMS: %d", gStarBlockSpaceIndex);
    func_800DA790_EE3B0_shared_board((arg0 * 8) & 0xFFF8, (arg1 * 8), D_800D5218_D5E18, 0xF, 9);
    sprintf(D_800D5218_D5E18, "KMC: %d\0", gCoinBlockSpaceIndex);
    func_800DA790_EE3B0_shared_board((arg0 * 8) & 0xFFF8, ((arg1 + 1) * 8), D_800D5218_D5E18, 0xF, 9);
}

void func_800DAA14_EE634_shared_board(void) {
}

void func_800DAA1C_EE63C_shared_board(void) {
}

void func_800DAA24_EE644_shared_board(void) {
}

void func_800DAA2C_EE64C_shared_board(void) {
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EE3B0", func_800DAA34_EE654_shared_board);
