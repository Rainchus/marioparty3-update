#ifndef _PLAYER_H
#define _PLAYER_H

#include "common.h"
#include "process.h"
#include "math.h"

#define MAX_PLAYERS 4
#define ARRAY_COUNT(arr) (s32)(sizeof(arr) / sizeof(arr[0]))

#define    OS_K0_TO_PHYSICAL(x)    (u32)(((char *)(x)-0x80000000))
#define    OS_PHYSICAL_TO_K0(x)    (void *)(((u32)(x)+0x80000000))

typedef struct objectt {
    /*0x00*/ struct objectt *prev;
    /*0x04*/ struct objectt *next;
    /*0x08*/ u8 unk8;
    /*0x09*/ s8 unk9;
    /*0x0A*/ u16 unkA;

    /*0x0C*/ Vec coords;

    // Three Vec groups (Scale?, Rotation?, Position?)
    f32 unk18; // Rotation?
    f32 unk1C;
    f32 unk20;

    f32 unk24; // Scale?
    f32 unk28;
    f32 unk2C;

    f32 unk30;
    f32 unk34;
    f32 unk38;

    struct objectIndirectt *unk3C;
    struct objectIndirectt *unk40;
    s16 unk44;
    s16 unk46;
} object;

struct objectIndirectt {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    s32 unk10;

    void *unk14;

    // Three Vec groups (Scale?, Rotation?, Position?)
    f32 unk18;
    f32 unk1C;
    f32 unk20;

    f32 unk24; // Rotation?
    f32 unk28;
    f32 unk2C;

    f32 unk30;
    f32 unk34;
    f32 unk38;

    u16 unk3C; // count of unk40
    s16 *unk40;
    u16 unk44; // count of unk48
    s16 *unk48;

    s32 unk4C;
    s32 unk50;
    s32 unk54;
    s32 unk58;
    struct objectIndirect3t *unk5C;
}; // sizeof 0x60

typedef struct objectIndirect3t {
    struct objectt *unk0;
    f32 unk4;
} objectIndirect3;

typedef struct GwPlayer_s {
    /*  0 (0x00) 800D1108 */ s8 id;
    /*  1 (0x01) 800D1109 */ s8 cpuDifficulty;
    /*  2 (0x02) 800D110A */ u8 controller;
    /*  3 (0x03) 800D110B */ u8 character;

    /**
     * Player flags.
     * 1: Is CPU player
     * 4: ?
     */
    /*  4 (0x04) 800D110C */ u8 flags;
    /*  5 (0x05) 800D110D */ s8 pad5[1];

    /** Coins collected in a mini-game. */
    /*  6 (0x06) 800D110E */ s16 bonusCoins;
    /** Coins from mini-game wins. */
    /*  8 (0x08) 800D1110 */ s16 coinsWon;
    /** Current coin count. */
    /* 10 (0x0A) 800D1112 */ s16 coins;
    /** Coins obtained during a Mini-Game. */
    /* 12 (0x0C) 800D1114 */ s16 minigameCoins;
    /* 14 (0x0E) 800D1116 */ s8 stars;

    /* 15 (0x0F) 800D1117 */ u8 curChainIndex;
    /* 16 (0x10) 800D1118 */ u8 curSpaceIndex;
    /* 17 (0x11) 800D1119 */ u8 nextChainIndex;
    /* 18 (0x12) 800D111A */ u8 nextSpaceIndex;
    /* 19 (0x13) 800D111B */ s8 unk1ChainIndex;
    /* 20 (0x14) 800D111C */ s8 unk1SpaceIndex;
    /* 21 (0x15) 800D111D */ s8 reverseChainIndex;
    /* 22 (0x16) 800D111E */ s8 reverseSpaceIndex;

    /**
     * Movement flags.
     * 1: Is moving in reverse.
     */
    /* 23 (0x17) 800D111F */ u8 flags2;
    /* 24 (0x18) 800D1120 */ s8 items[3];
    /* 27 (0x1B) 800D1123 */ s8 bowserSuitFlag;
    /* 28 (0x1C) 800D1124 */ u8 turnColorStatus;
    /* 29 (0x1D) 800D1125 */ s8 unk1D;

    s8 unks1E1F[2]; // 20 - 31

    /* 32 (0x20) 800D1128 */ Process*process;
    /* 36 (0x24) 800D112C */ struct objectt *obj;
    /* 40 (0x28) 800D1130 */ s16 minigameStar;
    /* 42 (0x2A) 800D1132 */ s16 maxCoins;
    /* 44 (0x2C) 800D1134 */ s8 happeningSpaceCount;
    s8 redSpaceCount;
    s8 blueSpaceCount;
    s8 chanceSpaceCount;
    /* 48 (0x30) 800D1138 */ s8 bowserSpaceCount;
    s8 battleSpaceCount;
    s8 itemSpaceCount;
    s8 bankSpaceCount;
    /* 52 (0x34) 800D113C */ s8 gameGuySpaceCount;
    s8 unk35;

    // s8 pad2[3];
} GWPLAYER __attribute__((aligned(4))); //sizeof 0x38

typedef struct SpaceData {
/* 0x00 */ s8 unk_00;
/* 0x01 */ u8 space_type; // enum board_space_type
/* 0x02 */ s16 unk_02;
/* 0x04 */ s32 unk_04;
/* 0x08 */ Vec coords;
/* 0x14 */ Vec rot;
/* 0x20 */ void* event_list;
} SpaceData;

typedef struct omOvlHisData { //Object Manager History Data
/* 0x00 */ s32 overlayID;
/* 0x04 */ s16 event;
/* 0x06 */ u16 stat;
} omOvlHisData; //sizeof 0x08

typedef struct GW_SYSTEM {
    /* 0x00 - 800CD058 */ s8 playMode; //0x01 - Lite Play pause screen, 0x04 - Story Play pause screen
    /* 0x01 - 800CD059 */ s8 current_board_index;
    /* 0x02 - 800CD05A */ s8 total_turns;
    /* 0x03 - 800CD05B */ s8 current_turn;
    /* 0x04 - 800CD05C */ s8 current_game_length; // 00=Lite Play,01=Standard Play,02=Full Play,03=Custom Play
    /* 0x05 - 800CD05D */ s8 current_star_spawn; // Index of star space (index into star_spawn_indices)
    /* 0x06 - 800CD05E */ s8 star_spawn_indices[7];
    /* 0x0D - 800CD065 */ s8 unk_0D;
    /* 0x0E - 800CD066 */ s8 unk_0E;
    /* 0x0F - 800CD067 */ s8 current_player_index;
    /* 0x10 - 800CD068 */ s8 minigame_index;
    /* 0x11 - 800CD069 */ s8 current_space_index;
    /* 0x12 - 800CD06A */ s8 save_mode; //00 - Save every turn, 01 - Save this turn, 02 - Don't save
    /* 0x13 - 800CD06B */ s8 show_minigame_explanations; //00 - show, 01 - hide
    /* 0x14 - 800CD06C */ s8 message_speed; //00 - Fast, 01 - Normal, 02 - Slow
    /* 0x15 - 800CD06D */ s8 walk_speed; //00 - Fast, 01 - Normal, 02 - Slow
    /* 0x16 - 800CD06E */ s8 show_com_minigames; //00 - Show COM minigame, 01 - Hide COM minigame
    /* 0x17 - 800CD06F */ char unk_17[0x26]; //unknown
    /* 0x3E - 800CD096 */ s8 board_bytes[0x13]; //bytes related to storing information for each board
    /* 0x51 - 800CD0A9 */ u8 cur_player_used_item; //1 if player already used an item this turn
    /* 0x52 - 800CD0AA */ char unk_52[5];
    /* 0x57 - 800CD0AF */ s8 slow_dice_flags;
    /* 0x58 - 800CD0B0 */ char unk_58[4];
    /* 0x5C - 800CD0B4 */ u16 bank_coins;
    /* 0x5E - 800CD0B6 */ u8 data_flags[8]; //unknown what this is, unknown size
    /* 0x66 - 800CD0B8 */ u8 unk_66[0x3E];
} GW_SYSTEM; //sizeof 0xA4

typedef struct GwCommon_s {
/* 0x00 */ u8 unk_00;
/* 0x01 */ char unk_01;
/* 0x02 */ u16 mgRecord[8]; //is this still 8 in length like mp1?
/* 0x12 */ char unk_12[4];
/* 0x16 */ u8 mgUnlock[7]; //is this still 7 in length like mp1?
/* 0x1D */ char unk_1D[0x6E];
/* 0x8B */ u8 flag[12]; //is this still 12 in length like mp1?
/* 0x97 */ char unk_9D[0xD];
} GW_COMMON; //sizeof 0xA4?

typedef struct GW_STORY {
    char unk_00[0x74];
} GW_STORY;

typedef struct RectF {
/* 0x00 */ f32 x1;
/* 0x04 */ f32 y1;
/* 0x08 */ f32 x2;
/* 0x0C */ f32 y2;
} RectF; //sizeof 0x10

#endif
