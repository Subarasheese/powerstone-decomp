/* same module (helpers) (0c0dd880-0c0ddf30) */

struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
extern int FUN_0c0ddc70();
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
int FUN_0c0fca2e(int);

int FUN_0c0ddd70(int a4, int a5, int a6, int a7);

int FUN_0c0ddd40(int a4, int a5)
{
    register int t2;
    register int t0;
    register int t1;

    (((struct o0_uint *)0xC7FC4F0)->v) = a4;
    (((struct o4_uint *)0xC7FC4F0)->v) = a5;
    (((struct o0_uint *)0xC7FD488)->v) = 0x0;
    (((struct o8_uint *)0xC7FD488)->v) = 0x0;
    t2 = 0x0;
    if ((int)a5 > 0) {
        t0 = 0x0;
        t1 = a4;
        for (;;) {
            t0 = (t0 + 0x1);
            *(unsigned int *)((t1 + 0x28)) = 0xFFFFFFFF;
            *(unsigned int *)((t1 + 0x2C)) = 0x0;
            *(unsigned int *)((t1 + 0x38)) = 0xFFFFFFFF;
            t1 = (t1 + 0x3C);
            if ((int)t0 >= (int)a5) {
                break;
            }
        }
        t2 = t0;
    }
    return t2;
}

int FUN_0c0ddd70(int a4, int a5, int a6, int a7)
{
    register int t1;
    int t5;
    register int t9;
    register int t10;

    t1 = ((int (*)(int, int, int, int))(FUN_0c0ddc70))((*(int *)((a4 + 0xC))), a5, a6, a7);
    *(unsigned int *)((a4 + 0x30)) = ((((t1 << 2) << 1) & 0xFFFFFFF8) | (((int (*)(int))(FUN_0c0ddc70))((*(int *)((a4 + 0x10))))));
    t5 = *(int *)((a4 + 0x18));
    t9 = ((0x1 & t5) & 0x1);
    t10 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a4 + 0x34)) = (((((((int)(((unsigned int)t9 >> 1) | ((unsigned int)t9 << 31))) | ((0x8 & t5) << 27)) | ((*(int *)((a4 + 0x8))) & 0x38000000)) | ((((~t5) & 0x4) << 16) << 8)) | ((0x10 & t5) << 21)) | ((unsigned int)((unsigned int)t10 >> 2) >> 1));
    return ((unsigned int)((unsigned int)t10 >> 2) >> 1);
}

int FUN_0c0dde00(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)0xC7FC4F0;
    if ((*(int *)((((a4 * 0x3C) + t0) + 0x28))) == 0) {
        return FUN_0c0ddd70(((a4 * 0x3C) + t0), a5, a6, a7);
    }
    *(unsigned int *)((((a4 * 0x3C) + t0) + 0x30)) = (*(int *)0xC7F8800);
    return ((int (*)(int, int, int, int))(0xC0DDE26))(((a4 * 0x3C) + t0), 0xC7F87D0, a6, a7);
}

int FUN_0c0dde30(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t1 = 0x0;
    t2 = ((((struct o0_int *)0xC7FC4F0)->v));
    for (;;) {
        if ((int)t1 >= (int)((((struct o4_int *)0xC7FC4F0)->v))) {
            break;
        }
        if (((*(int *)((t2 + 0x2C))) != 0) && (t0 = *(int *)((t2 + 0x28)), t0 == 0)) {
            FUN_0c0fca2e(t2);
        }
        t1 = (t1 + 0x1);
        t2 = (t2 + 0x3C);
    }
    t0 = ((((struct o0_int *)0xC7FC4F0)->v));
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)((((struct o4_int *)0xC7FC4F0)->v))) {
            break;
        }
        *(unsigned int *)((t0 + 0x28)) = 0xFFFFFFFF;
        t1 = (t1 + 0x1);
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = 0xFFFFFFFF;
        t0 = (t0 + 0x3C);
    }
    return ((int (*)(int, int, int, int))(0xC0DDE94))(t0, 0xFFFFFFFF, t1, a7);
}
