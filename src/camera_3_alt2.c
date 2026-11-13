/* camera follow computation and mode handlers 1..28 (0c0d9288-0c0db1c0) */

int cam_compute_follow(int, int);
struct o1B4_short { char p[0x1B4]; short v; };
struct o1B4_ushort { char p[0x1B4]; unsigned short v; };
int FUN_0c0e7140(int);
struct o1B2_short { char p[0x1B2]; short v; };
struct o1B2_ushort { char p[0x1B2]; unsigned short v; };
struct o1B6_short { char p[0x1B6]; short v; };
struct o1B6_ushort { char p[0x1B6]; unsigned short v; };
struct stage_limits { short limits[20]; };
extern signed char g_game_state[];
int cam_step_keyframe_script(char *, char *);

int cam_mode_default(int a4)
{
    return cam_compute_follow(a4, 0xC33FA9C);
}

int cam_mode_28(int a4)
{
    return cam_compute_follow(a4, 0xC33FAD0);
}

int cam_mode_16(int a4)
{
    register int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0x4));
    if (t1 != 0) {
        if (t1 != 1) {
        } else {
            t1 = (((struct o1B4_short *)(a4))->v);
            (((struct o1B4_ushort *)(a4))->v) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) > (int)0x168) {
                (((struct o1B4_ushort *)(a4))->v) = 0x0;
            }
        }
    } else {
        *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
        *(unsigned char *)(((a4 + 0x1) + 0x5)) = 0x0;
        *(unsigned char *)(((a4 + 0x1) + 0x4)) = 0x0;
        FUN_0c0e7140((a4 + 0x1));
        t1 = (((struct o1B4_short *)(a4))->v);
        (((struct o1B4_ushort *)(a4))->v) = (t1 + 0x1);
        if ((int)(short)(t1 + 0x1) > (int)0x168) {
            (((struct o1B4_ushort *)(a4))->v) = t0;
        }
    }
    return cam_compute_follow(a4, (0x1A8 + a4));
}

int FUN_0c0da8c0(int a4)
{
    register int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0x4));
    if (t1 != 0) {
        if (t1 != 1) {
        } else {
            t1 = (((struct o1B4_short *)(a4))->v);
            (((struct o1B4_ushort *)(a4))->v) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) > (int)0x168) {
                (((struct o1B4_ushort *)(a4))->v) = 0x0;
            }
            if ((int)((((struct o1B6_short *)(a4))->v)) > (int)0x100) {
                (((struct o1B6_ushort *)(a4))->v) = (((((struct o1B6_short *)(a4))->v)) - 1);
            }
            if ((int)((((struct o1B2_short *)(a4))->v)) > (int)0xFFFFFFFB) {
                (((struct o1B2_ushort *)(a4))->v) = (((((struct o1B2_short *)(a4))->v)) - 1);
            }
        }
    } else {
        *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
        *(unsigned char *)(((a4 + 0x1) + 0x5)) = 0x0;
        *(unsigned char *)(((a4 + 0x1) + 0x4)) = 0x0;
        FUN_0c0e7140((a4 + 0x1));
        t1 = (((struct o1B4_short *)(a4))->v);
        (((struct o1B4_ushort *)(a4))->v) = (t1 + 0x1);
        if ((int)(short)(t1 + 0x1) > (int)0x168) {
            (((struct o1B4_ushort *)(a4))->v) = t0;
        }
        if ((int)((((struct o1B6_short *)(a4))->v)) > (int)0x100) {
            (((struct o1B6_ushort *)(a4))->v) = (((((struct o1B6_short *)(a4))->v)) - 1);
        }
        if ((int)((((struct o1B2_short *)(a4))->v)) > (int)0xFFFFFFFB) {
            (((struct o1B2_ushort *)(a4))->v) = (((((struct o1B2_short *)(a4))->v)) - 1);
        }
    }
    return cam_compute_follow(a4, (0x1A8 + a4));
}

void cam_mode_24_stage_select(char *cursor)
{
    struct stage_limits table;
    char *rec;
    int i;

    table = *(struct stage_limits *)0xC155264;
    rec = (char *)0xC33FE54;
    if (cursor[4] == 0) {
        cursor[4] = cursor[4] + 1;
        i = g_game_state[37] * 2;
        *(short *)(rec + 14) = table.limits[i];
        *(short *)(rec + 8) = table.limits[i];
        i = g_game_state[37] * 2;
        *(short *)(rec + 18) = table.limits[i + 1];
        *(short *)(rec + 12) = table.limits[i + 1];
        cam_step_keyframe_script(cursor, rec);
    } else if (cursor[4] == 1) {
        cam_step_keyframe_script(cursor, rec);
    }
}
