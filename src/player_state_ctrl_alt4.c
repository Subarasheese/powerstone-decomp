/* player state change (pl_change_state) power form flags input chords and character move hooks (0c0a18f8-0c0a2ee8) */

struct o24_float { char p[0x24]; float v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
float FUN_0c02649a(int, int);
int pl_change_state(int, int, int, int);
int obj_set_mode_owner(int, int, int);
int obj_can_interact(int, int, int);
struct o274_float { char p[0x274]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E4_uint { char p[0x2E4]; unsigned int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
extern int pl_get_held_item_class();
int hit_find_contact_direction(int);
int hit_probe_step_first(int, int, float);
int FUN_0c0a18f8(int, int, int);
int pl_try_start_pickup_touched(int);

int pl_try_grab_target_object(int a4);

int pl_try_grab_target_object(int a4)
{
    int stk[6];
    register int t4;
    register int t11;
    register float t18;
    register float t19;
    int t1;
    int t12;

    if (((*(signed char *)((a4 + 0x71BC))) != 2) && (t1 = (((struct o71C8_int *)(a4))->v), t1 != 0)) {
        t4 = obj_can_interact(((((struct o71C8_int *)(a4))->v)), 0x1, (*(signed char *)((a4 + 0x3))));
        if (t4 != 0) {
            t11 = *(signed char *)((a4 + 0x4));
            if ((t11 != 4) && ((t11 != 5) && ((t11 != 9) && (t12 = *(signed char *)((a4 + 0x71F1)), t12 == 0)))) {
                t18 = FUN_0c02649a(((((struct o71C8_int *)(a4))->v)), 0x0);
                *(float *)(((int)stk + 4)) = t18;
                t19 = FUN_0c02649a(a4, 0x0);
                if (t19 > t18) {
                    (((struct o24_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
                }
                *(float *)(((int)stk + 0)) = (FUN_0c02649a(((((struct o71C8_int *)(a4))->v)), 0x1));
                FUN_0c02649a(a4, 0x1);
                return 0x0;
            }
            if ((*(signed char *)((((((struct o71C8_int *)(a4))->v)) + 0x30D))) == 0) {
                obj_set_mode_owner(((((struct o71C8_int *)(a4))->v)), 0x5, (*(signed char *)((a4 + 0x3))));
                pl_change_state(a4, 0xA, 0xA, 0x0);
                (((struct o7236_uchar *)(a4))->v) = 0x1;
                return ((int (*)(void))(0xC0A247E))();
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int pl_try_dual_button_action(int a4, int a5, int a6)
{
    int stk[2];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R9;
    register int R12;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_1 = a4;
    v0_3 = a5;
    v0_2 = a6;
    v0_4 = (signed char)(((int (*)(int, int, int))(pl_get_held_item_class))(v0_1, v0_3, v0_2)) == 0;
    v0_0 = (v0_1);
    if (v0_4) goto L_C0A24B8;
    if (((*(signed char *)((v0_0 + 0x7204))) != 1)) goto L_C0A24B8;
    v0_1 = (signed char)(((int (*)(int, int, int))(pl_get_held_item_class))(v0_0, v0_3, v0_2)) == 13;
    if (v0_1) goto L_C0A24B8;
    L_C0A25D8:;
    return 0x0;
    L_C0A24B8:;
    v0_1 = (signed char)(((int (*)(int, int, int))(pl_get_held_item_class))(v0_0, v0_3, v0_2)) == 0;
    if (v0_1) goto L_C0A24F8;
    (((struct o7236_uchar *)(v0_0))->v) = 0x0;
    (((struct o71CC_uint *)(v0_0))->v) = 0x0;
    (((struct o2E4_uint *)(v0_0))->v) = (((((struct o2E4_int *)(v0_0))->v)) & 0xFFFFF9FF);
    v0_1 = (0x0);
    if (((*(signed char *)((v0_0 + 0x71BC))) == 2)) goto L_C0A24EC;
    pl_change_state(v0_0, 0x0, 0x0, 0x0);
    L_C0A25D0:;
    return 0x1;
    L_C0A24EC:;
    pl_change_state(v0_0, 0x5, 0x6, 0x0);
    goto L_C0A25D0;
    L_C0A24F8:;
    if (((*(signed char *)((v0_0 + 0x71BA))) == 16)) goto L_C0A2534;
    v0_1 = (signed char)(FUN_0c0a18f8(v0_0, (*(signed char *)((v0_0 + 0x721F))), v0_2)) == 0;
    if (v0_1) goto L_C0A2534;
    pl_change_state(v0_0, 0x25, 0x0, 0x0);
    goto L_C0A25D0;
    L_C0A2534:;
    v0_1 = (signed char)(pl_try_grab_target_object(v0_0)) != 0;
    if (v0_1) goto L_C0A25D0;
    if (((*(signed char *)((v0_0 + 0x71BC))) == 2)) goto L_C0A2550;
    v0_1 = (signed char)(pl_try_start_pickup_touched(v0_0)) != 0;
    if (v0_1) goto L_C0A25D0;
    L_C0A2550:;
    if (((*(signed char *)((v0_0 + 0x71BC))) != 2)) goto L_C0A2596;
    if ((((((struct o274_float *)(v0_0))->v)) != 0.0f)) goto L_C0A2596;
    if (((((((struct o2DC_int *)(v0_0))->v)) & 240) == 0)) goto L_C0A2596;
    v0_2 = hit_find_contact_direction(v0_0);
    v0_1 = (v0_2);
    if (((signed char)v0_2 == 0)) goto L_C0A2596;
    *(unsigned int *)((v0_0 + 0x30)) = (unsigned short)((((((signed char)v0_1 + 0xFFFC) << 8) << 2) << 2) << 2);
    pl_change_state(v0_0, 0xA, 0xC, 0x0);
    goto L_C0A25D0;
    L_C0A2596:;
    v0_2 = *(signed char *)((v0_0 + 0x71BA));
    v0_1 = (v0_2);
    if ((v0_2 == 31)) goto L_C0A25A8;
    if ((v0_1 != 16)) goto L_C0A25D8;
    L_C0A25A8:;
    v0_1 = (signed char)(hit_probe_step_first(v0_0, (0x7254 + v0_0), (*(float *)0xC0A262C))) != 1;
    if (v0_1) goto L_C0A25D8;
    *(volatile int *)((v0_0 + 0x30));
    goto L_C0A25D8;
}
