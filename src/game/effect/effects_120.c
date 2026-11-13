/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0497fc-0c0498c4) */

struct o7198_short { char p[0x7198]; short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int fx_tick_model_effect(int, int, int, int);
int obj_destroy(int, int, int, int);

int FUN_0c0497fc(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;

    t2 = *(signed char *)((((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x9));
    if ((t2 != 0) && (t2 != 2)) {
        *(unsigned char *)((a4 + 0x1)) = 0x0;
        return obj_destroy(a4, 0xC7E40C4, 0xC7E40C4, t2);
    }
    if ((*(signed char *)((((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x9))) != 2) {
        t3 = *(signed char *)((((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71BA));
        if ((t3 != 10) && ((t3 != 11) && ((t3 != 12) && ((t3 != 22) && (t3 != 21))))) {
            *(unsigned char *)((a4 + 0x1)) = 0x0;
            return obj_destroy(a4, 0xC7E40C4, 0xC7E40C4, t3);
        }
        t4 = *(signed char *)((a4 + 0x3));
        t5 = 0xC7E40C4;
        t6 = (0xC7E40C4 + (unsigned short)((unsigned short)t4 * (unsigned short)0x72D0));
        if ((((((struct oF0_short *)(a4))->v)) != ((((struct o7198_short *)((0xC7E40C4 + (unsigned short)((unsigned short)t4 * (unsigned short)0x72D0))))->v))) && (t0 = (((struct oEE_short *)(a4))->v), (int)t0 > (int)0x8)) {
            (((struct oEE_ushort *)(a4))->v) = 0x8;
            t0 = *(signed char *)((a4 + 0x3));
            (((struct oF0_ushort *)(a4))->v) = ((((struct o7198_short *)((0xC7E40C4 + (unsigned short)((unsigned short)t0 * (unsigned short)0x72D0))))->v));
            t5 = (0xC7E40C4 + (unsigned short)((unsigned short)t0 * (unsigned short)0x72D0));
            t6 = 0x8;
        }
        return fx_tick_model_effect(a4, t5, t6, t3);
    }
    t0 = *(signed char *)((a4 + 0x3));
    t3 = 0xC7E40C4;
    t4 = (0xC7E40C4 + (unsigned short)((unsigned short)t0 * (unsigned short)0x72D0));
    if ((((((struct oF0_short *)(a4))->v)) != ((((struct o7198_short *)((0xC7E40C4 + (unsigned short)((unsigned short)t0 * (unsigned short)0x72D0))))->v))) && (t1 = (((struct oEE_short *)(a4))->v), (int)t1 > (int)0x8)) {
        (((struct oEE_ushort *)(a4))->v) = 0x8;
        t0 = *(signed char *)((a4 + 0x3));
        (((struct oF0_ushort *)(a4))->v) = ((((struct o7198_short *)((0xC7E40C4 + (unsigned short)((unsigned short)t0 * (unsigned short)0x72D0))))->v));
        t3 = (0xC7E40C4 + (unsigned short)((unsigned short)t0 * (unsigned short)0x72D0));
        t4 = 0x8;
    }
    return fx_tick_model_effect(a4, t3, t4, t2);
}
