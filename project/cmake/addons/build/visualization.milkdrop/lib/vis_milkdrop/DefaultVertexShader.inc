#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
//
// Buffer Definitions: 
//
// cbuffer cbTransforms
// {
//
//   float4x4 g_world;                  // Offset:    0 Size:    64
//   float4x4 g_view;                   // Offset:   64 Size:    64
//   float4x4 g_proj;                   // Offset:  128 Size:    64
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim      HLSL Bind  Count
// ------------------------------ ---------- ------- ----------- -------------- ------
// cbTransforms                      cbuffer      NA          NA            cb0      1 
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// POSITION                 0   xyzw        0     NONE   float   xyzw
// COLOR                    0   xyzw        1     NONE   float   xyzw
// TEXCOORD                 0   xy          2     NONE   float   xy  
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// COLOR                    0   xyzw        0     NONE   float   xyzw
// TEXCOORD                 0   xy          1     NONE   float   xy  
// SV_POSITION              0   xyzw        2      POS   float   xyzw
//
//
// Constant buffer to DX9 shader constant mappings:
//
// Target Reg Buffer  Start Reg # of Regs        Data Conversion
// ---------- ------- --------- --------- ----------------------
// c1         cb0             0        12  ( FLT, FLT, FLT, FLT)
//
//
// Runtime generated constant mappings:
//
// Target Reg                               Constant Description
// ---------- --------------------------------------------------
// c0                              Vertex Shader position offset
//
//
// Level9 shader bytecode:
//
    vs_2_0
    def c13, 0, 1, 0, 0
    dcl_texcoord v0
    dcl_texcoord1 v1
    dcl_texcoord2 v2
    dp4 r0.x, v0, c1
    dp4 r0.y, v0, c2
    dp4 r0.z, v0, c3
    dp4 r0.w, v0, c4
    dp4 r1.x, r0, c5
    dp4 r1.y, r0, c6
    dp4 r1.z, r0, c7
    dp4 r1.w, r0, c8
    dp4 oPos.z, r1, c11
    max r0, v1, c13.x
    min oT0, r0, c13.y
    dp4 r0.x, r1, c9
    dp4 r0.y, r1, c10
    dp4 r0.z, r1, c12
    mad oPos.xy, r0.z, c0, r0
    mov oPos.w, r0.z
    mov oT1.xy, v2

// approximately 17 instruction slots used
vs_4_0
dcl_constantbuffer CB0[12], immediateIndexed
dcl_input v0.xyzw
dcl_input v1.xyzw
dcl_input v2.xy
dcl_output o0.xyzw
dcl_output o1.xy
dcl_output_siv o2.xyzw, position
dcl_temps 2
mov_sat o0.xyzw, v1.xyzw
mov o1.xy, v2.xyxx
dp4 r0.x, v0.xyzw, cb0[0].xyzw
dp4 r0.y, v0.xyzw, cb0[1].xyzw
dp4 r0.z, v0.xyzw, cb0[2].xyzw
dp4 r0.w, v0.xyzw, cb0[3].xyzw
dp4 r1.x, r0.xyzw, cb0[4].xyzw
dp4 r1.y, r0.xyzw, cb0[5].xyzw
dp4 r1.z, r0.xyzw, cb0[6].xyzw
dp4 r1.w, r0.xyzw, cb0[7].xyzw
dp4 o2.x, r1.xyzw, cb0[8].xyzw
dp4 o2.y, r1.xyzw, cb0[9].xyzw
dp4 o2.z, r1.xyzw, cb0[10].xyzw
dp4 o2.w, r1.xyzw, cb0[11].xyzw
ret 
// Approximately 15 instruction slots used
#endif

const BYTE DefaultVertexShaderCode[] =
{
     68,  88,  66,  67, 118,  84, 
    115,  13, 183,  11,  88,  86, 
    198, 151, 160, 235, 146, 179, 
    226,  49,   1,   0,   0,   0, 
     72,   6,   0,   0,   6,   0, 
      0,   0,  56,   0,   0,   0, 
    196,   1,   0,   0, 228,   3, 
      0,   0,  96,   4,   0,   0, 
    100,   5,   0,   0, 212,   5, 
      0,   0,  65, 111, 110,  57, 
    132,   1,   0,   0, 132,   1, 
      0,   0,   0,   2, 254, 255, 
     80,   1,   0,   0,  52,   0, 
      0,   0,   1,   0,  36,   0, 
      0,   0,  48,   0,   0,   0, 
     48,   0,   0,   0,  36,   0, 
      1,   0,  48,   0,   0,   0, 
      0,   0,  12,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   2, 254, 255, 
     81,   0,   0,   5,  13,   0, 
     15, 160,   0,   0,   0,   0, 
      0,   0, 128,  63,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     31,   0,   0,   2,   5,   0, 
      0, 128,   0,   0,  15, 144, 
     31,   0,   0,   2,   5,   0, 
      1, 128,   1,   0,  15, 144, 
     31,   0,   0,   2,   5,   0, 
      2, 128,   2,   0,  15, 144, 
      9,   0,   0,   3,   0,   0, 
      1, 128,   0,   0, 228, 144, 
      1,   0, 228, 160,   9,   0, 
      0,   3,   0,   0,   2, 128, 
      0,   0, 228, 144,   2,   0, 
    228, 160,   9,   0,   0,   3, 
      0,   0,   4, 128,   0,   0, 
    228, 144,   3,   0, 228, 160, 
      9,   0,   0,   3,   0,   0, 
      8, 128,   0,   0, 228, 144, 
      4,   0, 228, 160,   9,   0, 
      0,   3,   1,   0,   1, 128, 
      0,   0, 228, 128,   5,   0, 
    228, 160,   9,   0,   0,   3, 
      1,   0,   2, 128,   0,   0, 
    228, 128,   6,   0, 228, 160, 
      9,   0,   0,   3,   1,   0, 
      4, 128,   0,   0, 228, 128, 
      7,   0, 228, 160,   9,   0, 
      0,   3,   1,   0,   8, 128, 
      0,   0, 228, 128,   8,   0, 
    228, 160,   9,   0,   0,   3, 
      0,   0,   4, 192,   1,   0, 
    228, 128,  11,   0, 228, 160, 
     11,   0,   0,   3,   0,   0, 
     15, 128,   1,   0, 228, 144, 
     13,   0,   0, 160,  10,   0, 
      0,   3,   0,   0,  15, 224, 
      0,   0, 228, 128,  13,   0, 
     85, 160,   9,   0,   0,   3, 
      0,   0,   1, 128,   1,   0, 
    228, 128,   9,   0, 228, 160, 
      9,   0,   0,   3,   0,   0, 
      2, 128,   1,   0, 228, 128, 
     10,   0, 228, 160,   9,   0, 
      0,   3,   0,   0,   4, 128, 
      1,   0, 228, 128,  12,   0, 
    228, 160,   4,   0,   0,   4, 
      0,   0,   3, 192,   0,   0, 
    170, 128,   0,   0, 228, 160, 
      0,   0, 228, 128,   1,   0, 
      0,   2,   0,   0,   8, 192, 
      0,   0, 170, 128,   1,   0, 
      0,   2,   1,   0,   3, 224, 
      2,   0, 228, 144, 255, 255, 
      0,   0,  83,  72,  68,  82, 
     24,   2,   0,   0,  64,   0, 
      1,   0, 134,   0,   0,   0, 
     89,   0,   0,   4,  70, 142, 
     32,   0,   0,   0,   0,   0, 
     12,   0,   0,   0,  95,   0, 
      0,   3, 242,  16,  16,   0, 
      0,   0,   0,   0,  95,   0, 
      0,   3, 242,  16,  16,   0, 
      1,   0,   0,   0,  95,   0, 
      0,   3,  50,  16,  16,   0, 
      2,   0,   0,   0, 101,   0, 
      0,   3, 242,  32,  16,   0, 
      0,   0,   0,   0, 101,   0, 
      0,   3,  50,  32,  16,   0, 
      1,   0,   0,   0, 103,   0, 
      0,   4, 242,  32,  16,   0, 
      2,   0,   0,   0,   1,   0, 
      0,   0, 104,   0,   0,   2, 
      2,   0,   0,   0,  54,  32, 
      0,   5, 242,  32,  16,   0, 
      0,   0,   0,   0,  70,  30, 
     16,   0,   1,   0,   0,   0, 
     54,   0,   0,   5,  50,  32, 
     16,   0,   1,   0,   0,   0, 
     70,  16,  16,   0,   2,   0, 
      0,   0,  17,   0,   0,   8, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  70,  30,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  17,   0, 
      0,   8,  34,   0,  16,   0, 
      0,   0,   0,   0,  70,  30, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
     17,   0,   0,   8,  66,   0, 
     16,   0,   0,   0,   0,   0, 
     70,  30,  16,   0,   0,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0,  17,   0,   0,   8, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  70,  30,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,  17,   0, 
      0,   8,  18,   0,  16,   0, 
      1,   0,   0,   0,  70,  14, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   4,   0,   0,   0, 
     17,   0,   0,   8,  34,   0, 
     16,   0,   1,   0,   0,   0, 
     70,  14,  16,   0,   0,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,   5,   0, 
      0,   0,  17,   0,   0,   8, 
     66,   0,  16,   0,   1,   0, 
      0,   0,  70,  14,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      6,   0,   0,   0,  17,   0, 
      0,   8, 130,   0,  16,   0, 
      1,   0,   0,   0,  70,  14, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   7,   0,   0,   0, 
     17,   0,   0,   8,  18,  32, 
     16,   0,   2,   0,   0,   0, 
     70,  14,  16,   0,   1,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,   8,   0, 
      0,   0,  17,   0,   0,   8, 
     34,  32,  16,   0,   2,   0, 
      0,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      9,   0,   0,   0,  17,   0, 
      0,   8,  66,  32,  16,   0, 
      2,   0,   0,   0,  70,  14, 
     16,   0,   1,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,  10,   0,   0,   0, 
     17,   0,   0,   8, 130,  32, 
     16,   0,   2,   0,   0,   0, 
     70,  14,  16,   0,   1,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,  11,   0, 
      0,   0,  62,   0,   0,   1, 
     83,  84,  65,  84, 116,   0, 
      0,   0,  15,   0,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,   6,   0,   0,   0, 
     12,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  82,  68, 
     69,  70, 252,   0,   0,   0, 
      1,   0,   0,   0,  76,   0, 
      0,   0,   1,   0,   0,   0, 
     28,   0,   0,   0,   0,   4, 
    254, 255,   0,   1,   0,   0, 
    210,   0,   0,   0,  60,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
     99,  98,  84, 114,  97, 110, 
    115, 102, 111, 114, 109, 115, 
      0, 171, 171, 171,  60,   0, 
      0,   0,   3,   0,   0,   0, 
    100,   0,   0,   0, 192,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 172,   0, 
      0,   0,   0,   0,   0,   0, 
     64,   0,   0,   0,   2,   0, 
      0,   0, 180,   0,   0,   0, 
      0,   0,   0,   0, 196,   0, 
      0,   0,  64,   0,   0,   0, 
     64,   0,   0,   0,   2,   0, 
      0,   0, 180,   0,   0,   0, 
      0,   0,   0,   0, 203,   0, 
      0,   0, 128,   0,   0,   0, 
     64,   0,   0,   0,   2,   0, 
      0,   0, 180,   0,   0,   0, 
      0,   0,   0,   0, 103,  95, 
    119, 111, 114, 108, 100,   0, 
      3,   0,   3,   0,   4,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 103,  95, 
    118, 105, 101, 119,   0, 103, 
     95, 112, 114, 111, 106,   0, 
     77, 105,  99, 114, 111, 115, 
    111, 102, 116,  32,  40,  82, 
     41,  32,  72,  76,  83,  76, 
     32,  83, 104,  97, 100, 101, 
    114,  32,  67, 111, 109, 112, 
    105, 108, 101, 114,  32,  49, 
     48,  46,  49,   0, 171, 171, 
     73,  83,  71,  78, 104,   0, 
      0,   0,   3,   0,   0,   0, 
      8,   0,   0,   0,  80,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,  15,   0,   0,  89,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
     15,  15,   0,   0,  95,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   2,   0,   0,   0, 
      3,   3,   0,   0,  80,  79, 
     83,  73,  84,  73,  79,  78, 
      0,  67,  79,  76,  79,  82, 
      0,  84,  69,  88,  67,  79, 
     79,  82,  68,   0,  79,  83, 
     71,  78, 108,   0,   0,   0, 
      3,   0,   0,   0,   8,   0, 
      0,   0,  80,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0,  86,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,   3,  12, 
      0,   0,  95,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
      2,   0,   0,   0,  15,   0, 
      0,   0,  67,  79,  76,  79, 
     82,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0,  83, 
     86,  95,  80,  79,  83,  73, 
     84,  73,  79,  78,   0, 171
};