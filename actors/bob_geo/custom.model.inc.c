#include "custom.model.inc.h"
const Vtx VB_bob_geo_000440_0x700e3e0[] = {
{{{ 512, 0, 0 }, 0, { -7184, -5142 }, { 255, 255, 255, 255}}},
{{{ 512, 640, 0 }, 0, { -7184, 990 }, { 255, 255, 255, 255}}},
{{{ -511, 640, 0 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
{{{ -511, 0, 0 }, 0, { 990, -5142 }, { 255, 255, 255, 255}}},
};

const Vtx VB_bob_geo_000458_0x700e528[] = {
{{{ -180, 51, -904 }, 0, { 990, 0 }, { 205, 51, 153, 255}}},
{{{ -180, 0, -904 }, 0, { 950, 284 }, { 172, 172, 214, 255}}},
{{{ -180, 51, 905 }, 0, { -3222, 0 }, { 172, 84, 42, 255}}},
{{{ -180, 0, -904 }, 0, { -3204, 0 }, { 172, 172, 214, 255}}},
{{{ 181, 0, -904 }, 0, { -3204, 2012 }, { 51, 205, 153, 255}}},
{{{ 181, 0, 905 }, 0, { 990, 2012 }, { 84, 172, 42, 255}}},
{{{ -180, 0, 905 }, 0, { 990, 0 }, { 205, 205, 103, 255}}},
{{{ 181, 51, -904 }, 0, { 990, 2012 }, { 84, 84, 214, 255}}},
{{{ 181, 51, 905 }, 0, { -3222, 2012 }, { 51, 51, 103, 255}}},
{{{ 181, 0, 905 }, 0, { -3244, 304 }, { 84, 172, 42, 255}}},
{{{ 181, 0, -904 }, 0, { 950, 284 }, { 51, 205, 153, 255}}},
{{{ 181, 51, -904 }, 0, { 990, 0 }, { 84, 84, 214, 255}}},
{{{ 181, 51, 905 }, 0, { -3222, 0 }, { 51, 51, 103, 255}}},
{{{ -180, 0, 905 }, 0, { 0, 172 }, { 205, 205, 103, 255}}},
{{{ 181, 51, 905 }, 0, { 690, 0 }, { 51, 51, 103, 255}}},
{{{ -180, 51, 905 }, 0, { 0, 0 }, { 172, 84, 42, 255}}},
};

const Vtx VB_bob_geo_000458_0x700e628[] = {
{{{ -180, 0, -904 }, 0, { 950, 284 }, { 172, 172, 214, 255}}},
{{{ -180, 0, 905 }, 0, { -3244, 304 }, { 205, 205, 103, 255}}},
{{{ -180, 51, 905 }, 0, { -3222, 0 }, { 172, 84, 42, 255}}},
{{{ 181, 0, -904 }, 0, { 268, 2012 }, { 51, 205, 153, 255}}},
{{{ -180, 0, -904 }, 0, { 990, 2012 }, { 172, 172, 214, 255}}},
{{{ -180, 51, -904 }, 0, { 990, 1808 }, { 205, 51, 153, 255}}},
{{{ 181, 51, -904 }, 0, { 268, 1808 }, { 84, 84, 214, 255}}},
{{{ -180, 0, 905 }, 0, { 0, 172 }, { 205, 205, 103, 255}}},
{{{ 181, 0, 905 }, 0, { 690, 172 }, { 84, 172, 42, 255}}},
{{{ 181, 51, 905 }, 0, { 690, 0 }, { 51, 51, 103, 255}}},
};

const Vtx VB_bob_geo_000470_0x700e810[] = {
{{{ 0, 384, 0 }, 0, { -1956, -2076 }, { 255, 255, 255, 255}}},
{{{ 320, 640, 0 }, 0, { 598, -4120 }, { 255, 255, 255, 255}}},
{{{ 128, 640, 0 }, 0, { -934, -4120 }, { 255, 255, 255, 255}}},
{{{ 0, 0, 0 }, 0, { -1956, 990 }, { 255, 255, 255, 255}}},
{{{ 320, 0, 0 }, 0, { 598, 990 }, { 255, 255, 255, 255}}},
};

const Gfx DL_bob_geo_000440_0x700e458[] = {
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_2CYCLE),
gsDPSetRenderMode(0, 3356569720),
gsDPSetDepthSource(0),
gsDPSetFogColor(160, 160, 160, 255),
gsMoveWd(G_MW_FOG, 0, 419489792),
gsSPGeometryMode(0, G_FOG),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_bob_geo_000440_0x700e420),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4468856),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_bob_geo_000440_0x700e420[] = {
gsDPSetTextureImage(0, 2, 1, texture_bob_geo_000440_0x9008800_custom),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_bob_geo_000440_0x700e3e0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,3, 0, 2, 0),
gsSPEndDisplayList(),
};

const Light_t Light_bob_geo_000458_0x700e518 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_bob_geo_000458_0x700e510 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

const Gfx DL_bob_geo_000458_0x700e768[] = {
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_2CYCLE),
gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
gsDPSetDepthSource(0),
gsDPSetFogColor(160, 160, 160, 255),
gsMoveWd(G_MW_FOG, 0, 419489792),
gsSPGeometryMode(0, G_FOG),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_bob_geo_000458_0x700e6c8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4464760),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

const Gfx DL_bob_geo_000458_0x700e6c8[] = {
gsDPSetTextureImage(0, 2, 1, texture_bob_geo_000458_0x9006000_custom),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPLight(&Light_bob_geo_000458_0x700e518.col, 1),
gsSPLight(&Light_bob_geo_000458_0x700e510.col, 2),
gsSPVertex(VB_bob_geo_000458_0x700e528, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(6, 3, 5, 0,7, 0, 2, 0),
gsSP2Triangles(8, 7, 2, 0,9, 10, 11, 0),
gsSP2Triangles(12, 9, 11, 0,13, 14, 15, 0),
gsSPVertex(VB_bob_geo_000458_0x700e628, 10, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,7, 8, 9, 0),
gsSPEndDisplayList(),
};

const Gfx DL_bob_geo_000470_0x700e8a0[] = {
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_2CYCLE),
gsDPSetRenderMode(0, 3356569720),
gsDPSetDepthSource(0),
gsDPSetFogColor(160, 160, 160, 255),
gsMoveWd(G_MW_FOG, 0, 419489792),
gsSPGeometryMode(0, G_FOG),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_bob_geo_000470_0x700e860),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4468856),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_bob_geo_000470_0x700e860[] = {
gsDPSetTextureImage(0, 2, 1, texture_bob_geo_000440_0x9008800_custom),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_bob_geo_000470_0x700e810, 5, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 4, 0),
gsSP1Triangle(0, 4, 1, 0),
gsSPEndDisplayList(),
};

