import os

new_overlay_file = 'src/mod/new_overlay_table.c'

new_overlay_file_text = """
//Auto generated if file didn't already exist
#include "common.h"

#define OVL_ENTRY(name) \
    {name##_ROM_START, name##_ROM_END, name##_VRAM, name##_TEXT_START, name##_TEXT_END, name##_DATA_START, name##_RODATA_END, name##_BSS_START, name##_BSS_END}

typedef struct OverlayTable {
/* 0x00 */ u8* romStart;
/* 0x04 */ u8* romEnd;
/* 0x08 */ u8* vramStart;
/* 0x0C */ u8* textVramStart;
/* 0x10 */ u8* textVramEnd;
/* 0x14 */ u8* dataVramStart;
/* 0x18 */ u8* dataVramEnd;
/* 0x1C */ u8* bssVramStart;
/* 0x20 */ u8* bssVramEnd;
} OverlayTable; //sizeof 0x24

void mod_boot_func(void) {
    s32 i;
    u64* bss = (u64*)main_BSS_START;
    s32 bss_size = (s32)main_BSS_SIZE;
    for (i = 0; bss_size > 0; i += sizeof(u64)) {
        *bss++ = 0;
        bss_size -= sizeof(u64);
    }
}

OverlayTable mod_ovltbl[] = {
    OVL_ENTRY(test_menu1),
    OVL_ENTRY(hand_line_sinker),
    OVL_ENTRY(coconut_conk),
    OVL_ENTRY(spotlight_swim),
    OVL_ENTRY(boulder_ball),
    OVL_ENTRY(crazy_cogs),
    OVL_ENTRY(hide_and_sneak),
    OVL_ENTRY(ridiculous_relay),
    OVL_ENTRY(thwomp_pull),
    OVL_ENTRY(river_raiders),
    OVL_ENTRY(tidal_toss),
    OVL_ENTRY(eatsa_pizza),
    OVL_ENTRY(baby_bowser_broadside),
    OVL_ENTRY(pump_pump_away),
    OVL_ENTRY(hyper_hydrants),
    OVL_ENTRY(picking_panic),
    OVL_ENTRY(cosmic_coaster),
    OVL_ENTRY(puddle_paddle),
    OVL_ENTRY(etch_n_catch),
    OVL_ENTRY(log_jam),
    OVL_ENTRY(slot_synch),
    OVL_ENTRY(treadmill_grill),
    OVL_ENTRY(toadstool_titan),
    OVL_ENTRY(aces_high),
    OVL_ENTRY(bounce_n_trounce),
    OVL_ENTRY(ice_rink_risk),
    OVL_ENTRY(locked_out),
    OVL_ENTRY(chip_shot_challenge),
    OVL_ENTRY(parasol_plummet),
    OVL_ENTRY(messy_memory),
    OVL_ENTRY(picture_imperfect),
    OVL_ENTRY(marios_puzzle_party),
    OVL_ENTRY(the_beat_goes_on),
    OVL_ENTRY(mpiq),
    OVL_ENTRY(curtain_call),
    OVL_ENTRY(water_whirled),
    OVL_ENTRY(fridged_bridges),
    OVL_ENTRY(awful_tower),
    OVL_ENTRY(cheep_cheep_chase),
    OVL_ENTRY(pipe_cleaners),
    OVL_ENTRY(snowball_summit),
    OVL_ENTRY(all_fired_up),
    OVL_ENTRY(stacked_deck),
    OVL_ENTRY(three_door_monty),
    OVL_ENTRY(rockin_raceway),
    OVL_ENTRY(merry_go_chomp),
    OVL_ENTRY(slapdown),
    OVL_ENTRY(storm_chasers),
    OVL_ENTRY(eye_sore),
    OVL_ENTRY(vine_with_me),
    OVL_ENTRY(popgun_pickoff),
    OVL_ENTRY(end_of_the_line),
    OVL_ENTRY(bowser_toss),
    OVL_ENTRY(baby_bowser_bonkers),
    OVL_ENTRY(motor_rooter),
    OVL_ENTRY(silly_screws),
    OVL_ENTRY(crowd_cover),
    OVL_ENTRY(tick_tock_hop),
    OVL_ENTRY(fowl_play),
    OVL_ENTRY(winners_wheel),
    OVL_ENTRY(hey_batter_batter),
    OVL_ENTRY(bobbing_bow_loons),
    OVL_ENTRY(dorrie_dip),
    OVL_ENTRY(swinging_with_sharks),
    OVL_ENTRY(swing_n_swipe),
    OVL_ENTRY(stardust_battle),
    OVL_ENTRY(game_guys_roulette),
    OVL_ENTRY(game_guys_lucky_7),
    OVL_ENTRY(game_guys_magic_boxes),
    OVL_ENTRY(game_guys_sweet_surprise),
    OVL_ENTRY(dizzy_dinghies),
    OVL_ENTRY(name_47),
    OVL_ENTRY(name_48),
    OVL_ENTRY(name_49),
    OVL_ENTRY(name_4A),
    OVL_ENTRY(name_4B),
    OVL_ENTRY(name_4C),
    OVL_ENTRY(name_4D),
    OVL_ENTRY(name_4E),
    OVL_ENTRY(name_4F),
    OVL_ENTRY(BowserEvent),
    OVL_ENTRY(name_51),
    OVL_ENTRY(name_52),
    OVL_ENTRY(name_53),
    OVL_ENTRY(name_54),
    OVL_ENTRY(name_55),
    OVL_ENTRY(name_56),
    OVL_ENTRY(name_57),
    OVL_ENTRY(name_58),
    OVL_ENTRY(name_59),
    OVL_ENTRY(gate_guy_intro1),
    OVL_ENTRY(board_gate_guy),
    OVL_ENTRY(board_arrowhead_intro),
    OVL_ENTRY(board_pipesqueak_intro),
    OVL_ENTRY(board_blowhard_intro),
    OVL_ENTRY(name_5F),
    OVL_ENTRY(name_60),
    OVL_ENTRY(name_61),
    OVL_ENTRY(name_62),
    OVL_ENTRY(name_63),
    OVL_ENTRY(name_64),
    OVL_ENTRY(name_65),
    OVL_ENTRY(name_66),
    OVL_ENTRY(name_67),
    OVL_ENTRY(name_68),
    OVL_ENTRY(name_69),
    OVL_ENTRY(name_6A),
    OVL_ENTRY(name_6B),
    OVL_ENTRY(name_6C),
    OVL_ENTRY(name_6D),
    OVL_ENTRY(name_6E),
    OVL_ENTRY(name_6F),
    OVL_ENTRY(name_70),
    OVL_ENTRY(name_71),
    OVL_ENTRY(name_72),
    OVL_ENTRY(name_73),
    OVL_ENTRY(name_74),
    OVL_ENTRY(name_75),
    OVL_ENTRY(name_76),
    OVL_ENTRY(name_77),
    OVL_ENTRY(name_78),
    OVL_ENTRY(name_79),
    OVL_ENTRY(name_7A),
    OVL_ENTRY(name_7B),
    OVL_ENTRY(name_7C),
    OVL_ENTRY(name_7D),
    OVL_ENTRY(name_7E),
    OVL_ENTRY(name_7F),
    //new overlays starting here
};

OverlayTable mod_modeovltbl[] = {
    OVL_ENTRY(shared_board),
    OVL_ENTRY(name_81),
    OVL_ENTRY(name_82),
    //new overlays starting here
};
"""

def create_file_if_not_exists(file_path):
    # Ensure the directory exists
    directory = os.path.dirname(file_path)
    if directory and not os.path.exists(directory):
        os.makedirs(directory)

    # Create the file if it does not exist
    if not os.path.exists(file_path):
        with open(file_path, 'w') as file:
            file.write('')  # Create an empty file
        return True  # Indicate that the file was created
    return False  # Indicate that the file already exists

# Check if mod/new_overlay_table.c exists, and create it if not
file_created = create_file_if_not_exists(new_overlay_file)

# If the file was created, write the data to it
if file_created:
    with open(new_overlay_file, 'w') as file:
        file.write(f"{new_overlay_file_text}\n")
        print(f"Created and wrote to '{new_overlay_file}'")
else:
    print(f"'{new_overlay_file}' already exists. No data written.")