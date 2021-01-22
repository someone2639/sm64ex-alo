#include "custom.model.inc.h"
const Vtx VB_water_splash_geo_0x402a588[] = {
{{{ -64, 0, 0 }, 0, { 0, 2016 }, { 255, 255, 255, 255}}},
{{{ 64, 0, 0 }, 0, { 992, 2016 }, { 255, 255, 255, 255}}},
{{{ 64, 256, 0 }, 0, { 992, 0 }, { 255, 255, 255, 255}}},
{{{ -64, 256, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
};

const Gfx DL_water_splash_geo_0x4032640[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, texture_water_splash_geo_0x402a5c8_custom),
gsSPBranchList(DL_water_splash_geo_0x40325c8),
};

const Gfx DL_water_splash_geo_0x40325c8[] = {
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPSetTile(0, 2, 0, 0, 7, 0, 2, 6, 0, 2, 5, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPVertex(VB_water_splash_geo_0x402a588, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_water_splash_geo_0x4032658[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, texture_water_splash_geo_0x402b5c8_custom),
gsSPBranchList(DL_water_splash_geo_0x40325c8),
};

const Gfx DL_water_splash_geo_0x4032670[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, texture_water_splash_geo_0x402c5c8_custom),
gsSPBranchList(DL_water_splash_geo_0x40325c8),
};

const Gfx DL_water_splash_geo_0x4032688[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, texture_water_splash_geo_0x402d5c8_custom),
gsSPBranchList(DL_water_splash_geo_0x40325c8),
};

const Gfx DL_water_splash_geo_0x40326a0[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, texture_water_splash_geo_0x402e5c8_custom),
gsSPBranchList(DL_water_splash_geo_0x40325c8),
};

const Gfx DL_water_splash_geo_0x40326b8[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, texture_water_splash_geo_0x402f5c8_custom),
gsSPBranchList(DL_water_splash_geo_0x40325c8),
};

const Gfx DL_water_splash_geo_0x40326d0[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, texture_water_splash_geo_0x40305c8_custom),
gsSPBranchList(DL_water_splash_geo_0x40325c8),
};

const Gfx DL_water_splash_geo_0x40326e8[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, texture_water_splash_geo_0x40315c8_custom),
gsSPBranchList(DL_water_splash_geo_0x40325c8),
};

