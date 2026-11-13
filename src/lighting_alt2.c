/* light/ambient helpers (vector sub/normalize, nlObjPutSetGlobalAmbience) using the slot records (0c05f6d8-0c05fc50) */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c05f6d8(int);
int FUN_0c05f85a(int);
int cam_init_from_stage_block(int);

int FUN_0c05f952(int a4, int a5)
{
    int stk[2];
    register int t5;
    register float u36;
    register float u37;
    register int t42;
    register int t44;
    register int t45;
    register int t46;
    register float u47;
    register float u48;
    register int t49;
    register int t58;
    register int t90;
    register int t91;
    register int t92;
    register float u93;
    register float u94;
    register int t118;
    register float u119;
    register float u122;
    register float u128;
    register float u134;
    register int t1;
    register int t2;
    register float u3;
    register float u4;
    register int t35;
    register float u31;
    register float u32;
    register float u22;
    register float u23;
    register int t43;
    int t71;
    register int t72;
    register int t73;
    register int t74;
    float u83;
    register int t84;

    *(unsigned int *)((((int)stk + 0) + 0x0)) = 0x0;
    for (;;) {
        t5 = *(int *)((((int)stk + 0) + 0x0));
        if ((int)t5 >= (int)0x8) {
            break;
        }
        t2 = (*(int *)((((int)stk + 0) + 0x0)));
        t1 = t2;
        t2 = (t2 << 2);
        t2 = (t2 << 1);
        t2 = (t2 + t1);
        t2 = (t2 << 2);
        t2 = (t2 << 2);
        t2 = (short)t2;
        t2 = (t2 + 0xC7F3238);
        u36 = u3;
        u37 = u4;
        if ((*(signed char *)((t2 + 0x0))) != 0) {
            t42 = (*(signed char *)((t2 + 0x4)));
            t42 = (unsigned char)t42;
            if (t42 != 0) {
                if (t42 != 1) {
                    t35 = t1;
                    u22 = u3;
                    u23 = u4;
                } else {
                    t42 = (cam_init_from_stage_block(t2));
                }
                u31 = u22;
                u32 = u23;
            } else {
                t1 = (*(int *)((t2 + 0xC)));
                if (t1 != 0) {
                    t42 = (FUN_0c05f6d8(t2));
                } else {
                    t42 = (FUN_0c05f85a(t2));
                }
            }
            u36 = u31;
            u37 = u32;
        } else {
            t35 = t1;
        }
        u3 = u36;
        u4 = u37;
        t42 = 0x74;
        t1 = t35;
        u4 = (*(float *)((t2 + t42)));
        t42 = 0x70;
        u3 = (*(float *)((t2 + t42)));
        t42 = 0x78;
        u3 = (u3 * u4);
        *(float *)((t2 + t42)) = u3;
        t1 = (*(int *)((((int)stk + 0) + 0x0)));
        t1 = (t1 + 0x1);
        *(unsigned int *)((((int)stk + 0) + 0x0)) = t1;
    }
    *(unsigned int *)((((int)stk + 0) + 0x0)) = 0x0;
    t44 = t5;
    t45 = a4;
    t46 = a5;
    u47 = u3;
    u48 = u4;
    for (;;) {
        t49 = *(int *)((((int)stk + 0) + 0x0));
        if ((int)t49 >= (int)0x8) {
            break;
        }
        t45 = (*(int *)((((int)stk + 0) + 0x0)));
        t58 = t45;
        t45 = (t45 << 2);
        t45 = (t45 << 1);
        t45 = (t45 + t58);
        t45 = (t45 << 2);
        t45 = (t45 << 2);
        t45 = (short)t45;
        t45 = (t45 + 0xC7F3238);
        t44 = (*(signed char *)((t45 + 0x0)));
        if (t44 != 0) {
            *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x0;
            for (;;) {
                t44 = (*(int *)(((((int)stk + 0) + 0x4) + 0x0)));
                if ((int)t44 >= (int)0x8) {
                    break;
                }
                t58 = (*(int *)((((int)stk + 0) + 0x0)));
                if ((t58 != t44) && (t71 = *(int *)(((((int)stk + 0) + 0x4) + 0x0)), t46 = t71, t72 = (t58 == t44), t58 = t46, t46 = (t46 << 2), t73 = (int)(((unsigned int)t46) >> 31), t46 = (t46 << 1), t46 = (t46 + t58), t46 = (t46 << 2), t46 = (t46 << 2), t46 = (short)t46, t46 = (t46 + 0xC7F3238), t74 = *(signed char *)((t46 + 0x0)), t44 = t74, t44 != 0)) {
                    t42 = 0x78;
                    u47 = (*(float *)((t45 + t42)));
                    u48 = (*(float *)((t46 + t42)));
                    if ((u47 > u48) && (u83 = *(float *)((t45 + t42)), t84 = (u47 > u48), u47 = u83, u48 = 0.0f, u47 != u48)) {
                        t43 = t42;
                        t43 = (t43 + t45);
                        u47 = (*(float *)((t46 + t42)));
                        u48 = (*(float *)((t43 + 0x0)));
                        u47 = (u47 / u48);
                        *(float *)((t46 + t42)) = u47;
                    }
                }
                t58 = (*(int *)(((((int)stk + 0) + 0x4) + 0x0)));
                t58 = (t58 + 0x1);
                *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = t58;
            }
        }
        t43 = (*(int *)((((int)stk + 0) + 0x0)));
        t43 = (t43 + 0x1);
        *(unsigned int *)((((int)stk + 0) + 0x0)) = t43;
    }
    *(unsigned int *)((((int)stk + 0) + 0x0)) = 0x0;
    t90 = t42;
    t91 = t49;
    t92 = t45;
    u93 = u47;
    u94 = u48;
    for (;;) {
        if ((int)(*(int *)((((int)stk + 0) + 0x0))) >= (int)0x8) {
            break;
        }
        t92 = (*(int *)((((int)stk + 0) + 0x0)));
        t91 = t92;
        t92 = (t92 << 2);
        t92 = (t92 << 1);
        t92 = (t92 + t91);
        t92 = (t92 << 2);
        t92 = (t92 << 2);
        t92 = (short)t92;
        t92 = (t92 + 0xC7F3238);
        if ((*(signed char *)((t92 + 0x0))) != 0) {
            t90 = 0x78;
            u94 = (*(float *)((t92 + t90)));
            t90 = 0x54;
            u93 = (*(float *)((t92 + t90)));
            t90 = (t90 + 0x30);
            u93 = (u93 * u94);
            *(float *)((t92 + t90)) = u93;
            t90 = 0x78;
            u94 = (*(float *)((t92 + t90)));
            t90 = 0x58;
            u93 = (*(float *)((t92 + t90)));
            t90 = (t90 + 0x30);
            u93 = (u93 * u94);
            *(float *)((t92 + t90)) = u93;
            t90 = 0x78;
            u94 = (*(float *)((t92 + t90)));
            t90 = 0x5C;
            u93 = (*(float *)((t92 + t90)));
            t90 = (t90 + 0x30);
            u93 = (u93 * u94);
            *(float *)((t92 + t90)) = u93;
        }
        t91 = (*(int *)((((int)stk + 0) + 0x0)));
        t91 = (t91 + 0x1);
        *(unsigned int *)((((int)stk + 0) + 0x0)) = t91;
    }
    if (((((struct o0_int *)0xC38380C)->v)) != 0) {
        if ((*(int *)0xC7F3028) == 0) {
            (((struct o0_uint *)0xC38380C)->v) = (((((struct o0_int *)0xC38380C)->v)) - 1);
        }
        t118 = (((struct o0_int *)0xC38380C)->v);
        u119 = (((struct o8_float *)0xC38380C)->v);
        if ((int)t118 < (int)0x1E) {
            u122 = u119;
            u122 = u122 + (((float)(0x1E - t118) / 30.0f)) * ((((struct o0_float *)0xC7F32BC)->v));
            (((struct o0_float *)0xC7F32BC)->v) = u122;
            if (((((struct o0_float *)0xC7F32BC)->v)) > 1.0f) {
                (((struct o0_float *)0xC7F32BC)->v) = 1.0f;
            }
            u128 = ((((struct o8_float *)0xC38380C)->v));
            u128 = u128 + (((float)(0x1E - t118) / 30.0f)) * ((((struct o4_float *)0xC7F32BC)->v));
            (((struct o4_float *)0xC7F32BC)->v) = u128;
            if (((((struct o4_float *)0xC7F32BC)->v)) > 1.0f) {
                (((struct o4_float *)0xC7F32BC)->v) = 1.0f;
            }
            u134 = ((((struct o8_float *)0xC38380C)->v));
            u134 = u134 + (((float)(0x1E - t118) / 30.0f)) * ((((struct o8_float *)0xC7F32BC)->v));
            (((struct o8_float *)0xC7F32BC)->v) = u134;
            if (((((struct o8_float *)0xC7F32BC)->v)) > 1.0f) {
                (((struct o8_float *)0xC7F32BC)->v) = 1.0f;
            }
            return 0x8C;
        }
        return ((int (*)(int, int, int, int, float))(0xC05FB38))(0xC383814, 0xC38380C, t118, 0x1E, u119);
    }
    return t90;
}
