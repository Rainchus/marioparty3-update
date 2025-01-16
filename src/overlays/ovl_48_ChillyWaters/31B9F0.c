#include "ChillyWaters.h"

// Get toad space index for current start space index.
s16 func_80105E80_31B9F0_ChillyWaters(void) {
    return D_8011D2C0_332E30_ChillyWaters[GwSystem.star_spawn_indices[GwSystem.current_star_spawn]];
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80105EA8_31BA18_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80105FB0_31BB20_ChillyWaters);

void func_8010603C_31BBAC_ChillyWaters(void) {
    GW_SYSTEM* system = &GwSystem;
    s32 i;
    for (i = 0; i < ARRAY_COUNT(D_8011D2A0_332E10_ChillyWaters); i++) {
        GWBoardFlagSet(D_8011D2A0_332E10_ChillyWaters[i]);
    }

    SetSpaceType(D_8011D2B0_332E20_ChillyWaters[system->star_spawn_indices[system->current_star_spawn]], 0xE);
    GWBoardFlagClear(D_8011D2A0_332E10_ChillyWaters[system->star_spawn_indices[system->current_star_spawn]]);
}


INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801060E0_31BC50_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80106154_31BCC4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80106544_31C0B4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801065D0_31C140_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010698C_31C4FC_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80106EEC_31CA5C_ChillyWaters);

// View board map
void func_80106F60_31CAD0_ChillyWaters(void) {
    D_800CDD58_CE958 = 1;
    D_800D037C_D0F7C = 0;
    omPrcSetStatBit(HuPrcCurrentGet(), 0x80);
    func_8010067C_11429C_shared_board(GwPlayer[GwSystem.current_player_index].pad);
    omPrcResetStatBit(HuPrcCurrentGet(), 0x80);
    D_800CDD58_CE958 = 0;
    D_800D037C_D0F7C = 1;
}

// Exit the board map?
void func_80106FE8_31CB58_ChillyWaters(void) {
    D_800D037C_D0F7C = 0;
    omPrcSetStatBit(HuPrcCurrentGet(), 0x80);
    func_8010067C_11429C_shared_board(GwPlayer[GwSystem.current_player_index].pad);
    D_800D037C_D0F7C = 1;
}

// setup arrows used during player direction decisions.
void func_80107044_31CBB4_ChillyWaters(void) {
    while (func_800E9AE0_FD700_shared_board() != 0) {
        HuPrcVSleep();
    }
    HuPrcVSleep();
    D_8011FAC0_335630_ChillyWaters = func_800E210C_F5D2C_shared_board(0, 0x92, 1);
    D_8011FAC4_335634_ChillyWaters = func_800E210C_F5D2C_shared_board(1, 0xA0, 1);
    D_8011FAD0_335640_ChillyWaters = func_800E210C_F5D2C_shared_board(0xD, 0xAE, 1);
    D_8011FAC8_335638_ChillyWaters = func_800E210C_F5D2C_shared_board(3, 0xBC, 1);
    D_8011FACC_33563C_ChillyWaters = func_800E210C_F5D2C_shared_board(0xB, 0xCA, 1);
    HuPrcSleep(3);
    D_800CDD58_CE958 = 1;
    D_800D51F8_D5DF8 = 1;
}

// teardown arrows
void func_80107114_31CC84_ChillyWaters(void) {
    D_800CDD58_CE958 = 0;
    D_800D51F8_D5DF8 = 0;
    func_800E21F4_F5E14_shared_board(D_8011FAC0_335630_ChillyWaters);
    func_800E21F4_F5E14_shared_board(D_8011FAC4_335634_ChillyWaters);
    func_800E21F4_F5E14_shared_board(D_8011FAD0_335640_ChillyWaters);
    func_800E21F4_F5E14_shared_board(D_8011FAC8_335638_ChillyWaters);
    func_800E21F4_F5E14_shared_board(D_8011FACC_33563C_ChillyWaters);
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80107174_31CCE4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80107408_31CF78_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80107620_31D190_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80107750_31D2C0_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801078E8_31D458_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80107BB4_31D724_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80107BD4_31D744_ChillyWaters);

//entrypoint 0
void func_80107BF4_31D764_ChillyWaters(void) {
    GwSystem.current_board_index = 0;
    omInitObjMan(10, 0);
    omOvlGotoEx(0x47, 0, 0x192);
}

//entrypoint 1
void func_80107C2C_31D79C_ChillyWaters(void) {
    omInitObjMan(0xA, 0);
    func_800ED91C_10153C_shared_board(0, 0, 0);
    func_800ED91C_10153C_shared_board(1, 0, 0);
    func_800ED91C_10153C_shared_board(2, 0, 0);
    func_800ED91C_10153C_shared_board(3, 0, 0);
    GWBoardFlagSet(3);
    func_80105EA8_31BA18_ChillyWaters();
    GWBoardFlagClear(0x12);
    GwSystem.bank_coins = 0;
    GwSystem.slow_dice_flags = 0;
    GwSystem.unk_54 = 0;
    GwSystem.boardData.halfWordBytes[1] = 0;
    omOvlReturnEx(1);
}

void func_80107CC4_31D834_ChillyWaters(void) {
    Vec sp10;
    SpaceData* space;
    s32 i;

    omInitObjMan(0xA0, 0x28);
    HmfLightColorSet(1, 0xFF, 0xFF, 0xFF);
    HmfLightColorSet(2, 0xC8, 0xC8, 0xC8);
    func_800F89D0_10C5F0_shared_board(3, 0x23A, 5, 0);
    func_800EBCFC_FF91C_shared_board(&D_8011D31C_332E8C_ChillyWaters);
    func_800EBD54_FF974_shared_board(&D_8011D320_332E90_ChillyWaters);
    space = GetSpaceData(0x77);
    func_800ECB58_100778_shared_board(&space->coords, &GetSpaceData(0x73)->coords, &sp10);
    func_800EA660_FE280_shared_board(func_800D8790_EC3B0_shared_board(&sp10) + 180.0f);
    space = GetSpaceData(0x7C);
    func_800ECB58_100778_shared_board(&space->coords, &GetSpaceData(0x6E)->coords, &sp10);
    func_800EA660_FE280_shared_board(func_800D8790_EC3B0_shared_board(&sp10) + 180.0f);
    space = GetSpaceData(0x8F);
    func_800ECB58_100778_shared_board(&space->coords, &GetSpaceData(0x80)->coords, &sp10);
    func_800EA660_FE280_shared_board(func_800D8790_EC3B0_shared_board(&sp10) + 180.0f);
    func_800E2960_F6580_shared_board(0, &func_8010DE7C_3239EC_ChillyWaters);
    func_800E2960_F6580_shared_board(1, &func_8010F2FC_324E6C_ChillyWaters);
    func_800E2960_F6580_shared_board(9, &func_8010F6C4_325234_ChillyWaters);
    func_800E2960_F6580_shared_board(2, &func_8010F730_3252A0_ChillyWaters);
    func_800E2960_F6580_shared_board(3, &func_80117C60_32D7D0_ChillyWaters);
    func_800E2960_F6580_shared_board(4, &func_8011093C_3264AC_ChillyWaters);
    func_800E2960_F6580_shared_board(5, &func_80110BC8_326738_ChillyWaters);
    func_800E2960_F6580_shared_board(6, &func_8010FC24_325794_ChillyWaters);
    func_800E2960_F6580_shared_board(7, &func_80110194_325D04_ChillyWaters);
    func_800E2960_F6580_shared_board(8, &func_801104E0_326050_ChillyWaters);
    func_800E2960_F6580_shared_board(0xA, &func_80116F5C_32CACC_ChillyWaters);
    func_800E2960_F6580_shared_board(0xB, &func_801177DC_32D34C_ChillyWaters);
    func_800E2960_F6580_shared_board(0xE, &func_80111018_326B88_ChillyWaters);
    func_800E2960_F6580_shared_board(0xF, &func_801112D8_326E48_ChillyWaters);
    func_800E2960_F6580_shared_board(0x10, &func_80111678_3271E8_ChillyWaters);
    func_800E2960_F6580_shared_board(0x11, &func_80112074_327BE4_ChillyWaters);
    func_800E2960_F6580_shared_board(0x12, &func_80112BCC_32873C_ChillyWaters);
    func_800E2960_F6580_shared_board(0x13, &func_801138E4_329454_ChillyWaters);
    func_800E2960_F6580_shared_board(0x14, &func_80114B80_32A6F0_ChillyWaters);
    func_800E2960_F6580_shared_board(0x15, &func_80115B80_32B6F0_ChillyWaters);
    func_800E2960_F6580_shared_board(0xC, &func_80116DAC_32C91C_ChillyWaters);
    func_800E2960_F6580_shared_board(0xD, &func_801176A4_32D214_ChillyWaters);
    func_800DA748_EE368_shared_board(&func_8011C88C_3323FC_ChillyWaters);

    for (i = 0; i < ARRAY_COUNT(D_8011D2C0_332E30_ChillyWaters); i++) {
        func_800EA6E0_FE300_shared_board(i, D_8011D2C0_332E30_ChillyWaters[i]);
    }

    if (GWBoardFlagCheck(0xE) != 0) {
        GWBoardFlagClear(0xE);
        func_80105FB0_31BB20_ChillyWaters();
    }

    func_8010603C_31BBAC_ChillyWaters();
    func_80108250_31DDC0_ChillyWaters();
    func_8010841C_31DF8C_ChillyWaters();
    func_801086E0_31E250_ChillyWaters();
    func_801088B4_31E424_ChillyWaters();
    func_80108B24_31E694_ChillyWaters();
    func_80108BA4_31E714_ChillyWaters();
    func_80116AA0_32C610_ChillyWaters();
    func_800EBDAC_FF9CC_shared_board();
    omAddPrcObj(func_80118B7C_32E6EC_ChillyWaters, 0x4800, 0, 0);
}

//entrypoint 2
void func_80108014_31DB84_ChillyWaters(void) {
    HuAudSeqPlay(0x18);
    D_800CE194_CED94[2] = 0x18;
    func_800F8D6C_10C98C_shared_board(0x18);
    Hu3DCamInit(2);
    func_80107CC4_31D834_ChillyWaters();
    func_800EBA60_FF680_shared_board(&D_8011E2CC_333E3C_ChillyWaters);
    func_800EBA60_FF680_shared_board(&D_8011E718_334288_ChillyWaters);
    func_800F8D48_10C968_shared_board(&func_8011A8D8_330448_ChillyWaters);
    func_800EBA60_FF680_shared_board(&D_8011E344_333EB4_ChillyWaters);
    func_800EBA60_FF680_shared_board(&D_8011E4D8_334048_ChillyWaters);
    func_800FF41C_11303C_shared_board(0);
}

//entrypoint 3
void func_80108098_31DC08_ChillyWaters(void) {
    Hu3DCamInit(1);
    func_80107CC4_31D834_ChillyWaters();
    func_800FF41C_11303C_shared_board(1);
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801080C4_31DC34_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801081EC_31DD5C_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80108250_31DDC0_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801082FC_31DE6C_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010841C_31DF8C_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80108478_31DFE8_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80108574_31E0E4_ChillyWaters);

void func_801086E0_31E250_ChillyWaters(void) {
    s32 i;

    D_8011FB10_335680_ChillyWaters = 0;
    for (i = 0; i < ARRAY_COUNT(D_8011FB18_335688_ChillyWaters); i++) {
        D_8011FB18_335688_ChillyWaters[i] = 0;
        func_80108574_31E0E4_ChillyWaters(i);
    }
    func_80108478_31DFE8_ChillyWaters();
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80108748_31E2B8_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801088B4_31E424_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80108914_31E484_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80108970_31E4E0_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80108A38_31E5A8_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80108AE8_31E658_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80108B24_31E694_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80108BA4_31E714_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80108C1C_31E78C_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80108CA4_31E814_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80108CC8_31E838_ChillyWaters);

void func_80108D28_31E898_ChillyWaters(void) {
    func_80116484_32BFF4_ChillyWaters(&D_8011DA84_3335F4_ChillyWaters, &D_8011DA98_333608_ChillyWaters, &D_8011D578_3330E8_ChillyWaters);
    omDelPrcObj(0);
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80108D60_31E8D0_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80108D98_31E908_ChillyWaters);

void func_80108DD0_31E940_ChillyWaters(void) {
    GW_PLAYER* player;

    player = GetPlayerStruct(CUR_PLAYER);
    if ((func_800EB184_FEDA4_shared_board(player->blink, player->bidx) == 0x4B) && !(player->rev & 0x80)) {
        func_800ED998_1015B8_shared_board(-1, 0xA, 0);
        player->rev &= ~1;
    } else {
        func_80116484_32BFF4_ChillyWaters(D_8011DB5C_3336CC_ChillyWaters, D_8011DB70_3336E0_ChillyWaters, D_8011D77C_3332EC_ChillyWaters);
    }
    omDelPrcObj(0);
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80108E80_31E9F0_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109390_31EF00_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801093C8_31EF38_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109400_31EF70_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109430_31EFA0_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109474_31EFE4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801094A4_31F014_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801094E8_31F058_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109518_31F088_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010955C_31F0CC_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010958C_31F0FC_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801095D0_31F140_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109600_31F170_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109644_31F1B4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109674_31F1E4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801096B8_31F228_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109718_31F288_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010973C_31F2AC_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109760_31F2D0_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109784_31F2F4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801097E4_31F354_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109808_31F378_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010982C_31F39C_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109850_31F3C0_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109874_31F3E4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801098D4_31F444_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801098F8_31F468_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010991C_31F48C_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109940_31F4B0_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109964_31F4D4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109988_31F4F8_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801099AC_31F51C_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801099D0_31F540_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801099F4_31F564_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109A28_31F598_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109A6C_31F5DC_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109A90_31F600_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109AB4_31F624_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109AD8_31F648_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109E84_31F9F4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109EB4_31FA24_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109EF8_31FA68_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80109F54_31FAC4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010A068_31FBD8_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010A098_31FC08_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010A134_31FCA4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010A3B8_31FF28_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010A474_31FFE4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010A4B4_320024_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010A860_3203D0_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010B394_320F04_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010B41C_320F8C_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010B484_320FF4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010B65C_3211CC_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010C914_322484_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010C9B4_322524_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010CA54_3225C4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010CE9C_322A0C_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010CEC0_322A30_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010DCEC_32385C_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010DE40_3239B0_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010DE7C_3239EC_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010F050_324BC0_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010F06C_324BDC_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010F088_324BF8_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010F1E4_324D54_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010F2FC_324E6C_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010F6C4_325234_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010F730_3252A0_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010F8F0_325460_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010FB54_3256C4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010FC24_325794_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8010FE54_3259C4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80110024_325B94_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80110194_325D04_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801104E0_326050_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801106A4_326214_ChillyWaters);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", D_8011F940_3354B0_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011093C_3264AC_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80110BC8_326738_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80110E08_326978_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80111018_326B88_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801112D8_326E48_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80111678_3271E8_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80112074_327BE4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801125BC_32812C_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801127D8_328348_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80112BCC_32873C_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80112C88_3287F8_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80112DDC_32894C_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80112E18_328988_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80112FA8_328B18_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80113364_328ED4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801135FC_32916C_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80113708_329278_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801138E4_329454_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80114590_32A100_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80114650_32A1C0_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80114B80_32A6F0_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011548C_32AFFC_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801155C4_32B134_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80115734_32B2A4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801158FC_32B46C_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80115B80_32B6F0_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80116484_32BFF4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011667C_32C1EC_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801166F4_32C264_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80116758_32C2C8_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80116904_32C474_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80116A04_32C574_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80116AA0_32C610_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80116BA0_32C710_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80116DAC_32C91C_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80116F0C_32CA7C_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80116F5C_32CACC_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801174D4_32D044_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801176A4_32D214_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_801177DC_32D34C_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80117C60_32D7D0_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80118308_32DE78_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80118A98_32E608_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80118AE8_32E658_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80118B7C_32E6EC_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80118D6C_32E8DC_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80118E2C_32E99C_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80118EEC_32EA5C_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80119924_32F494_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80119A20_32F590_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80119A60_32F5D0_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80119B3C_32F6AC_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80119C54_32F7C4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_80119D08_32F878_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011A764_3302D4_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011A794_330304_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011A838_3303A8_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011A8B8_330428_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011A8D8_330448_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011B9A0_331510_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011BBA4_331714_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011BD48_3318B8_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011BD8C_3318FC_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011BF3C_331AAC_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011C470_331FE0_ChillyWaters);

//entrypoint 4
INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011C58C_3320FC_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011C5E0_332150_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011C68C_3321FC_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011C750_3322C0_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011C7A4_332314_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011C88C_3323FC_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011CE94_332A04_ChillyWaters);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_48_ChillyWaters/31B9F0", func_8011D1F8_332D68_ChillyWaters);
