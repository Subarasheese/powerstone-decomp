/* @unit 0c0a066c-0c0a07e4 */
struct O { char c0[4]; char c4; };
struct S {
    char c0[3]; char c3; char p4[6]; char c10; char p11[21]; char v32[16]; int i48;
    char pad[0x71a8 - 52]; char b71a8, b71a9; char pad5[0x71ba - 0x71aa];
    char b71ba, b71bb, b71bc; char pad6[0x71c8 - 0x71bd]; struct O *o71c8; struct O *o71cc;
};
struct S3 { char pad[0x7236]; char b7236; };
extern char pl_get_held_item_class(struct S *p);
extern void pl_start_motion(struct S *p, int a, int b);
extern void snd_play_char_voice(struct S *p, int a);
extern void snd_play_side_se(int a, int b);
extern int math_angle_between_points_xz(char *a, char *b);
extern char obj_touched_by_slot(struct O *o, int a);
extern void obj_set_mode_owner(struct O *o, int a, int b);
void pl_set_item_carry_motion(struct S *pp, int u)
{
    register struct S *p = pp;
    register void (*fn)(struct S *, int, int) = pl_start_motion;
    int v;
    switch (((struct S3 *)p)->b7236 = pl_get_held_item_class(p)) {
    case 0: case 1: case 11: case 17: case 18: case 19:
        fn(p, 2, 219); break;
    case 13: fn(p, 2, 54); break;
    case 5: case 6: case 7: fn(p, 2, 195); break;
    case 14: fn(p, 2, 30); break;
    case 2: case 3: fn(p, 2, 237); break;
    case 15: fn(p, 2, 103); break;
    case 9: case 10: case 12: fn(p, 2, 229); break;
    case 4: case 16: fn(p, 2, 80); break;
    case 8: fn(p, 2, 247); break;
    }
    p->b71a8 = p->b71a9 = 1;
    p->c10 = 0;
}
void pl_enter_state_35_pickup_item(struct S *pp)
{
    register struct S *p = pp;
    register struct O *o;
    int d, t; unsigned short us;
    p->b71ba = 35;
    p->b71bc = 0;
    o = p->o71c8;
    if (o) {
        if (p->o71c8->c4 == 6) {
            snd_play_char_voice(p, 18);
            snd_play_side_se(p->c3, 14);
        }
        d = math_angle_between_points_xz(p->v32, (char *)o + 32);
        d = (unsigned short)(d - p->i48);
        if (d & 0x8000) d |= 0xffff0000;
        if (d >= 0x4000 || d <= -0x4000) {
            *(short *)((char *)p + 236) = 5;
            p->c10 = 1;
            return;
        }
        if (obj_touched_by_slot(o, p->c3)) {
            obj_set_mode_owner(o, 5, p->c3);
            p->o71cc = o;
        }
    }
    pl_set_item_carry_motion(p, 0);
}
