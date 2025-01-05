#include "common.h"

extern u16 D_80106702_468332_name_66;
extern s32 fontcolor;
s32 print8(u16 x, u16 y, char* src);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_66_name/4675D0", func_801059A0_4675D0_name_66);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_66_name/4675D0", func_801059D0_467600_name_66);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_66_name/4675D0", func_80105A98_4676C8_name_66);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_66_name/4675D0", func_80105BB4_4677E4_name_66);

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

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_66_name/4675D0", func_80106108_467D38_name_66);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_66_name/4675D0", func_80106134_467D64_name_66);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_66_name/4675D0", func_801062A0_467ED0_name_66);
