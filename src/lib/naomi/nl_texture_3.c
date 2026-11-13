/* same module (helpers) (0c0dd880-0c0ddf30) */

int kmCreateTextureSurface(int, int, int, int);
int kmLoadTexture(int, int, int, int);
void FUN_0c0ddd40(int, int);
struct at_0_int { int field_0; };
struct at_4_int { char pad[0x4]; int field_4; };
int FUN_0c0dde30(void);
int FUN_0c0fca52(int, int);
struct o0_short { short v; };
struct o2_short { char p[0x2]; short v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
int nl_texture_surface_words(int);
struct o0_int { int v; };
int FUN_0c0fcb8a(void);

int FUN_0c0dd9f0(int a4, int a5);

int nl_texture_slot_load(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC7FC4F0;
    *(unsigned int *)0xC7FD488 = ((*(int *)0xC7FD488) + 0x1);
    t1 = kmCreateTextureSurface(((a5 * 0x3C) + t0), (*(short *)((a4 + 0x0))), (*(short *)((a4 + 0x2))), (*(int *)((a4 + 0x4))));
    *(unsigned int *)((((a5 * 0x3C) + t0) + 0x28)) = t1;
    t0 = 0x1;
    if (t1 == 0) {
        kmLoadTexture(((a5 * 0x3C) + (*(int *)0xC7FC4F0)), a6, 0x0, 0x0);
        t0 = 0x0;
    }
    return t0;
}

void nl_texture_tables_init(int base, int row_max, int col_max)
{
    int rows, cols, idx, word_idx;

    rows = row_max + 1;
    cols = col_max + 1;
    FUN_0c0ddd40(base, rows);
    *(int *)0xC7F87C8 = base + rows * 60 + 8;
    *(int *)0xC7F87CC = *(int *)0xC7F87C8 + cols * 8;
    *(int *)0xC3468E4 = (cols + 31) / 32;
    *(int *)0xC3468E0 = cols - 1;
    for (idx = -1; idx < *(int *)0xC3468E0; idx++) {
        ((int *)*(int *)0xC7F87C8)[2 * idx] = 0;
        ((int *)*(int *)0xC7F87C8)[2 * idx + 1] = -1;
    }
    for (word_idx = 0; word_idx < *(int *)0xC3468E4; word_idx++)
        ((int *)*(int *)0xC7F87CC)[word_idx] = 0;
    *(int *)0xC7FD490 = 0;
}

int FUN_0c0dd980(void)
{
    register int result;
    register int off;
    register int idx;
    register int tmp;

    FUN_0c0dde30();
    result = 0xC3468E0;
    if (((((struct at_0_int *)0xC3468E0)->field_0)) != 0) {
        off = 0xFFFFFFF8;
        idx = 0xFFFFFFFF;
        for (;;) {
            if ((int)idx >= (int)((((struct at_0_int *)0xC3468E0)->field_0))) {
                break;
            }
            idx = (idx + 0x1);
            *(unsigned int *)(((((((struct at_0_int *)0xC7F87C8)->field_0)) + off) + 0x0)) = 0x0;
            tmp = ((((struct at_0_int *)0xC7F87C8)->field_0));
            tmp = (tmp + off);
            off = (off + 0x8);
            *(unsigned int *)((tmp + 0x4)) = 0xFFFFFFFF;
        }
        off = 0xC3468E0;
        idx = 0x0;
        tmp = 0x0;
        for (;;) {
            if ((int)tmp >= (int)((((struct at_4_int *)0xC3468E0)->field_4))) {
                break;
            }
            off = ((((struct at_4_int *)0xC7F87C8)->field_4));
            tmp = (tmp + 0x1);
            *(unsigned int *)((idx + off)) = 0x0;
            idx = (idx + 0x4);
        }
        result = off;
    }
    return result;
}

void FUN_0c0dd9e0(int a4)
{
    *(unsigned int *)0xC7FD490 = a4;
}

int FUN_0c0dd9f0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = a4;
    if ((int)a4 >= 0) {
        t0 = (a4 + (*(int *)0xC7FD490));
    }
    t1 = *(int *)0xC7F87C8;
    t2 = 0x0;
    if ((*(int *)(((((t0 << 2) << 1) + t1) + 0x0))) != 0) {
        t3 = *(int *)(((((t0 << 2) << 1) + t1) + 0x4));
        t0 = *(int *)0xC7FC4F0;
        t1 = 0x0;
        if ((*(int *)((((t3 * 0x3C) + t0) + 0x28))) == 0) {
            t4 = kmLoadTexture(((t3 * 0x3C) + t0), a5, 0x0, 0x0);
            t0 = 0x1;
            if (t4 != 0) {
                t0 = 0x0;
            }
            t1 = t0;
        }
        t2 = t1;
    }
    return t2;
}

int FUN_0c0dda50(int a4, int a5, int a6)
{
    return FUN_0c0dd9f0(a4, (*(int *)(((((a6 << 2) << 2) + a5) + 0x8))));
}

int FUN_0c0ddb00(void)
{
    int stk[2];

    FUN_0c0fca52(((int)stk + 0), (((int)stk + 0) + 0x4));
    return (*(int *)(((int)stk + 0)));
}

int FUN_0c0ddb20(void)
{
    int stk[2];

    FUN_0c0fca52((((int)stk + 0) + 0x4), ((int)stk + 0));
    return (*(int *)(((int)stk + 0)));
}

int nl_texture_slot_alloc(int a4, int a5, int a6)
{
    return ((int (*)(int, int, int, int))(0xC0DDBA8))(a4, 0x0, a6, 0x0);
}

int nl_texture_slot_free(int a4, int a5)
{
    register int t2;

    if ((int)a4 >= 0) {
        t2 = *(int *)0xC7F87CC;
        *(unsigned int *)(((((int)a4 >> 5) << 2) + t2)) = ((*(int *)(((((int)a4 >> 5) << 2) + t2))) & (~((int)0x1 << (int)(0x1F & a4))));
    }
    return t2;
}

int FUN_0c0ddc30(void)
{
    register int t2;
    register int t3;
    register int t4;

    t4 = (((struct o0_int *)0xC7FC4F0)->v);
    t2 = (FUN_0c0fcb8a());
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)((((struct o4_int *)0xC7FC4F0)->v))) {
            break;
        }
        if ((*(int *)((t4 + 0x28))) == 0) {
            t2 = (nl_texture_surface_words(t4));
        }
        t4 = (t4 + 0x3C);
        t3 = (t3 + 0x1);
    }
    return t2;
}

int FUN_0c0ddc70(int a4, int a5, int a6, int a7)
{
    if (a4 == 8) {
        return ((int (*)(int, int, int, int))(0xC0DDD08))(0x0, a5, a6, a7);
    }
    if (a4 == 16) {
        return ((int (*)(int, int, int, int))(0xC0DDD08))(0x1, a5, a6, a7);
    }
    if (a4 == 32) {
        return ((int (*)(int, int, int, int))(0xC0DDD08))(0x2, a5, a6, a7);
    }
    if (a4 == 64) {
        return ((int (*)(int, int, int, int))(0xC0DDD08))(0x3, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0DDCD0))(a4, a5, a6, a7);
}

int nl_mesh_set_texture(int a4, int a5)
{
    register int t0;
    register int t2;

    t0 = *(int *)0xC7FC4F0;
    t2 = *(int *)((((a5 * 0x3C) + t0) + 0x34));
    *(unsigned int *)((a4 + 0x8)) = (((*(int *)((a4 + 0x8))) & 0xFFFFFFC0) | (*(int *)((((a5 * 0x3C) + t0) + 0x30))));
    *(unsigned int *)((a4 + 0xC)) = (0x0 | t2);
    return 0xC7FC4F0;
}

int FUN_0c0ddeb0(void)
{
    kmCreateTextureSurface(0xC7F87D0, ((((struct o0_short *)0xC155588)->v)), ((((struct o2_short *)0xC155588)->v)), ((((struct o4_int *)0xC155588)->v)));
    kmLoadTexture(0xC7F87D0, ((((struct o8_int *)0xC155588)->v)), 0x0, 0x0);
    return nl_texture_surface_words(0xC7F87D0);
}

int FUN_0c0ddee0(int a4)
{
    register int t2;
    register int t3;

    t2 = *(int *)((a4 + 0xC));
    t3 = (((struct o4_int *)0xC7F8800)->v);
    *(unsigned int *)((a4 + 0x8)) = (((*(int *)((a4 + 0x8))) & 0xFFFFFFC0) | ((((struct o0_int *)0xC7F8800)->v)));
    *(unsigned int *)((a4 + 0xC)) = ((t2 & 0xF8000000) | t3);
    return t3;
}
