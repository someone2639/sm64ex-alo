const GeoLayout Geo_bowser_1_1_0x35c1700[]= {
GEO_NODE_SCREEN_AREA(10,160,120,160,120),
GEO_OPEN_NODE(),
GEO_ZBUFFER(0),
GEO_OPEN_NODE(),
GEO_NODE_ORTHO(100),
GEO_OPEN_NODE(),
GEO_BACKGROUND(1, geo_skybox_main),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_ZBUFFER(1),
GEO_OPEN_NODE(),
GEO_CAMERA_FRUSTUM_WITH_FUNC(45,100,38550, geo_camera_fov),
GEO_OPEN_NODE(),
GEO_CAMERA(1,0,2000,6000,3072,0,60928, geo_camera_main),
GEO_OPEN_NODE(),
GEO_DISPLAY_LIST(1,DL_bowser_1_1_0xe03d3b0),
GEO_DISPLAY_LIST(4,DL_bowser_1_1_0xe04bbf0),
GEO_DISPLAY_LIST(5,DL_bowser_1_1_0xe04cf28),
GEO_RENDER_OBJ(),
GEO_ASM(0, geo_envfx_main),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_ZBUFFER(0),
GEO_OPEN_NODE(),
GEO_ASM(0, geo_cannon_circle_base),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};