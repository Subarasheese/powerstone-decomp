/* node transform defaults, table getter, model vertex cursor (mdl_vtx_*) (0c06231c-0c062b1c) */

/* named globals (symbols.txt) */
extern char g_mdl_vtx_count[];
extern char g_mdl_vtx_dst_cursor[];
extern char g_mdl_vtx_dst_save[];
extern char g_mdl_vtx_in_strip[];
extern char g_mdl_vtx_limit[];
extern char g_mdl_vtx_src_cursor[];
extern char g_mdl_vtx_src_save[];
extern char g_res_pl_textures[];
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
extern int FUN_0c0e6fe8();
void *FUN_0c0ccf38(char *pl, int kind, int index);
typedef struct { float x, y, z; } VEC3;
#define B(o, n) (*(signed char *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define TABLE(pl, k, n) (*(int **)((char *)g_res_pl_textures + (short)(B(pl, 3) * 240) + (signed char)((k) * 24) + (n)))
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
#define CURSOR_A    (*(int *)g_mdl_vtx_src_cursor)
#define SAVED_A  (*(int *)g_mdl_vtx_src_save)
#define CURSOR_B   (*(int *)g_mdl_vtx_dst_cursor)
#define SAVED_B  (*(int *)g_mdl_vtx_dst_save)
#define ACTIVE   (*(int *)g_mdl_vtx_in_strip)
#define COUNT  (*(int *)g_mdl_vtx_count)
#define LIMIT  (*(int *)g_mdl_vtx_limit)
typedef struct { int a, b, c; } vec12;
typedef struct { int x, y, z; } vec3i;

int FUN_0c062436(int a4, int a5, int a6);
int FUN_0c0624c4(int a4, int a5, int a6);

static void attach(char *part, int link, int mesh, VEC3 *pose, VEC3 *scale)
{
    part[66] = link == 128 ? -1 : 0;
    part[68] = part[66];
    part[67] = link == 128 ? -1 : link;
    part[69] = part[67];
    *(int *)(part + 144) = mesh;
    *(VEC3 *)(part + 152) = *pose;
    *(VEC3 *)(part + 164) = *pose;
    *(VEC3 *)(part + 84) = *scale;
    *(VEC3 *)(part + 96) = *scale;
}

int FUN_0c06231c(int a4, int a5, int a6)
{
    FUN_0c0624c4((a4 + 0x9C), a5, a6);
    return (((((((struct o9C_int *)(a4))->v)) == 0)) ? 1 : 0);
}

int FUN_0c06233a(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    FUN_0c0624c4((0x9C + a4), a5, a6);
    if (((((struct o9C_int *)(a4))->v)) == 0) {
        return 0x1;
    }
    t2 = ((int (*)(int))(FUN_0c0e6fe8))(0xC14E3B0);
    t2 = ((int (*)(void))(FUN_0c0e6fe8))();
    t2 = ((int (*)(int))(FUN_0c0e6fe8))(t0);
    t0 = ((int (*)(int))(FUN_0c0e6fe8))(0xC14E3C8);
    t0 = ((int (*)(int))(FUN_0c0e6fe8))(t1);
    (((struct o90_uint *)(a4))->v) = 0x0;
    return 0x0;
}

int FUN_0c062436(int a4, int a5, int a6)
{
    FUN_0c0624c4((a4 + 0x9C), a5, a6);
    return 0x0;
}

int FUN_0c06244a(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t2 = FUN_0c062436(a4, a5, a6);
    if (t2 != 0) {
        return 0x1;
    }
    t2 = ((int (*)(int))(FUN_0c0e6fe8))(0xC14E3B0);
    t2 = ((int (*)(void))(FUN_0c0e6fe8))();
    t2 = ((int (*)(int))(FUN_0c0e6fe8))(t0);
    t0 = ((int (*)(int))(FUN_0c0e6fe8))(0xC14E3C8);
    t0 = ((int (*)(int))(FUN_0c0e6fe8))(t1);
    (((struct o90_uint *)(a4))->v) = 0x0;
    return 0x0;
}

int FUN_0c0624c4(int a4, int a5, int a6)
{
    register int t0;
    register int t3;

    t0 = *(short *)((a5 + 0x2));
    if ((int)(unsigned char)a6 < (int)t0) {
        t3 = *(int *)((a5 + 0x8));
        *(unsigned int *)((a4 + 0x0)) = (*(int *)((((unsigned char)a6 << 2) + t3)));
    } else {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t3 = t0;
    }
    return t3;
}

void FUN_0c0624ea(char *pl, char *c0, char *c1)
{
    char *c, *part, *q, *links;
    int k, i, j, t;
    signed char v;

    B(pl, 0x7101) = 19;
    B(pl, 0x7100) = 19;
    B(pl, 0x7105) = 2;
    B(pl, 0x7104) = 2;
    B(pl, 0x7107) = 4;
    B(pl, 0x7106) = 4;
    B(pl, 0x7109) = 4;
    B(pl, 0x7108) = 4;
    c = c0;
    for (k = 0; k < 2; k++) {
        for (i = 0; i < 19; i++) {
            part = pl + 0x300 + (short)(k * 3520) + (short)(i * 176);
            if (B(pl, 4) == 10)
                t = ((int *)0x0C14E420)[i];
            else
                t = ((int *)0x0C14E3D4)[i];
            if (t == 128) {
                part[66] = -1;
                part[68] = -1;
                part[67] = -1;
                part[69] = -1;
            } else {
                part[66] = 0;
                part[68] = 0;
                part[67] = t;
                part[69] = t;
            }
            *(int *)(part + 144) = TABLE(pl, k, 8)[i];
            *(VEC3 *)(part + 152) = (*(VEC3 **)(c + 40))[i];
            *(VEC3 *)(part + 164) = (*(VEC3 **)(c + 40))[i];
            *(VEC3 *)(part + 84) = *(VEC3 *)0x0C14E478;
            *(VEC3 *)(part + 96) = *(VEC3 *)0x0C14E478;
        }
        B(pl, 0x7102 + k) = I(c, 52);
        for (i = 0; i < I(c, 52); i++) {
            part = pl + 0x1E80 + (short)(k * 5280) + (short)(i * 176);
            links = *(char **)(c + 56) + i * 2;
            part[66] = links[0];
            part[68] = links[0];
            links = *(char **)(c + 56) + i * 2;
            part[67] = links[1];
            part[69] = links[1];
            *(int *)(part + 144) = TABLE(pl, k, 56)[i];
            *(VEC3 *)(part + 152) = (*(VEC3 **)(c + 44))[i];
            *(VEC3 *)(part + 164) = (*(VEC3 **)(c + 44))[i];
            *(VEC3 *)(part + 84) = (*(VEC3 **)(c + 48))[i];
            *(VEC3 *)(part + 96) = (*(VEC3 **)(c + 48))[i];
        }
        for (i = 0; i < 2; i++)
            attach(pl + 0x47C0 + (short)(k * 1760) + (short)(i * 176), 4, TABLE(pl, k, 104)[i],
                   (VEC3 *)0x0C14E46C, (VEC3 *)0x0C14E478);
        for (i = 0; i < 4; i++)
            attach(pl + 0x5580 + (short)(k * 1760) + (short)(i * 176), 8, TABLE(pl, k, 152)[i],
                   (VEC3 *)0x0C14E46C, (VEC3 *)0x0C14E478);
        for (i = 0; i < 4; i++)
            attach(pl + 0x6340 + (short)(k * 1760) + (short)(i * 176), 12, TABLE(pl, k, 200)[i],
                   (VEC3 *)0x0C14E46C, (VEC3 *)0x0C14E478);
        c = c1;
    }
    for (k = 0; k < 2; k++) {
        B(pl, 0x71F1) = k;
        part = pl + 0x1E80 + (short)(k * 5280);
        for (j = 0; j < B(pl, 0x7102 + k); j++) {
            q = part;
            for (;;) {
                v = q[66];
                if (v == -1) {
                    part[70] = -1;
                    part[71] = -1;
                    break;
                }
                if (v == 2) {
                    part[70] = 2;
                    part[71] = q[67];
                    break;
                }
                if (q[66] == 3) {
                    part[70] = 3;
                    part[71] = q[67];
                    break;
                }
                if (v == 4) {
                    part[70] = 4;
                    part[71] = q[67];
                    break;
                }
                q = FUN_0c0ccf38(pl, q[66], q[67]);
            }
            part += 176;
        }
    }
    B(pl, 0x71F1) = 0;
}

int mdl_vtx_iter_begin(int a4, int a5)
{
    (((struct o0_uint *)g_mdl_vtx_src_cursor)->v) = (a4 + 0x18);
    (((struct o8_uint *)g_mdl_vtx_src_cursor)->v) = (a5 + 0x18);
    (((struct o4_uint *)g_mdl_vtx_src_cursor)->v) = ((((struct o0_int *)g_mdl_vtx_src_cursor)->v));
    (((struct oC_uint *)g_mdl_vtx_src_cursor)->v) = ((((struct o8_int *)g_mdl_vtx_src_cursor)->v));
    (((struct o10_uint *)g_mdl_vtx_src_cursor)->v) = 0x0;
    return 0x0;
}

int mdl_vtx_iter_next(void)
{
    CURSOR_A = SAVED_A;
    CURSOR_B = SAVED_B;
    for (;;) {
        if (ACTIVE == 0) {
            if (*(int *)CURSOR_A == 0) {
                return -1;
            }
            if (*(int *)CURSOR_A < 0) {
                CURSOR_A = CURSOR_A + 80;
                CURSOR_B = CURSOR_B + 80;
            }
            CURSOR_A = CURSOR_A + 4;
            if ((*(int *)(CURSOR_A - 4) & 16) != 0) {
                LIMIT = *(int *)CURSOR_A;
            } else {
                LIMIT = *(int *)CURSOR_A * 3;
            }
            CURSOR_A = CURSOR_A + 4;
            CURSOR_B = CURSOR_B + 8;
            ACTIVE = 1;
            COUNT = 0;
        }
        if ((*(int *)CURSOR_A & 1) != 0) {
            SAVED_A = CURSOR_A;
            SAVED_B = CURSOR_B;
            SAVED_A = SAVED_A + 32;
            SAVED_B = SAVED_B + 32;
            COUNT = COUNT + 1;
            if (COUNT >= LIMIT) {
                ACTIVE = 0;
            }
            return 0;
        }
        CURSOR_A = CURSOR_A + 8;
        CURSOR_B = CURSOR_B + 8;
        SAVED_A = CURSOR_A;
        SAVED_B = CURSOR_B;
        COUNT = COUNT + 1;
        if (COUNT >= LIMIT) {
            ACTIVE = 0;
        }
    }
}

int mdl_vtx_get_pos(vec12 *dst)
{
    *dst = **(vec12 **)g_mdl_vtx_src_cursor;
    return 0;
}

int mdl_vtx_get_uv(int a4, int a5)
{
    *(float *)((a4 + 0x0)) = ((((struct o18_float *)((*(int *)g_mdl_vtx_src_cursor)))->v));
    *(float *)((a5 + 0x0)) = ((((struct o1C_float *)((*(int *)g_mdl_vtx_src_cursor)))->v));
    return 0x0;
}

int mdl_vtx_set_pos(vec3i *src)
{
    vec3i **target_pp = (vec3i **)g_mdl_vtx_dst_cursor;
    **target_pp = *src;
    *(unsigned int *)*target_pp |= 1;
    return 0;
}

int mdl_vtx_set_uv(int a4, int a5)
{
    register int t4;

    (((struct o18_float *)((*(int *)g_mdl_vtx_dst_cursor)))->v) = (*(float *)((a4 + 0x0)));
    (((struct o1C_float *)((*(int *)g_mdl_vtx_dst_cursor)))->v) = (*(float *)((a5 + 0x0)));
    t4 = *(int *)g_mdl_vtx_dst_cursor;
    *(unsigned int *)((t4 + 0x1C)) = ((*(int *)((t4 + 0x1C))) | 0x1);
    return 0x0;
}
