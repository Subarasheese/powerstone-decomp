/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b0da0-0c0b0e04) */

struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };

int stage_gimmick_18_update(int a4, int a5, int a6, int a7)
{
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0xA) {
        (((struct oEC_ushort *)(a4))->v) = 0x0;
    }
    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
    if ((int)((((struct oEE_short *)(a4))->v)) >= (int)0xF0) {
        (((struct oEE_ushort *)(a4))->v) = 0x0;
    }
    (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
    if ((int)((((struct oF0_short *)(a4))->v)) >= (int)0x4B0) {
        (((struct oF0_ushort *)(a4))->v) = 0x0;
    }
    return ((int (*)(int, int, int, int))(0xC0B0CA4))(a4, 0x0, a6, a7);
}
