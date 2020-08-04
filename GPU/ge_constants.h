// Copyright (c) 2012- PPSSPP Project.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, version 2.0 or later versions.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License 2.0 for more details.

// A copy of the GPL 2.0 should have been included with the program.
// If not, see http://www.gnu.org/licenses/

// Official git repository and contact information can be found at
// https://github.com/hrydgard/ppsspp and http://www.ppsspp.org/.

#pragma once

enum GECommand {
	GE_CMD_NOP = 0,
	GE_CMD_VADDR = 0x1,
	GE_CMD_IADDR = 0x2,
	GE_CMD_PRIM = 0x4,
	GE_CMD_BEZIER = 0x5,
	GE_CMD_SPLINE = 0x6,
	GE_CMD_BOUNDINGBOX = 0x7,
	GE_CMD_JUMP = 0x8,
	GE_CMD_BJUMP = 0x9,
	GE_CMD_CALL = 0xA,
	GE_CMD_RET = 0xB,
	GE_CMD_END = 0xC,
	GE_CMD_SIGNAL = 0xE,
	GE_CMD_FINISH = 0xF,
	GE_CMD_BASE = 0x10,
	GE_CMD_VERTEXTYPE = 0x12,
	GE_CMD_OFFSETADDR = 0x13,
	GE_CMD_ORIGIN = 0x14,
	GE_CMD_REGION1 = 0x15,
	GE_CMD_REGION2 = 0x16,
	GE_CMD_LIGHTINGENABLE = 0x17,
	GE_CMD_LIGHTENABLE0 = 0x18,
	GE_CMD_LIGHTENABLE1 = 0x19,
	GE_CMD_LIGHTENABLE2 = 0x1A,
	GE_CMD_LIGHTENABLE3 = 0x1B,
	GE_CMD_DEPTHCLAMPENABLE = 0x1C,
	GE_CMD_CULLFACEENABLE = 0x1D,
	GE_CMD_TEXTUREMAPENABLE = 0x1E,
	GE_CMD_FOGENABLE = 0x1F,
	GE_CMD_DITHERENABLE = 0x20,
	GE_CMD_ALPHABLENDENABLE = 0x21,
	GE_CMD_ALPHATESTENABLE = 0x22,
	GE_CMD_ZTESTENABLE = 0x23,
	GE_CMD_STENCILTESTENABLE = 0x24,
	GE_CMD_ANTIALIASENABLE = 0x25,
	GE_CMD_PATCHCULLENABLE = 0x26,
	GE_CMD_COLORTESTENABLE = 0x27,
	GE_CMD_LOGICOPENABLE = 0x28,
	GE_CMD_BONEMATRIXNUMBER = 0x2A,
	GE_CMD_BONEMATRIXDATA = 0x2B,
	GE_CMD_MORPHWEIGHT0 = 0x2C,
	GE_CMD_MORPHWEIGHT1 = 0x2D,
	GE_CMD_MORPHWEIGHT2 = 0x2E,
	GE_CMD_MORPHWEIGHT3 = 0x2F,
	GE_CMD_MORPHWEIGHT4 = 0x30,
	GE_CMD_MORPHWEIGHT5 = 0x31,
	GE_CMD_MORPHWEIGHT6 = 0x32,
	GE_CMD_MORPHWEIGHT7 = 0x33,
	GE_CMD_PATCHDIVISION = 0x36,
	GE_CMD_PATCHPRIMITIVE = 0x37,
	GE_CMD_PATCHFACING = 0x38,
	GE_CMD_WORLDMATRIXNUMBER = 0x3A,
	GE_CMD_WORLDMATRIXDATA = 0x3B,
	GE_CMD_VIEWMATRIXNUMBER = 0x3C,
	GE_CMD_VIEWMATRIXDATA = 0x3D,
	GE_CMD_PROJMATRIXNUMBER = 0x3E,
	GE_CMD_PROJMATRIXDATA = 0x3F,
	GE_CMD_TGENMATRIXNUMBER = 0x40,
	GE_CMD_TGENMATRIXDATA = 0x41,
	GE_CMD_VIEWPORTXSCALE = 0x42,
	GE_CMD_VIEWPORTYSCALE = 0x43,
	GE_CMD_VIEWPORTZSCALE = 0x44,
	GE_CMD_VIEWPORTXCENTER = 0x45,
	GE_CMD_VIEWPORTYCENTER = 0x46,
	GE_CMD_VIEWPORTZCENTER = 0x47,
	GE_CMD_TEXSCALEU = 0x48,
	GE_CMD_TEXSCALEV = 0x49,
	GE_CMD_TEXOFFSETU = 0x4A,
	GE_CMD_TEXOFFSETV = 0x4B,
	GE_CMD_OFFSETX = 0x4C,
	GE_CMD_OFFSETY = 0x4D,
	GE_CMD_SHADEMODE = 0x50,  // flat or gouraud
	GE_CMD_REVERSENORMAL = 0x51,
	GE_CMD_MATERIALUPDATE = 0x53,
	GE_CMD_MATERIALEMISSIVE = 0x54, //not sure about these but this makes sense
	GE_CMD_MATERIALAMBIENT = 0x55,  //gotta try enabling lighting and check :)
	GE_CMD_MATERIALDIFFUSE = 0x56,
	GE_CMD_MATERIALSPECULAR = 0x57,
	GE_CMD_MATERIALALPHA = 0x58,
	GE_CMD_MATERIALSPECULARCOEF = 0x5B,
	GE_CMD_AMBIENTCOLOR = 0x5C,
	GE_CMD_AMBIENTALPHA = 0x5D,
	GE_CMD_LIGHTMODE = 0x5E,
	GE_CMD_LIGHTTYPE0 = 0x5F,
	GE_CMD_LIGHTTYPE1 = 0x60,
	GE_CMD_LIGHTTYPE2 = 0x61,
	GE_CMD_LIGHTTYPE3 = 0x62,
	GE_CMD_LX0 = 0x63,
	GE_CMD_LY0,
	GE_CMD_LZ0,
	GE_CMD_LX1,
	GE_CMD_LY1,
	GE_CMD_LZ1,
	GE_CMD_LX2,
	GE_CMD_LY2,
	GE_CMD_LZ2,
	GE_CMD_LX3,
	GE_CMD_LY3,
	GE_CMD_LZ3,
	GE_CMD_LDX0 = 0x6F,
	GE_CMD_LDY0,
	GE_CMD_LDZ0,
	GE_CMD_LDX1,
	GE_CMD_LDY1,
	GE_CMD_LDZ1,
	GE_CMD_LDX2,
	GE_CMD_LDY2,
	GE_CMD_LDZ2,
	GE_CMD_LDX3,
	GE_CMD_LDY3,
	GE_CMD_LDZ3,
	GE_CMD_LKA0 = 0x7B,
	GE_CMD_LKB0,
	GE_CMD_LKC0,
	GE_CMD_LKA1,
	GE_CMD_LKB1,
	GE_CMD_LKC1,
	GE_CMD_LKA2,
	GE_CMD_LKB2,
	GE_CMD_LKC2,
	GE_CMD_LKA3,
	GE_CMD_LKB3,
	GE_CMD_LKC3,
	GE_CMD_LKS0 = 0x87,
	GE_CMD_LKS1,
	GE_CMD_LKS2,
	GE_CMD_LKS3,
	GE_CMD_LKO0 = 0x8b,
	GE_CMD_LKO1,
	GE_CMD_LKO2,
	GE_CMD_LKO3,
	GE_CMD_LAC0 = 0x8F,
	GE_CMD_LDC0,
	GE_CMD_LSC0,
	GE_CMD_LAC1,
	GE_CMD_LDC1,
	GE_CMD_LSC1,
	GE_CMD_LAC2,
	GE_CMD_LDC2,
	GE_CMD_LSC2,
	GE_CMD_LAC3,
	GE_CMD_LDC3,
	GE_CMD_LSC3,
	GE_CMD_CULL = 0x9B,
	GE_CMD_FRAMEBUFPTR = 0x9C,
	GE_CMD_FRAMEBUFWIDTH = 0x9D,
	GE_CMD_ZBUFPTR = 0x9E,
	GE_CMD_ZBUFWIDTH = 0x9F,
	GE_CMD_TEXADDR0 = 0xA0,
	GE_CMD_TEXADDR1,
	GE_CMD_TEXADDR2,
	GE_CMD_TEXADDR3,
	GE_CMD_TEXADDR4,
	GE_CMD_TEXADDR5,
	GE_CMD_TEXADDR6,
	GE_CMD_TEXADDR7,
	GE_CMD_TEXBUFWIDTH0 = 0xA8,
	GE_CMD_TEXBUFWIDTH1,
	GE_CMD_TEXBUFWIDTH2,
	GE_CMD_TEXBUFWIDTH3,
	GE_CMD_TEXBUFWIDTH4,
	GE_CMD_TEXBUFWIDTH5,	
	GE_CMD_TEXBUFWIDTH6,
	GE_CMD_TEXBUFWIDTH7,
	GE_CMD_CLUTADDR = 0xB0,
	GE_CMD_CLUTADDRUPPER = 0xB1,
	GE_CMD_TRANSFERSRC,
	GE_CMD_TRANSFERSRCW,
	GE_CMD_TRANSFERDST,
	GE_CMD_TRANSFERDSTW,
	GE_CMD_TEXSIZE0=0xB8,
	GE_CMD_TEXSIZE1,
	GE_CMD_TEXSIZE2,
	GE_CMD_TEXSIZE3,
	GE_CMD_TEXSIZE4,
	GE_CMD_TEXSIZE5,
	GE_CMD_TEXSIZE6,
	GE_CMD_TEXSIZE7,
	GE_CMD_TEXMAPMODE = 0xC0,
	GE_CMD_TEXSHADELS = 0xC1,
	GE_CMD_TEXMODE = 0xC2,
	GE_CMD_TEXFORMAT = 0xC3,
	GE_CMD_LOADCLUT = 0xC4,
	GE_CMD_CLUTFORMAT = 0xC5,
	GE_CMD_TEXFILTER = 0xC6,
	GE_CMD_TEXWRAP = 0xC7,
	GE_CMD_TEXLEVEL = 0xC8,
	GE_CMD_TEXFUNC = 0xC9,
	GE_CMD_TEXENVCOLOR = 0xCA,
	GE_CMD_TEXFLUSH = 0xCB,
	GE_CMD_TEXSYNC = 0xCC,
	GE_CMD_FOG1 = 0xCD,
	GE_CMD_FOG2 = 0xCE,
	GE_CMD_FOGCOLOR = 0xCF,
	GE_CMD_TEXLODSLOPE = 0xD0,
	GE_CMD_FRAMEBUFPIXFORMAT = 0xD2,
	GE_CMD_CLEARMODE = 0xD3,
	GE_CMD_SCISSOR1 = 0xD4,
	GE_CMD_SCISSOR2 = 0xD5,
	GE_CMD_MINZ = 0xD6,
	GE_CMD_MAXZ = 0xD7,
	GE_CMD_COLORTEST = 0xD8,
	GE_CMD_COLORREF = 0xD9,
	GE_CMD_COLORTESTMASK = 0xDA,
	GE_CMD_ALPHATEST = 0xDB,
	GE_CMD_STENCILTEST = 0xDC,
	GE_CMD_STENCILOP = 0xDD,
	GE_CMD_ZTEST = 0xDE,
	GE_CMD_BLENDMODE = 0xDF,
	GE_CMD_BLENDFIXEDA = 0xE0,
	GE_CMD_BLENDFIXEDB = 0xE1,				
	GE_CMD_DITH0 = 0xE2,
	GE_CMD_DITH1,
	GE_CMD_DITH2,
	GE_CMD_DITH3,
	GE_CMD_LOGICOP = 0xE6,
	GE_CMD_ZWRITEDISABLE = 0xE7,
	GE_CMD_MASKRGB = 0xE8,
	GE_CMD_MASKALPHA = 0xE9,
	GE_CMD_TRANSFERSTART = 0xEA,
	GE_CMD_TRANSFERSRCPOS = 0xEB,
	GE_CMD_TRANSFERDSTPOS = 0xEC,
	GE_CMD_TRANSFERSIZE = 0xEE,
	GE_CMD_VSCX = 0xF0,
	GE_CMD_VSCY = 0xF1,
	GE_CMD_VSCZ = 0xF2,
	GE_CMD_VTCS = 0xF3,
	GE_CMD_VTCT = 0xF4,
	GE_CMD_VTCQ = 0xF5,
	GE_CMD_VCV = 0xF6,
	GE_CMD_VAP = 0xF7,
	GE_CMD_VFC = 0xF8,
	GE_CMD_VSCV = 0xF9,
	GE_CMD_UNKNOWN_03 = 0x03,
	GE_CMD_UNKNOWN_0D = 0x0D,
	GE_CMD_UNKNOWN_11 = 0x11,
	GE_CMD_UNKNOWN_29 = 0x29,
	GE_CMD_UNKNOWN_34 = 0x34,
	GE_CMD_UNKNOWN_35 = 0x35,
	GE_CMD_UNKNOWN_39 = 0x39,
	GE_CMD_UNKNOWN_4E = 0x4E,
	GE_CMD_UNKNOWN_4F = 0x4F,
	GE_CMD_UNKNOWN_52 = 0x52,
	GE_CMD_UNKNOWN_59 = 0x59,
	GE_CMD_UNKNOWN_5A = 0x5A,
	GE_CMD_UNKNOWN_B6 = 0xB6,
	GE_CMD_UNKNOWN_B7 = 0xB7,
	GE_CMD_UNKNOWN_D1 = 0xD1,
	GE_CMD_UNKNOWN_ED = 0xED,
	GE_CMD_UNKNOWN_EF = 0xEF,
	GE_CMD_UNKNOWN_FA = 0xFA,
	GE_CMD_UNKNOWN_FB = 0xFB,
	GE_CMD_UNKNOWN_FC = 0xFC,
	GE_CMD_UNKNOWN_FD = 0xFD,
	GE_CMD_UNKNOWN_FE = 0xFE,
	GE_CMD_NOP_FF = 0xFF,
};

enum GEBufferFormat
{
	GE_FORMAT_565 = 0,
	GE_FORMAT_5551 = 1,
	GE_FORMAT_4444 = 2,
	GE_FORMAT_8888 = 3,
	GE_FORMAT_INVALID = 0xFF,
};

const char *GeBufferFormatToString(GEBufferFormat fmt);

#define GE_VTYPE_TRANSFORM (0<<23)
#define GE_VTYPE_THROUGH   (1<<23)
#define GE_VTYPE_THROUGH_MASK (1<<23)

#define GE_VTYPE_TC_NONE  (0<<0)
#define GE_VTYPE_TC_8BIT  (1<<0)
#define GE_VTYPE_TC_16BIT (2<<0)
#define GE_VTYPE_TC_FLOAT (3<<0)
#define GE_VTYPE_TC_MASK  (3<<0)
#define GE_VTYPE_TC_SHIFT 0

#define GE_VTYPE_COL_NONE (0<<2)
#define GE_VTYPE_COL_565  (4<<2)
#define GE_VTYPE_COL_5551 (5<<2)
#define GE_VTYPE_COL_4444 (6<<2)
#define GE_VTYPE_COL_8888 (7<<2)
#define GE_VTYPE_COL_MASK (7<<2)
#define GE_VTYPE_COL_SHIFT 2

#define GE_VTYPE_NRM_NONE  (0<<5)
#define GE_VTYPE_NRM_8BIT  (1<<5)
#define GE_VTYPE_NRM_16BIT (2<<5)
#define GE_VTYPE_NRM_FLOAT (3<<5)
#define GE_VTYPE_NRM_MASK  (3<<5)
#define GE_VTYPE_NRM_SHIFT 5

//#define GE_VTYPE_POSITION_NONE  (0<<5)
#define GE_VTYPE_POS_8BIT  (1<<7)
#define GE_VTYPE_POS_16BIT (2<<7)
#define GE_VTYPE_POS_FLOAT (3<<7)
#define GE_VTYPE_POS_MASK  (3<<7)
#define GE_VTYPE_POS_SHIFT 7

#define GE_VTYPE_WEIGHT_NONE  (0<<9)
#define GE_VTYPE_WEIGHT_8BIT  (1<<9)
#define GE_VTYPE_WEIGHT_16BIT (2<<9)
#define GE_VTYPE_WEIGHT_FLOAT (3<<9)
#define GE_VTYPE_WEIGHT_MASK  (3<<9)
#define GE_VTYPE_WEIGHT_SHIFT 9

#define GE_VTYPE_WEIGHTCOUNT_MASK  (7<<14)
#define GE_VTYPE_WEIGHTCOUNT_SHIFT 14

#define GE_VTYPE_MORPHCOUNT_MASK  (7<<18)
#define GE_VTYPE_MORPHCOUNT_SHIFT 18

#define GE_VTYPE_IDX_NONE  (0<<11)
#define GE_VTYPE_IDX_8BIT  (1<<11)
#define GE_VTYPE_IDX_16BIT (2<<11)
#define GE_VTYPE_IDX_32BIT (3<<11)
#define GE_VTYPE_IDX_MASK  (3<<11)
#define GE_VTYPE_IDX_SHIFT 11

#define GE_CLEARMODE_COLOR (1<<8)
#define GE_CLEARMODE_ALPHA (1<<9) //or stencil?
#define GE_CLEARMODE_Z     (1<<10)
#define GE_CLEARMODE_ALL (GE_CLEARMODE_COLOR|GE_CLEARMODE_ALPHA|GE_CLEARMODE_Z)

enum GEMatrixType {
	GE_MTX_BONE0 = 0,
	GE_MTX_BONE1,
	GE_MTX_BONE2,
	GE_MTX_BONE3,
	GE_MTX_BONE4,
	GE_MTX_BONE5,
	GE_MTX_BONE6,
	GE_MTX_BONE7,
	GE_MTX_WORLD,
	GE_MTX_VIEW,
	GE_MTX_PROJECTION,
	GE_MTX_TEXGEN,
};

enum GEComparison
{
	GE_COMP_NEVER = 0,
	GE_COMP_ALWAYS = 1,
	GE_COMP_EQUAL = 2,
	GE_COMP_NOTEQUAL = 3,
	GE_COMP_LESS = 4,
	GE_COMP_LEQUAL = 5,
	GE_COMP_GREATER = 6,
	GE_COMP_GEQUAL = 7,
};

enum GEShadeMode
{
	GE_SHADE_FLAT = 0,
	GE_SHADE_GOURAUD = 1,
};

enum GELightType
{
	GE_LIGHTTYPE_DIRECTIONAL = 0,
	GE_LIGHTTYPE_POINT = 1,
	GE_LIGHTTYPE_SPOT = 2,
	GE_LIGHTTYPE_UNKNOWN = 3,
};

enum GELightColorSetting
{
	GE_LIGHTCOLOR_AMBIENT = 0,
	GE_LIGHTCOLOR_DIFFUSE = 1,
	GE_LIGHTCOLOR_SPECULAR = 2,
};

enum GELightComputation
{
	GE_LIGHTCOMP_ONLYDIFFUSE = 0,
	GE_LIGHTCOMP_BOTH = 1,
	GE_LIGHTCOMP_ONLYPOWDIFFUSE = 2,
};

enum GETextureFormat
{
	GE_TFMT_5650 = 0,
	GE_TFMT_5551 = 1,
	GE_TFMT_4444 = 2,
	GE_TFMT_8888 = 3,
	GE_TFMT_CLUT4 = 4,
	GE_TFMT_CLUT8 = 5,
	GE_TFMT_CLUT16 = 6,
	GE_TFMT_CLUT32 = 7,
	GE_TFMT_DXT1 = 8,
	GE_TFMT_DXT3 = 9,
	GE_TFMT_DXT5 = 10,
};

const char *GeTextureFormatToString(GETextureFormat fmt);
inline bool IsClutFormat(GETextureFormat fmt) {
	return fmt == GE_TFMT_CLUT4 || fmt == GE_TFMT_CLUT8 || fmt == GE_TFMT_CLUT16 || fmt == GE_TFMT_CLUT32;
}
inline bool IsDXTFormat(GETextureFormat fmt) {
	return fmt == GE_TFMT_DXT1 || fmt == GE_TFMT_DXT3 || fmt == GE_TFMT_DXT5;
}

enum GETexLevelMode {
	GE_TEXLEVEL_MODE_AUTO = 0,
	GE_TEXLEVEL_MODE_CONST = 1,
	GE_TEXLEVEL_MODE_SLOPE = 2,
	GE_TEXLEVEL_MODE_UNKNOWN = 3,  // Behaves like CONST.
};

enum GEMaterialColorSetting
{
	GE_MATERIALCOLOR_EMISSIVE = 0,
	GE_MATERIALCOLOR_AMBIENT = 1,
	GE_MATERIALCOLOR_DIFFUSE = 2,
	GE_MATERIALCOLOR_SPECULAR = 3,
};

enum GEBlendMode
{
	GE_BLENDMODE_MUL_AND_ADD = 0,
	GE_BLENDMODE_MUL_AND_SUBTRACT = 1,
	GE_BLENDMODE_MUL_AND_SUBTRACT_REVERSE = 2,
	GE_BLENDMODE_MIN = 3,
	GE_BLENDMODE_MAX = 4,
	GE_BLENDMODE_ABSDIFF = 5,
};

enum GEBlendSrcFactor
{
	GE_SRCBLEND_DSTCOLOR,
	GE_SRCBLEND_INVDSTCOLOR,
	GE_SRCBLEND_SRCALPHA,
	GE_SRCBLEND_INVSRCALPHA,
	GE_SRCBLEND_DSTALPHA,
	GE_SRCBLEND_INVDSTALPHA,
	GE_SRCBLEND_DOUBLESRCALPHA,
	GE_SRCBLEND_DOUBLEINVSRCALPHA,
	GE_SRCBLEND_DOUBLEDSTALPHA,
	GE_SRCBLEND_DOUBLEINVDSTALPHA,
	GE_SRCBLEND_FIXA,
};

enum GEBlendDstFactor
{
	GE_DSTBLEND_SRCCOLOR,
	GE_DSTBLEND_INVSRCCOLOR,
	GE_DSTBLEND_SRCALPHA,
	GE_DSTBLEND_INVSRCALPHA,
	GE_DSTBLEND_DSTALPHA,
	GE_DSTBLEND_INVDSTALPHA,
	GE_DSTBLEND_DOUBLESRCALPHA,
	GE_DSTBLEND_DOUBLEINVSRCALPHA,
	GE_DSTBLEND_DOUBLEDSTALPHA,
	GE_DSTBLEND_DOUBLEINVDSTALPHA,
	GE_DSTBLEND_FIXB,
};

enum GETexFunc
{
	GE_TEXFUNC_MODULATE = 0,
	GE_TEXFUNC_DECAL = 1,
	GE_TEXFUNC_BLEND = 2,
	GE_TEXFUNC_REPLACE = 3,
	GE_TEXFUNC_ADD = 4,
	GE_TEXFUNC_UNKNOWN1 = 5,
	GE_TEXFUNC_UNKNOWN2 = 6,
	GE_TEXFUNC_UNKNOWN3 = 7,
};

enum GEStencilOp
{
	GE_STENCILOP_KEEP = 0,
	GE_STENCILOP_ZERO = 1,
	GE_STENCILOP_REPLACE = 2,
	GE_STENCILOP_INVERT = 3,
	GE_STENCILOP_INCR = 4,
	GE_STENCILOP_DECR = 5,
};

enum GETextureFiltering
{
	GE_TFILT_NEAREST = 0,
	GE_TFILT_LINEAR = 1,
	GE_TFILT_NEAREST_MIPMAP_NEAREST = 4,
	GE_TFILT_LINEAR_MIPMAP_NEAREST = 5,
	GE_TFILT_NEAREST_MIPMAP_LINEAR = 6,
	GE_TFILT_LINEAR_MIPMAP_LINEAR = 7,
};

enum GETexMapMode
{
	GE_TEXMAP_TEXTURE_COORDS = 0,
	GE_TEXMAP_TEXTURE_MATRIX = 1,
	GE_TEXMAP_ENVIRONMENT_MAP = 2,
	GE_TEXMAP_UNKNOWN = 3,
};

enum GETexProjMapMode
{
	GE_PROJMAP_POSITION = 0,
	GE_PROJMAP_UV = 1,
	GE_PROJMAP_NORMALIZED_NORMAL = 2,
	GE_PROJMAP_NORMAL = 3,
};

enum GEPrimitiveType
{
	GE_PRIM_POINTS = 0,
	GE_PRIM_LINES = 1,
	GE_PRIM_LINE_STRIP = 2,
	GE_PRIM_TRIANGLES = 3,
	GE_PRIM_TRIANGLE_STRIP = 4,
	GE_PRIM_TRIANGLE_FAN = 5,
	GE_PRIM_RECTANGLES = 6,
	GE_PRIM_KEEP_PREVIOUS = 7,
	GE_PRIM_INVALID = -1,
};

enum GELogicOp
{
	GE_LOGIC_CLEAR = 0,
	GE_LOGIC_AND = 1,
	GE_LOGIC_AND_REVERSE = 2,
	GE_LOGIC_COPY = 3,
	GE_LOGIC_AND_INVERTED = 4,
	GE_LOGIC_NOOP = 5,
	GE_LOGIC_XOR = 6,
	GE_LOGIC_OR = 7,
	GE_LOGIC_NOR = 8,
	GE_LOGIC_EQUIV = 9,
	GE_LOGIC_INVERTED = 10,
	GE_LOGIC_OR_REVERSE = 11,
	GE_LOGIC_COPY_INVERTED = 12,
	GE_LOGIC_OR_INVERTED = 13,
	GE_LOGIC_NAND = 14,
	GE_LOGIC_SET = 15,
};

enum GEPatchPrimType
{
	GE_PATCHPRIM_TRIANGLES = 0,
	GE_PATCHPRIM_LINES = 1,
	GE_PATCHPRIM_POINTS = 2,
	// Treated as points.
	GE_PATCHPRIM_UNKNOWN = 3,
};

inline GEPrimitiveType PatchPrimToPrim(GEPatchPrimType type) {
	switch (type) {
	case GE_PATCHPRIM_TRIANGLES: return GE_PRIM_TRIANGLES;
	case GE_PATCHPRIM_LINES: return GE_PRIM_LINES;
	case GE_PATCHPRIM_POINTS: return GE_PRIM_POINTS;
	case GE_PATCHPRIM_UNKNOWN: default: return GE_PRIM_POINTS; // Treated as points.
	}
}

enum GEPaletteFormat
{
	GE_CMODE_16BIT_BGR5650,
	GE_CMODE_16BIT_ABGR5551,
	GE_CMODE_16BIT_ABGR4444,
	GE_CMODE_32BIT_ABGR8888,
};
