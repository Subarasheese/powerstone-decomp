/* velocity/acceleration/gravity, angle to opponent, stick direction (part 3 of 3 of the same module) (0c09db78-0c09f6a8) */

/* named globals (symbols.txt) */
extern char g_pl_char_param_tbl[];
extern float math_cos_angle16(int);
extern float math_sin_angle16(int);
int pl_stick_dir_angle(char *);
int pl_angle_to_opponent(char *);
struct o7238_uchar { char p[0x7238]; unsigned char v; };
struct o723A_uchar { char p[0x723A]; unsigned char v; };
int pl_get_held_item_class(int, int, int);
int FUN_0c09e4ac(int, int, int);
struct o2E4_int { char p[0x2E4]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o721C_uchar { char p[0x721C]; unsigned char v; };
struct o721E_uchar { char p[0x721E]; unsigned char v; };
int pl_timer_disable(int);
int pl_start_fall_motion(int);
int pl_find_move_input_any(int);
int pl_start_motion(int, int, int);
int pl_start_idle_motion(int);

void pl_set_velocity_toward_target(char *obj)
{
    int heading, diff, angle;
    float *row;

    heading = (unsigned short)(*(short *)0xC7F31E0 + pl_stick_dir_angle(obj));
    diff = (unsigned short)(heading - pl_angle_to_opponent(obj));
    if (diff & 0x8000)
        diff |= 0xffff0000;
    if (diff >= -5461 && diff <= 5461)
        heading = pl_angle_to_opponent(obj);
    row = (float *)(((int)g_pl_char_param_tbl) + (signed char)obj[4] * 152 + (unsigned char)(obj[0x71f1] * 76));
    if (obj[0x71ef] == 4) {
        *(float *)(obj + 76) = 0.0f;
        *(float *)(obj + 68) = 0.0f;
        *(float *)(obj + 64) = 0.0f;
        *(float *)(obj + 56) = 0.0f;
        *(float *)(obj + 60) = row[4];
        *(float *)(obj + 72) = row[6];
    } else {
        *(float *)(obj + 76) = 0.0f;
        *(float *)(obj + 68) = 0.0f;
        *(float *)(obj + 60) = row[4];
        *(float *)(obj + 72) = row[6];
        angle = 0x14000 - heading;
        *(float *)(obj + 56) = row[5] * math_cos_angle16(angle);
        *(float *)(obj + 64) = row[5] * math_sin_angle16(angle);
    }
}

int pl_try_start_move(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t1;

    *(unsigned char *)(((int)stk + 0)) = 0x0;
    *(unsigned char *)(((int)stk + 4)) = 0x0;
    t0 = pl_get_held_item_class(a4, a5, a6);
    if ((signed char)t0 != 13) {
        t1 = FUN_0c09e4ac(a4, (((int)stk + 0) + 0x4), ((int)stk + 0));
        if ((signed char)t1 != 0) {
            (((struct o7238_uchar *)(a4))->v) = (*(signed char *)(((int)stk + 4)));
            (((struct o723A_uchar *)(a4))->v) = (*(signed char *)(((int)stk + 0)));
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int pl_try_start_basic_attack(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    int t2;

    t0 = pl_get_held_item_class(a4, a5, a6);
    if (((signed char)t0 != 13) && ((t1 = *(signed char *)((a4 + 0x721C)), t1 == 0) && (t2 = (((struct o2E4_int *)(a4))->v), (t2 & 0x600) != 0))) {
        (((struct o721E_uchar *)(a4))->v) = ((((((((struct o2E4_int *)(a4))->v)) & 0x400) == 0)) ? 1 : 0);
        return 0x1;
    }
    return 0x0;
}

int FUN_0c09e89a(int a4, int a5, int a6)
{
    register int t0;
    int t1;

    t0 = pl_get_held_item_class(a4, a5, a6);
    if (((signed char)t0 == 0) && (t1 = *(signed char *)((a4 + 0x7221)), t1 != 0)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c09eb8c(int a4)
{
    register int t1;

    if ((*(signed char *)((a4 + 0x723A))) == 0) {
        t1 = pl_find_move_input_any(a4);
        if ((signed char)t1 != 0) {
            (((struct o723A_uchar *)(a4))->v) = 0x1;
            return t1;
        }
        return 0x0;
    }
    return 0x0;
}

int pl_state_idle_init(int a4, int a5)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o71BA_uchar *)(a4))->v) = 0x0;
    pl_timer_disable(a4);
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    if ((*(signed char *)(((int)stk + 0))) != 0) {
        (((struct o71BC_uchar *)(a4))->v) = 0x1;
        return pl_start_motion(a4, 0x0, 0x1);
    }
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    return pl_start_idle_motion(a4);
}

int pl_state_fall_init(int a4)
{
    (((struct o71BA_uchar *)(a4))->v) = 0xE;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_timer_disable(a4);
    (((struct o721C_uchar *)(a4))->v) = 0x0;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    return pl_start_fall_motion(a4);
}
