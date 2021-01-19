const GeoLayout yellow_coin_geo[]= {
GEO_SHADOW(0,180,50),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,50,0,DL_yellow_coin_geo_0x8026f54),
GEO_OPEN_NODE(),
GEO_END(),
};
const GeoLayout yellow_coin_no_shadow_geo[]= {
GEO_BRANCH(1,Geo_yellow_coin_no_shadow_geo_0x1600013c),
};
const GeoLayout yellow_coin_no_shadow_geo_0x218edc[]= {
GEO_SHADOW(0,180,50),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,50,0,DL_yellow_coin_geo_0x8026f54),
GEO_OPEN_NODE(),
GEO_END(),
};
const GeoLayout blue_coin_geo[]= {
GEO_SHADOW(0,180,80),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,50,0,DL_blue_coin_geo_0x8026fa4),
GEO_OPEN_NODE(),
GEO_END(),
};
const GeoLayout blue_coin_no_shadow_geo[]= {
GEO_BRANCH(1,Geo_blue_coin_no_shadow_geo_0x16000200),
};
const GeoLayout blue_coin_no_shadow_geo_0x218fa0[]= {
GEO_SHADOW(0,180,80),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,50,0,DL_blue_coin_geo_0x8026fa4),
GEO_OPEN_NODE(),
GEO_END(),
};
const GeoLayout red_coin_geo[]= {
GEO_SHADOW(0,180,50),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,50,0,DL_red_coin_geo_0x80263e8),
GEO_OPEN_NODE(),
GEO_END(),
};
const GeoLayout red_coin_no_shadow_geo[]= {
GEO_NODE_START(),
GEO_OPEN_NODE(),
GEO_SWITCH_CASE(8, geo_switch_anim_state),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,50,0,DL_red_coin_geo_0x80263e8),
GEO_ANIMATED_PART(1,0,50,0,DL_red_coin_geo_0x80263e8),
GEO_ANIMATED_PART(1,0,50,0,DL_red_coin_geo_0x80263e8),
GEO_ANIMATED_PART(1,0,50,0,DL_red_coin_geo_0x80263e8),
GEO_ANIMATED_PART(1,0,50,0,DL_red_coin_geo_0x80263e8),
GEO_ANIMATED_PART(1,0,50,0,DL_red_coin_geo_0x80263e8),
GEO_ANIMATED_PART(1,0,50,0,DL_red_coin_geo_0x80263e8),
GEO_ANIMATED_PART(1,0,50,0,DL_red_coin_geo_0x80263e8),
GEO_OPEN_NODE(),
GEO_OPEN_NODE(),
GEO_END(),
};
