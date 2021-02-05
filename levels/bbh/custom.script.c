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
#include "levels/bbh/header.h"
extern u8 _bbh_segment_ESegmentRomStart[]; 
extern u8 _bbh_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_bbh_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _bbh_segment_ESegmentRomStart, _bbh_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_cloud_floor_skybox_mio0SegmentRomStart,_cloud_floor_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           rr_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,           rr_geo_000678),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,           rr_geo_000690),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,           rr_geo_0006A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,           rr_geo_0006C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,           rr_geo_0006D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,           rr_geo_0006F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,           rr_geo_000708),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,           rr_geo_000720),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,           rr_geo_000738),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,           rr_geo_000758),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,           rr_geo_000770),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,           rr_geo_000788),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,           rr_geo_0007A0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,           rr_geo_0007B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,           rr_geo_0007D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,           rr_geo_0007E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,           rr_geo_000800),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15,           rr_geo_000818),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16,           rr_geo_000830),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SLIDING_PLATFORM,         rr_geo_0008C0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_FLYING_CARPET,            rr_geo_000848),
    LOAD_MODEL_FROM_GEO(MODEL_RR_OCTAGONAL_PLATFORM,       rr_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ROTATING_BRIDGE_PLATFORM, rr_geo_000878),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRIANGLE_PLATFORM,        rr_geo_0008D8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_CRUISER_WING,             rr_geo_000890),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SEESAW_PLATFORM,          rr_geo_000908),
    LOAD_MODEL_FROM_GEO(MODEL_RR_L_SHAPED_PLATFORM,        rr_geo_000940),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SWINGING_PLATFORM,        rr_geo_000860),
    LOAD_MODEL_FROM_GEO(MODEL_RR_DONUT_PLATFORM,           rr_geo_000920),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ELEVATOR_PLATFORM,        rr_geo_0008F0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES,         rr_geo_000958),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME1,  rr_geo_000970),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME2,  rr_geo_000988),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME3,  rr_geo_0009A0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME4,  rr_geo_0009B8),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_GEO(88,0x0500c778),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_12),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bbh_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bbh_1_[] = {
AREA(1,Geo_bbh_1_0x1201700),
TERRAIN(col_bbh_1_0xe105980),
SET_BACKGROUND_MUSIC(0,12),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bbh_1_),
JUMP_LINK(local_warps_bbh_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bbh_1_[] = {
OBJECT_WITH_ACTS(0,-10669,-3872,-1094,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(201,-11424,-2371,7245,0,180,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(201,-9381,485,-2228,0,0,0,0x5a0000, bhvCannonClosed,31),
OBJECT_WITH_ACTS(195,-5013,4776,3375,0,273,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(122,-5146,7013,1815,0,180,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,1160,231,-16574,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-11857,6599,13648,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(20,-8081,2978,710,0,0,0,0x3000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(122,13590,670,-342,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(20,-5209,5147,1170,0,0,0,0x5000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(207,2491,-1261,11321,0,123,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(207,6655,1329,-342,0,-90,0,0x0, bhvFloorSwitchHiddenObjects,48),
OBJECT_WITH_ACTS(215,-8409,-4370,4369,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-11711,-1379,16094,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3619,1972,1650,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-7984,604,-2010,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5131,6189,-1170,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5410,3110,-4092,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1573,-2602,9102,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-765,689,5194,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(84,-11988,-1729,6725,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,2449,-627,11326,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,-5195,5111,-3183,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,3900,1963,2444,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,-933,3033,-4261,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,-9255,1127,-1712,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,-11650,-374,12860,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(223,-5175,6554,2047,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-2710,2399,-3410,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,6362,1329,-312,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,-6262,2999,-5813,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,837,2407,-1235,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-5190,4776,51,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,4056,1208,6967,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-8556,-2206,5629,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-12894,-2735,3572,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-11804,-1008,13612,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-112,578,5404,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(220,-12772,2618,13550,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-10291,2618,13880,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,2417,211,-10853,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-732,211,-11978,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,1507,-1279,6898,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-4555,-1684,4646,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(188,-5172,4776,-1801,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-7909,4833,1030,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,224,1683,-2991,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,5618,1208,-70,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,3985,1208,5324,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,4327,-1666,9399,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-10882,-4480,278,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-5173,3006,-5566,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(3,-7697,2383,2089,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(3,-7152,1497,79,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(3,-6403,718,1072,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(3,-5964,1816,1999,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(3,-5794,1143,-174,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(207,-9505,3964,13889,0,180,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(0,1517,1722,-5360,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-10236,-4948,3608,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3660,2788,-5018,0,34,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,65,-1064,7134,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-9884,-2760,9838,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2513,4815,737,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-9301,-1829,812,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5154,6117,3269,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-14112,5162,13575,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(140,1519,-2206,11245,0,-98,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(212,-2528,2086,-3601,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(118,831,-2158,11190,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-342,-2158,10854,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-828,-2158,10118,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-933,-2158,8918,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-831,-2158,7951,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(192,-9542,-470,-838,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(129,-10646,3612,14030,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-10846,3714,14031,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-12939,3962,13256,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-13138,4162,13256,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-13075,5501,13673,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,-13274,5301,13674,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-13338,4362,13256,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-13538,4562,13256,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4574,-1542,9875,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4574,-1242,9625,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4574,-942,9375,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4574,-642,9125,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4574,-342,8875,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4574,-42,8625,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4574,258,8375,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,8667,837,-309,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,8667,837,-109,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,8867,837,-309,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,8867,837,-109,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,10527,482,-692,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,10527,482,-492,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,10727,482,-692,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,10727,482,-492,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(0,341,4,36,0,0,0,&VB_bbh_1_0xe059f30[1],editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,341,5,36,0,0,0,&VB_bbh_1_0xe059f30[1],editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,341,5,36,0,0,0,&VB_bbh_1_0xe05f390[11],editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_bbh_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,150,0),
WARP_NODE(241,26,1,151,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};