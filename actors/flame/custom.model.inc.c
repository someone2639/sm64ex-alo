#include "custom.model.inc.h"
const Vtx VB_red_flame_geo_0x30172e0[] = {
{{{ -25, -25, 0 }, 0, { 0, 992 }, { 0, 0, 0, 0}}},
{{{ 25, -25, 0 }, 0, { 992, 992 }, { 0, 0, 0, 0}}},
{{{ 25, 25, 0 }, 0, { 992, 0 }, { 0, 0, 0, 0}}},
{{{ -25, 25, 0 }, 0, { 0, 0 }, { 0, 0, 0, 0}}},
};

const Gfx DL_red_flame_geo_0x301b3b0[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, texture_red_flame_geo_0x3017320_custom),
gsSPBranchList(DL_red_flame_geo_0x301b320),
};

const Gfx DL_red_flame_geo_0x301b320[] = {
gsSPGeometryMode(G_LIGHTING|G_SHADING_SMOOTH, 0),
gsDPSetEnvColor(255, 50, 0, 200),
gsDPSetCombineLERP(TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, ENVIRONMENT, 0),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPSetTile(3, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPTexture(65535, 65535, 0, 0, 1),
gsSPVertex(VB_red_flame_geo_0x30172e0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsSPGeometryMode(0, G_LIGHTING|G_SHADING_SMOOTH),
gsDPSetEnvColor(255, 255, 255, 255),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

const Gfx DL_red_flame_geo_0x301b3c8[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, texture_red_flame_geo_0x3017b20_custom),
gsSPBranchList(DL_red_flame_geo_0x301b320),
};

const Gfx DL_red_flame_geo_0x301b3e0[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, texture_red_flame_geo_0x3018320_custom),
gsSPBranchList(DL_red_flame_geo_0x301b320),
};

const Gfx DL_red_flame_geo_0x301b3f8[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, texture_red_flame_geo_0x3018b20_custom),
gsSPBranchList(DL_red_flame_geo_0x301b320),
};

const Gfx DL_red_flame_geo_0x301b410[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, texture_red_flame_geo_0x3019320_custom),
gsSPBranchList(DL_red_flame_geo_0x301b320),
};

const Gfx DL_red_flame_geo_0x301b428[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, texture_red_flame_geo_0x3019b20_custom),
gsSPBranchList(DL_red_flame_geo_0x301b320),
};

const Gfx DL_red_flame_geo_0x301b440[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, texture_red_flame_geo_0x301a320_custom),
gsSPBranchList(DL_red_flame_geo_0x301b320),
};

const Gfx DL_red_flame_geo_0x301b458[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, texture_red_flame_geo_0x301ab20_custom),
gsSPBranchList(DL_red_flame_geo_0x301b320),
};

const Gfx DL_blue_flame_geo_0x301b500[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, texture_red_flame_geo_0x3017320_custom),
gsSPBranchList(DL_blue_flame_geo_0x301b470),
};

const Gfx DL_blue_flame_geo_0x301b470[] = {
gsSPGeometryMode(G_LIGHTING|G_SHADING_SMOOTH, 0),
gsDPSetEnvColor(100, 100, 255, 255),
gsDPSetCombineLERP(TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, ENVIRONMENT, 0),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPSetTile(3, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPTexture(65535, 65535, 0, 0, 1),
gsSPVertex(VB_red_flame_geo_0x30172e0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsSPGeometryMode(0, G_LIGHTING|G_SHADING_SMOOTH),
gsDPSetEnvColor(255, 255, 255, 255),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

const Gfx DL_blue_flame_geo_0x301b518[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, texture_red_flame_geo_0x3017b20_custom),
gsSPBranchList(DL_blue_flame_geo_0x301b470),
};

const Gfx DL_blue_flame_geo_0x301b530[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, texture_red_flame_geo_0x3018320_custom),
gsSPBranchList(DL_blue_flame_geo_0x301b470),
};

const Gfx DL_blue_flame_geo_0x301b548[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, texture_red_flame_geo_0x3018b20_custom),
gsSPBranchList(DL_blue_flame_geo_0x301b470),
};

const Gfx DL_blue_flame_geo_0x301b560[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, texture_red_flame_geo_0x3019320_custom),
gsSPBranchList(DL_blue_flame_geo_0x301b470),
};

const Gfx DL_blue_flame_geo_0x301b578[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, texture_red_flame_geo_0x3019b20_custom),
gsSPBranchList(DL_blue_flame_geo_0x301b470),
};

const Gfx DL_blue_flame_geo_0x301b590[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, texture_red_flame_geo_0x301a320_custom),
gsSPBranchList(DL_blue_flame_geo_0x301b470),
};

const Gfx DL_blue_flame_geo_0x301b5a8[] = {
gsDPPipeSync(),
gsDPSetTextureImage(3, 2, 1, texture_red_flame_geo_0x301ab20_custom),
gsSPBranchList(DL_blue_flame_geo_0x301b470),
};

