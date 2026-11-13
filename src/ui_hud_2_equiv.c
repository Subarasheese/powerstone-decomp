/* HUD: init, gauges, combo and hit counter, win marks, per-frame draw dispatcher (0c02d9e0-0c02f328) */

/* named globals (symbols.txt) */
extern char g_hud_state[];
int ui_draw_sprite_string(int, int, float, float, float, float, float);
typedef struct { int a0; float x; float y; float w; float sx; float sy; int p24[4]; int i40; float f44; int p48; int i52; } SPR;
void ui_sprite_queue_add(SPR *s, void *tex, int mode, int frame, int side, int zero);
#define HUD ((char *)g_hud_state)
#define TEX ((void *)0x0C17FDB0)
#define G ((signed char *)0x0C7F302C)
#define F(o, n) (*(float *)((o) + (n)))
struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o10_float { char p[0x10]; float v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
int fx_spawn_048074(int);

int FUN_0c02df98(int a4, int a5, float f4, float f5);
int FUN_0c02e00a(int a4);
int FUN_0c02e050(int a4, float f4, float f5);
int FUN_0c02e092(int a4);
int FUN_0c02e144(int a4, float f4, float f5);
int FUN_0c02e2da(int a4);

int ui_draw_text_stub(int a4, int a5, float f4, float f5, float f6, float f7)
{
    return ui_draw_sprite_string(a4, a5, f4, f5, f6, f7, (*(float *)0xC02DBBC));
}

void FUN_0c02dc86(void)
{
    SPR d;
    signed char *p;
    int lo, hi;

    p = (signed char *)(HUD + 28);
    d.i40 = 0;
    d.w = 8.0f;
    d.x = 320.0f;
    d.y = F(HUD, 4) + 68.0f;
    d.i52 = 13;
    d.f44 = 1.0f;
    if (*(signed char *)(0x0C7F2EE0 + 56) == 4) {
        d.x = 320.0f;
        d.y = F(HUD, 4) + 41.0f;
        d.w = 8.09999942f;
        d.sx = 1.0f;
        d.sy = 1.0f;
        d.i52 = 10;
        ui_sprite_queue_add(&d, TEX, 1, 11, 0, 0);
    } else {
        if (G[34] > 20 && p[4] != 0)
            p[4] = 0;
        if (p[4] == 0) {
            if (!(G[34] > 20) && G[33] != 0) {
                p[4] = p[4] + 1;
                p[8] = 20;
                p[9] = G[33];
            }
            lo = G[33] % 10;
            d.x = d.x - 2.0f;
            d.sy = 1.0f;
            d.sx = 1.0f;
            ui_sprite_queue_add(&d, TEX, 1, lo, 0, 0);
            d.i52 = 15;
            d.x = d.x + 4.0f;
            hi = G[33] / 10;
        } else {
            if (p[8] != 0) {
                if (*(int *)(0x0C7F2EE0 + 328) == 0)
                    p[8] = p[8] - 1;
                F(p, 12) = (float)p[8] / 20.0f;
            }
            lo = G[33] % 10;
            d.sx = 1.0f;
            d.sy = F(p, 12);
            d.x = d.x - 2.0f;
            ui_sprite_queue_add(&d, TEX, 1, lo, 0, 0);
            lo = lo == 0 ? 9 : lo - 1;
            d.y = -(F(p, 12) * 48.0f) + F(HUD, 4) + 68.0f;
            d.sy = -F(p, 12) + 1.0f;
            ui_sprite_queue_add(&d, TEX, 1, lo, 0, 0);
            d.y = F(HUD, 4) + 68.0f;
            d.x = d.x + 4.0f;
            d.i52 = 15;
            if (lo == 9) {
                hi = G[33] / 10;
                d.sy = F(p, 12);
                ui_sprite_queue_add(&d, TEX, 1, hi, 0, 0);
                hi = hi == 0 ? 9 : hi - 1;
                d.y = -(F(p, 12) * 48.0f) + F(HUD, 4) + 68.0f;
                d.sy = -F(p, 12) + 1.0f;
            } else {
                hi = G[33] / 10;
                d.sy = 1.0f;
            }
        }
        ui_sprite_queue_add(&d, TEX, 1, hi, 0, 0);
    }
    d.x = 320.0f;
    d.y = F(HUD, 4) + 41.0f;
    d.w = 8.09999942f;
    d.sx = 1.0f;
    d.sy = 1.0f;
    d.i52 = 10;
    ui_sprite_queue_add(&d, TEX, 1, 10, 0, 0);
}

int FUN_0c02df98(int a4, int a5, float f4, float f5)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    if ((*(signed char *)((a4 + 0x1))) == 0) {
        u0 = ((((struct o0_float *)0xC02E044)->v));
    } else {
        u0 = ((((struct o4_float *)0xC02E044)->v));
    }
    if (a5 == 1) {
        if ((*(int *)0xC7F3028) == 0) {
            (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a4))->v)) + u0);
        }
        u1 = (((struct o8_float *)(a4))->v);
        t0 = 0x1;
        if (u1 > f4) {
            t1 = 0x0;
            if (!(f5 > u1)) {
                t1 = 0x1;
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        if ((*(int *)0xC7F3028) == 0) {
            (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a4))->v)) - u0);
        }
        u0 = (((struct o8_float *)(a4))->v);
        t0 = 0x0;
        if (!(f4 > u0) && !(u0 > f5)) {
            t0 = 0x1;
        }
        t1 = t0;
    }
    if (t1 != 0) {
        if ((*(signed char *)((a4 + 0x1))) == 0) {
            (((struct o8_float *)(a4))->v) = f4;
        } else {
            (((struct o8_float *)(a4))->v) = f5;
        }
    }
    return t1;
}

int FUN_0c02e00a(int a4)
{
    *(unsigned char *)(((a4 + 0x26) + 0x2)) = 0x0;
    *(unsigned char *)(((a4 + 0x26) + 0x1)) = 0x0;
    (((struct o26_uchar *)(a4))->v) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x12C;
    (((struct o22_ushort *)(a4))->v) = 0x134;
    (((struct o24_ushort *)(a4))->v) = 0x13C;
    return 0x24;
}

int FUN_0c02e050(int a4, float f4, float f5)
{
    register float u4;
    register float u7;

    if (((((struct o14_float *)(a4))->v)) != 0.0f) {
        u4 = 1.0f;
        if ((*(signed char *)((a4 + 0x1))) == 0) {
            u4 = -1.0f;
        }
        u7 = (((struct o14_float *)(a4))->v);
        if ((*(int *)0xC7F3028) == 0) {
            (((struct o14_float *)(a4))->v) = (((((struct o14_float *)(a4))->v)) + u4);
        }
        if ((int)((int)((((struct o14_float *)(a4))->v)) ^ (int)u7) < 0) {
            (((struct o14_float *)(a4))->v) = 0.0f;
        }
    }
    return 0x14;
}

int FUN_0c02e092(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x5));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = *(signed char *)((a4 + 0x1));
            t2 = *(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71BA));
            t3 = t2;
            if (t2 == 23) {
                t2 = *(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0xA));
                t0 = t2;
                if (t2 == 0) {
                    *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
                    *(unsigned char *)((a4 + 0x5)) = 0x0;
                    t0 = 0x0;
                }
                t3 = t0;
            }
            t1 = t3;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x5)) = ((*(signed char *)((a4 + 0x5))) + 0x1);
        (((struct o8_float *)(a4))->v) = (*(float *)((0xC149388 + ((*(signed char *)((a4 + 0x1))) << 2))));
        (((struct oC_float *)(a4))->v) = 416.0f;
        (((struct o10_float *)(a4))->v) = (*(float *)((0xC149398 + ((*(signed char *)((a4 + 0x1))) << 2))));
        (((struct o14_float *)(a4))->v) = ((float)((-((*(signed char *)((a4 + 0x1))) << 1)) + 0x1) * 44.0f);
        *(unsigned char *)((a4 + 0x2)) = 0x1;
        *(unsigned char *)((a4 + 0x3)) = 0x1;
        (((struct o1E_uchar *)(a4))->v) = 0x0;
        FUN_0c02e00a(a4);
        t1 = *(signed char *)((a4 + 0x1));
        t2 = *(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71BA));
        t3 = t2;
        if (t2 == 23) {
            t2 = *(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0xA));
            t1 = t2;
            if (t2 == 0) {
                *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
                *(unsigned char *)((a4 + 0x5)) = 0x0;
                t1 = 0x0;
            }
            t3 = t1;
        }
        t0 = t3;
    }
    return t0;
}

int FUN_0c02e144(int a4, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x5));
    t1 = *(int *)0xC7F3028;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        t2 = t0;
                        if (t0 == 5) {
                            t0 = FUN_0c02df98(a4, 0x0, 0.0f, 608.0f);
                            t3 = t0;
                            if (t0 != 0) {
                                *(unsigned char *)((a4 + 0x4)) = 0x3;
                                *(unsigned char *)((a4 + 0x5)) = 0x0;
                                t3 = 0x0;
                            }
                            t2 = t3;
                        }
                        t0 = t2;
                    } else {
                        if (t1 != 0) {
                            (((struct o1C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1C))) + 0x1);
                        }
                        t2 = *(signed char *)((a4 + 0x1C));
                        (((struct o1C_uchar *)(a4))->v) = (t2 - 1);
                        t3 = 0x1C;
                        if ((signed char)(t2 - 1) == 0) {
                            *(unsigned char *)((a4 + 0x5)) = ((*(signed char *)((a4 + 0x5))) + 0x1);
                            *(unsigned char *)((a4 + 0x2)) = 0x1;
                            (((struct o1E_uchar *)(a4))->v) = 0x1;
                            (((struct o18_float *)(a4))->v) = (*(float *)((0xC1493A0 + ((*(signed char *)((a4 + 0x1))) << 2))));
                            (((struct o2C_uchar *)(a4))->v) = 0x2;
                            *(unsigned short *)(((a4 + 0x2C) + 0x2)) = 0x0;
                            t3 = 0x0;
                        }
                        t0 = t3;
                    }
                    t2 = t0;
                } else {
                    if (t1 != 0) {
                        (((struct o1C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1C))) + 0x1);
                    }
                    t0 = *(signed char *)((a4 + 0x1C));
                    (((struct o1C_uchar *)(a4))->v) = (t0 - 1);
                    if ((signed char)(t0 - 1) == 0) {
                        *(unsigned char *)((a4 + 0x5)) = ((*(signed char *)((a4 + 0x5))) + 0x1);
                        *(unsigned char *)((a4 + 0x3)) = 0x0;
                        (((struct o1C_uchar *)(a4))->v) = 0x14;
                    }
                    t2 = 0x1C;
                }
                t0 = t2;
            } else {
                FUN_0c02e050(a4, f4, f5);
                if ((*(signed char *)((a4 + 0x2))) != 0) {
                    t1 = FUN_0c02df98(a4, 0x1, -200.0f, 808.0f);
                    if (t1 != 0) {
                        *(unsigned char *)((a4 + 0x2)) = 0x0;
                        (((struct o1D_uchar *)(a4))->v) = 0x1;
                        (((struct oC_float *)(a4))->v) = 416.0f;
                    }
                }
                t1 = 0x14;
                if (((float)(*(signed char *)((a4 + 0x2))) + ((((struct o14_float *)(a4))->v))) == 0.0f) {
                    *(unsigned char *)((a4 + 0x5)) = ((*(signed char *)((a4 + 0x5))) + 0x1);
                    (((struct o1C_uchar *)(a4))->v) = 0xA;
                    t1 = 0x1C;
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            FUN_0c02e050(a4, f4, f5);
            if ((*(int *)0xC7F3028) != 0) {
                (((struct o1C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1C))) + 0x1);
            }
            t0 = *(signed char *)((a4 + 0x1C));
            (((struct o1C_uchar *)(a4))->v) = (t0 - 1);
            t2 = 0x1C;
            if ((signed char)(t0 - 1) == 0) {
                fx_spawn_048074((*(signed char *)((a4 + 0x1))));
                t0 = *(signed char *)((a4 + 0x5));
                *(unsigned char *)((a4 + 0x5)) = (t0 + 0x1);
                t2 = (t0 + 0x1);
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x5)) = ((*(signed char *)((a4 + 0x5))) + 0x1);
        (((struct o1C_uchar *)(a4))->v) = 0x1;
        (((struct o2C_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)(((a4 + 0x2C) + 0x2)) = 0x0;
        t0 = 0x0;
    }
    return t0;
}

int FUN_0c02e2da(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x5));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                t0 = FUN_0c02df98(a4, 0x0, 0.0f, (*(float *)0xC02E4C4));
                if (t0 != 0) {
                    *(unsigned char *)((a4 + 0x4)) = 0x1;
                    *(unsigned char *)((a4 + 0x5)) = 0x0;
                    (((struct o1C_uchar *)(a4))->v) = 0x14;
                }
                t0 = *(signed char *)(((0x1 + a4) + 0x0));
                (((struct o10_float *)(a4))->v) = ((((((struct o8_float *)(a4))->v)) + (*(float *)(((t0 << 2) + 0xC149398)))) - (*(float *)(((t0 << 2) + 0xC149388))));
                t1 = 0xC149388;
            }
            t0 = t1;
        } else {
            if ((*(int *)0xC7F3028) != 0) {
                (((struct o1C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1C))) + 0x1);
            }
            t1 = *(signed char *)((a4 + 0x1C));
            (((struct o1C_uchar *)(a4))->v) = (t1 - 1);
            t0 = 0x1C;
            if ((signed char)(t1 - 1) == 0) {
                *(unsigned char *)((a4 + 0x5)) = ((*(signed char *)((a4 + 0x5))) + 0x1);
                *(unsigned char *)((a4 + 0x2)) = 0x1;
                *(unsigned char *)((a4 + 0x3)) = 0x1;
                (((struct o2C_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)(((a4 + 0x2C) + 0x2)) = 0x0;
                t0 = 0x0;
            }
        }
        t1 = t0;
    } else {
        t0 = FUN_0c02df98(a4, 0x1, -200.0f, 808.0f);
        if (t0 != 0) {
            *(unsigned char *)((a4 + 0x5)) = ((*(signed char *)((a4 + 0x5))) + 0x1);
            (((struct o1C_uchar *)(a4))->v) = 0x14;
            *(unsigned char *)((a4 + 0x2)) = 0x0;
            (((struct o1E_uchar *)(a4))->v) = 0x0;
            (((struct o1D_uchar *)(a4))->v) = 0x0;
            (((struct oC_float *)(a4))->v) = 416.0f;
            t0 = *(signed char *)(((0x1 + a4) + 0x0));
            (((struct o10_float *)(a4))->v) = ((((((struct o8_float *)(a4))->v)) + (*(float *)(((t0 << 2) + 0xC149398)))) - (*(float *)(((t0 << 2) + 0xC149388))));
            (((struct o14_float *)(a4))->v) = ((float)((-((*(signed char *)((a4 + 0x1))) << 1)) + 0x1) * 44.0f);
        }
        t0 = *(signed char *)(((0x1 + a4) + 0x0));
        (((struct o18_float *)(a4))->v) = ((((((struct o8_float *)(a4))->v)) + (*(float *)(((t0 << 2) + 0xC1493A0)))) - (*(float *)(((t0 << 2) + 0xC149390))));
        t1 = 0xC149390;
    }
    return t1;
}

int FUN_0c02e438(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[1];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)((a4 + 0x4));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return FUN_0c02e2da(a4);
                }
                return ((int (*)(int, int, int, int))(0xC02E2BC))(a4, a5, a6, a7);
            }
            return FUN_0c02e144(a4, f4, f5);
        }
        return FUN_0c02e092(a4);
    }
    *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
    *(unsigned char *)((a4 + 0x5)) = 0x0;
    *(unsigned short *)((a4 + 0x6)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = (*(signed char *)(((int)stk + 0)));
    (((struct o1D_uchar *)(a4))->v) = 0x0;
    FUN_0c02e00a(a4);
    *(unsigned char *)(((a4 + 0x2C) + 0x1)) = (*(signed char *)(((int)stk + 0)));
    (((struct o2C_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)(((a4 + 0x2C) + 0x2)) = 0x0;
    return FUN_0c02e092(a4);
}

void FUN_0c02ee3c(void)
{
    
}
