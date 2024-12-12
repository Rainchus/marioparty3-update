#include "common.h"
#include "GateGuy.h"

void func_80105B64_3D8C54_board_gate_guy(omObjData*);
void func_80105B9C_3D8C8C_board_gate_guy(omObjData*);
void func_8010DA84_3E0B74_board_gate_guy(omObjData*);
void func_8010DB00_3E0BF0_board_gate_guy(omObjData*);

board_overlay_entrypoint D_801186E0_3EB7D0_board_gate_guy[] = {
    {0, func_80105B64_3D8C54_board_gate_guy},
    {1, func_80105B9C_3D8C8C_board_gate_guy},
    {2, func_8010DA84_3E0B74_board_gate_guy},
    {3, func_8010DB00_3E0BF0_board_gate_guy},
    {-1, NULL}
};

void func_801059A0_3D8A90_board_gate_guy(void) {
    func_800359E0_365E0(D_801186E0_3EB7D0_board_gate_guy, D_800A1764_A2364);
}