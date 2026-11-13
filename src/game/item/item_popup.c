/* item pickup text popup (POWER UP / LIFE UP): spawn + tick (0c049e68-0c04a13c) */

struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int, int);
int _quick_odd_mvn(int);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct oEC_short { char p[0xEC]; short v; };
int ui_draw_world_text(int, int, int, float);
int obj_destroy(int, int, int, int);
int sprintf(int, int, int, int, int);
struct o0_float { float v; };
struct oC_float { char p[0xC]; float v; };


int item_spawn_pickup_popup(int a4, int a5)
{
    int stk[1];
    register int t24;
    register int t3;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t24 = 0x18;
    if ((*(signed char *)0xC7F4768) == 0) {
        t24 = 0x19;
        if ((*(signed char *)0xC7F4769) == 0) {
            t3 = obj_create(0x5, 0x1, 0x1, 0x0);
            t24 = t3;
            if (t3 != 0) {
                *(unsigned char *)((t3 + 0x0)) = 0x1;
                *(unsigned char *)((t3 + 0x3)) = (*(signed char *)((a4 + 0x3)));
                *(unsigned char *)((t3 + 0x1)) = 0x0;
                *(unsigned int *)((t3 + 0x10)) = 0xC049EE4;
                (((struct o50_float *)(t3))->v) = ((((struct o0_float *)0xC049F84)->v));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
                (((struct oEC_ushort *)(t3))->v) = 0xA;
                (((struct o38_float *)(t3))->v) = (*(float *)((0xC14AA08 + ((*(signed char *)((a4 + 0x4))) << 2))));
                (((struct o3C_float *)(t3))->v) = ((((struct oC_float *)0xC049F84)->v));
                t24 = *(signed char *)(((int)stk + 0));
                *(unsigned char *)((t3 + 0xB)) = t24;
                *(unsigned int *)((t3 + 0x1C)) = a4;
            }
        }
    }
    return t24;
}

int item_tick_pickup_popup(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t3;
    register int t10;
    register int t15;
    register int t35;
    register int t53;
    register int t71;
    register int t91;
    register int t122;

    if ((*(signed char *)((a4 + 0x8))) != 0) {
        t122 = (obj_destroy(a4, a5, a6, a7));
    } else {
        t3 = *(signed char *)((a4 + 0x9));
        switch (t3) {
        case 0:
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + (((-((((struct o50_float *)(a4))->v))) + 1.19999993f) / (float)((((struct oEC_short *)(a4))->v))));
            (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + (((-((((struct o3C_float *)(a4))->v))) + 55.0f) / (float)((((struct oEC_short *)(a4))->v))));
            t71 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t71 - 1);
            if ((int)(short)(t71 - 1) > 0) {
            } else {
                (((struct oEC_ushort *)(a4))->v) = 0x5;
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            }
            break;
        case 1:
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + (((-((((struct o50_float *)(a4))->v))) + 1.0f) / (float)((((struct oEC_short *)(a4))->v))));
            (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + (((-((((struct o3C_float *)(a4))->v))) + 50.0f) / (float)((((struct oEC_short *)(a4))->v))));
            t53 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t53 - 1);
            if ((int)(short)(t53 - 1) <= 0) {
                (((struct oEC_ushort *)(a4))->v) = 0x5;
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            }
            break;
        case 2:
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + (((-((((struct o50_float *)(a4))->v))) + 1.19999993f) / (float)((((struct oEC_short *)(a4))->v))));
            (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + (((-((((struct o3C_float *)(a4))->v))) + 55.0f) / (float)((((struct oEC_short *)(a4))->v))));
            t35 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t35 - 1);
            if ((int)(short)(t35 - 1) <= 0) {
                (((struct oEC_ushort *)(a4))->v) = 0x5;
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            }
            break;
        case 3:
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + (((-((((struct o50_float *)(a4))->v))) + 1.0f) / (float)((((struct oEC_short *)(a4))->v))));
            (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + (((-((((struct o3C_float *)(a4))->v))) + 50.0f) / (float)((((struct oEC_short *)(a4))->v))));
            t10 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t10 - 1);
            if ((int)(short)(t10 - 1) <= 0) {
                (((struct oEC_ushort *)(a4))->v) = 0x28;
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            }
            break;
        case 4:
            (((struct o3C_float *)(a4))->v) = 50.0f;
            t15 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t15 - 1);
            if ((int)(short)(t15 - 1) <= 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            break;
        }
        (((struct o20_float *)(a4))->v) = ((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v));
        (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v));
        (((struct o24_float *)(a4))->v) = ((((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v)) + ((((struct o38_float *)(a4))->v))) + ((((struct o3C_float *)(a4))->v)));
        t91 = *(signed char *)((a4 + 0xB));
        if (t91 != 0) {
            if (t91 != 1) {
            } else {
                *(int *)((int)stk + 0) = 0xC14AA40;
                sprintf(((int)stk + 4), a5, a6, a7, 0xC14AA40);
            }
        } else {
            *(int *)((int)stk + 0) = 0xC14AA34;
            sprintf(((int)stk + 4), a5, a6, a7, 0xC14AA34);
        }
        t122 = (ui_draw_world_text((a4 + 0x20), ((int)stk + 4), 0x1, ((((struct o50_float *)(a4))->v))));
    }
    return t122;
}
