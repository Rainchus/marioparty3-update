#include "common.h"

//screen dimensions
RectF D_801066F0_468320_name_66 = {0.0f, 0.0f, SCREEN_WIDTH, SCREEN_HEIGHT};
s16 D_80106700_468330_name_66 = 0;
u16 D_80106702_468332_name_66 = 16;

extern s32 fontcolor;
extern char D_800D5218_D5E18[];
extern u8 D_801068C0_4684F0_name_66[0x200];
extern u16 D_800D5558_D6158;
extern u16 D_800D530C_D5F0C;

void func_80106108_467D38_name_66(omObjData*);
void func_80106134_467D64_name_66(void);
void func_80105C6C_46789C_name_66(s16 arg0);
void func_801062A0_467ED0_name_66(void);

void func_801059D0_467600_name_66(void) {
    omInitObjMan(0xA, 0xA);
    func_8004A208_4AE08();
    Hu3DCamInit(1);
    CameraScissorSet(0, &D_801066F0_468320_name_66);
    HmfLightMaxSet(1);
    HmfLightColorSet(0, 0x78, 0x78, 0x78);
    HmfLightColorSet(1, 0x40, 0x40, 0x60);
    HmfLightDirSet(1, -100.0f, 100.0f, 100.0f);
    omAddPrcObj(func_80106134_467D64_name_66, 0xE000, 0, 0);
    omAddObj(0x500, 0, 0, -1, func_80106108_467D38_name_66);
    WipeCreateIn(0, 0);
}

void func_80105A98_4676C8_name_66(void) {
    s32 var_s2;
    s32 i, j;

    var_s2 = D_80106700_468330_name_66;
    fontcolor = 0xF;
    
    for (i = 0; i < 16 && (i * 8) < ARRAY_COUNT(D_801068C0_4684F0_name_66); i++) {
        sprintf(D_800D5218_D5E18, "%3X:", var_s2);
        print8(0x28, ((i * 0xA) + 0x30), D_800D5218_D5E18);
        for (j = 0; j < 8; j++) {
            sprintf(D_800D5218_D5E18, "%02X", D_801068C0_4684F0_name_66[var_s2 + j]);
            print8(((j * 0x18) + 0x50), ((i * 0xA) + 0x30), D_800D5218_D5E18);
        }
        var_s2 += 8;
    }
}

void func_80105BB4_4677E4_name_66(void) {
    s16 var_s1;
    s16 i;

    var_s1 = 0;
    SLCurBoxNoSet(0);
    func_80050974_51574();
    while (1) {
        HuPrcVSleep();
        if (D_800D5558_D6158 & 0x8000) {
            var_s1 = (var_s1 == 0) ? 2 : 0;
        }
        D_80106702_468332_name_66 = 0x10; //set Y position of text beginning

        for (i = var_s1; i < var_s1 + 2; i++) {
            func_80105C6C_46789C_name_66(i);
        }        
    }
}

void func_80105C6C_46789C_name_66(s16 arg0) {
    char buffer[256];

    fontcolor = 0xA;
    sprintf(buffer, "PLAYER%d", arg0);
    print8(0x18, D_80106702_468332_name_66, buffer);
    D_80106702_468332_name_66 += 8;
    fontcolor = 0xF;
    sprintf(buffer, "PAD:%2X,CHR:%2X,STAT:%2x,GCOIN:%4X", GwPlayer[arg0].pad, GwPlayer[arg0].chr, GwPlayer[arg0].stat, GwPlayer[arg0].gameCoin);
    print8(0x18, D_80106702_468332_name_66, buffer);
    D_80106702_468332_name_66 += 8;
    sprintf(buffer, "BCOIN:%4X,COIN:%4X,CCOIN:%4x", GwPlayer[arg0].bonusCoin, GwPlayer[arg0].coin, GwPlayer[arg0].checkCoin);
    print8(0x18, D_80106702_468332_name_66, buffer);
    D_80106702_468332_name_66 += 8;
    sprintf(buffer, "STAR:%2X,CLINK:%2X,CIDX:%2x,NLINK:%2X", GwPlayer[arg0].star, GwPlayer[arg0].clink, GwPlayer[arg0].cidx, GwPlayer[arg0].nlink);
    print8(0x18, D_80106702_468332_name_66, buffer);
    D_80106702_468332_name_66 += 8;
    sprintf(buffer, "NIDX:%2X,NNLINK:%2X,NNIDX:%2X,BLINK:%2X", GwPlayer[arg0].nidx, GwPlayer[arg0].nnlink, GwPlayer[arg0].nnidx, GwPlayer[arg0].blink);
    print8(0x18, D_80106702_468332_name_66, buffer);
    D_80106702_468332_name_66 += 8;
    sprintf(buffer, "BIDX:%2X,REV:%2X,ITEM0#%2d,ITEM1#%2d", GwPlayer[arg0].bidx, GwPlayer[arg0].rev, GwPlayer[arg0].itemNo[0], GwPlayer[arg0].itemNo[1]);
    print8(0x18, D_80106702_468332_name_66, buffer);
    D_80106702_468332_name_66 += 8;
    sprintf(buffer, "ITEM2#%2d,ITURN:%2X,COL:%2X,TURN:%2X", GwPlayer[arg0].itemNo[2], GwPlayer[arg0].itemTurn, GwPlayer[arg0].color, GwPlayer[arg0].turn);
    print8(0x18, D_80106702_468332_name_66, buffer);
    D_80106702_468332_name_66 += 8;
    sprintf(buffer, "GPRZ:%4X,CPRZ:%4X,HPRZ:%4X", GwPlayer[arg0].gamePrize, GwPlayer[arg0].coinPrize, GwPlayer[arg0].hatenaPrize);
    print8(0x18, D_80106702_468332_name_66, buffer);
    D_80106702_468332_name_66 += 8;
    sprintf(buffer, "RPRZ:%2X,BPRZ:%2X,EPRZ:%2X,KPRZ:%2X", GwPlayer[arg0].redPrize, GwPlayer[arg0].bluePrize, GwPlayer[arg0].eventPrize, GwPlayer[arg0].kupaPrize);
    print8(0x18, D_80106702_468332_name_66, buffer);
    D_80106702_468332_name_66 += 8;
    sprintf(buffer, "BTLPRZ:%2X,IPRZ:%2X,BNKPRZ:%2X", GwPlayer[arg0].battlePrize, GwPlayer[arg0].itemPrize, GwPlayer[arg0].bankPrize);
    print8(0x18, D_80106702_468332_name_66, buffer);
    D_80106702_468332_name_66 += 8;
    sprintf(buffer, "GBPRZ#%2d,DUEL#%2d", GwPlayer[arg0].gamblePrize, GwPlayer[arg0].duelNo);
    print8(0x18, D_80106702_468332_name_66, buffer);
    D_80106702_468332_name_66 += 8;
}

void func_80106108_467D38_name_66(omObjData* arg0) {
    if (D_800D530C_D5F0C != 0) {
        omOvlReturnEx(1);
    }
}

void func_80106134_467D64_name_66(void) {
    s16 i, j;

    SLCurBoxNoSet(0);
    func_80050ABC_516BC();
    while (1) {
        HuPrcVSleep();
        func_801062A0_467ED0_name_66();
        if (D_800D5558_D6158 & 0x8000) {
            for (j = 0; j < 12; j++) {
                GwStory.unk3[j] = 0;
            }
            for (i = 0; i < 6; i++) {
                for (j = 0; j < 12; j++) {
                    GwStory.unk10[i][j] = 0;
                }
            }
            for (j = 0; j < 6; j++) {
                GwStory.unk58[j] = 0;
            }
            for (j = 0; j < 6; j++) {
                GwStory.unk5E[j] = 0;
            }
            func_8005035C_50F5C(1);
        }
        D_80106702_468332_name_66 = 0x10; //reset text Y position
    }
}

void func_801062A0_467ED0_name_66(void) {
    char sp18[0x120];
    s16 i, j;
    
    fontcolor = 0xF;
    sprintf(sp18, "INDEX:%2X,CHR:%2X,DIF:%2X,LAST:%2X", GwStory.unk0, GwStory.unk1, GwStory.unk2, GwStory.unkF);
    print8(0x18, D_80106702_468332_name_66, sp18);
    D_80106702_468332_name_66 += 8;
    print8(0x18, D_80106702_468332_name_66, "SC:");
    for (j = 0; j < 6; j++) {
        sprintf(sp18, "%2X", GwStory.unk3[j]);
        print8(((j * 0x14) + 0x30), D_80106702_468332_name_66, sp18);
    }

    D_80106702_468332_name_66 += 8;

    for (j = 0; j < 6; j++) {
        sprintf(sp18, "%2X", GwStory.unk3[j + 6]);
        print8(((j * 0x14) + 0x30), D_80106702_468332_name_66, sp18);
    }
    
    D_80106702_468332_name_66 += 8;
    print8(0x18, D_80106702_468332_name_66, "HS:");
    
    for (i = 0; i < ARRAY_COUNT(GwStory.unk10); i++) {
        for (j = 0; j < 6; j++) {
            sprintf(sp18, "%2X", GwStory.unk10[i][j]);
            print8(((j * 0x14) + 0x30), D_80106702_468332_name_66, sp18);
        }

        D_80106702_468332_name_66 += 8;

        for (j = 0; j < 6; j++) {
            sprintf(sp18, "%2X", GwStory.unk10[i][j + 6]);
            print8(((j * 0x14) + 0x30), D_80106702_468332_name_66, sp18);       
        }

        D_80106702_468332_name_66 += 8;
    }

    print8(0x18, D_80106702_468332_name_66, "HL:");

    for (j = 0; j < ARRAY_COUNT(GwStory.unk58); j++) {
        sprintf(sp18, "%2X", GwStory.unk58[j]);
        print8(((j * 0x14) + 0x30), D_80106702_468332_name_66, sp18);        
    }

    D_80106702_468332_name_66 += 8;

    print8(0x18, D_80106702_468332_name_66, "HD:");

    for (j = 0; j < ARRAY_COUNT(GwStory.unk5E); j++) {
        sprintf(sp18, "%2X", GwStory.unk5E[j]);
        print8(((j * 0x14) + 0x30), D_80106702_468332_name_66, sp18);        
    }

    D_80106702_468332_name_66 += 8;
}
