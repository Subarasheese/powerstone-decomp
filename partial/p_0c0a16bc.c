/* @unit 0c0a16bc-0c0a18f8 */
struct O;

struct O {
    char pad0[3];
    char b3;
    char pad1[44];
    int w48;
    char pad2[4];
    float f56;
    float f60;
    float f64;
    char pad3[168];
    short s236;
    short s238;
    short s240;
    char pad4[20];
    char b262;
    char pad5[469];
    int i732;
    char pad6[28202];
    char b28938;
    char b28939;
    char b28940;
    char pad7[153];
    char b29094;
    char b29095;
    char b29096;
    char b29097;
    char pad8[16];
    char b29114;
    char pad9[1];
    char b29116;
    char pad10[11];
    struct O * p29128;
    struct O * p29132;
    char pad11[15];
    char b29151;
    char pad12[44];
    short s29196;
    char pad13[40];
    char b29238;
};
extern int g_cam_yaw16;
extern void pl_reset_pose(struct O *);
extern void pl_reset_combo_counter(struct O *);
extern void pl_start_motion(struct O *, int, int);
extern int pl_angle_to_opponent(struct O *);
extern int pl_stick_dir_angle(struct O *);
extern float math_cos_angle16(int);
extern float math_sin_angle16(int);
extern int obj_touched_by_slot(struct O *, int);
extern void obj_set_mode_owner(struct O *, int, int);
void pl_enter_state_24(struct O *o0, char c)
{
    register struct O *o = o0;
    register void (*fn)(struct O *, int, int) = pl_start_motion;
    register short five = 5;
    register int z = 0;
    int d;
    int a6;
    float f;
    o->b29114 = 24;
    o->b29151 = z;
    pl_reset_pose(o);
    o->b28938 = z;
    o->b28939 = z;
    o->b28940 = z;
    pl_reset_combo_counter(o);
    o->s240 = c;
    switch (c) {
    case 0:
    default:
        if (o->b29116 == 1) fn(o, 0, 1); else fn(o, 0, 0);
        o->b29095 = 8;
        o->b29094 = 8;
        o->s236 = 8;
        o->s238 = z;
        o->s29196 = five;
        break;
    case 1:
        a6 = 156;
        goto common;
    case 2:
        a6 = 157;
    common:
        fn(o, 2, a6);
        o->b29096 = o->b29097 = !z;
        o->s29196 = five;
        break;
    case 3:
        o->w48 = pl_angle_to_opponent(o);
        fn(o, 1, 83);
        o->b29096 = o->b29097 = !z;
        break;
    case 4:
        fn(o, 2, 157);
        o->b29096 = o->b29097 = !z;
        o->s29196 = five;
        if (o->i732 & 240)
            o->w48 = (unsigned short)(pl_stick_dir_angle(o) + g_cam_yaw16 + 32768);
        f = -9.0f;
        d = (unsigned short)(o->w48 - pl_angle_to_opponent(o));
        if (d & 0x8000) d |= 0xffff0000;
        if (d > 16384 || d < -16384) f = -4.5f;
        o->f60 = 18.0f;
        o->f56 = math_cos_angle16(-o->w48 + 81920) * f;
        o->f64 = math_sin_angle16(-o->w48 + 81920) * f;
        o->b262 = 10;
        break;
    }
}
void pl_enter_state_25_pickup_item(struct O *o)
{
    struct O *p;
    o->b29114 = 25;
    o->b29116 = 0;
    pl_start_motion(o, 2, 226);
    o->b29097 = 1;
    o->b29096 = 1;
    o->w48 = pl_angle_to_opponent(o);
    p = o->p29128;
    if (p) {
        if (obj_touched_by_slot(p, o->b3)) {
            obj_set_mode_owner(p, 5, o->b3);
            o->p29132 = p;
            o->b29238 = 1;
        }
    }
}
