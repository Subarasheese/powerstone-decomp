/* @unit 0c064b7c-0c064cc8 */
typedef struct {
    char pad0[10]; char b10; char pad1[44-11]; int i44; int i48; int i52;
    float f56, f60, f64, f68, f72, f76;
    char pad2[236-80]; short s236; char pad3[242-238]; short s242;
    char pad4[729-244]; char b729; char pad5[29096-730]; char b29096; char b29097;
} O;
extern char pl_step_motion(O *);
extern char pl_landed(O *, float);
extern char pl_get_hit_count_of_opponent(O *);
extern void pl_start_motion(O *, int, int);
extern float math_cos_angle16(int);
extern float math_sin_angle16(int);
extern void pl_apply_velocity(O *);
extern void pl_change_state(O *, int, int);
void FUN_0c064b7c(O *p)
{
    if (p->s242) { p->b729 = 2; p->s242--; }
    pl_step_motion(p);
    if (pl_landed(p, 0.0f) || pl_get_hit_count_of_opponent(p) == 2) {
        p->i44 = p->i52 = 0;
        pl_start_motion(p, 0, 8);
        p->b29096 = p->b29097 = 1;
        p->f56 = -(math_cos_angle16(0x14000 - p->i48) * 3.0f);
        p->f64 = -(math_sin_angle16(0x14000 - p->i48) * 3.0f);
        p->f60 = 10.0f;
        p->f72 = -1.2249999f;
        p->f68 = p->f76 = 0;
        p->b10 = 3;
        return;
    }
    if (--p->s236 == 0) {
        p->i44 = p->i52 = 0;
        pl_start_motion(p, 1, 53);
        p->b29096 = p->b29097 = 1;
        p->b10++;
    }
    pl_apply_velocity(p);
}
void FUN_0c064c66(O *p)
{
    if (pl_step_motion(p)) pl_change_state(p, 14, 0);
}
