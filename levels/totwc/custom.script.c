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

#include "levels/totwc/header.h"
extern u8 _totwc_segment_ESegmentRomStart[]; 
extern u8 _totwc_segment_ESegmentRomEnd[];
#include "levels/castle_grounds/header.h"
const LevelScript level_totwc_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_groundsSegmentRomStart, _castle_groundsSegmentRomEnd),
LOAD_RAW(0x0E, _totwc_segment_ESegmentRomStart, _totwc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_clouds_skybox_mio0SegmentRomStart,_clouds_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           castle_grounds_geo_0006F4),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE,  bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE,    warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR,  castle_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR,   metal_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL,  castle_grounds_geo_00070C),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG,         castle_grounds_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724),
// LOAD_MODEL_FROM_GEO(3,0x120006f4),
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
LOAD_MODEL_FROM_GEO(41, metal_door_geo),
// LOAD_MODEL_FROM_GEO(54,0x1200070c),
// LOAD_MODEL_FROM_GEO(55,0x12000660),
// LOAD_MODEL_FROM_GEO(56,0x12000724),
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
JUMP_LINK(local_area_totwc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_totwc_1_[] = {
AREA(1,Geo_totwc_1_0x19001700),
TERRAIN(col_totwc_1_0xe02e288),
SET_BACKGROUND_MUSIC(0,38),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_totwc_1_),
JUMP_LINK(local_warps_totwc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_totwc_1_[] = {
OBJECT_WITH_ACTS(0,207,-3752,-3962,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(124,-579,-4512,-3900,0,-267,0,0x7d0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(122,-1936,5034,1481,0,-107,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-1008,2747,689,0,107,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(85,-2263,-3445,-422,0,82,0,0x0, bhvCapSwitch,31),
OBJECT_WITH_ACTS(137,1971,-2028,1356,0,-40,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2946,2597,-2237,0,38,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2846,-115,2183,0,38,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,537,2264,-1905,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(137,2360,2264,312,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(137,-2385,-211,2108,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(137,-2920,-3434,-564,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(137,-232,-4512,-3104,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(137,474,-4512,-2929,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(120,-574,-3960,-1964,0,182,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(223,-923,2690,666,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(137,-2706,2674,2069,0,36,0,0x90000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1966,3514,2635,0,-37,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-3046,3913,1206,0,23,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2659,4523,2010,0,38,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(128,2427,-2322,1656,0,0,0,0x0, bhvCannon,31),
OBJECT_WITH_ACTS(220,-975,3009,673,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(137,-3648,-3529,-623,0,-8,0,0x0, bhvExclamationBox,31),
RETURN()
};
const LevelScript local_warps_totwc_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,24,1,240,0),
WARP_NODE(241,24,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
