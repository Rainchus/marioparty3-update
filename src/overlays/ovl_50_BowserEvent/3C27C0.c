#include "common.h"
#include "../ovl_80_shared_board/ovl_80.h"

void func_8005A6B0_5B2B0(void);
void func_80108D2C_3C5B4C_BowserEvent(void);
void func_80109220_3C6040_BowserEvent(omObjData*);
s32 func_8010926C_3C608C_BowserEvent(void);
s32 func_801092D4_3C60F4_BowserEvent(void);
void func_80107724_3C4544_BowserEvent(void);

extern s16 D_801094F6_3C6316_BowserEvent;
extern s32 D_801094F8_3C6318_BowserEvent;
extern char D_80109508_3C6328_BowserEvent[];
extern u16 D_80109434_3C6254_BowserEvent[2][3][4];
// extern s16 D_80109434_3C6254_BowserEvent[2][3][4] = {
//     {
//         {0x0014, 0x0014, 0x000A, 0x000A},
//         {0x0014, 0x0014, 0x000F, 0x000F},
//         {0x001E, 0x001E, 0x0014, 0x0014}
//     },
//     {
//         {0x000A, 0x000A, 0x0014, 0x0014},
//         {0x0014, 0x0014, 0x001E, 0x001E},
//         {0x001E, 0x001E, 0x0028, 0x0028}
//     }
// };

extern s16 D_80109418_3C6238_BowserEvent[];
extern u8 D_801094F0_3C6310_BowserEvent;
extern s32 D_801094F4_3C6314_BowserEvent;
extern u32 D_800D2094_D2C94;
extern u32 D_80109414_3C6234_BowserEvent;
extern s32 D_8010956C_3C638C_BowserEvent;
extern omObjData* D_80109550_3C6370_BowserEvent;
extern void* D_80109350_3C6170_BowserEvent;
extern s16 D_80109518_3C6338_BowserEvent[5][5];
extern s16 D_80109554_3C6374_BowserEvent[2];
extern s16 D_80109558_3C6378_BowserEvent;
extern s16 D_8010955A_3C637A_BowserEvent;
extern s16 D_8010955C_3C637C_BowserEvent;
extern s16 D_8010955E_3C637E_BowserEvent;
extern s16 D_80109560_3C6380_BowserEvent;
extern s16 D_80109562_3C6382_BowserEvent;
extern s16 D_80109564_3C6384_BowserEvent;
extern s32 D_80109568_3C6388_BowserEvent;
extern s32 D_80109500_3C6320_BowserEvent;
extern s32 D_80109504_3C6324_BowserEvent;
extern s16 D_8010951A_3C633A_BowserEvent[];
extern u8 D_801093A4_3C61C4_BowserEvent;

void func_801059A0_3C27C0_BowserEvent(void) {
    s32 i;
    
    D_801094F0_3C6310_BowserEvent = GwSystem.current_board_index;
    D_801094F4_3C6314_BowserEvent = GwSystem.playerIndexVisitingBowser;
    omInitObjMan(0x32, 0x32);
    func_801092D4_3C60F4_BowserEvent();
    func_8010926C_3C608C_BowserEvent();
    func_800D95C4_ED1E4_shared_board(1000.0f);
    func_8005A6B0_5B2B0();
    func_800F453C_10815C_shared_board();
    for (i = 0; i < MAX_PLAYERS; i++) {
        func_800F4874_108494_shared_board(i, 0x1E, -0x32);
    }
    omAddPrcObj(func_80108D2C_3C5B4C_BowserEvent, 0x300, 0x2000, 0);
    omAddObj(0x1000, 0, 0, -1, func_80109220_3C6040_BowserEvent);
    func_800EA60C_FE22C_shared_board();
    func_800EAE10_FEA30_shared_board(0x13, 0x23A);
    func_8004A208_4AE08();
}

void func_80105A8C_3C28AC_BowserEvent(void) {
    if (D_800D2094_D2C94 >= (D_80109414_3C6234_BowserEvent + 4)) {
        HuAudFXPlay(0x104);
        D_80109414_3C6234_BowserEvent = D_800D2094_D2C94;
    }
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_50_BowserEvent/3C27C0", func_80105AD8_3C28F8_BowserEvent);

s32 func_80106968_3C3788_BowserEvent(void) {
    return D_80109568_3C6388_BowserEvent;
}

s32 func_80106974_3C3794_BowserEvent(void) {
    return D_8010956C_3C638C_BowserEvent;
}

s32 func_80106980_3C37A0_BowserEvent(void) {
    if (D_80109550_3C6370_BowserEvent == NULL) {
        return -1;
    }
    return D_80109550_3C6370_BowserEvent->work[0];
}

void func_8010699C_3C37BC_BowserEvent(void) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(D_80109518_3C6338_BowserEvent); i++) {
        D_80109518_3C6338_BowserEvent[i][0] = -1;
    }

    D_80109550_3C6370_BowserEvent = NULL;

    for (i = 0; i < ARRAY_COUNT(D_80109554_3C6374_BowserEvent); i++) {
        D_80109554_3C6374_BowserEvent[i] = -1;
    }

    D_80109558_3C6378_BowserEvent = -1;
    D_8010955C_3C637C_BowserEvent = -1;
    D_8010955A_3C637A_BowserEvent = -1;
    D_80109560_3C6380_BowserEvent = -1;
    D_8010955E_3C637E_BowserEvent = -1;
    D_80109564_3C6384_BowserEvent = -1;
    D_80109562_3C6382_BowserEvent = -1;
    D_80109568_3C6388_BowserEvent = -1;
    D_80109350_3C6170_BowserEvent = 0;
}

void func_80106A54_3C3874_BowserEvent(void) {
    if (D_80109562_3C6382_BowserEvent != -1) {
        func_800525C8_531C8(D_80109562_3C6382_BowserEvent);
        D_80109562_3C6382_BowserEvent = -1;
    }
    if (D_80109564_3C6384_BowserEvent != -1) {
        func_80055670_56270(D_80109564_3C6384_BowserEvent);
        D_80109564_3C6384_BowserEvent = -1;
    }
}

void func_80106AB8_3C38D8_BowserEvent(void) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(D_80109518_3C6338_BowserEvent); i++) {
        s16* temp = D_80109518_3C6338_BowserEvent[i];
        if (temp[0] != -1) {
            func_8005F364_5FF64(temp[0]);
            temp[0] = -1;
        }
    }
    
    if (D_80109350_3C6170_BowserEvent != 0) {
        func_800E21F4_F5E14_shared_board(D_80109350_3C6170_BowserEvent);
        D_80109350_3C6170_BowserEvent = 0;
    }
    
    if (D_80109550_3C6370_BowserEvent != NULL) {
        omDelObj(D_80109550_3C6370_BowserEvent);
        D_80109550_3C6370_BowserEvent = NULL;
    }
    
    if (D_8010955E_3C637E_BowserEvent != -1) {
        func_800525C8_531C8(D_8010955E_3C637E_BowserEvent);
        D_8010955E_3C637E_BowserEvent = -1;
    }
    
    if (D_80109560_3C6380_BowserEvent != -1) {
        func_80055670_56270(D_80109560_3C6380_BowserEvent);
        D_80109560_3C6380_BowserEvent = -1;
    }
    
    if (D_8010955A_3C637A_BowserEvent != -1) {
        func_800525C8_531C8(D_8010955A_3C637A_BowserEvent);
        D_8010955A_3C637A_BowserEvent = -1;
    }
    
    if (D_8010955C_3C637C_BowserEvent != -1) {
        func_80055670_56270(D_8010955C_3C637C_BowserEvent);
        D_8010955C_3C637C_BowserEvent = -1;
    }
    
    for (i = 0; i < ARRAY_COUNT(D_80109554_3C6374_BowserEvent); i++) {
        if (D_80109554_3C6374_BowserEvent[i] != -1) {
            func_800525C8_531C8(D_80109554_3C6374_BowserEvent[i]);
            D_80109554_3C6374_BowserEvent[i] = -1;
        }
    }

    if (D_80109558_3C6378_BowserEvent != -1) {
        func_80055670_56270(D_80109558_3C6378_BowserEvent);
        D_80109558_3C6378_BowserEvent = -1;
    }
    
    func_80106A54_3C3874_BowserEvent();
}

void func_80106C78_3C3A98_BowserEvent(void) {
    s32 randVal;
    s32 var_v0_2;
    void* temp_v0;
    s32 i;

    if (D_8010955E_3C637E_BowserEvent == -1) {
        D_8010955E_3C637E_BowserEvent = func_8005279C_5339C(1, 5);
        temp_v0 = ReadMainFS(0x1301EB);
        D_80109560_3C6380_BowserEvent = func_80055810_56410(temp_v0);
        HuFreeFilePerm(temp_v0);
        func_80055024_55C24(D_8010955E_3C637E_BowserEvent, 0, D_80109560_3C6380_BowserEvent, 0);
        SprPriSet(D_8010955E_3C637E_BowserEvent, 0, 0x4770);
        SprAttrSet(D_8010955E_3C637E_BowserEvent, 0, 0x1000);
        func_80054904_55504(D_8010955E_3C637E_BowserEvent, 0, D_8010951A_3C633A_BowserEvent[0] + 0x64, D_8010951A_3C633A_BowserEvent[1] + 0x32);
        func_80055420_56020(D_8010955E_3C637E_BowserEvent, 0, 0, 0, 0);
        D_8010955A_3C637A_BowserEvent = func_8005279C_5339C(1, 5);
        temp_v0 = ReadMainFS(0x1301E9);
        D_8010955C_3C637C_BowserEvent = func_80055810_56410(temp_v0);
        HuFreeFilePerm(temp_v0);
        func_80055024_55C24(D_8010955A_3C637A_BowserEvent, 0, D_8010955C_3C637C_BowserEvent, 0);
        SprPriSet(D_8010955A_3C637A_BowserEvent, 0, 0x4770);
        SprAttrSet(D_8010955A_3C637A_BowserEvent, 0, 0x1000);
        func_80054904_55504(D_8010955A_3C637A_BowserEvent, 0, D_8010951A_3C633A_BowserEvent[0] + 0x64, D_8010951A_3C633A_BowserEvent[1] - 0x1E);
        temp_v0 = ReadMainFS(0x130260);
        D_80109558_3C6378_BowserEvent = func_80055810_56410(temp_v0);
        HuFreeFilePerm(temp_v0);
        randVal = func_800EEF80_102BA0_shared_board(5.0f);
        for (i = 0; i < ARRAY_COUNT(D_80109554_3C6374_BowserEvent); i++) {
            D_80109554_3C6374_BowserEvent[i] = func_8005279C_5339C(1, 5);
            func_80055024_55C24(D_80109554_3C6374_BowserEvent[i], 0, D_80109558_3C6378_BowserEvent, 1);
            SprPriSet(D_80109554_3C6374_BowserEvent[i], 0, 0x4770);
            SprAttrSet(D_80109554_3C6374_BowserEvent[i], 0, 0x1000);
            func_80054904_55504(D_80109554_3C6374_BowserEvent[i], 0, D_8010951A_3C633A_BowserEvent[0] + (i * 0xC8), (D_8010951A_3C633A_BowserEvent[1] - 0x28));
            if ((randVal == 0) && (D_80109504_3C6324_BowserEvent == 0)) {
                var_v0_2 = D_80109500_3C6320_BowserEvent;
                if (var_v0_2 == 0) {
                    func_80055420_56020(D_80109554_3C6374_BowserEvent[i], 0, 0, 0, 0xFF);     
                } else {
                    if (var_v0_2 < 0) {
                        var_v0_2 = -var_v0_2;
                    }
                    if (var_v0_2 < 2) {
                        func_80055420_56020(D_80109554_3C6374_BowserEvent[i], 0, 0xFF, 0xFF, 0);
                    } else {
                        func_80055420_56020(D_80109554_3C6374_BowserEvent[i], 0, 0xFF, 0, 0);                      
                    }
                }
            } else {
                func_80055420_56020(D_80109554_3C6374_BowserEvent[i], 0, 0xFF, 0, 0);   
            }
        }
    }
}

void func_80106FC8_3C3DE8_BowserEvent(void) {
    void* temp_v0;

    if (D_80109562_3C6382_BowserEvent == -1) {
        D_80109562_3C6382_BowserEvent = func_8005279C_5339C(1, 5);
        temp_v0 = ReadMainFS(0x1301EA);
        D_80109564_3C6384_BowserEvent = func_80055810_56410(temp_v0);
        HuFreeFilePerm(temp_v0);
        func_80055024_55C24(D_80109562_3C6382_BowserEvent, 0, D_80109564_3C6384_BowserEvent, 0);
        SprPriSet(D_80109562_3C6382_BowserEvent, 0, 0x100);
        SprAttrSet(D_80109562_3C6382_BowserEvent, 0, 0x1000);
        func_80054904_55504(D_80109562_3C6382_BowserEvent, 0, 0x32, D_801093A4_3C61C4_BowserEvent);
    }
}

s32 func_80107090_3C3EB0_BowserEvent(void) {
    s32 var_s3;
    GW_PLAYER* temp_s1;
    s32 i, j;

    if (GwSystem.current_board_index == 0) {
        for (var_s3 = 0, i = 0; i < MAX_PLAYERS; i++) {
            temp_s1 = GetPlayerStruct(i);
            for (j = 0; D_80109418_3C6238_BowserEvent[j] != -1; j++) {
                if (func_800EB184_FEDA4_shared_board(temp_s1->clink, temp_s1->cidx) == D_80109418_3C6238_BowserEvent[j]) {
                    var_s3++;
                    break;
                }
            }
        }
        if (var_s3 < 2) {
            return 0;
        } else {
            return 1;
        }
    }
    return 0;
}

const char D_801094C0_3C62E0_BowserEvent[] = "%d";
const char D_801094C4_3C62E4_BowserEvent[] = "";

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_50_BowserEvent/3C27C0", func_80107190_3C3FB0_BowserEvent);

void func_80107648_3C4468_BowserEvent(void) {
    D_80109550_3C6370_BowserEvent->work[0] = 0;
}

s32 func_80107658_3C4478_BowserEvent(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 playerRank;

    temp_s0 = func_800FB578_10F198_shared_board(CUR_PLAYER);
    playerRank = BoardPlayerRankCalc(arg1);
    return D_80109434_3C6254_BowserEvent[arg0][temp_s0][playerRank];
}

u16 func_801076CC_3C44EC_BowserEvent(s32 playerIndex, s32 arg1) {
    s32 temp_s0;
    s32 playerRank;

    temp_s0 = func_800FB578_10F198_shared_board(CUR_PLAYER);
    playerRank = BoardPlayerRankCalc(playerIndex);
    return D_80109434_3C6254_BowserEvent[2][temp_s0][playerRank];
}

void func_80107724_3C4544_BowserEvent(void) {
    func_800F5E24_109A44_shared_board(D_801094F4_3C6314_BowserEvent);
    func_800F4994_1085B4_shared_board(0x18);
    func_800F5E24_109A44_shared_board(-1);
    HuPrcSleep(20);
}

void func_8010775C_3C457C_BowserEvent(void) {
    func_800F5E24_109A44_shared_board(D_801094F4_3C6314_BowserEvent);
    func_800F4994_1085B4_shared_board(0x18);
    func_800F5E24_109A44_shared_board(-1);
}

s32 func_8010778C_3C45AC_BowserEvent(void) {
    s32 temp_v0;

    temp_v0 = func_80107658_3C4478_BowserEvent(0, D_801094F4_3C6314_BowserEvent);
    sprintf(D_80109508_3C6328_BowserEvent, D_801094C0_3C62E0_BowserEvent, temp_v0);
    if (GwPlayer[D_801094F4_3C6314_BowserEvent].coin >= temp_v0) {
        func_800EC1E8_FFE08_shared_board(0x420D, D_80109508_3C6328_BowserEvent, 0, 0, 0, 0);
    } else {
        func_800EC1E8_FFE08_shared_board(0x420E, D_80109508_3C6328_BowserEvent, 0, 0, 0, 0);
    }
    
    func_800EC3C0_FFFE0_shared_board(D_801094F4_3C6314_BowserEvent);
    func_800EC3E4_100004_shared_board();
    func_80107724_3C4544_BowserEvent();
    func_800D9D84_ED9A4_shared_board(D_801094F8_3C6318_BowserEvent, 2, 0, 5, 0);
    func_800EE884_1024A4_shared_board(D_801094F8_3C6318_BowserEvent, -1, 2);
    HuPrcSleep(14);
    HuAudFXPlay(0x29F);
    func_800F5D44_109964_shared_board(D_801094F4_3C6314_BowserEvent, -temp_v0);
    func_800FF900_113520_shared_board(D_801094F6_3C6316_BowserEvent, 3);
    HuPrcSleep(30);
    func_800EC134_FFD54_shared_board(0x420F);
    func_800EC3C0_FFFE0_shared_board(D_801094F4_3C6314_BowserEvent);
    func_800EC3E4_100004_shared_board();
    return 0;
}

s32 func_801078CC_3C46EC_BowserEvent(void) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0_2;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 i;

    temp_v0 = func_80107658_3C4478_BowserEvent(1, D_801094F4_3C6314_BowserEvent);
    sprintf(D_80109508_3C6328_BowserEvent, D_801094C0_3C62E0_BowserEvent, temp_v0);
    for (i = 0; i < MAX_PLAYERS; i++) {
        if (GwPlayer[i].coin < temp_v0) {
            break;
        }
    }

    if (i == 4) {
        func_800EC1E8_FFE08_shared_board(0x4210, D_80109508_3C6328_BowserEvent, 0, 0, 0, 0);
    } else {
        func_800EC1E8_FFE08_shared_board(0x4211, D_80109508_3C6328_BowserEvent, 0, 0, 0, 0);
    }
    
    func_800EC3C0_FFFE0_shared_board(D_801094F4_3C6314_BowserEvent);
    func_800EC3E4_100004_shared_board();
    func_800F4994_1085B4_shared_board(0);
    HuPrcSleep(20);
    func_800D9D84_ED9A4_shared_board(D_801094F8_3C6318_BowserEvent, 2, 0, 5, 0);
    func_800EE884_1024A4_shared_board(D_801094F8_3C6318_BowserEvent, -1, 2);
    HuPrcSleep(14);
    HuAudFXPlay(0x29F);
    var_a0_2 = -10000;
    var_s1 = 0;
    for (i = 0; i < MAX_PLAYERS; i++) {
        temp_v1 = GwPlayer[i].coin - temp_v0;
        if (var_a0_2 < temp_v1) {
            var_a0_2 = temp_v1;
            var_s1 = i;
        }
    }
    for (i = 0; i < 4; i++) {
        func_800F5BF4_109814_shared_board(i, -temp_v0, i == var_s1);
        func_800FF900_113520_shared_board(i, 3);
    }

    HuPrcSleep(30);
    func_800EC134_FFD54_shared_board(0x420F);
    func_800EC3C0_FFFE0_shared_board(D_801094F4_3C6314_BowserEvent);
    func_800EC3E4_100004_shared_board();
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_50_BowserEvent/3C27C0", func_80107A9C_3C48BC_BowserEvent);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_50_BowserEvent/3C27C0", func_80107DDC_3C4BFC_BowserEvent);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_50_BowserEvent/3C27C0", func_80108360_3C5180_BowserEvent);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_50_BowserEvent/3C27C0", func_801085E4_3C5404_BowserEvent);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_50_BowserEvent/3C27C0", func_80108664_3C5484_BowserEvent);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_50_BowserEvent/3C27C0", func_801086E4_3C5504_BowserEvent);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_50_BowserEvent/3C27C0", func_801087F0_3C5610_BowserEvent);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_50_BowserEvent/3C27C0", func_80108A2C_3C584C_BowserEvent);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_50_BowserEvent/3C27C0", func_80108BB0_3C59D0_BowserEvent);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_50_BowserEvent/3C27C0", func_80108D2C_3C5B4C_BowserEvent);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_50_BowserEvent/3C27C0", func_801091C4_3C5FE4_BowserEvent);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_50_BowserEvent/3C27C0", func_80109220_3C6040_BowserEvent);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_50_BowserEvent/3C27C0", func_8010926C_3C608C_BowserEvent);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_50_BowserEvent/3C27C0", func_801092A0_3C60C0_BowserEvent);

s32 func_801092D4_3C60F4_BowserEvent(void) {
    Hu3DCamInit(1);
    func_800E6630_FA250_shared_board(hvq_data_ROM_START);
    func_800E69BC_FA5DC_shared_board(2);
    return func_800E9344_FCF64_shared_board(100.0f, 10000.0f);
}

void func_80109320_3C6140_BowserEvent(void) {
    func_800E69D8_FA5F8_shared_board();
    func_800E66E0_FA300_shared_board();
}
