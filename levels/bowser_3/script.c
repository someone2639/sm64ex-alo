#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/bowser_3/header.h"

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_BOWSER_3_FALLING_PLATFORM_1,  /*pos*/     0,   0,     0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvFallingBowserPlatform),
    OBJECT(/*model*/ MODEL_BOWSER_3_FALLING_PLATFORM_2,  /*pos*/     0,   0,     0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00020000, /*beh*/ bhvFallingBowserPlatform),
    OBJECT(/*model*/ MODEL_BOWSER_3_FALLING_PLATFORM_3,  /*pos*/     0,   0,     0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00030000, /*beh*/ bhvFallingBowserPlatform),
    OBJECT(/*model*/ MODEL_BOWSER_3_FALLING_PLATFORM_4,  /*pos*/     0,   0,     0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00040000, /*beh*/ bhvFallingBowserPlatform),
    OBJECT(/*model*/ MODEL_BOWSER_3_FALLING_PLATFORM_5,  /*pos*/     0,   0,     0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00050000, /*beh*/ bhvFallingBowserPlatform),
    OBJECT(/*model*/ MODEL_BOWSER_3_FALLING_PLATFORM_6,  /*pos*/     0,   0,     0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00060000, /*beh*/ bhvFallingBowserPlatform),
    OBJECT(/*model*/ MODEL_BOWSER_3_FALLING_PLATFORM_7,  /*pos*/     0,   0,     0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00070000, /*beh*/ bhvFallingBowserPlatform),
    OBJECT(/*model*/ MODEL_BOWSER_3_FALLING_PLATFORM_8,  /*pos*/     0,   0,     0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00080000, /*beh*/ bhvFallingBowserPlatform),
    OBJECT(/*model*/ MODEL_BOWSER_3_FALLING_PLATFORM_9,  /*pos*/     0,   0,     0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00090000, /*beh*/ bhvFallingBowserPlatform),
    OBJECT(/*model*/ MODEL_BOWSER_3_FALLING_PLATFORM_10, /*pos*/     0,   0,     0, /*angle*/ 0, 0, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvFallingBowserPlatform),
    OBJECT(/*model*/ MODEL_BOWSER_BOMB,                  /*pos*/ -2122, 512, -2912, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
    OBJECT(/*model*/ MODEL_BOWSER_BOMB,                  /*pos*/ -3362, 512,  1121, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
    OBJECT(/*model*/ MODEL_BOWSER_BOMB,                  /*pos*/     0, 512,  3584, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
    OBJECT(/*model*/ MODEL_BOWSER_BOMB,                  /*pos*/  3363, 512,  1121, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
    OBJECT(/*model*/ MODEL_BOWSER_BOMB,                  /*pos*/  2123, 512, -2912, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
    RETURN(),
};

const LevelScript level_bowser_3_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(/*seg*/ 0x07, _bowser_3_segment_7SegmentRomStart, _bowser_3_segment_7SegmentRomEnd),
    LOAD_MIO0(/*seg*/ 0x06, _group12_mio0SegmentRomStart, _group12_mio0SegmentRomEnd),
    LOAD_RAW( /*seg*/ 0x0D, _group12_geoSegmentRomStart,  _group12_geoSegmentRomEnd),
    LOAD_MIO0(/*seg*/ 0x0A, _bits_skybox_mio0SegmentRomStart, _bits_skybox_mio0SegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_13),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_1,  bowser_3_geo_000290),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_2,  bowser_3_geo_0002A8),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_3,  bowser_3_geo_0002C0),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_4,  bowser_3_geo_0002D8),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_5,  bowser_3_geo_0002F0),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_6,  bowser_3_geo_000308),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_7,  bowser_3_geo_000320),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_8,  bowser_3_geo_000338),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_9,  bowser_3_geo_000350),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_10, bowser_3_geo_000368),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,            bowser_3_geo_000380),

    AREA(/*index*/ 1, bowser_3_geo_000398),
WARP_NODE(241,21,1,50,0),
WARP_NODE(10,34,1,10,0),
OBJECT_WITH_ACTS(179,2141,804,-3655,0,0,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(116,994,420,1317,0,203,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(179,-9,512,-4346,0,0,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(116,-927,420,1317,0,-203,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(179,-2104,804,-3655,0,0,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(122,-2091,407,-737,0,95,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(122,2123,407,-715,0,-95,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(122,602,407,-1391,0,-31,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(122,-568,407,-1412,0,31,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(122,-756,407,-1015,0,107,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(122,801,407,-988,0,-107,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(122,-9,407,-2337,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(121,-9,407,-2337,0,-32,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(121,-9,407,-2337,0,26,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(116,-12,420,1004,0,-180,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,0,1307,0,0,183,0,0xa0000, bhvSpinAirborneCircleWarp,31),
        TERRAIN(/*terrainData*/ bowser_3_seg7_collision_level),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0002, /*seq*/ SEQ_LEVEL_BOSS_KOOPA_FINAL),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 183, /*pos*/ 0, 307, 0),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
