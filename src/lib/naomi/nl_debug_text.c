/* debug text printing (dbg_set_cursor_cell (0c0dfe20-0c0e0790) */

/* named globals (symbols.txt) */
extern char g_dbg_cell_h[];
extern char g_dbg_cell_w[];
extern char g_dbg_cursor_x[];
extern char g_dbg_cursor_y[];
extern char g_dbg_text_color[];
extern char g_dbg_text_flags[];
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int kmCreateTextureSurface(int, int, int, int);
int kmLoadTexture(int, int, int, int);
struct o14_int { char p[0x14]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o28_int { char p[0x28]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };
extern void _builtin_prefetch(void *);
struct HexTables { const char *names[2]; };
struct FmtState { char pad[3]; unsigned char flags; char pad2[4]; int field_8; int field_12; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o4_int { char p[0x4]; int v; };

int FUN_0c0dff60(void);
int FUN_0c0dffb0(void);

int dbg_text_init(void)
{
    int stk[1];
    register int t0;
    register int t3;
    register float u5;

    (((struct o4_uint *)g_dbg_text_flags)->v) = 0x0;
    (((struct o8_uint *)g_dbg_text_flags)->v) = 0x0;
    (((struct o14_uint *)g_dbg_text_flags)->v) = 0x0;
    (((struct o4_uint *)0xC7F8C38)->v) = 0xFFFFFFFF;
    (((struct o0_ushort *)0xC7F8C38)->v) = 0x8;
    (((struct oC_uint *)g_dbg_text_flags)->v) = 0x8;
    (((struct o10_uint *)g_dbg_text_flags)->v) = 0x8;
    (((struct o0_uint *)g_dbg_text_flags)->v) = 0x0;
    (((struct o8_float *)0xC7F8C38)->v) = 0.0f;
    (((struct oC_float *)0xC7F8C38)->v) = 1.0f;
    (((struct o10_float *)0xC7F8C38)->v) = 0.0078125f;
    t0 = 0x0;
    for (;;) {
        t3 = (t0 << 1);
        u5 = (float)t0;
        t0 = (t0 + 0x1);
        *(float *)(((int)stk + 0)) = (u5 * ((((struct o10_float *)0xC7F8C38)->v)));
        *(unsigned short *)(((t3 + 0xC7F8C8C) + 0x0)) = (*(short *)((((int)stk + 0) + 0x2)));
        if ((int)t0 >= (int)0x101) {
            break;
        }
    }
    kmCreateTextureSurface(0xC7F8C64, 0x8, 0x400, 0x902);
    kmLoadTexture(0xC7F8C64, (*(int *)0xC346A5C), 0x0, 0x0);
    return (FUN_0c0dffb0());
}

void FUN_0c0dfeb0(int a4)
{
    *(unsigned int *)0xC346A58 = a4;
}

int FUN_0c0dff60(void)
{
    int t0;
    register int t4;
    register int t5;

    t0 = (((struct o24_int *)0xC7F8C58)->v);
    t4 = ((0x1 & t0) & 0x1);
    t5 = (((struct o28_int *)0xC7F8C58)->v);
    (((struct o0_uint *)0xC7F8C58)->v) = (((((((int)(((unsigned int)t4 >> 1) | ((unsigned int)t4 << 31))) | ((0x8 & t0) << 27)) | (((((struct o14_int *)0xC7F8C58)->v)) & 0x38000000)) | ((((~t0) & 0x4) << 16) << 8)) | ((0x10 & t0) << 21)) | ((unsigned int)((unsigned int)t5 >> 2) >> 1));
    return ((unsigned int)((unsigned int)t5 >> 2) >> 1);
}

int FUN_0c0dffb0(void)
{
    register int t0;

    (((struct o0_uint *)0xC7F8C4C)->v) = 0xA2000009;
    (((struct o4_uint *)0xC7F8C4C)->v) = 0x80000000;
    (((struct o8_uint *)0xC7F8C4C)->v) = 0x949004C7;
    t0 = FUN_0c0dff60();
    (((struct o10_uint *)0xC7F8C4C)->v) = 0xFFFFFFFF;
    (((struct o14_uint *)0xC7F8C4C)->v) = 0x0;
    return t0;
}

int *dbg_emit_glyph_quad(int px, int py, int shade, int *out)
{
    float left, top, right, bottom;
    int width, height, uv0, uv1, gray;
    float *fp;
    int *vtx;
    short *uv_tab;

    width = *(int *)g_dbg_cell_w;
    height = *(int *)g_dbg_cell_h;
    uv_tab = (short *)0xC7F8C8C + (signed char)shade;
    gray = (signed char)shade;
    vtx = out;
    if (*(int *)0xC346A58 == 0) {
        uv0 = uv_tab[0];
        uv1 = uv_tab[1];
        left = (float)px;
        top = (float)py;
        right = left + (float)width;
        bottom = top + (float)height;
        vtx[0] = -1;
        fp = (float *)vtx;
        fp[1] = left; fp[2] = top; vtx[3] = 0x447A0001;
        fp[4] = right; fp[5] = top; vtx[6] = 0x447A0001; fp[7] = right;
        _builtin_prefetch(vtx);
        vtx += 8;
        fp = (float *)vtx;
        fp[0] = bottom; vtx[1] = 0x447A0001; fp[2] = left; fp[3] = bottom;
        vtx[4] = (((gray << 16) << 8) | (gray << 16)) | (gray << 8) | gray;
        vtx[5] = uv0;
        vtx[6] = uv0 | 0x3F800000;
        vtx[7] = uv1 | 0x3F800000;
    } else {
        uv0 = uv_tab[0];
        uv1 = uv_tab[1];
        left = (float)px;
        top = (float)(-py - height + *(short *)0xC7FD49C);
        right = left + (float)width;
        bottom = top + (float)height;
        vtx[0] = -1;
        fp = (float *)vtx;
        fp[1] = top; fp[2] = left; vtx[3] = 0x447A0001;
        fp[4] = bottom; fp[5] = left; vtx[6] = 0x447A0001; fp[7] = bottom;
        _builtin_prefetch(vtx);
        vtx += 8;
        fp = (float *)vtx;
        fp[0] = right; vtx[1] = 0x447A0001; fp[2] = top; fp[3] = right;
        vtx[4] = (((gray << 16) << 8) | (gray << 16)) | (gray << 8) | gray;
        vtx[5] = uv1;
        vtx[6] = uv0;
        vtx[7] = uv0 | 0x3F800000;
    }
    _builtin_prefetch(vtx);
    return vtx + 8;
}

int printf_hex_digits(int val, char *out, int sel)
{
    struct HexTables tables;
    struct FmtState *fmt = (struct FmtState *)0xC7F8C08;
    char digit_buf[32];
    const char *digits;
    int ndigits;
    tables = *(struct HexTables *)0xC155AA0;
    if (!(fmt->flags & 8)) {
        if (fmt->flags & 0x10) {
            fmt->field_12 = fmt->field_8;
            if (fmt->flags & 0x20)
                fmt->field_12 = fmt->field_12 - 2;
        }
        if (fmt->field_12 < 1)
            fmt->field_12 = 1;
    }
    digits = tables.names[sel];
    ndigits = 0;
    while (val != 0) {
        digit_buf[ndigits] = digits[val % 16];
        val = val / 16;
        ndigits++;
    }
    {
        int i = ndigits;
        while (i != 0) {
            *out++ = digit_buf[i - 1];
            i--;
        }
    }
    return ndigits;
}

int FUN_0c0e0210(int a4, int a5)
{
    int stk[8];
    register int t3;
    register int t4;
    register int t7;
    register int t8;
    register int t9;
    register int t10;

    t3 = a4;
    t4 = 0x0;
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t8 = t4;
        t8 = (t8 + ((int)stk + 0));
        t7 = 0xA;
        t7 = ((int)((int)t3 % (int)t7));
        t7 = (t7 + 0x30);
        *(unsigned char *)((t8 + 0x0)) = t7;
        t7 = 0xA;
        t8 = 0xC0E6D00;
        t7 = ((int)((int)t3 / (int)t7));
        t4 = (t4 + 0x1);
        t3 = t7;
    }
    t9 = a5;
    t10 = t4;
    for (;;) {
        if (t10 == 0) {
            break;
        }
        t7 = t10;
        t7 = (t7 - 1);
        t8 = (*(signed char *)((((int)stk + 0) + t7)));
        t10 = (t10 - 1);
        *(unsigned char *)((t9 + 0x0)) = t8;
        t9 = (t9 + 0x1);
    }
    return t4;
}

int FUN_0c0e0580(void)
{
    register int t0;

    t0 = *(int *)g_dbg_text_flags;
    *(unsigned int *)g_dbg_text_flags = (t0 | 0x1);
    return (t0 | 0x1);
}

void dbg_set_cell_size(int a4, int a5)
{
    (((struct o0_uint *)g_dbg_cell_w)->v) = a4;
    (((struct o4_uint *)g_dbg_cell_w)->v) = a5;
}

int dbg_print_string(int a4, int a5, int a6)
{
    register int t1;
    int t4;
    register int t5;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register int t55;
    register int t56;
    register int t50;
    register int t52;
    register int t53;

    t1 = 0x2;
    if (((((struct o14_int *)0xC7F8C4C)->v)) != 0) {
        t1 = 0x0;
    }
    t4 = *(int *)(((t1 << 2) + (*(int *)0xC803DF4)));
    t5 = (((struct o0_int *)0xC7F8BF0)->v);
    t22 = (((struct o4_int *)0xC7F8BF0)->v);
    t19 = (((struct o8_int *)0xC7F8BF0)->v);
    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    *(unsigned int *)((((0x3FFFFFF & t4) | 0xE0000000) + 0x0)) = ((((struct o0_int *)0xC7F8C4C)->v));
    *(unsigned int *)((((0x3FFFFFF & t4) | 0xE0000000) + 0x4)) = ((((struct o4_int *)0xC7F8C4C)->v));
    *(unsigned int *)((((0x3FFFFFF & t4) | 0xE0000000) + 0x8)) = ((((struct o8_int *)0xC7F8C4C)->v));
    t14 = (((struct oC_int *)0xC7F8C4C)->v);
    *(unsigned int *)((((0x3FFFFFF & t4) | 0xE0000000) + 0xC)) = t14;
    *(unsigned int *)((((0x3FFFFFF & t4) | 0xE0000000) + 0x10)) = ((((struct o10_int *)0xC7F8C4C)->v));
    _builtin_prefetch((void *)((0x3FFFFFF & t4) | 0xE0000000));
    t13 = 0xFF000038;
    t15 = 0xE0000000;
    t16 = 0xC7F8C4C;
    t17 = t4;
    t18 = a6;
    t20 = a4;
    t21 = (((0x3FFFFFF & t4) | 0xE0000000) + 0x20);
    for (;;) {
        if ((*(signed char *)((t20 + 0x0))) == 0) {
            break;
        }
        t13 = (*(signed char *)((t20 + 0x0)));
        if (t13 != 32) {
            t13 = (*(signed char *)((t20 + 0x0)));
            t16 = 0x0;
            t18 = 0xC7F8C04;
            t17 = (*(int *)((t18 + 0x0)));
            if (t13 == 10) {
                t22 = t16;
                if ((t5 & 0x1) != 0) {
                    t22 = t17;
                }
                t16 = 0xC7F8C00;
                t19 = (t19 + (*(int *)((t16 + 0x0))));
                t50 = t14;
                t52 = t17;
                t53 = t18;
            } else {
                if (t13 == 13) {
                    t22 = t16;
                    if ((t5 & 0x1) != 0) {
                        t22 = t17;
                    }
                    t50 = t14;
                    t52 = t17;
                    t53 = t18;
                } else {
                    t18 = (*(signed char *)((t20 + 0x0)));
                    t17 = t19;
                    t16 = t22;
                    t13 = (int)dbg_emit_glyph_quad(t16, t17, t18, (int *)t21);
                    t21 = t13;
                    t16 = 0xC7F8BFC;
                    t15 = (*(int *)((t16 + 0x0)));
                    t22 = (t22 + t15);
                }
            }
        } else {
            t16 = 0xC7F8BFC;
            t15 = (*(int *)((t16 + 0x0)));
            t22 = (t22 + t15);
            t50 = t14;
            t52 = t17;
            t53 = t18;
        }
        t14 = t50;
        t20 = (t20 + 0x1);
        t17 = t52;
        t18 = t53;
    }
    (((struct o4_uint *)0xC7F8BF0)->v) = t22;
    (((struct o8_uint *)0xC7F8BF0)->v) = t19;
    t55 = *(int *)0xC803DF4;
    t56 = *(int *)((((t1 << 2) + t55) + 0x0));
    *(unsigned int *)((((t1 << 2) + t55) + 0x0)) = ((t56 & 0xFC000000) | (t21 & 0x3FFFFFF));
    return ((t56 & 0xFC000000) | (t21 & 0x3FFFFFF));
}

int dbg_set_cursor_cell(int a4, int a5)
{
    register int t0;

    t0 = (((struct o8_int *)g_dbg_cursor_x)->v);
    (((struct o0_uint *)g_dbg_cursor_x)->v) = (t0 * a4);
    (((struct o10_uint *)g_dbg_cursor_x)->v) = (t0 * a4);
    (((struct o4_uint *)g_dbg_cursor_x)->v) = (((((struct oC_int *)g_dbg_cursor_x)->v)) * a5);
    return ((int)g_dbg_cell_h);
}

void dbg_set_text_color(int a4)
{
    *(unsigned int *)g_dbg_text_color = a4;
}
