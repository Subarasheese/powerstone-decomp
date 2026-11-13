/* State machine on the record at 0xC362A50 (state byte at +0): runs the setup calls for the current state, advances or finishes it from the status FUN_0c01fefc reports and hands states 5-8 on to FUN_0c01ebc0 / FUN_0c01ec9c; returns 2 for an unknown state. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o34_uchar { char p[0x34]; unsigned char v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
int FUN_0c01ebc0(int);
int FUN_0c01ec9c(int);
int FUN_0c01f4c8(int);
int FUN_0c01f628(int);
int FUN_0c01fdc8(int, int, int, int);
int FUN_0c01fefc(int);
int FUN_0c01ea20(int a4, int a5, int a6, int a7);

