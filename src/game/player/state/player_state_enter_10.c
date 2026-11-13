/* @unit 0c0a0b78-0c0a0ccc */
struct O { char p0[32]; float f32; float f36; float f40; };
struct S {
    char c0[3]; char c3; char p4[28]; float f32, f36, f40; char p44[12];
    float f56, f60, f64, f68, f72, f76;
    char pad[0x2dc - 80]; int i2dc; char pad2[0x2e4 - 0x2e0]; int i2e4;
    char pad3[0x710a - 0x2e8]; char pad4[0x71a8 - 0x710a]; char b71a8, b71a9; char pad5[0x71ba - 0x71aa];
    char b71ba, b71bb, b71bc; char pad6[0x71c8 - 0x71bd]; struct O *o71c8; char pad7[0x721a - 0x71cc];
};
struct S2 { char pad[0x71ba]; char b71ba; char pad0[0x71cc - 0x71bb]; int i71cc; char pad1[0x7225 - 0x71d0]; char b7225; char pad2[0x7236 - 0x7226]; char b7236; };
extern void pl_timer_arm_forever(struct S *p);
extern void pl_start_motion(struct S *p, int a, int b);
extern void snd_play_char_voice(struct S *p, int a);
extern void snd_play_side_se(int a, int b);
extern int obj_can_interact(struct O *o, int a, int b);
extern float FUN_0c02651e(struct S *p);
extern void obj_set_mode_owner(struct O *o, int a, int b);
extern char pl_get_held_item_class(struct S *p);
extern char hit_find_contact_direction(struct S *p);
void pl_enter_state_41(struct S *p)
{
    p->b71ba = 41;
    p->b71bc = 2;
    pl_timer_arm_forever(p);
    p->f60 = 0;
    p->f64 = 0;
    p->f56 = 0;
    p->f72 = 0;
    p->f76 = 0;
    p->f68 = 0;
    pl_start_motion(p, 2, 207);
    p->b71a8 = p->b71a9 = 1;
    snd_play_char_voice(p, 15);
    snd_play_side_se(p->c3, 14);
    if (p->o71c8) {
        if (obj_can_interact(p->o71c8, 11, p->c3)) {
            p->f32 = p->o71c8->f32;
            p->f40 = p->o71c8->f40;
            p->f36 = p->o71c8->f36 - FUN_0c02651e(p);
            obj_set_mode_owner(p->o71c8, 19, p->c3);
        }
    }
    *(short *)((char *)p + 236) = 20;
    *(short *)((char *)p + 238) = 0;
}
void pl_enter_state_42(struct S2 *p)
{
    p->b71ba = 42;
    p->b7225 = 0;
    p->b7236 = 0;
    p->i71cc = 0;
}
char pl_check_pickup_input(struct S *p)
{
    volatile char r;
    if (pl_get_held_item_class(p)) return 0;
    if (*((char *)p + 0x721a)) return 0;
    if (!(p->i2e4 & 4)) return 0;
    if (!(p->i2dc & 0xf0)) return 0;
    if ((r = hit_find_contact_direction(p)) != 0) return r;
    return 0;
}
