/* Collision test: is the point (vector copied from a4, y lowered by 1) inside any of the current stage's boxes/spheres/capsules whose id byte equals a5. */
struct V { float x, y, z; };
extern signed char g_302c[];
int FUN_0c0269d6(struct V *, char *);
int FUN_0c026a4e(struct V *, char *);
int FUN_0c026ac0(struct V *, char *);

#define STAGE (g_302c[37])
#define TAB(a) (*(char **)((a) + STAGE * 4))
#define CNT(k) (*(signed char *)(0xC33EC20 + STAGE * 3 + (k)))

int FUN_0c026b28(struct V *a4, int a5)
{
    struct V v;
    int i;
    char *ids;

    v = *a4;
    v.y = v.y - 1.0f;
    for (i = 0; i < CNT(1); i++) {
        ids = TAB(0xC33EB60) + i * 2;
        if (FUN_0c0269d6(&v, TAB(0xC33EB20) + i * 24) && ids[1] == (signed char)a5)
            return 1;
    }
    for (i = 0; i < CNT(0); i++) {
        ids = TAB(0xC33EAE0) + i * 2;
        if (FUN_0c026a4e(&v, TAB(0xC33EAA0) + i * 20) && ids[1] == (signed char)a5)
            return 1;
    }
    for (i = 0; i < CNT(2); i++) {
        ids = TAB(0xC33EBE0) + i * 2;
        if (FUN_0c026ac0(&v, TAB(0xC33EBA0) + i * 16) && ids[1] == (signed char)a5)
            return 1;
    }
    return 0;
}
