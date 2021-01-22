#include "custom.model.inc.h"
const Vtx VB_bubbly_tree_geo_0x302fe28[] = {
{{{ -356, -9, 0 }, 0, { -796, 2012 }, { 255, 255, 255, 255}}},
{{{ 0, -9, 0 }, 0, { 990, 2012 }, { 255, 255, 255, 255}}},
{{{ 0, 800, 0 }, 0, { 990, -712 }, { 255, 255, 255, 255}}},
};

const Vtx VB_bubbly_tree_geo_0x302fe58[] = {
{{{ 0, -9, 0 }, 0, { 0, 2012 }, { 255, 255, 255, 255}}},
{{{ 358, -9, 0 }, 0, { 1756, 2012 }, { 255, 255, 255, 255}}},
{{{ 0, 800, 0 }, 0, { 0, -712 }, { 255, 255, 255, 255}}},
};

const Vtx VB_spiky_tree_geo_0x3030f60[] = {
{{{ 128, 512, 0 }, 0, { 990, 0 }, { 0, 0, 127, 255}}},
{{{ -127, 512, 0 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ -127, 0, 0 }, 0, { 0, 2012 }, { 0, 0, 127, 255}}},
{{{ 128, 0, 0 }, 0, { 990, 2012 }, { 0, 0, 127, 255}}},
};

const Vtx VB_snow_tree_geo_0x3032048[] = {
{{{ 128, 512, 0 }, 0, { 990, 0 }, { 0, 0, 127, 255}}},
{{{ -127, 512, 0 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ -127, 0, 0 }, 0, { 0, 2012 }, { 0, 0, 127, 255}}},
{{{ 128, 0, 0 }, 0, { 990, 2012 }, { 0, 0, 127, 255}}},
};

const Vtx VB_palm_tree_geo_0x3033218[] = {
{{{ 170, 512, 0 }, 0, { 990, 0 }, { 0, 0, 127, 255}}},
{{{ -169, 512, 0 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ -169, 0, 0 }, 0, { 0, 2012 }, { 0, 0, 127, 255}}},
{{{ 170, 0, 0 }, 0, { 990, 2012 }, { 0, 0, 127, 255}}},
};

const Gfx DL_bubbly_tree_geo_0x302fee8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_bubbly_tree_geo_0x302fe88),
gsSPDisplayList(DL_bubbly_tree_geo_0x302feb8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_bubbly_tree_geo_0x302fe88[] = {
gsDPSetTextureImage(0, 2, 1, texture_bubbly_tree_geo_0x302de28_custom),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_bubbly_tree_geo_0x302fe28, 3, 0),
gsSP1Triangle(0, 1, 2, 0),
gsSPEndDisplayList(),
};

const Gfx DL_bubbly_tree_geo_0x302feb8[] = {
gsDPSetTextureImage(0, 2, 1, texture_bubbly_tree_geo_0x302ee28_custom),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_bubbly_tree_geo_0x302fe58, 3, 0),
gsSP1Triangle(0, 1, 2, 0),
gsSPEndDisplayList(),
};

const Light_t Light_spiky_tree_geo_0x302de18 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_spiky_tree_geo_0x302de10 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

const Gfx DL_spiky_tree_geo_0x3030fa0[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsDPSetTextureImage(0, 2, 1, texture_spiky_tree_geo_0x302ff60_custom),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPLight(&Light_spiky_tree_geo_0x302de18.col, 1),
gsSPLight(&Light_spiky_tree_geo_0x302de10.col, 2),
gsSPVertex(VB_spiky_tree_geo_0x3030f60, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

const Gfx DL_snow_tree_geo_0x3032088[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsDPSetTextureImage(0, 2, 1, texture_snow_tree_geo_0x3031048_custom),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPLight(&Light_spiky_tree_geo_0x302de18.col, 1),
gsSPLight(&Light_spiky_tree_geo_0x302de10.col, 2),
gsSPVertex(VB_snow_tree_geo_0x3032048, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

const Gfx DL_palm_tree_geo_0x3033258[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsDPSetTextureImage(0, 2, 1, texture_palm_tree_geo_0x3032218_custom),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPLight(&Light_spiky_tree_geo_0x302de18.col, 1),
gsSPLight(&Light_spiky_tree_geo_0x302de10.col, 2),
gsSPVertex(VB_palm_tree_geo_0x3033218, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

