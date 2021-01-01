#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "game/level_update.h"
#include "levels/scripts.h"
#include "actors/common1.h"
#include "make_const_nonconst.h"

#include "levels/vcutm/header.h"
extern u8 _vcutm_segment_ESegmentRomStart[]; 
extern u8 _vcutm_segment_ESegmentRomEnd[];
const LevelScript level_vcutm_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _vcutm_segment_7SegmentRomStart, _vcutm_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _vcutmSegmentRomStart, _vcutmSegmentRomEnd),
LOAD_RAW(0x0E, _vcutm_segment_ESegmentRomStart, _vcutm_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bits_skybox_mio0SegmentRomStart,_bits_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_VCUTM_SEESAW_PLATFORM, vcutm_geo_0001F0),
// LOAD_MODEL_FROM_GEO(3,0x140001d0),
// LOAD_MODEL_FROM_GEO(4,0x14000290),
// LOAD_MODEL_FROM_GEO(5,0x140002b8),
// LOAD_MODEL_FROM_GEO(6,0x140002e0),
// LOAD_MODEL_FROM_GEO(7,0x14000308),
// LOAD_MODEL_FROM_GEO(8,0x14000200),
// LOAD_MODEL_FROM_GEO(9,0x14000230),
// LOAD_MODEL_FROM_GEO(10,0x14000260),
// LOAD_MODEL_FROM_GEO(11,0x14000330),
// LOAD_MODEL_FROM_GEO(12,0x14000358),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_GEO(54,0x120001f0),
// LOAD_MODEL_FROM_DL(84,0x5002e00,4),
// LOAD_MODEL_FROM_DL(86,0x5003120,4),
// LOAD_MODEL_FROM_DL(132,0x8025f08,4),
// LOAD_MODEL_FROM_DL(158,0x302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x4032a18,4),
// LOAD_MODEL_FROM_DL(201,0x80048e0,4),
// LOAD_MODEL_FROM_DL(218,0x8024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_9),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_vcutm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_vcutm_1_[] = {
AREA(1,Geo_vcutm_1_0x19001700),
TERRAIN(col_vcutm_1_0xe01d4a8),
SET_BACKGROUND_MUSIC(0,42),
TERRAIN_TYPE(4),
JUMP_LINK(local_objects_vcutm_1_),
JUMP_LINK(local_warps_vcutm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_vcutm_1_[] = {
OBJECT_WITH_ACTS(0,-4263,68,-22,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(85,166,806,-535,0,-91,0,0x20000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(122,2714,-578,-1843,0,-153,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,-3549,-338,-4902,0,107,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(137,4300,-442,-391,0,-180,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(144,2656,-619,-1369,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,2741,-619,-1368,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(217,2746,-517,-1561,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(129,2691,-713,-1507,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(217,2944,-713,-1557,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(124,-3315,-713,394,0,-90,0,0x150000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(122,179,-532,-1412,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,2467,-532,1317,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-759,-532,2483,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-2077,-532,1439,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,4471,-532,616,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,6887,-532,2737,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-1319,-532,-5414,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-2276,-532,-3049,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-4833,-532,-1969,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-6091,-532,1124,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-3992,-532,2312,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(129,-615,-713,-228,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-611,-513,-344,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-611,-313,-441,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-611,-113,-541,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-611,87,-656,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-611,287,-754,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-607,487,-857,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-408,604,-859,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(207,-595,-713,-806,0,90,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(122,6986,-182,-2261,0,0,0,0x0, bhvSnufit,31),
RETURN()
};
const LevelScript local_warps_vcutm_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,8,1,240,0),
WARP_NODE(241,8,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
