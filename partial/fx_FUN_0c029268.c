/* Draft: proven in a copy without the runtime-helper renames, but the call arguments differ from the original once
   _divls/_modls/_quick_*mvn/_slow_mvn run for real. Cases: partial/cases/fx_FUN_0c029268.json (synthetic). */
/* Lays out and animates a ring of linked sprite objects (count at +732): state 0 places them on a circle (mode +4 == 0) or at one spot, then every frame spins them, steps their colour index (table at 0xC148DF4) and tracks the largest scale in +152 until the life counter at +236 runs out. */
typedef struct { int a, b, c; } S12;
extern void math_vec3_add(void *, void *, void *);
extern float math_sin_angle16(int);
extern float math_cos_angle16(int);
extern int obj_destroy(void *);

#define ST (*(signed char *)(e + 8))
#define E4 (*(signed char *)(e + 4))
#define N (*(signed char *)(e + 732))
#define E238 (*(short *)(e + 238))
#define E240 (*(short *)(e + 240))
#define E242 (*(short *)(e + 242))
#define LIFE (*(short *)(e + 236))
#define OBJ(i) (*(char **)(e + 736 + 4 * (i)))
#define F(o) (*(float *)(p + (o)))

void FUN_0c029268(char *e)
{
    char *p;
    int i;
    int ang;
    float a;

    if (ST == 0) {
        ST = ST + 1;
        E240 = 0;
        if (E4 == 0) {
            for (i = 0; i < N; i++) {
                p = OBJ(i);
                *(S12 *)(p + 4) = *(S12 *)0xC148DD0;
                a = 960.0f / (float)E238;
                F(40) = a * math_sin_angle16((int)((float)(5 * (E242 + i * 2)) * 65536.0f / 360.0f));
                a = 832.0f / (float)E238;
                F(44) = a * math_cos_angle16((int)((float)(5 * (E242 + i * 2)) * 65536.0f / 360.0f));
                F(48) = 0.0f;
                F(32) = 1.0f;
                F(28) = 1.0f;
                ang = (int)((float)(5 * ((E242 + 1) * i)) * 65536.0f / 360.0f);
                *(int *)(p + 24) = -ang;
            }
        } else {
            p = OBJ(0);
            *(S12 *)(p + 4) = *(S12 *)0xC148DDC;
            F(36) = 1.0f;
            F(32) = 1.0f;
            F(28) = 1.0f;
            E242 = 10;
        }
    }
    if (E4 == 0) {
        for (i = 0; i < N; i++) {
            p = OBJ(i);
            math_vec3_add(p + 4, p + 4, p + 40);
            F(32) = F(32) + 2.0f / (float)E238;
            F(28) = F(32);
        }
    } else if (E242 != 0) {
        *(float *)(OBJ(0) + 4) += (*(float *)(0xC148DDC + 12) - *(float *)0xC148DDC) / 10.0f;
        E242 = E242 - 1;
        if (E242 == 0) {
            *(float *)(OBJ(0) + 4) = *(float *)(0xC148DDC + 12);
        }
    }
    if (LIFE & 1) {
        E240 = (E240 + 1) & 7;
        for (i = 0; i < N; i++) {
            p = OBJ(i);
            *(int *)(p + 156) = *(int *)(*(int *)(0xC6649E8 + 8) + 4 * ((int *)0xC148DF4)[E240]);
        }
    }
    F(152) = F(28);
    if (1.0f > F(152)) {
        F(152) = 1.0f;
    }
    if (F(32) > F(152)) {
        F(152) = F(32);
    }
    LIFE = LIFE - 1;
    if (LIFE <= 0) {
        obj_destroy(e);
    }
}
