#include "common.h"
#include "ovl_80.h"

UnkBoard2* func_800D6B70_EA790_shared_board(s32 arg0) {
    s32 sp10[3] = {22, 22, 22};
    UnkBoard2* temp_v0;
    Object* temp_v0_2;

    temp_v0 = HuMemMemoryAllocTemp(sizeof(UnkBoard2));
    temp_v0->unk_00 = 0;
    temp_v0->obj = func_800D90C8_ECCE8_shared_board(sp10[arg0], 0);
    func_8001C258_1CE58(temp_v0->obj->unk3C->model[0], 0x180, 0);
    func_8001C8E4_1D4E4(temp_v0->obj->unk3C->model[0], 0x1400);
    func_8001C448_1D048(temp_v0->obj->unk3C->model[0]);
    func_800D9714_ED334_shared_board(temp_v0->obj);
    return temp_v0;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D6C3C_EA85C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D6C6C_EA88C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D6CA0_EA8C0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D6D2C_EA94C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D6E00_EAA20_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D6EC8_EAAE8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D6EE0_EAB00_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D7250_EAE70_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D7280_EAEA0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D742C_EB04C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D7518_EB138_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D7568_EB188_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D75E8_EB208_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D76A0_EB2C0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D76D0_EB2F0_shared_board);

void func_800D7714_EB334_shared_board(void) {
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D771C_EB33C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D7770_EB390_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D7790_EB3B0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D77F0_EB410_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D786C_EB48C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D79D0_EB5F0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D7A3C_EB65C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D7B6C_EB78C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D7D00_EB920_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D7D50_EB970_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D7F5C_EBB7C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D86F0_EC310_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D8790_EC3B0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D88E8_EC508_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D8958_EC578_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D89F4_EC614_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D8A90_EC6B0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D8B2C_EC74C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D8DAC_EC9CC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D8E30_ECA50_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D8E60_ECA80_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D8E88_ECAA8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D8ED4_ECAF4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D8F30_ECB50_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D8F80_ECBA0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D8FC4_ECBE4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D9004_ECC24_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D90C8_ECCE8_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D912C_ECD4C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D93C0_ECFE0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D95C4_ED1E4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D95D0_ED1F0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D9714_ED334_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D975C_ED37C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D9A40_ED660_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D9A50_ED670_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D9AA4_ED6C4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D9AD0_ED6F0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D9B24_ED744_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D9B54_ED774_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D9CB0_ED8D0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D9CE8_ED908_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D9D84_ED9A4_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D9E0C_EDA2C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D9E80_EDAA0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D9ED0_EDAF0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800D9F5C_EDB7C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800DA09C_EDCBC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", RunDecisionTree);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800DA748_EE368_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800DA754_EE374_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800DA778_EE398_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800DA790_EE3B0_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800DA810_EE430_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800DA8BC_EE4DC_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800DA91C_EE53C_shared_board);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_80_shared_board/EA790", func_800DA938_EE558_shared_board);

void func_800DA948_EE568_shared_board(void) {
}

void func_800DA950_EE570_shared_board(s32 arg0, s16 arg1) {
    sprintf(D_800D5218_D5E18, "KMS: %d", gStarBlockSpaceIndex);
    func_800DA790_EE3B0_shared_board((arg0 * 8) & 0xFFF8, (arg1 * 8), D_800D5218_D5E18, 0xF, 9);
    sprintf(D_800D5218_D5E18, "KMC: %d", gCoinBlockSpaceIndex);
    func_800DA790_EE3B0_shared_board((arg0 * 8) & 0xFFF8, ((arg1 + 1) * 8), D_800D5218_D5E18, 0xF, 9);
}

void func_800DAA14_EE634_shared_board(void) {
}

void func_800DAA1C_EE63C_shared_board(void) {
}

void func_800DAA24_EE644_shared_board(void) {
}

void func_800DAA2C_EE64C_shared_board(void) {
}

void func_800DAA34_EE654_shared_board(void) {

}
