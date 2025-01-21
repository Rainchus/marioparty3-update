#include "common.h"
#include "ovl_80.h"

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F8610_10C230_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F86B4_10C2D4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F8774_10C394_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F884C_10C46C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F8858_10C478_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F8864_10C484_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F88D0_10C4F0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F88FC_10C51C_shared_board);

void func_800F8908_10C528_shared_board(void) {
    s32* temp_s0 = HuPrcCurrentGet()->user_data;

    while (1) {
        if (
            (func_800F2198_105DB8_shared_board(temp_s0[0]) == 0) && 
            (D_800A12D8 == 0) && 
            ((GwSystem.current_player_index != temp_s0[0]) || (D_800A12D4 == 0)) && 
            (D_800C9520_CA120[GwPlayer[temp_s0[0]].pad] & 0x20)
        ) {
            func_8004ACE0_4B8E0(0x2BD, temp_s0[0]);
        }
        HuPrcVSleep();
    }
}

void func_800F89D0_10C5F0_shared_board(s32 arg0, s16 arg1, void* arg2) {
    Process* temp_v0_2;
    UnkOvl81_1* temp_v0_3;
    u8 playerIndex;
    Object* temp_v0;
    s32 i;
    GW_SYSTEM* system;

    func_800E9EF4_FDB14_shared_board();
    func_800E6630_FA250_shared_board(hvq_data_ROM_START);
    
    if (arg0 >= 0) {
        func_800E69BC_FA5DC_shared_board(arg0);
    }
    
    func_800EA60C_FE22C_shared_board();
    if (arg1 >= 0) {
        func_800EAE10_FEA30_shared_board(0x13, (s32) arg1);
    }
    
    func_800D76D0_EB2F0_shared_board(arg2);
    func_800D8F80_ECBA0_shared_board();
    func_800F26E8_106308_shared_board();
    func_800E63F0_FA010_shared_board();
    func_800F25D8_1061F8_shared_board(0);
    func_800F25D8_1061F8_shared_board(1);
    func_800F25D8_1061F8_shared_board(2);
    func_800F25D8_1061F8_shared_board(3);
    
    for (i = 0; i < MAX_PLAYERS; i++) {
        func_800D9714_ED334_shared_board(GetPlayerStruct(i)->player_obj);
        temp_v0 = GetPlayerStruct(i)->player_obj;
        temp_v0->unkA |= 2;
        func_800D9AA4_ED6C4_shared_board(GetPlayerStruct(i)->player_obj);
    }
    
    system = &GwSystem;
    playerIndex = system->current_player_index;
    if ((playerIndex < 4) && (GwPlayer[system->current_player_index].itemTurn != 0)) {
        func_800E6264_F9E84_shared_board();
        func_800D9B24_ED744_shared_board(GwPlayer[system->current_player_index].player_obj);
    }
    
    func_8001FDE8_209E8(GetPlayerStruct(0)->player_obj->unk3C->model[0]);
    func_8001FDE8_209E8(GetPlayerStruct(1)->player_obj->unk3C->model[0]);
    func_8001FDE8_209E8(GetPlayerStruct(2)->player_obj->unk3C->model[0]);
    func_8001FDE8_209E8(GetPlayerStruct(3)->player_obj->unk3C->model[0]);
    func_800F2A20_106640_shared_board();
    func_800DF854_F3474_shared_board();
    func_800E17B0_F53D0_shared_board();
    func_800E4B60_F8780_shared_board();
    func_800F453C_10815C_shared_board();
    func_800DB5DC_EF1FC_shared_board();
    func_8005A6B0_5B2B0();
    func_800ECAB4_1006D4_shared_board();
    D_80105664_119284_shared_board = -1;
    D_800D1360_D1F60.unk_20 = 0;
    D_80105666_119286_shared_board = 0;
    func_800F27D0_1063F0_shared_board();
    D_80101B64_115784_shared_board = 0;
    D_80101B68_115788_shared_board = 0;
    D_80101B6C_11578C_shared_board = 0;
    func_8004CF30_4DB30();
    
    for (i = 0; i < MAX_PLAYERS; i++) {
        temp_v0_2 = omAddPrcObj(func_800F8908_10C528_shared_board, 0, 0, 0x40);
        temp_v0_3 = HuMemMemoryAlloc(temp_v0_2->heap, sizeof(UnkOvl81_1));
        temp_v0_2->user_data = temp_v0_3;
        temp_v0_3->unk_00 = i;
        omPrcSetStatBit(temp_v0_2, 0xA0);
    }
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F8C74_10C894_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F8D48_10C968_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F8D54_10C974_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F8D60_10C980_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F8D6C_10C98C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F8D78_10C998_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F8D84_10C9A4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F915C_10CD7C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F9168_10CD88_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F9174_10CD94_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F9198_10CDB8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F91A4_10CDC4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F92A0_10CEC0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F933C_10CF5C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F93A4_10CFC4_shared_board);

void func_800F95FC_10D21C_shared_board(s16 arg0) {
    switch (--arg0) {
    case 13:
        if (GwSystem.current_player_index != 4) {
            HuAudFXPlay(0x123);
            return;
        }
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 8:
    case 11:
    case 14:
        HuAudFXPlay(0x101);
        break;
    }
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F965C_10D27C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F96E0_10D300_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F9A68_10D688_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F9C68_10D888_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F9CA0_10D8C0_shared_board);

//related to how CPUs decide who to duel?
s32 func_800F9D1C_10D93C_shared_board(void) {
    s32 i;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 sp10[MAX_PLAYERS];
    GW_SYSTEM* system = &GwSystem;

    for (i = 0, var_s2 = 99; i < MAX_PLAYERS; i++) {
        if ((i != system->current_player_index) && ((GwSystem.unk_58 >> i) & 1) && (BoardPlayerRankCalc(i) < var_s2) && GwPlayer[i].coin != 0) {
            var_s2 = BoardPlayerRankCalc(i);
        }
    }
    
    var_s1 = 0;
    
    for (i = 0; i < MAX_PLAYERS; i++) {
        if ((i != system->current_player_index) && ((GwSystem.unk_58 >> i) & 1) && (BoardPlayerRankCalc(i) == var_s2)) {
            sp10[var_s1] = i;
            var_s1 += 1;
        }        
    }
    
    if (GetPlayerStruct(CUR_PLAYER)->coin >= 20) {
        if (GetPlayerStruct(sp10[0])->coin < 20) {
            for (i = 0, var_s2 = 99, var_s3 = 0; i < MAX_PLAYERS; i++) {
                if ((i != system->current_player_index) && (GetPlayerStruct(i)->coin >= 20)) {
                    var_s3 = 1;
                    if (BoardPlayerRankCalc(i) < var_s2) {
                        var_s2 = BoardPlayerRankCalc(i);
                    }
                }
            }
            
            if (var_s3 != 0) {
                for (i = 0, var_s1 = 0; i < MAX_PLAYERS; i++) {
                    if ((i != system->current_player_index) && ((GwSystem.unk_58 >> i) & 1) && (BoardPlayerRankCalc(i) == var_s2) && GwPlayer[i].coin != 0) {
                        sp10[var_s1] = i;
                        var_s1++;
                    }
                }
            }
        }
    }
    i = sp10[func_800EEF80_102BA0_shared_board(var_s1)];
    if (GwPlayer[i].coin == 0) {
        i = 4;
    }
    return i;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800F9F84_10DBA4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FA104_10DD24_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FA388_10DFA8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FA448_10E068_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FA640_10E260_shared_board);

s16 func_800FA818_10E438_shared_board(s32 arg0) {
    GW_SYSTEM* system =  &GwSystem;
    GW_PLAYER* player;
    s16 temp_s3;
    s32 var_s2;
    s32 i;

    var_s2 = 0;
    if ((system->total_turns - system->current_turn) >= 5) {
        return 0;
    }

    temp_s3 = func_800EB184_FEDA4_shared_board(GetPlayerStruct(CUR_PLAYER)->clink, GetPlayerStruct(CUR_PLAYER)->cidx);
    
    for (i = 0; i < MAX_PLAYERS; i++) {
        if (i != GetPlayerStruct(CUR_PLAYER)->turn) {
            if (temp_s3 == func_800EB184_FEDA4_shared_board(GetPlayerStruct(i)->clink, GetPlayerStruct(i)->cidx)) {
                var_s2 |= 1 << i;
                if (arg0 != 0) {
                    func_800FF900_113520_shared_board(i, 3);
                }
            }
        }    
    }
    return var_s2;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FA95C_10E57C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FAB98_10E7B8_shared_board);

s32 func_800FB578_10F198_shared_board(s32 arg0) {
    s32 var_a1;
    s32 var_a0;
    u32 temp_a2;
    s32 i;
    GW_SYSTEM* system = &GwSystem;

    if (arg0 == CUR_PLAYER) {
        arg0 = system->current_turn;
    }

    temp_a2 = (system->total_turns / 5) - 2;

    if (system->total_turns < arg0) {
        arg0 = system->total_turns;
    }

    if (temp_a2 >= 9) {
        temp_a2 = 0;
    }

    for (i = 0; i < 3; i++) {
        if (D_80101DE8_115A08_shared_board[temp_a2][i] > arg0) {
            break;
        }
    }

    return i;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FB624_10F244_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FC3D0_10FFF0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FC4E0_110100_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FC594_1101B4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FC7C8_1103E8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FC8A4_1104C4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FC938_110558_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FC968_110588_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FC998_1105B8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FC9E0_110600_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FCA14_110634_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FCA4C_11066C_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", D_801025CC_1161EC_shared_board);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", D_801025D0_1161F0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FCA7C_11069C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FF0F8_112D18_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FF158_112D78_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FF41C_11303C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FF75C_11337C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FF788_1133A8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FF794_1133B4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FF7C4_1133E4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FF7F0_113410_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FF800_113420_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FF834_113454_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/10C230", func_800FF840_113460_shared_board);
