#include "common.h"
#include "ovl_80.h"

void func_800FF900_113520_shared_board(s16 playerIndex, s16 arg1) {
    if (playerIndex == CUR_PLAYER) {
        playerIndex = GetCurrentPlayerIndex();
    }
    if (playerIndex != 4) {
        switch (arg1) {
        case 0:
            func_8004B25C_4BE5C(playerIndex, 5, 0, 5);
            break;
        case 1:
            func_8004B25C_4BE5C(playerIndex, 2, 3, 10);
            break;
        case 2:
            func_8004B25C_4BE5C(playerIndex, 10, 0, 10);
            break;
        case 3:
            func_8004B25C_4BE5C(playerIndex, 2, 2, 20);
            break;
        case 4:
            func_8004B25C_4BE5C(playerIndex, 20, 0, 20);
            break;
        case 5:
            func_8004B25C_4BE5C(playerIndex, 30, 0, 30);
            break;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/113520", func_800FFA0C_11362C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/113520", func_800FFA4C_11366C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/113520", func_800FFAEC_11370C_shared_board);
