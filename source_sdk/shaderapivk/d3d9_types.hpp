
#ifndef CSGO_CHEAT_SOURCE_SDK_SHADERAPIVK_D3D9_TYPES_HPP_
#define CSGO_CHEAT_SOURCE_SDK_SHADERAPIVK_D3D9_TYPES_HPP_

#include <cstdint>

namespace dxvk
{
	struct D3D9Device;
	struct D3D9Texture;
	struct D3D9IndexBuffer;
	struct D3D9VertexBuffer;

	typedef unsigned HResult;
	typedef uint32_t Color;

	constexpr Color ColorARGB(int a, int r, int g, int b)
	{
		return ((Color)((((a) & 0xff) << 24) | (((r) & 0xff) << 16) | (((g) & 0xff) << 8) | ((b) & 0xff)));
	}

	constexpr HResult D3D_OK = 0x0;

	constexpr uint32_t D3DFVF_XYZ = 0x002;
	constexpr uint32_t D3DFVF_DIFFUSE = 0x040;
	constexpr uint32_t D3DFVF_TEX1 = 0x100;

	constexpr uint32_t D3DUSAGE_DYNAMIC = 0x00000200L;

	constexpr uint32_t D3DTA_SELECTMASK       = 0x0000000f;  // mask for arg selector
	constexpr uint32_t D3DTA_DIFFUSE          = 0x00000000;  // select diffuse color (read only)
	constexpr uint32_t D3DTA_CURRENT          = 0x00000001;  // select stage destination register (read/write)
	constexpr uint32_t D3DTA_TEXTURE          = 0x00000002;  // select texture color (read only)
	constexpr uint32_t D3DTA_TFACTOR          = 0x00000003;  // select D3DRS_TEXTUREFACTOR (read only)
	constexpr uint32_t D3DTA_SPECULAR         = 0x00000004;  // select specular color (read only)
	constexpr uint32_t D3DTA_TEMP             = 0x00000005;  // select temporary register color (read/write)
	constexpr uint32_t D3DTA_CONSTANT         = 0x00000006;  // select texture stage constant
	constexpr uint32_t D3DTA_COMPLEMENT       = 0x00000010;  // take 1.0 - x (read modifier)
	constexpr uint32_t D3DTA_ALPHAREPLICATE   = 0x00000020;  // replicate alpha to color components (read modifier)

	struct LockedRect
	{
		int pitch;
		void *bits;
	};

	enum D3D9Format
	{
		D3DFMT_A8R8G8B8 = 21,
		D3DFMT_INDEX16 = 101,
	};

	enum D3D9PrimitiveType
	{
		D3DPT_TRIANGLELIST = 4
	};

	enum D3D9TransformStateType
	{
		D3DTS_VIEW = 2,
		D3DTS_PROJECTION = 3,
		D3DTS_TEXTURE0 = 16,
		D3DTS_TEXTURE1 = 17,
		D3DTS_TEXTURE2 = 18,
		D3DTS_TEXTURE3 = 19,
		D3DTS_TEXTURE4 = 20,
		D3DTS_TEXTURE5 = 21,
		D3DTS_TEXTURE6 = 22,
		D3DTS_TEXTURE7 = 23,
		D3DTS_FORCE_DWORD = 0x7fffffff
	};

	enum D3D9RenderStateType
	{
		D3DRS_ZENABLE = 7,
		D3DRS_FILLMODE = 8,
		D3DRS_SHADEMODE = 9,
		D3DRS_ZWRITEENABLE = 14,
		D3DRS_ALPHATESTENABLE = 15,
		D3DRS_LASTPIXEL = 16,
		D3DRS_SRCBLEND = 19,
		D3DRS_DESTBLEND = 20,
		D3DRS_CULLMODE = 22,
		D3DRS_ZFUNC = 23,
		D3DRS_ALPHAREF = 24,
		D3DRS_ALPHAFUNC = 25,
		D3DRS_DITHERENABLE = 26,
		D3DRS_ALPHABLENDENABLE = 27,
		D3DRS_FOGENABLE = 28,
		D3DRS_SPECULARENABLE = 29,
		D3DRS_FOGCOLOR = 34,
		D3DRS_FOGTABLEMODE = 35,
		D3DRS_FOGSTART = 36,
		D3DRS_FOGEND = 37,
		D3DRS_FOGDENSITY = 38,
		D3DRS_RANGEFOGENABLE = 48,
		D3DRS_STENCILENABLE = 52,
		D3DRS_STENCILFAIL = 53,
		D3DRS_STENCILZFAIL = 54,
		D3DRS_STENCILPASS = 55,
		D3DRS_STENCILFUNC = 56,
		D3DRS_STENCILREF = 57,
		D3DRS_STENCILMASK = 58,
		D3DRS_STENCILWRITEMASK = 59,
		D3DRS_TEXTUREFACTOR = 60,
		D3DRS_WRAP0 = 128,
		D3DRS_WRAP1 = 129,
		D3DRS_WRAP2 = 130,
		D3DRS_WRAP3 = 131,
		D3DRS_WRAP4 = 132,
		D3DRS_WRAP5 = 133,
		D3DRS_WRAP6 = 134,
		D3DRS_WRAP7 = 135,
		D3DRS_CLIPPING = 136,
		D3DRS_LIGHTING = 137,
		D3DRS_AMBIENT = 139,
		D3DRS_FOGVERTEXMODE = 140,
		D3DRS_COLORVERTEX = 141,
		D3DRS_LOCALVIEWER = 142,
		D3DRS_NORMALIZENORMALS = 143,
		D3DRS_DIFFUSEMATERIALSOURCE = 145,
		D3DRS_SPECULARMATERIALSOURCE = 146,
		D3DRS_AMBIENTMATERIALSOURCE = 147,
		D3DRS_EMISSIVEMATERIALSOURCE = 148,
		D3DRS_VERTEXBLEND = 151,
		D3DRS_CLIPPLANEENABLE = 152,
		D3DRS_POINTSIZE = 154,
		D3DRS_POINTSIZE_MIN = 155,
		D3DRS_POINTSPRITEENABLE = 156,
		D3DRS_POINTSCALEENABLE = 157,
		D3DRS_POINTSCALE_A = 158,
		D3DRS_POINTSCALE_B = 159,
		D3DRS_POINTSCALE_C = 160,
		D3DRS_MULTISAMPLEANTIALIAS = 161,
		D3DRS_MULTISAMPLEMASK = 162,
		D3DRS_PATCHEDGESTYLE = 163,
		D3DRS_DEBUGMONITORTOKEN = 165,
		D3DRS_POINTSIZE_MAX = 166,
		D3DRS_INDEXEDVERTEXBLENDENABLE = 167,
		D3DRS_COLORWRITEENABLE = 168,
		D3DRS_TWEENFACTOR = 170,
		D3DRS_BLENDOP = 171,
		D3DRS_POSITIONDEGREE = 172,
		D3DRS_NORMALDEGREE = 173,
		D3DRS_SCISSORTESTENABLE = 174,
		D3DRS_SLOPESCALEDEPTHBIAS = 175,
		D3DRS_ANTIALIASEDLINEENABLE = 176,
		D3DRS_MINTESSELLATIONLEVEL = 178,
		D3DRS_MAXTESSELLATIONLEVEL = 179,
		D3DRS_ADAPTIVETESS_X = 180,
		D3DRS_ADAPTIVETESS_Y = 181,
		D3DRS_ADAPTIVETESS_Z = 182,
		D3DRS_ADAPTIVETESS_W = 183,
		D3DRS_ENABLEADAPTIVETESSELLATION = 184,
		D3DRS_TWOSIDEDSTENCILMODE = 185,
		D3DRS_CCW_STENCILFAIL = 186,
		D3DRS_CCW_STENCILZFAIL = 187,
		D3DRS_CCW_STENCILPASS = 188,
		D3DRS_CCW_STENCILFUNC = 189,
		D3DRS_COLORWRITEENABLE1 = 190,
		D3DRS_COLORWRITEENABLE2 = 191,
		D3DRS_COLORWRITEENABLE3 = 192,
		D3DRS_BLENDFACTOR = 193,
		D3DRS_SRGBWRITEENABLE = 194,
		D3DRS_DEPTHBIAS = 195,
		D3DRS_WRAP8 = 198,
		D3DRS_WRAP9 = 199,
		D3DRS_WRAP10 = 200,
		D3DRS_WRAP11 = 201,
		D3DRS_WRAP12 = 202,
		D3DRS_WRAP13 = 203,
		D3DRS_WRAP14 = 204,
		D3DRS_WRAP15 = 205,
		D3DRS_SEPARATEALPHABLENDENABLE = 206,
		D3DRS_SRCBLENDALPHA = 207,
		D3DRS_DESTBLENDALPHA = 208,
		D3DRS_BLENDOPALPHA = 209,
		D3DRS_FORCE_DWORD = 0x7fffffff
	};

	enum D3D9StateBlockType {
		D3DSBT_ALL          = 1,
		D3DSBT_PIXELSTATE   = 2,
		D3DSBT_VERTEXSTATE  = 3,
		D3DSBT_FORCE_DWORD  = 0x7fffffff
	};

	enum D3D9Blend
	{
		D3DBLEND_ZERO = 1,
		D3DBLEND_ONE = 2,
		D3DBLEND_SRCCOLOR = 3,
		D3DBLEND_INVSRCCOLOR = 4,
		D3DBLEND_SRCALPHA = 5,
		D3DBLEND_INVSRCALPHA = 6,
		D3DBLEND_DESTALPHA = 7,
		D3DBLEND_INVDESTALPHA = 8,
		D3DBLEND_DESTCOLOR = 9,
		D3DBLEND_INVDESTCOLOR = 10,
		D3DBLEND_SRCALPHASAT = 11,
		D3DBLEND_BOTHSRCALPHA = 12,
		D3DBLEND_BOTHINVSRCALPHA = 13,
		D3DBLEND_BLENDFACTOR = 14,
		D3DBLEND_INVBLENDFACTOR = 15,
		D3DBLEND_SRCCOLOR2 = 16,
		D3DBLEND_INVSRCCOLOR2 = 17,
		D3DBLEND_FORCE_DWORD = 0x7fffffff
	};

	enum D3D9FillMode {
		D3DFILL_POINT        = 1,
		D3DFILL_WIREFRAME    = 2,
		D3DFILL_SOLID        = 3,
		D3DFILL_FORCE_DWORD  = 0x7fffffff
	};

	enum D3D9Pool
	{
		D3DPOOL_DEFAULT = 0,
		D3DPOOL_MANAGED = 1,
		D3DPOOL_SYSTEMMEM = 2,
		D3DPOOL_SCRATCH = 3,
		D3DPOOL_FORCE_DWORD = 0x7fffffff
	};

	enum D3D9BlendOp {
		D3DBLENDOP_ADD          = 1,
		D3DBLENDOP_SUBTRACT     = 2,
		D3DBLENDOP_REVSUBTRACT  = 3,
		D3DBLENDOP_MIN          = 4,
		D3DBLENDOP_MAX          = 5,
		D3DBLENDOP_FORCE_DWORD  = 0x7fffffff
	};

	enum D3D9Cull {
		D3DCULL_NONE         = 1,
		D3DCULL_CW           = 2,
		D3DCULL_CCW          = 3,
		D3DCULL_FORCE_DWORD  = 0x7fffffff
	};

	enum D3D9Shade {
		D3DSHADE_FLAT         = 1,
		D3DSHADE_GOURAUD      = 2,
		D3DSHADE_PHONG        = 3,
		D3DSHADE_FORCE_DWORD  = 0x7fffffff
	};

	enum D3D9TextureStageState {
		D3DTSS_COLOROP                = 1,
		D3DTSS_COLORARG1              = 2,
		D3DTSS_COLORARG2              = 3,
		D3DTSS_ALPHAOP                = 4,
		D3DTSS_ALPHAARG1              = 5,
		D3DTSS_ALPHAARG2              = 6,
		D3DTSS_BUMPENVMAT00           = 7,
		D3DTSS_BUMPENVMAT01           = 8,
		D3DTSS_BUMPENVMAT10           = 9,
		D3DTSS_BUMPENVMAT11           = 10,
		D3DTSS_TEXCOORDINDEX          = 11,
		D3DTSS_BUMPENVLSCALE          = 22,
		D3DTSS_BUMPENVLOFFSET         = 23,
		D3DTSS_TEXTURETRANSFORMFLAGS  = 24,
		D3DTSS_COLORARG0              = 26,
		D3DTSS_ALPHAARG0              = 27,
		D3DTSS_RESULTARG              = 28,
		D3DTSS_CONSTANT               = 32,
		D3DTSS_FORCE_DWORD            = 0x7fffffff
	};

	enum D3D9TextureOp {
		D3DTOP_DISABLE                    = 1,
		D3DTOP_SELECTARG1                 = 2,
		D3DTOP_SELECTARG2                 = 3,
		D3DTOP_MODULATE                   = 4,
		D3DTOP_MODULATE2X                 = 5,
		D3DTOP_MODULATE4X                 = 6,
		D3DTOP_ADD                        = 7,
		D3DTOP_ADDSIGNED                  = 8,
		D3DTOP_ADDSIGNED2X                = 9,
		D3DTOP_SUBTRACT                   = 10,
		D3DTOP_ADDSMOOTH                  = 11,
		D3DTOP_BLENDDIFFUSEALPHA          = 12,
		D3DTOP_BLENDTEXTUREALPHA          = 13,
		D3DTOP_BLENDFACTORALPHA           = 14,
		D3DTOP_BLENDTEXTUREALPHAPM        = 15,
		D3DTOP_BLENDCURRENTALPHA          = 16,
		D3DTOP_PREMODULATE                = 17,
		D3DTOP_MODULATEALPHA_ADDCOLOR     = 18,
		D3DTOP_MODULATECOLOR_ADDALPHA     = 19,
		D3DTOP_MODULATEINVALPHA_ADDCOLOR  = 20,
		D3DTOP_MODULATEINVCOLOR_ADDALPHA  = 21,
		D3DTOP_BUMPENVMAP                 = 22,
		D3DTOP_BUMPENVMAPLUMINANCE        = 23,
		D3DTOP_DOTPRODUCT3                = 24,
		D3DTOP_MULTIPLYADD                = 25,
		D3DTOP_LERP                       = 26,
		D3DTOP_FORCE_DWORD                = 0x7fffffff
	};

	struct ViewPort
	{
		uint32_t x;
		uint32_t y;
		uint32_t w;
		uint32_t h;
		float min_z;
		float max_z;
	};

	struct Matrix
	{
		float m[4][4];
	};
}

#endif //CSGO_CHEAT_SOURCE_SDK_SHADERAPIVK_D3D9_TYPES_HPP_
