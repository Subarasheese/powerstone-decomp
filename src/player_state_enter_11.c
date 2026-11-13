/* @unit 0c0a0ccc-0c0a0dd0 */
struct S {
    char c0[3]; char c3; char p4[24]; int i28; char p32[16]; int i48; char p52[4];
    float f56, f60, f64, f68, f72, f76;
    char pad[0x71a8 - 80];
    char b71a8, b71a9; char pad2[0x71ba - 0x71aa]; char b71ba, b71bb, b71bc;
};
extern void pl_start_motion(struct S *p, int a, int b);
extern int pl_angle_to_opponent(struct S *p);
extern float math_cos_angle16(int a);
extern float math_sin_angle16(int a);
extern void snd_play_side_se(int a, int b);
extern void pl_vib_start_preset(void *p, int a);
extern void fx_spawn_04a13c(struct S *p);
void pl_enter_state_09(struct S *p)
{
    p->b71ba = 9;
    if (p->b71bc != 2) {
        pl_start_motion(p, 2, 109);
    } else {
        pl_start_motion(p, 2, 113);
        p->f60 /= 2.0f;
    }
    p->b71a8 = p->b71a9 = 1;
    if (p->b71bb != 9) p->i48 = pl_angle_to_opponent(p);
    p->f56 = math_cos_angle16(0x1c000 - p->i48) * 10.0f;
    p->f64 = math_sin_angle16(0x1c000 - p->i48) * 10.0f;
    p->f68 = -p->f56 / 15.0f;
    p->f76 = -p->f64 / 15.0f;
    p->f60 = p->f72 = 0;
    *(short *)((char *)p + 236) = 15;
    snd_play_side_se(p->c3, 51);
    pl_vib_start_preset(p, 10);
    pl_vib_start_preset((void *)p->i28, 6);
    fx_spawn_04a13c(p);
}
