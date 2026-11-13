/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b10cc-0c0b110c) */

struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };

int stage_gimmick_19_update(int a4, int a5, int a6, int a7)
{
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)(*(short *)((0xC33A51C + (((*(signed char *)((a4 + 0x4))) << 2) << 1))))) {
        (((struct oEC_ushort *)(a4))->v) = 0x0;
    }
    return ((int (*)(int, int, int, int))(0xC0B1028))(a4, a5, a6, a7);
}
