/* Counter step on an object: bumps the short at +0xEC; while it is below the limit at +0xEE and the two shorts at +0xF0/+0xF2 equal the bytes at +0x71A4/+0x71A5 of the object at +0x1C, returns, else hands the object on. */

struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF2_short { char p[0xF2]; short v; };
int FUN_0c059330(int);
int FUN_0c03b45a(int a4);

