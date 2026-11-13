/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0488b8-0c048aa0) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int obj_create(int, int, int, int);
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
int obj_destroy(int);
int bgm_set_volume(int, int);
int FUN_0c0d5188(void);

int fx_spawn_0488b8(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t6;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 12)) = a5;
    *(unsigned char *)(((int)stk + 4)) = a6;
    *(unsigned short *)(((int)stk + 8)) = a7;
    t0 = obj_create(0x6, 0x1, 0x1, 0);
    t6 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0x21;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC048926;
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned char *)(((int)stk + 0)) = ((*(signed char *)(((int)stk + 0))) & 0x7);
        *(unsigned char *)((t0 + 0xF)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x8)) = (*(signed char *)(((int)stk + 12)));
        (((struct oEC_ushort *)(t0))->v) = (*(signed char *)(((int)stk + 4)));
        t6 = *(short *)(((int)stk + 8));
        (((struct oF0_ushort *)(t0))->v) = t6;
    }
    return t6;
}

int fx_tick_0488b8(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0d5188();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0xA;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return obj_destroy(a4);
            }
            t0 = *(signed char *)((a4 + 0x9));
            if (t0 != 0) {
                t1 = t0;
                if (t0 != 1) {
                } else {
                    *(unsigned char *)((a4 + 0x8)) = 0xA;
                    t1 = (bgm_set_volume((*(signed char *)((a4 + 0xF))), ((((struct oEC_short *)(a4))->v))));
                }
                t0 = t1;
            } else {
                t1 = (((struct oF0_short *)(a4))->v);
                (((struct oF0_ushort *)(a4))->v) = (t1 - 1);
                t2 = 0xF0;
                if ((short)((t1 - 1) + 0x1) == 0) {
                    t1 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                    t2 = (t1 + 0x1);
                }
                t0 = t2;
            }
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x9));
        if (t0 != 0) {
            if (t0 != 1) {
                t1 = t0;
                if (t0 != 2) {
                } else {
                    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                    bgm_set_volume((*(signed char *)((a4 + 0xF))), (int)(((float)((((struct oEE_short *)(a4))->v)) / (float)((((struct oEC_short *)(a4))->v))) * 127.0f));
                    t0 = 0xEC;
                    if (((((struct oEE_short *)(a4))->v)) == ((((struct oEC_short *)(a4))->v))) {
                        *(unsigned char *)((a4 + 0x8)) = 0xA;
                        t0 = 0xA;
                    }
                    t1 = t0;
                }
                t0 = t1;
            } else {
                (((struct oEE_ushort *)(a4))->v) = 0x0;
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                bgm_set_volume((*(signed char *)((a4 + 0xF))), (int)(((float)((((struct oEE_short *)(a4))->v)) / (float)((((struct oEC_short *)(a4))->v))) * 127.0f));
                t1 = 0xEC;
                if (((((struct oEE_short *)(a4))->v)) == ((((struct oEC_short *)(a4))->v))) {
                    *(unsigned char *)((a4 + 0x8)) = 0xA;
                    t1 = 0xA;
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            t0 = (((struct oF0_short *)(a4))->v);
            (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
            t2 = 0xF0;
            if ((short)((t0 - 1) + 0x1) == 0) {
                t0 = *(signed char *)((a4 + 0x9));
                *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
                t2 = (t0 + 0x1);
            }
            t1 = t2;
        }
        return t1;
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
                bgm_set_volume((*(signed char *)((a4 + 0xF))), (int)(((float)((((struct oEE_short *)(a4))->v)) / (float)((((struct oEC_short *)(a4))->v))) * 127.0f));
                t0 = 0xEE;
                if (((((struct oEE_short *)(a4))->v)) != 0) {
                } else {
                    *(unsigned char *)((a4 + 0x8)) = 0xA;
                    t0 = 0xA;
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            (((struct oEE_ushort *)(a4))->v) = ((((struct oEC_short *)(a4))->v));
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
            bgm_set_volume((*(signed char *)((a4 + 0xF))), (int)(((float)((((struct oEE_short *)(a4))->v)) / (float)((((struct oEC_short *)(a4))->v))) * 127.0f));
            t1 = 0xEE;
            if (((((struct oEE_short *)(a4))->v)) != 0) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = 0xA;
                t1 = 0xA;
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        t0 = (((struct oF0_short *)(a4))->v);
        (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
        t2 = 0xF0;
        if ((short)((t0 - 1) + 0x1) != 0) {
        } else {
            t0 = *(signed char *)((a4 + 0x9));
            *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}
