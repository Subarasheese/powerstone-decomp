/* not identified yet (keep old name) (0c028030-0c028524) */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int draw_project_point_sprite(int);
int draw_project_point_sprite_z01(int);
int nl_sprite_draw(int);
int _quick_evn_mvn(int, int);
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o22_short { char p[0x22]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oB0_int { char p[0xB0]; int v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };

int FUN_0c0282cc(void)
{
    int stk[14];
    register int t13;
    register int t15;
    register int t16;
    register int t17;
    register int t21;
    register int t14;
    register float u18;
    register float u19;

    if ((*(signed char *)0xC7F300B) == 0) {
        if (((*(signed char *)0xC7F300E) == 0) && (t15 = *(signed char *)0xC494D20, t15 == 0)) {
        } else {
            t15 = (((struct o4_int *)0xC363A68)->v);
            (((struct o0_uint *)0xC363A68)->v) = t15;
        }
        t13 = 0x12E;
    } else {
        t15 = (((struct o4_int *)0xC363A68)->v);
        (((struct o0_uint *)0xC363A68)->v) = t15;
        t13 = 0x12B;
    }
    (((struct o4_uint *)0xC363A68)->v) = ((((struct o0_int *)0xC363A68)->v));
    t16 = 0xC363A6C;
    t17 = 0xC7F2EE0;
    for (;;) {
        if (((((struct o0_int *)0xC363A68)->v)) == 0) {
            break;
        }
        t21 = (((struct o0_int *)0xC363A68)->v);
        t14 = ((int)stk + 0);
        t15 = 0xC0E6FDC;
        t17 = (t21 - 1);
        t17 = (t17 << 2);
        t17 = (t17 << 2);
        (((struct o0_uint *)0xC363A68)->v) = (t21 - 1);
        t17 = (t17 << 2);
        t17 = (t17 + 0xC363A70);
        t16 = (*(int *)((t17 + 0x4)));
        t13 = 0x38;
        { struct mv14 { int w[14]; }; *(struct mv14 *)(t14) = *(struct mv14 *)((t17 + 0x8)); }
        t13 = 0x4;
        *(unsigned int *)(((int)stk + 0)) = (*(short *)((t16 + 0x0)));
        u19 = (*(float *)((t16 + t13)));
        t13 = 0x10;
        u18 = (*(float *)((((int)stk + 0) + t13)));
        t13 = 0x10;
        u18 = (u18 * u19);
        *(float *)((((int)stk + 0) + t13)) = u18;
        t13 = 0x8;
        u19 = (*(float *)((t16 + t13)));
        t13 = 0x14;
        u18 = (*(float *)((((int)stk + 0) + t13)));
        t13 = 0x14;
        u18 = (u18 * u19);
        *(float *)((((int)stk + 0) + t13)) = u18;
        t15 = ((((struct o0_int *)0xC363A68)->v));
        t15 = (t15 << 2);
        t15 = (t15 << 2);
        t15 = (t15 << 2);
        t15 = (t15 + 0xC363A70);
        t13 = (*(signed char *)((t15 + 0x1)));
        if (t13 == 0) {
            t13 = 0xC;
            u19 = (*(float *)((t16 + t13)));
            t13 = 0x18;
            *(float *)((((int)stk + 0) + t13)) = u19;
            t13 = 0x14;
        } else {
            t13 = 0x14;
            u19 = (*(float *)((t16 + t13)));
            t13 = 0x18;
            *(float *)((((int)stk + 0) + t13)) = u19;
            t13 = 0xC;
        }
        u19 = (*(float *)((t16 + t13)));
        t13 = 0x20;
        *(float *)((((int)stk + 0) + t13)) = u19;
        t13 = 0x10;
        u19 = (*(float *)((t16 + t13)));
        t13 = 0x1C;
        *(float *)((((int)stk + 0) + t13)) = u19;
        t13 = 0x18;
        u19 = (*(float *)((t16 + t13)));
        t13 = 0x24;
        *(float *)((((int)stk + 0) + t13)) = u19;
        t13 = ((((struct o0_int *)0xC363A68)->v));
        t13 = (t13 << 2);
        t13 = (t13 << 2);
        t13 = (t13 << 2);
        t13 = (*(signed char *)((0xC363A70 + t13)));
        switch (t13) {
        case 0:
            *(unsigned int *)(((int)stk + 48)) = 0x2;
            t16 = ((int)stk + 0);
            t13 = (nl_sprite_draw(t16));
            break;
        case 1:
            t16 = ((int)stk + 0);
            t13 = (draw_project_point_sprite(t16));
            break;
        case 2:
            t16 = ((int)stk + 0);
            t13 = (draw_project_point_sprite_z01(t16));
            break;
        }
    }
    return t13;
}

int FUN_0c02842a(int a4, int a5)
{
    int stk[14];
    register int t1;
    register int t2;
    register int t3;
    register int t27;
    register int t0;
    register float u4;
    register float u5;
    register int t49;
    register int t50;
    register int t51;
    register float u52;
    register float u53;
    register float u43;
    register float u44;
    register float u34;
    register float u35;

    t1 = a4;
    t2 = a5;
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        t0 = 0x2E0;
        t2 = t3;
        t2 = (t2 << 2);
        t0 = (t0 + a4);
        t2 = (t2 + t0);
        t2 = (*(int *)((t2 + 0x0)));
        t1 = ((((struct oB0_int *)(t2))->v));
        t0 = (*(int *)((t1 + 0x0)));
        *(unsigned int *)(((int)stk + 0)) = t0;
        t0 = ((((struct o20_short *)(t1))->v));
        u4 = ((((struct o4_float *)(t2))->v));
        u5 = (float)t0;
        u4 = (u4 + u5);
        *(float *)(((int)stk + 4)) = u4;
        t0 = ((((struct o22_short *)(t1))->v));
        u4 = ((((struct o8_float *)(t2))->v));
        u5 = (float)t0;
        u4 = (u4 + u5);
        *(float *)(((int)stk + 8)) = u4;
        u5 = ((((struct oC_float *)(t2))->v));
        *(float *)(((int)stk + 12)) = u5;
        *(unsigned int *)(((int)stk + 40)) = (*(short *)((t1 + 0x4)));
        *(unsigned int *)(((int)stk + 52)) = (unsigned short)(*(short *)((t1 + 0x6)));
        u5 = ((((struct o8_float *)(t1))->v));
        *(float *)(((int)stk + 24)) = u5;
        u5 = ((((struct oC_float *)(t1))->v));
        *(float *)(((int)stk + 28)) = u5;
        u5 = ((((struct o10_float *)(t1))->v));
        *(float *)(((int)stk + 32)) = u5;
        u5 = ((((struct o14_float *)(t1))->v));
        *(float *)(((int)stk + 36)) = u5;
        u5 = ((((struct o18_float *)(t1))->v));
        u4 = ((((struct o50_float *)(a4))->v));
        u4 = (u4 * u5);
        *(float *)(((int)stk + 16)) = u4;
        u5 = ((((struct o1C_float *)(t1))->v));
        u4 = ((((struct o54_float *)(a4))->v));
        u4 = (u4 * u5);
        *(float *)(((int)stk + 20)) = u4;
        u5 = ((((struct oBC_float *)(t2))->v));
        *(float *)(((int)stk + 44)) = u5;
        t27 = *(signed char *)((t2 + 0xB8));
        if (t27 != 0) {
            if (t27 != 1) {
                if (t27 != 2) {
                    t49 = t0;
                    t50 = t1;
                    t51 = t2;
                    u34 = u4;
                    u35 = u5;
                } else {
                    t1 = ((int)stk + 0);
                    draw_project_point_sprite_z01(t1);
                }
                u43 = u34;
                u44 = u35;
            } else {
                t1 = ((int)stk + 0);
                draw_project_point_sprite(t1);
            }
            u52 = u43;
            u53 = u44;
        } else {
            *(unsigned int *)(((int)stk + 48)) = 0x2;
            t1 = ((int)stk + 0);
            nl_sprite_draw(t1);
        }
        u4 = u52;
        u5 = u53;
        t3 = (t3 + 0x1);
        t0 = t49;
        t1 = t50;
        t2 = t51;
    }
    return 0x2DC;
}
