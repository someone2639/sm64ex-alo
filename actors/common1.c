#include <PR/ultratypes.h>
#include <PR/gbi.h>
#include "sm64.h"
#include "macros.h"
#include "surface_terrains.h"
#include "types.h"
#include "make_const_nonconst.h"

#include "mist/model.inc.c"
UNUSED static const u64 binid_0 = 0;

#include "explosion/model.inc.c"
UNUSED static const u64 binid_1 = 1;

#include "butterfly/model.inc.c"
#include "butterfly/anims/data.inc.c"
#include "butterfly/anims/table.inc.c"
UNUSED static const u64 binid_2 = 2;

#include "coin/model.inc.c"
UNUSED static const u64 binid_3 = 3;

#include "warp_pipe/model.inc.c"
#include "warp_pipe/collision.inc.c"
UNUSED static const u64 binid_4 = 4;

#include "door/model.inc.c"
#include "door/anims/data.inc.c"
#include "door/anims/table.inc.c"
UNUSED static const u64 binid_5 = 5;

#include "bowser_key/model.inc.c"
#include "bowser_key/anims/data.inc.c"
#include "bowser_key/anims/table.inc.c"
UNUSED static const u64 binid_6 = 6;

#include "flame/model.inc.c"
UNUSED static const u64 binid_7 = 7;

#include "blue_fish/model.inc.c"
#include "blue_fish/anims/data.inc.c"
#include "blue_fish/anims/table.inc.c"
UNUSED static const u64 binid_8 = 8;

#include "pebble/model.inc.c"
UNUSED static const u64 binid_9 = 9;

#include "leaves/model.inc.c"
UNUSED static const u64 binid_10 = 10;

// this is still weird...
#include "warp_collision/collision.inc.c"
UNUSED static const u64 binid_11 = 11;

#include "mario_cap/model.inc.c"
UNUSED static const u64 binid_12 = 12;

#include "power_meter/model.inc.c"
UNUSED static const u64 binid_13 = 13;

UNUSED static const u64 binid_14 = 14;

#include "mushroom_1up/model.inc.c"
UNUSED static const u64 binid_15 = 15;

#include "star/model.inc.c"
UNUSED static const u64 binid_16 = 16;

#include "sand/model.inc.c"
UNUSED static const u64 binid_17 = 17;

#include "dirt/model.inc.c"
UNUSED static const u64 binid_18 = 18;

#include "transparent_star/model.inc.c"
UNUSED static const u64 binid_19 = 19;

#include "white_particle/model.inc.c"
UNUSED static const u64 binid_20 = 20;

#include "wooden_signpost/model.inc.c"
#include "wooden_signpost/collision.inc.c"
UNUSED static const u64 binid_21 = 21;

#include "tree/model.inc.c"
UNUSED static const u64 binid_22 = 22;

#if INCLUDE_MOP
#include "Noteblock_MOP/custom.model.inc.h"
#include "Noteblock_MOP/custom.model.inc.c"
#include "Noteblock_MOP/custom.collision.inc.c"
#include "Noteblock_MOP/textureNew.inc.c"

#include "Checkpoint_Flag_MOP/custom.model.inc.h"
#include "Checkpoint_Flag_MOP/custom.model.inc.c"
#include "Checkpoint_Flag_MOP/textureNew.inc.c"

#include "FlipBlock_MOP/custom.model.inc.h"
#include "FlipBlock_MOP/custom.model.inc.c"
#include "FlipBlock_MOP/custom.collision.inc.c"
#include "FlipBlock_MOP/textureNew.inc.c"

#include "Flipswap_Platform_MOP/custom.model.inc.h"
#include "Flipswap_Platform_MOP/custom.collision.inc.c"
#include "Flipswap_Platform_MOP/custom.model.inc.c"
#include "Flipswap_Platform_MOP/textureNew.inc.c"
#include "Flipswap_Platform_Border_MOP/custom.model.inc.h"
#include "Flipswap_Platform_Border_MOP/custom.model.inc.c"
#include "Flipswap_Platform_Border_MOP/textureNew.inc.c"


#include "Flipswitch_Panel_MOP/custom.model.inc.h"
#include "Flipswitch_Panel_MOP/custom.model.inc.c"
#include "Flipswitch_Panel_MOP/custom.collision.inc.c"
#include "Flipswitch_Panel_MOP/textureNew.inc.c"

#include "Green_Switchboard_MOP/custom.model.inc.h"
#include "Green_Switchboard_MOP/custom.model.inc.c"
#include "Green_Switchboard_MOP/custom.collision.inc.c"
#include "Green_Switchboard_MOP/textureNew.inc.c"
#include "Green_Switchboard_Gears_MOP/custom.model.inc.h"
#include "Green_Switchboard_Gears_MOP/custom.model.inc.c"
#include "Green_Switchboard_Gears_MOP/textureNew.inc.c"

#include "Moving_Rotating_Block_MOP/custom.model.inc.h"
#include "Moving_Rotating_Block_MOP/custom.collision.inc.c"
#include "Moving_Rotating_Block_MOP/custom.model.inc.c"
#include "Moving_Rotating_Block_MOP/textureNew.inc.c"

#include "SandBlock_MOP/custom.model.inc.h"
#include "SandBlock_MOP/custom.model.inc.c"
#include "SandBlock_MOP/custom.collision.inc.c"
#include "SandBlock_MOP/textureNew.inc.c"

#include "Shell_1_MOP/custom.model.inc.h"
#include "Shell_1_MOP/custom.model.inc.c"
#include "Shell_1_MOP/textureNew.inc.c"

#include "Shell_2_MOP/custom.model.inc.h"
#include "Shell_2_MOP/custom.model.inc.c"
#include "Shell_2_MOP/textureNew.inc.c"

#include "Shrink_Platform_MOP/custom.model.inc.h"
#include "Shrink_Platform_MOP/custom.model.inc.c"
#include "Shrink_Platform_MOP/custom.collision.inc.c"
#include "Shrink_Platform_MOP/textureNew.inc.c"
#include "Shrink_Platform_Border_MOP/custom.model.inc.h"
#include "Shrink_Platform_Border_MOP/custom.model.inc.c"
#include "Shrink_Platform_Border_MOP/textureNew.inc.c"


#include "Spring_MOP/custom.model.inc.h"
#include "Spring_MOP/custom.model.inc.c"
#include "Spring_MOP/textureNew.inc.c"

#include "Switchblock_MOP/custom.model.inc.h"
#include "Switchblock_MOP/custom.model.inc.c"
#include "Switchblock_MOP/custom.collision.inc.c"
#include "Switchblock_MOP/textureNew.inc.c"

#include "Switchblock_Switch_MOP/custom.model.inc.h"
#include "Switchblock_Switch_MOP/custom.model.inc.c"
#include "Switchblock_Switch_MOP/custom.collision.inc.c"
#include "Switchblock_Switch_MOP/textureNew.inc.c"

#endif