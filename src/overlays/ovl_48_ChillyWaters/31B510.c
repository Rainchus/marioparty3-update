#include "common.h"

void func_80107BF4_31D764_ChillyWaters(void);
void func_80107C2C_31D79C_ChillyWaters(void);
void func_80108014_31DB84_ChillyWaters(void);
void func_80108098_31DC08_ChillyWaters(void);
void func_8011C58C_3320FC_ChillyWaters(void);

board_overlay_entrypoint D_8011D250_332DC0_ChillyWaters[] = {
    {0, func_80107BF4_31D764_ChillyWaters},
    {1, func_80107C2C_31D79C_ChillyWaters},
    {2, func_80108014_31DB84_ChillyWaters},
    {3, func_80108098_31DC08_ChillyWaters},
    {4, func_8011C58C_3320FC_ChillyWaters},
    {-1, NULL},
};

void func_801059A0_31B510_ChillyWaters(void) {
    func_800359E0_365E0(D_8011D250_332DC0_ChillyWaters, D_800A1764_A2364);
}
