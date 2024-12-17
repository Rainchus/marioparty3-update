#include "common.h"
#include "ovl_80.h"

void func_800F2E30_106A50_shared_board(s32 arg0) {
    UnkCoinThing coinDigits;
    BoardStatus* temp_s2;
    s32 var_v1;
    s32 i;
    
    temp_s2 = &D_801057E0_119400_shared_board[arg0];
    if (temp_s2->unk_08 != GwPlayer[arg0].coins) {
        coinDigits.unk_00[0] = GwPlayer[arg0].coins / 100;
        coinDigits.unk_00[1] = GwPlayer[arg0].coins / 10 % 10;
        coinDigits.unk_00[2] = GwPlayer[arg0].coins % 10;
        if (coinDigits.unk_00[0] != 0) {
            var_v1 = ((coinDigits.unk_00[0] != 0) ? 3 : 2);
        } else if (coinDigits.unk_00[1] != 0) {
            var_v1 = ((coinDigits.unk_00[0] != 0) ? 3 : 2);
        } else {
            var_v1 = 1;
        }
        
        if (var_v1 == 1) {
            SprAttrSet(temp_s2->unkA, 6, 0x8000);
            coinDigits.unk_00[1] = coinDigits.unk_00[2];
        } else {
            SprAttrReset(temp_s2->unkA, 6, 0x8000);
        }
    
        if (coinDigits.unk_00[0] == 0) {
            coinDigits.unk_00[0] = 10;
        }
        for (i = 0; i < 3; i++) {
            func_80055140_55D40(temp_s2->unkA, i + 4, coinDigits.unk_00[i], 0);
            func_800550F4_55CF4(temp_s2->unkA, i + 4, 1);
        }
    
        temp_s2->unk_08 = GwPlayer[arg0].coins;
    }

    if (temp_s2->unk_06 != GwPlayer[arg0].stars) {
        if (GwPlayer[arg0].stars > 99) {
            func_80055140_55D40(temp_s2->unkA, 7, 9, 0);
            func_80055140_55D40(temp_s2->unkA, 8, 9, 0);
        } else {
            if (GwPlayer[arg0].stars > 9) {
                func_80055140_55D40(temp_s2->unkA, 7, (GwPlayer[arg0].stars / 10), 0);
            } else {
                func_80055140_55D40(temp_s2->unkA, 7, 10, 0);
            }
            func_80055140_55D40(temp_s2->unkA, 8, GwPlayer[arg0].stars % 10, 0);
        }
        func_800550F4_55CF4(temp_s2->unkA, 7, 1);
        func_800550F4_55CF4(temp_s2->unkA, 8, 1);
    
        temp_s2->unk_06 = GwPlayer[arg0].stars; //?
    }
    coinDigits.unk_08[0] = GwPlayer[arg0].coins;
    coinDigits.unk_08[1] = GwPlayer[arg0].stars;
    
    for (i = 0; i < 2; i++) {
        if ((i != 0 && temp_s2->counts[i] != coinDigits.unk_08[i]) || (i == 0 && D_801055E8_119208_shared_board[arg0] != 0)) {
            if (temp_s2->unk2[i] == 0) {
                func_800550B4_55CB4(temp_s2->unkA, i + 2, 1.0f);
                temp_s2->unk2[i] = 0xF;
            }
        }

        if (temp_s2->unk2[i] != 0) {
            temp_s2->unk2[i]--;
            if (temp_s2->unk2[i] == 0) {
                if (i != 0 || D_801055E8_119208_shared_board[arg0] == 0) {
                    func_80055140_55D40(temp_s2->unkA, i + 2, 0U, 0);
                    func_800550B4_55CB4(temp_s2->unkA, i + 2, 0);
                    func_800550F4_55CF4(temp_s2->unkA, i + 2, 1);                       
                }
            }
        }
        temp_s2->counts[i] = coinDigits.unk_08[i];
    }
    if (temp_s2->unk1 != -1) {
        func_80055140_55D40(temp_s2->unkA, 0xA, temp_s2->unk1, 0);
        func_800550F4_55CF4(temp_s2->unkA, 0xA, 1);
        return;
    }
    if (temp_s2->unk7 != BoardPlayerRankCalc(arg0)) {
        func_80055140_55D40(temp_s2->unkA, 0xA, BoardPlayerRankCalc(arg0), 0);
        func_800550F4_55CF4(temp_s2->unkA, 0xA, 1);
        temp_s2->unk7 = BoardPlayerRankCalc(arg0);
    }
}

void func_800F3370_106F90_shared_board(void) {
    s32 i, j;

    for (i = 0; i < 4; i++) {
        BoardStatus* boardStatus = &D_801057E0_119400_shared_board[i];
        for (j = 0; j < 0xE; j++) {
            SprAttrSet(boardStatus->unkA, j, 0x8000);
        }
    }
}

void func_800F3400_107020_shared_board(omObjData* arg0) {
    f32 temp_f2;
    f32 temp_f6;
    f32 temp_f8;
    s32 var_v1;
    BoardStatus* temp_s2;
    s32 i, j, k;

    while (1) {
        if (D_800D20B1_D2CB1 == 0) {
            for (i = 0; i < 4; i++) {
                if (D_80101780_1153A0_shared_board != -1 &&
                    D_80101784_1153A4_shared_board != -1 &&
                    i != D_80101780_1153A0_shared_board &&
                    i != D_80101784_1153A4_shared_board) {
                    continue;
                }

                temp_s2 = &D_801057E0_119400_shared_board[i];

                if (temp_s2->unk_00 == 0) {
                    if (temp_s2->unk4[1] & 1) {
                        for (k = 0; k < 14; k++) {
                            SprAttrSet(temp_s2->unkA, k, 0x8000);
                        }
                        continue;
                    }

                    for (k = 0; k < 14; k++) {
                        switch (k) {
                        case 9:
                            if (GwPlayer[i].flags1 & 1) {
                                break;
                            }
                            continue;
                        case 11:
                        case 12:
                        case 13:
                            if (GwPlayer[i].items[k - 11] == -1) {
                                continue;
                            }

                            func_80055024_55C24(temp_s2->unkA, k, D_8010559C_1191BC_shared_board[GwPlayer[i].items[k - 11]], 0);
                            func_800550F4_55CF4(temp_s2->unkA, k, 0);
                            func_80055294_55E94(temp_s2->unkA, k, (i * 5) + 0x478E);
                            SprAttrSet(temp_s2->unkA, k, 0);
                            var_v1 = k;
                            if (i >= 2) {
                                var_v1 = k + 3;
                            }
                            func_80054904_55504(temp_s2->unkA, k, D_801018E4_115504_shared_board[var_v1][0], D_801018E4_115504_shared_board[var_v1][1]);
                            SprAttrSet(temp_s2->unkA, k, 0x8000);
                            if (D_80101790_1153B0_shared_board != 0) {
                                break;
                            }
                            continue;
                        case 6:
                            if (GwPlayer[i].coins < 10) {
                                continue;
                            }
                            break;
                        }
                        SprAttrReset(temp_s2->unkA, k, 0x8000);
                    }
                    func_800F2E30_106A50_shared_board(i);
                } else {
                    if (temp_s2->unk4[1] & 1) {
                        for (k = 0; k < 5; k++) {
                            SprAttrSet(temp_s2->unkA, k, 0x8000);
                        }
                        SprAttrSet(temp_s2->unkA, 9, 0x8000);
                        continue;
                    }

                    for (k = 0; k < 2; k++) {
                        SprAttrReset(temp_s2->unkA, k, 0x8000);
                    }

                    for (k = 0; k < 3; k++) {
                        if (temp_s2->unk_40[k] != -1) {
                            SprAttrReset(temp_s2->unkA, (k + 2), 0x8000);
                        }
                    }

                    if ((GwPlayer[i].flags1 & 1) && !(temp_s2->unk4[1] & 1)) {
                        SprAttrReset(temp_s2->unkA, 9, 0x8000);
                    } else {
                        SprAttrSet(temp_s2->unkA, 9, 0x8000);
                    }
                }
                if (temp_s2->unkE > 0) {
                    temp_s2->unkE--;
                    temp_s2->xPos += temp_s2->unk_20;
                    temp_s2->yPos += temp_s2->unk_24;
                    temp_s2->unk_20 += temp_s2->unk_28;
                    temp_s2->unk_24 += temp_s2->unk_2C;
                } else if (temp_s2->unkE == -1) {
                    temp_s2->unkE = -2;
                } else if (temp_s2->unkE != -2) {
                    temp_s2->xPos = temp_s2->unk_18;
                    temp_s2->yPos = temp_s2->unk_1C;
                    temp_s2->unkE = -1;
                }
                func_80054904_55504(temp_s2->unkA, 0,
                                    (s16)((s32)(temp_s2->xPos + 0.5f) + 0x38),
                                    (s16)((s32)(temp_s2->yPos + 0.5f) + 0x13));
            }

            if (D_801055C2_1191E2_shared_board != -1) {
                D_801055C8_1191E8_shared_board += 0.1f;
                if (D_801055C8_1191E8_shared_board > 1.0f) {
                    D_801055C8_1191E8_shared_board = 1.0f;
                }
                func_800551D8_55DD8(D_801055C2_1191E2_shared_board, 0, D_801055C8_1191E8_shared_board, D_801055C8_1191E8_shared_board);
                if (D_801055E4_119204_shared_board > 0) {
                    D_801055E4_119204_shared_board--;
                    D_801055CC_1191EC_shared_board.x += D_801055D4_1191F4_shared_board.x;
                    D_801055CC_1191EC_shared_board.y += D_801055D4_1191F4_shared_board.y;
                    D_801055D4_1191F4_shared_board.x += D_801055DC_1191FC_shared_board.x;
                    D_801055D4_1191F4_shared_board.y += D_801055DC_1191FC_shared_board.y;
                    func_80054904_55504(D_801055C2_1191E2_shared_board, 0,
                                        D_801055CC_1191EC_shared_board.x,
                                        D_801055CC_1191EC_shared_board.y);
                }
            }
        }
        HuPrcVSleep();
    }
}

void func_800F39C0_1075E0_shared_board(s32 playerIndex) {
    s16 temp_s1;

    temp_s1 = D_801057E0_119400_shared_board[playerIndex].unkA;
    func_80055024_55C24(temp_s1, 1, D_80105588_1191A8_shared_board[playerIndex+1], 0);
    func_800550F4_55CF4(temp_s1, 1, 0);
    func_80055294_55E94(temp_s1, 1, ((playerIndex * 5) + 0x4790) & 0xFFFF);
    SprAttrSet(temp_s1, 1, 0);
    func_80054904_55504(temp_s1, 1, D_801018E4_115504_shared_board[1][0], D_801018E4_115504_shared_board[1][1]);
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F3A80_1076A0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F3BD0_1077F0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F3D70_107990_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F3E34_107A54_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F3F0C_107B2C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F3FF4_107C14_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F4190_107DB0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F4348_107F68_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F43FC_10801C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F453C_10815C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F462C_10824C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F4730_108350_shared_board);

void func_800F4798_1083B8_shared_board(u32 playerIndex, s32 turnStatus) {
    if (playerIndex < 4) {
        func_80055420_56020(D_801057E0_119400_shared_board[playerIndex].unkA, 0, D_8010188C_1154AC_shared_board[turnStatus].r, D_8010188C_1154AC_shared_board[turnStatus].g, D_8010188C_1154AC_shared_board[turnStatus].b);
        D_801057E0_119400_shared_board[playerIndex].unk4[0] = turnStatus;
    }
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F482C_10844C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F4850_108470_shared_board);

//initialize player UIs
void func_800F4874_108494_shared_board(s32 playerIndex, s16 arg1, s16 arg2) {
    BoardStatus* boardStatus;
    f32 temp_f0;
    f32 temp_f0_2;

    boardStatus = &D_801057E0_119400_shared_board[playerIndex];
    boardStatus->unk_18 = arg1;
    boardStatus->xPos = arg1;
    boardStatus->unk_1C = arg2;
    boardStatus->yPos = arg2;
    boardStatus->unk_20 = boardStatus->unk_24 = 0;
    boardStatus->unkE = -2;
    func_80054904_55504(boardStatus->unkA, 0, arg1 + 0x38, arg2 + 0x13);
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F4924_108544_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F4960_108580_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F4994_1085B4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F5278_108E98_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F52C4_108EE4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F53B4_108FD4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F54FC_10911C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F5644_109264_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F56A8_1092C8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F5828_109448_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F591C_10953C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F59B4_1095D4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F5BF4_109814_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F5D44_109964_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F5D60_109980_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F5D78_109998_shared_board);

//toggle hide player UI bit on
void func_800F5D8C_1099AC_shared_board(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        D_801057E0_119400_shared_board[i].unk4[1] |= 1;
    }
}

//toggle hide player UI bit off
void func_800F5DD8_1099F8_shared_board(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        D_801057E0_119400_shared_board[i].unk4[1] &= ~1;
    }
}

void func_800F5E24_109A44_shared_board(s32 arg0) {
    D_80101784_1153A4_shared_board = arg0;
}

void func_800F5E30_109A50_shared_board(void) {
    s32 i;

    func_800F4190_107DB0_shared_board();
    for (i = 0; i < 4; i++) {
        func_800F43FC_10801C_shared_board(i);
        //i + 4? is this right?
        func_800F4874_108494_shared_board(i, D_80101794_1153B4_shared_board[i + 4][0], D_80101794_1153B4_shared_board[i + 4][1]);
        func_800F4798_1083B8_shared_board(i, GwPlayer[i].turn_status);
    }

    D_80105580_1191A0_shared_board = omAddPrcObj(&func_800F3400_107020_shared_board, 0, 0x2000, 0);
    omPrcSetStatBit(D_80105580_1191A0_shared_board, 0x80);
    D_801055C4_1191E4_shared_board = -1;
    D_801055C2_1191E2_shared_board = -1;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F5EF0_109B10_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F5F4C_109B6C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F5F60_109B80_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F5F7C_109B9C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F5F98_109BB8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F63F0_10A010_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F641C_10A03C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F64E4_10A104_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F66DC_10A2FC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F6724_10A344_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F6748_10A368_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F6780_10A3A0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F6848_10A468_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F688C_10A4AC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F68E0_10A500_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F6928_10A548_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F696C_10A58C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F69B0_10A5D0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F69F8_10A618_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F6A40_10A660_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F6A88_10A6A8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/106A50", func_800F6AA4_10A6C4_shared_board);

//TODO: remove goto
void func_800F6AD0_10A6F0_shared_board(s32 arg0, f32 arg1, f32 arg2) {
    BoardStatus* temp_s1;
    s32 i;

    temp_s1 = &D_801057E0_119400_shared_board[arg0];
    if (temp_s1->unk_00 != 0) {
        if (temp_s1->unk_00 == 1) {
            goto temp;
        } else {
            return;
        }
    } else {
        for (i = 0; i < 14; i++) {
            func_800551D8_55DD8(temp_s1->unkA, i, arg1, arg2);
        }
        return;
    }

    temp:
    for (i = 0; i < 5; i++) {
        func_800551D8_55DD8(temp_s1->unkA, i, arg1, arg2);
    }
    
    func_800551D8_55DD8(temp_s1->unkA, 9, arg1, arg2);
}

void func_800F6BC4_10A7E4_shared_board(s32 arg0) {
    BoardStatus* temp_s2;
    f32 var_f20;
    s32 i, j;

    for (i = 0; i < 4; i++) {
        if (arg0 == -1 || arg0 == i) {
            temp_s2 = &D_801057E0_119400_shared_board[i];
            if (temp_s2->unk_00 == 1) {
                func_800F6A88_10A6A8_shared_board(temp_s2->unkA, 2);
                func_80054904_55504(temp_s2->unkA, 1, D_801018E4_115504_shared_board[1][0], D_801018E4_115504_shared_board[1][1]);
                if (GwPlayer[i].items[0] != -1) {
                    for (j = 0; j < 3; j++) {
                        switch (j) {
                            case 0:
                                func_80054904_55504(temp_s2->unkA, j + 2, j * 0x12 + 3, 5);
                                break;
                            case 1:
                                func_80054904_55504(temp_s2->unkA, j + 2, j * 0x12 + 3, -5);
                                break;
                            case 2:
                                func_80054904_55504(temp_s2->unkA, j + 2, j * 0x12 + 3, 5);
                                break;
                        }
                    }
                } else {
                    func_80054904_55504(temp_s2->unkA, 2, 0x12, 0);
                }
            }
        }
    }
    
    for (var_f20 = 0.0f; var_f20 <= 90.0f; var_f20 += 15.0f) {
        for (i = 0; i < 4; i++) {
            if (arg0 == -1 || arg0 == i) {
                func_800F6AD0_10A6F0_shared_board(i, HuMathCos(var_f20), 1.0f);
            }            
        }
        HuPrcVSleep();
    }
    for (i = 0; i < 4; i++) {
        if (arg0 == -1 || arg0 == i) {
            func_800F6AD0_10A6F0_shared_board(i, 0.0f, 0);
        }
    }
    HuPrcVSleep();
}

void func_800F6E4C_10AA6C_shared_board(s32 arg0, s32 arg1, s32* arg2, s32* arg3) {
    s32 temp;
    
    if (arg0 == CUR_PLAYER) {
        arg0 = GwSystem.current_player_index;
    }

    *arg2 = D_80101794_1153B4_shared_board[arg0][0] + 0x38;
    *arg3 = D_80101794_1153B4_shared_board[arg0][1] + 0x13;

    temp = *arg2 + 3;
    temp = (arg1 * 18) + temp;
    *arg2 = temp;
    if (arg1 == 1) {
        *arg3 = *arg3 - 5;
    } else {
        *arg3 = *arg3 + 5;
    }
}

void func_800F6ECC_10AAEC_shared_board(s32 arg0) {
    s32 sp10;
    s32 sp14;
    BoardStatus* temp_s2;
    f32 var_f20;
    s32 i, j;
    
    for (var_f20 = 90.0f; var_f20 >= 0.0f; var_f20 -= 15.0f) {
        for (i = 0; i < 4; i++) {
            if (arg0 == -1 || arg0 == i) {
                func_800F6AD0_10A6F0_shared_board(i, HuMathCos(var_f20), 1.0f);
            }            
        }
        HuPrcVSleep();
    }

    for (i = 0; i < 4; i++) {
        if (arg0 == -1 || arg0 == i) {
            func_800F6AD0_10A6F0_shared_board(i, 1.0f, 1.0f);
            temp_s2 = &D_801057E0_119400_shared_board[i];
            if (temp_s2->unk_00 == 1) {
                func_800F6A88_10A6A8_shared_board(temp_s2->unkA, 0);
                sp10 = D_80101794_1153B4_shared_board[i][0] + 0x38;
                sp14 = D_80101794_1153B4_shared_board[i][1] + 0x13;
                func_80054904_55504(temp_s2->unkA, 1, sp10, sp14);
                if (GwPlayer[i].items[0] != -1) {
                    for (j = 0; j < 3; j++) {
                        func_800F6E4C_10AA6C_shared_board(i, j, &sp10, &sp14);
                        func_80054904_55504(temp_s2->unkA, j + 2, sp10, sp14);
                    }
                } else {
                    func_80054904_55504(temp_s2->unkA, 2, (sp10 + 0x12), sp14);
                }
            }
        }
    }
    HuPrcVSleep();
}

void func_800F70F8_10AD18_shared_board(void) {
    D_80101790_1153B0_shared_board = 1;
}

void func_800F7108_10AD28_shared_board(void) {
    D_80101790_1153B0_shared_board = 0;
}

void func_800F7114_10AD34_shared_board(s32 arg0, s32 arg1) {
    D_80101788_1153A8_shared_board = arg0;
    D_8010178C_1153AC_shared_board = arg1;
}