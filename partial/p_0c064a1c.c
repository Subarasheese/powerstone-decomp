/* @unit 0c064a1c-0c064b7c -macsave=1 */
struct T { char p[36]; float f36; };
struct Q { char p[352]; char f; };
struct P { char pre[768]; struct Q q[1]; char pp[28048]; signed char c; };
struct O {
    char pad3[3];
    char b3;
    char pad10[6];
    char b10;
    char pad28[17];
    struct T * t;
    char pad36[4];
    float f36;
    char pad44[4];
    int i44;
    int i48;
    char pad56[4];
    float f56;
    float f60;
    float f64;
    float f68;
    float f72;
    float f76;
    char pad236[156];
    short s236;
    char pad242[4];
    short s242;
    char pad729[485];
    char b729;
    char pad29096[28366];
    char b71a8;
    char b71a9;
    char pad29268[170];
    float f7254;
};
extern float g_fighter_distance;
extern struct P g_players[];
int pl_step_motion(struct O *);
int math_atan_angle16(float);
float math_sin_angle16(int);
float math_cos_angle16(int);
void pl_start_motion(struct O *, int, int);
void thunk_math_mat_get_translate(void *, void *);
void FUN_0c064a1c(struct O *o);
void FUN_0c064a1c(struct O *o)
{
    volatile int x[1];
    float d;
    int a, m;
    o->b729 = 2;
    if ((char)pl_step_motion(o)) {
        int p;
        d = g_fighter_distance;
        if (d == 0.0f) d = 0.01f;
        o->f7254 = o->f36 - o->t->f36 + -50.0f;
        
        o->i44 = (math_atan_angle16(o->f7254 / d) + 16384) & 0xffff;
        o->f60 = math_sin_angle16(0x14000 - o->i44) * 25.0f;
        o->f7254 = math_cos_angle16(0x14000 - o->i44) * 25.0f;
        o->f56 = math_cos_angle16(0x14000 - o->i48) * o->f7254;
        o->f64 = math_sin_angle16(0x14000 - o->i48) * o->f7254;
        o->f72 = o->f68 = o->f76 = 0.0f;
        pl_start_motion(o, 1, 72);
        o->b71a8 = o->b71a9 = 1;
        p = (int)g_players + (unsigned short)(o->b3 * 29392);
        x[0] = p;
        {
            int b = p + 768;
            int sc = *(signed char *)(p + 29169);
            thunk_math_mat_get_translate((char *)(b + (short)(sc * 3520) + 352), (char *)o + 32);
        }
        o->s236 = 40;
        o->s242 = 2;
        o->b10++;
    }
}
