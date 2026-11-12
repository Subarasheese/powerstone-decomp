/* @unit 0c04fc9e-0c04fed8 -macsave=1 */
/* _modlu */
struct E { int p0[3]; int i12; char p1[80]; float f96, f100, f104; char p2[596 - 108]; };
struct O { char p[32]; float f32, f36, f40; };
struct V { float a, b, c; };
extern struct E E_366f40[];
extern volatile unsigned char g_idx_3673ee;
extern int g_p_3673e8;
extern short g_s_3673ec;
extern unsigned char g_b_7f3051;
extern struct V *tbl_32db90[];
float FUN_0c0df940(void);
void FUN_0c04cdf2(void);
void FUN_0c04fc9e(struct O *o);
void FUN_0c04fdf6(void);
#define EE ((struct E *)((char *)ea + (short)(*pi * 596)))
#define EG ((struct E *)((char *)E_366f40 + (short)(g_idx_3673ee * 596)))
void FUN_0c04fc9e(struct O *o)
{
    register unsigned char *pi = &g_idx_3673ee;
    register struct E *ea = E_366f40;
    if (400.0f > o->f36) {
        if (o->f32 > -o->f40 + -100.0f) {
            EE->f96 = o->f32;
            EE->f100 = 0.0f;
            EE->f104 = 300.0f;
            goto done;
        }
        EE->f96 = -550.0f;
    } else {
        if (o->f32 > -o->f40 + -100.0f) {
            EE->f96 = o->f32;
            EE->f100 = 0.0f;
            EE->f104 = -100.0f;
            goto done;
        }
        EE->f96 = 50.0f;
    }
    EE->f100 = 0.0f;
    EE->f104 = o->f40;
done:
    EE->i12 = g_p_3673e8;
    FUN_0c04cdf2();
    g_s_3673ec = 1;
}
void FUN_0c04fdf6(void)
{
    struct V *t = tbl_32db90[g_b_7f3051];
    struct V *p = t + (unsigned)(FUN_0c0df940() * 255.0f) % 4;
    EG->f96 = p->a;
    EG->f100 = p->b;
    EG->f104 = p->c;
    EG->i12 = g_p_3673e8;
    FUN_0c04cdf2();
    g_s_3673ec = 1;
}
