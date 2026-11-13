/* @unit 0c0691c4-0c06924c */
struct T { char pad[28938]; char a; char pad2[29169-28939]; char b; };
typedef struct {
    char pad0[10]; char b10; char pad1[28-11]; struct T *q28;
    char pad2[56-32]; float f56, f60, f64, f68, f72, f76;
    char pad3[236-80]; short s236; short s238;
} O;
extern void pl_step_motion(O *);
void pl_falcon_special2_phase1(O *p)
{
    pl_step_motion(p);
    if (--p->s236 == 0) {
        p->f64 = 0; p->f56 = 0; p->f76 = 0; p->f68 = 0;
        p->f60 = 16.8f; p->f72 = -1.1999999f;
        p->s236 = 8;
        *(int *)((char *)p + 29256) = 0;
        p->b10++;
    }
    if (--p->s238 == 0) {
        if (!(p->q28->b)) p->q28->a = 1;
    }
}
