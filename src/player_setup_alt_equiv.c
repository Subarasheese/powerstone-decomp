/* player object setup: list search, tint, scale, spawn positions, model nodes (0c098c48-0c099c08) */

typedef struct { int w0, w1, w2; } vec3i;
extern char g_save_options[];
extern char g_7f304b;
extern void pl_change_state(char *, int, int);
extern void pl_reset_model_parts(char *);
extern void pl_reset_pose(char *);
struct vec12 { int a, b, c; };
extern int pl_angle_to_opponent(char *);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o7298_float { char p[0x7298]; float v; };
int pl_for_each_part_slot(int, int, int, int);
struct o40_uchar { char p[0x40]; unsigned char v; };
int FUN_0c0ccf38(int, int, int);

void pl_reset_for_new_round(char *fighter);

void pl_reset_for_new_round(char *fighter)
{
    vec3i pos_copy;
    int use_240, mode_hi, mode_lo;
    char *unused_ptr;

    pos_copy = *(vec3i *)0xC150AC8;
    pl_change_state(fighter, 0, 0);
    *(float *)(fighter + 36) = *(float *)(fighter + 36) - 10.0f;
    *(vec3i *)(fighter + 56) = pos_copy;
    *(vec3i *)(fighter + 68) = pos_copy;
    fighter[1] = 1;
    *(unsigned short *)(fighter + 0x71F4) = 0;
    fighter[0x71F3] = 0;
    fighter[0x71F2] = 0;
    fighter[0x71F1] = 0;
    pl_reset_model_parts(fighter);
    pl_reset_pose(fighter);
    fighter[0x7232] = 0;
    fighter[0x720E] = 0;
    fighter[0x7207] = 0;
    *(float *)(fighter + 0x274) = 1.0f;
    fighter[0x72B1] = 0;
    fighter[0x7204] = 0;
    fighter[0x7214] = ((char *)0xC338E12)[fighter[4]];
    fighter[0x7236] = 0;
    *(short *)(fighter + 0x71D8) = *(short *)(fighter + 0x71D4);
    *(short *)(fighter + 0x71D6) = *(short *)(fighter + 0x71D4);
    use_240 = 1;
    if (g_save_options[5] != 0 && g_save_options[26] != 0) {
        if (g_7f304b != 0) {
            mode_hi = *(char *)0xC7F3053 & 0xF0;
            if (mode_hi == 0 || mode_hi == 16) {
                if (*(short *)(fighter + 0x71D4) >= 0) {
                    use_240 = 0;
                }
            } else if (mode_hi == 32) {
                mode_lo = *(char *)0xC7F3053 & 15;
                if (mode_lo == 1 || mode_lo == 2) {
                    if (fighter[3] == mode_lo - 1) {
                        use_240 = 0;
                    }
                } else {
                    use_240 = 0;
                }
            } else {
                use_240 = 0;
            }
        }
    }
    if (use_240) {
        *(unsigned short *)(fighter + 0x71D8) = 0xF0;
        *(unsigned short *)(fighter + 0x71D6) = 0xF0;
        *(unsigned short *)(fighter + 0x71D4) = 0xF0;
    }
    fighter[0x720F] = 0;
    if (fighter[4] != 10) {
        fighter[0x7230] = 1;
        if ((g_save_options[21] == 0 || g_save_options[5] == 0) && (*(char **)(fighter + 28))[4] != 10 && fighter[3] != 0) {
            fighter[0x7231] = 2;
        } else {
            fighter[0x7231] = 1;
        }
    } else {
        fighter[0x7230] = 0;
        fighter[0x7231] = 0;
    }
}

void pl_place_start_positions(void)
{
    char *player0;
    char *player1;
    char *start_tbl;
    signed char idx;

    idx = *(signed char *)(0xC7F302C + 37);
    start_tbl = (char *)0xC3458F4;
    player0 = (char *)0xC7E40C4;
    *(struct vec12 *)(player0 + 32) = *(struct vec12 *)(start_tbl + (unsigned char)(idx * 12));
    player1 = player0 + 0x72D0;
    *(struct vec12 *)(player1 + 32) = *(struct vec12 *)(start_tbl + (unsigned char)(idx * 12) + 180);
    pl_reset_for_new_round(player0);
    pl_reset_for_new_round(player1);
    *(int *)(player0 + 48) = pl_angle_to_opponent(player0);
    *(int *)(player1 + 48) = pl_angle_to_opponent(player1);
}

int pl_set_spawn_position(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x3));
    (((struct o20_float *)(a4))->v) = (*(float *)((0xC150A98 + (signed char)(((t0 << 1) + t0) << 2))));
    t0 = *(signed char *)((a4 + 0x3));
    (((struct o24_float *)(a4))->v) = ((((struct o4_float *)(((signed char)(((t0 << 1) + t0) << 2) + 0xC150A98)))->v));
    t0 = *(signed char *)((a4 + 0x3));
    (((struct o28_float *)(a4))->v) = ((((struct o8_float *)((0xC150A98 + (signed char)(((t0 << 1) + t0) << 2))))->v));
    t0 = *(signed char *)((a4 + 0x3));
    *(unsigned int *)((a4 + 0x2C)) = (*(int *)((0xC150AB0 + (signed char)(((t0 << 1) + t0) << 2))));
    t0 = *(signed char *)((a4 + 0x3));
    *(unsigned int *)((a4 + 0x30)) = (*(int *)((((signed char)(((t0 << 1) + t0) << 2) + 0xC150AB0) + 0x4)));
    t0 = *(signed char *)((a4 + 0x3));
    *(unsigned int *)((a4 + 0x34)) = (*(int *)(((0xC150AB0 + (signed char)(((t0 << 1) + t0) << 2)) + 0x8)));
    return (signed char)(((t0 << 1) + t0) << 2);
}

int pl_reset_scale(int a4)
{
    register float u3;

    u3 = *(float *)(((((*(signed char *)(((0x71F1 + a4) + 0x0))) << 2) + (0xC150C60 + (((*(signed char *)((a4 + 0x4))) << 2) << 1))) + 0x0));
    (((struct o58_float *)(a4))->v) = u3;
    (((struct o54_float *)(a4))->v) = u3;
    (((struct o50_float *)(a4))->v) = u3;
    (((struct o7298_float *)(a4))->v) = u3;
    return pl_for_each_part_slot(a4, 0x0, 0x4, 0xC099920);
}

int FUN_0c099966(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned char *)((a4 + 0x1)) = 0x1;
    pl_for_each_part_slot(a4, 0x0, 0x4, 0xC09995E);
    t1 = t0;
    t0 = (*(int *)(((((*(signed char *)(((0x71F1 + a4) + 0x0))) << 2) + (0xC339378 + (((*(signed char *)((a4 + 0x4))) << 2) << 1))) + 0x0)));
    for (;;) {
        t2 = *(signed char *)((t0 + 0x0));
        if (t2 == -1) {
            break;
        }
        t1 = a4;
        t1 = (FUN_0c0ccf38(t1, (*(signed char *)((t0 + 0x0))), (*(signed char *)((t0 + 0x1)))));
        t0 = (t0 + 0x2);
        if (t1 != 0) {
            (((struct o40_uchar *)(t1))->v) = 0x0;
        }
    }
    return t2;
}

int FUN_0c099a1c(int a4)
{
    return pl_for_each_part_slot(a4, 0x1, 0x4, 0xC0999E8);
}

void sys_nop_099a84(void)
{
    
}
