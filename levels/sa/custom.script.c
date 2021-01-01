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

#include "levels/sa/header.h"
extern u8 _sa_segment_ESegmentRomStart[]; 
extern u8 _sa_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_sa_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _sa_segment_ESegmentRomStart, _sa_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bits_skybox_mio0SegmentRomStart,_bits_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),
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
LOAD_MODEL_FROM_GEO(29, haunted_door_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_GEO(53,0x120005b0),
// LOAD_MODEL_FROM_GEO(54,0x120005c8),
// LOAD_MODEL_FROM_GEO(55,0x120005e0),
// LOAD_MODEL_FROM_GEO(56,0x120005f8),
// LOAD_MODEL_FROM_GEO(57,0x12000610),
// LOAD_MODEL_FROM_GEO(58,0x12000628),
// LOAD_MODEL_FROM_GEO(59,0x12000640),
// LOAD_MODEL_FROM_GEO(60,0x12000640),
// LOAD_MODEL_FROM_DL(132,0x8025f08,4),
// LOAD_MODEL_FROM_DL(158,0x302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x4032a18,4),
// LOAD_MODEL_FROM_DL(201,0x80048e0,4),
// LOAD_MODEL_FROM_DL(218,0x8024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_sa_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_sa_1_[] = {
AREA(1,Geo_sa_1_0x19001700),
TERRAIN(col_sa_1_0xe01b1b8),
SET_BACKGROUND_MUSIC(0,17),
TERRAIN_TYPE(4),
JUMP_LINK(local_objects_sa_1_),
JUMP_LINK(local_warps_sa_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_sa_1_[] = {
OBJECT_WITH_ACTS(0,84,3712,-576,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,575,3365,8743,0,-154,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(122,2277,3365,-6593,0,-153,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(122,-5589,3365,-2276,0,107,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(122,1401,3365,6932,0,-151,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(122,2301,3365,-256,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(122,7176,3365,-2132,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(122,209,3365,-10062,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(122,7455,3365,3914,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,1479,3357,2638,0,0,0,0x0, bhvHiddenRedCoinStar,31),
RETURN()
};
const LevelScript local_warps_sa_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,63,0),
WARP_NODE(241,26,1,64,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
