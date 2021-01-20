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

#include "areas/1/custom.model.inc.h"
#include "levels/bowser_1/header.h"
extern u8 _bowser_1_segment_ESegmentRomStart[]; 
extern u8 _bowser_1_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_bowser_1_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _bowser_1_segment_ESegmentRomStart, _bowser_1_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom43482816_skybox_mio0SegmentRomStart,_SkyboxCustom43482816_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bowser_1_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bowser_1_1_[] = {
AREA(1,Geo_bowser_1_1_0x19001700),
TERRAIN(col_bowser_1_1_0xe0138c8),
SET_BACKGROUND_MUSIC(0,2),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bowser_1_1_),
JUMP_LINK(local_warps_bowser_1_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bowser_1_1_[] = {
OBJECT_WITH_ACTS(0,-4399,3567,8781,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(103,-326,155,-789,0,-182,0,0x0, bhvWhompKingBoss,31),
OBJECT_WITH_ACTS(180,-824,560,-1757,0,-153,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,282,560,-1293,0,107,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-383,560,-604,0,-151,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1021,560,-1322,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-406,560,-1906,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,66,560,-1706,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,134,560,-821,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-855,560,-752,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(116,85,234,-1010,0,299,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-809,234,-1009,0,59,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-346,234,-1781,0,180,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(217,-6098,186,-957,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-6095,648,-1641,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-5668,1216,-2209,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(129,711,436,-2642,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,1007,563,-3524,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(207,1153,851,-4730,0,180,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(100,-5426,1839,-3365,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-4975,1842,-2892,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,1183,851,-5206,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,1149,851,-4364,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-539,563,-5519,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-1561,203,-5106,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-4931,2515,8476,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-4011,2468,9000,0,0,0,0x0, bhvFirePiranhaPlant,31),
RETURN()
};
const LevelScript local_warps_bowser_1_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,60,0),
WARP_NODE(241,20,1,51,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
