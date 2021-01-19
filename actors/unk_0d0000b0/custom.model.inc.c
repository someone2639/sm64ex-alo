#include "custom.model.inc.h"
const Vtx VB_unk_DL_0d0000b0_0x601eb48[] = {
{{{ -76, -76, 0 }, 0, { 0, 992 }, { 255, 255, 255, 255}}},
{{{ 77, -76, 0 }, 0, { 992, 992 }, { 255, 255, 255, 255}}},
{{{ 77, 77, 0 }, 0, { 992, 0 }, { 255, 255, 255, 255}}},
{{{ -76, 77, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
};

const Gfx DL_unk_DL_0d0000b0_0x601f3c0[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_unk_DL_0d0000b0_0x601f388),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_unk_DL_0d0000b0_0x601f388[] = {
gsDPSetTextureImage(0, 2, 1, texture_unk_DL_0d0000b0_0x601eb88_custom),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_unk_DL_0d0000b0_0x601eb48, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

