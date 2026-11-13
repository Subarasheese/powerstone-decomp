/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03d60c-0c03d8b0) */

int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int thunk_FUN_0c062242(int);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);

int fx_spawn_03d60c(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t18;
    register int t3;
    register int t8;
    register int t9;
    register int t10;
    register int t13;
    register int t17;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x2, 0x0);
    t18 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03D6F4;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        t3 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580));
        *(unsigned int *)((t0 + 0x2C)) = ((*(int *)((t0 + 0x2C))) - 16384);
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0x30)));
        t8 = 0x0;
        t9 = 0x2;
        t10 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t10) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t10) + 0x0))) + 0x2)) = 0xF;
            t13 = *(signed char *)((a4 + 0x3));
            t17 = FUN_0c06233a((*(int *)((((0x2E0 + t0) + t10) + 0x0))), ((signed char)((((t13 << 1) + t13) << 2) << 1) + 0xC6002D0), t9);
            t8 = (t8 + 0x1);
            t9 = (t9 + 0x1);
            t10 = (t10 + 0x4);
            if ((int)(signed char)t8 >= (int)0x2) {
                break;
            }
        }
        t18 = t17;
    }
    return t18;
}

int fx_tick_03d60c(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t0;
    register int t2;
    register int t4;
    register int t9;
    register int t16;
    register float u29;
    register float u34;
    register float u39;
    register int t40;
    register int t54;
    register float u67;
    register float u72;
    register float u77;
    register int t78;
    register int t82;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((t0 + 0x1C)));
    t2 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t2 + 0x14)) = ((*(int *)((t2 + 0x14))) - 30037);
    t4 = (((struct o2E4_int *)(a4))->v);
    *(unsigned int *)((t4 + 0x14)) = ((*(int *)((t4 + 0x14))) + 0x78E3);
    if ((*(signed char *)((t0 + 0x8))) == 2) {
        *(unsigned char *)((a4 + 0x1)) = 0x0;
        *(unsigned char *)((a4 + 0x8)) = 0x2;
        *(unsigned char *)((a4 + 0xB)) = 0x0;
        *(unsigned char *)((a4 + 0xA)) = 0x0;
        *(unsigned char *)((a4 + 0x9)) = 0x0;
    }
    t9 = *(signed char *)((a4 + 0x8));
    if (t9 != 0) {
        if (t9 != 1) {
            if (t9 == 2) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            t82 = (obj_destroy(a4, a5, a6, a7));
        } else {
            (((struct o54_float *)(a4))->v) = ((_builtin_fabsf(((((struct o4_float *)((0x308 + t0)))->v))) / 10.0f) / 100.0f);
            t16 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t16 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t16 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t16 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580));
            (((struct o8_float *)(((int)stk + 0)))->v) = (((((struct o20_float *)(t0))->v)) - (*(float *)(((int)stk + 20))));
            (((struct o4_float *)((((int)stk + 0) + 0x8)))->v) = (((((struct o24_float *)(t0))->v)) - (*(float *)(((int)stk + 24))));
            (((struct o8_float *)((((int)stk + 0) + 0x8)))->v) = (((((struct o28_float *)(t0))->v)) - (*(float *)(((int)stk + 28))));
            u29 = (*(float *)(((int)stk + 20)));
            u29 = u29 + (float)(*(signed char *)((a4 + 0x4))) * ((((((struct o8_float *)(((int)stk + 0)))->v)) / 10.0f));
            (((struct o20_float *)(a4))->v) = u29;
            u34 = (*(float *)(((int)stk + 24)));
            u34 = u34 + (float)(*(signed char *)((a4 + 0x4))) * ((((((struct o4_float *)((((int)stk + 0) + 0x8)))->v)) / 10.0f));
            (((struct o24_float *)(a4))->v) = u34;
            u39 = (*(float *)(((int)stk + 28)));
            u39 = u39 + (float)(*(signed char *)((a4 + 0x4))) * ((((((struct o8_float *)((((int)stk + 0) + 0x8)))->v)) / 10.0f));
            (((struct o28_float *)(a4))->v) = u39;
            t40 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t40 - 1);
            t82 = 0xEC;
            if ((short)(t40 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                *(unsigned char *)((a4 + 0x1)) = 0x0;
                t82 = 0x0;
            }
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x258;
        (((struct o50_float *)(a4))->v) = 1.0f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = ((_builtin_fabsf(((((struct o4_float *)((0x308 + t0)))->v))) / 10.0f) / 100.0f);
        t54 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t54 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t54 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t54 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580));
        (((struct o8_float *)(((int)stk + 0)))->v) = (((((struct o20_float *)(t0))->v)) - (*(float *)(((int)stk + 20))));
        (((struct o4_float *)((((int)stk + 0) + 0x8)))->v) = (((((struct o24_float *)(t0))->v)) - (*(float *)(((int)stk + 24))));
        (((struct o8_float *)((((int)stk + 0) + 0x8)))->v) = (((((struct o28_float *)(t0))->v)) - (*(float *)(((int)stk + 28))));
        u67 = (*(float *)(((int)stk + 20)));
        u67 = u67 + (float)(*(signed char *)((a4 + 0x4))) * ((((((struct o8_float *)(((int)stk + 0)))->v)) / 10.0f));
        (((struct o20_float *)(a4))->v) = u67;
        u72 = (*(float *)(((int)stk + 24)));
        u72 = u72 + (float)(*(signed char *)((a4 + 0x4))) * ((((((struct o4_float *)((((int)stk + 0) + 0x8)))->v)) / 10.0f));
        (((struct o24_float *)(a4))->v) = u72;
        u77 = (*(float *)(((int)stk + 28)));
        u77 = u77 + (float)(*(signed char *)((a4 + 0x4))) * ((((((struct o8_float *)((((int)stk + 0) + 0x8)))->v)) / 10.0f));
        (((struct o28_float *)(a4))->v) = u77;
        t78 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t78 - 1);
        t82 = 0xEC;
        if ((short)(t78 - 1) == 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x1)) = 0x0;
            t82 = 0x0;
        }
    }
    return t82;
}
