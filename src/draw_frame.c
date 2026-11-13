/* scene render per frame (cameras, split screen), then HUD (0c02ca74-0c02d774) */

/* named globals (symbols.txt) */
extern char g_cam_split_flag[];
int dbg_set_cell_size(int, int);
int dbg_set_cursor_cell(int, int);
int dbg_set_text_color(int);
int dbg_printf(int, ...);
float math_mat_row0_length(int, float);
float math_mat_row1_length(int);
float math_mat_row2_length(int, float);
int FUN_0c0e34a0(float);
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0e2110(float, float, float);
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
int nlObjPutUseViewMatrixTrnsl(int, float);
int nlUnitMatrix(void);
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
int FUN_0c05a164(int);
int FUN_0c05a6e8(int);
int FUN_0c05fb58(int);
int FUN_0c0dcd20(float, float, float);
int FUN_0c0e1550(int);
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o8_int { char p[0x8]; int v; };
int FUN_0c02828e(void);
int FUN_0c02d420(void);
int FUN_0c031388(void);
int FUN_0c0dca60(int, int, int, int, int);
int FUN_0c0dcac0(int, int);
int gfx_set_background_color(int, int, int);
int FUN_0c0e1240(int);
int FUN_0c0e2790(int, float, float, float);
int stage_draw_lights(void);
int FUN_0c0282cc(void);
int FUN_0c02cf18(void);

int FUN_0c02ca74(void);
int FUN_0c02cade(void);
int FUN_0c02d458(void);

int FUN_0c02ca74(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)0xC4CF9B8;
    dbg_set_text_color(0xFFFFFFFF);
    t1 = *(signed char *)0xC4CF9BC;
    t2 = (dbg_set_cell_size(0x8, 0x8));
    if (t1 != 0) {
        t1 = 0x28;
        t3 = t0;
        for (;;) {
            t3 = (t3 - 1);
            if ((int)t3 < 0) {
                t3 = 0x27;
            }
            dbg_set_cursor_cell(0x28, t1);
            t0 = dbg_printf(0xC149240);
            t1 = (t1 - 1);
            if ((int)t1 <= 0) {
                break;
            }
        }
        t2 = t0;
    }
    return t2;
}

int FUN_0c02cade(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)0xC4CFA60;
    dbg_set_text_color(0xFFFFFFFF);
    t1 = *(signed char *)0xC4CFA64;
    t2 = (dbg_set_cell_size(0x8, 0x8));
    if (t1 != 0) {
        t1 = 0x28;
        t3 = t0;
        for (;;) {
            t3 = (t3 - 1);
            if ((int)t3 < 0) {
                t3 = 0x27;
            }
            dbg_set_cursor_cell(0x1E, t1);
            *(volatile int *)((0xC4CF9C0 + (t3 << 2)));
            t0 = dbg_printf(0xC149244);
            t1 = (t1 - 1);
            if ((int)t1 <= 0) {
                break;
            }
        }
        t2 = t0;
    }
    return t2;
}

/* Walks a chain of records starting at base+24 while their flag word is negative: replaces bits 16-17 of the word with the low bits of a global (shifted by 16) and steps to the next record at rec + 80 + (word at rec+76)/4*4. */
void FUN_0c02cb4a(int *base)
{
    int *rec;
    int masked;

    if (*(signed char *)g_cam_split_flag != 0) {
        rec = (int *)((char *)base + 24);
        while (*rec < 0) {
            masked = *rec & 0xFFFCFFFF;
            *rec = masked;
            *rec = masked | (*(int *)0xC321190 << 16);
            rec = (int *)((char *)rec + *(int *)((char *)rec + 76) / 4 * 4 + 80);
        }
    }
}

int FUN_0c02cb8e(int a4, float f4)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = math_mat_row0_length(a4, f4);
    u1 = math_mat_row1_length(a4);
    u2 = u0;
    if (u1 > u0) {
        u2 = u1;
    }
    u0 = math_mat_row2_length(a4, u1);
    u1 = u2;
    if (u0 > u2) {
        u1 = u0;
    }
    return FUN_0c0e34a0(u1);
}

int FUN_0c02ccbc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((0x1 & (short)a4) != 0) {
        t0 = (FUN_0c0e2110((*(float *)((a5 + 0x0))), ((((struct o4_float *)(a5))->v)), ((((struct o8_float *)(a5))->v))));
    }
    t1 = t0;
    if ((0x8 & (short)a4) != 0) {
        t1 = (nlRotateAZ((*(int *)((a6 + 0x8)))));
    }
    t0 = t1;
    if ((0x4 & (short)a4) != 0) {
        t0 = (nlRotateAY((*(int *)((a6 + 0x4)))));
    }
    t1 = t0;
    if ((0x2 & (short)a4) != 0) {
        t1 = (nlRotateAX((*(int *)((a6 + 0x0)))));
    }
    if (((short)a4 & 0x10) != 0) {
        return nlScale((*(float *)((a7 + 0x0))), ((((struct o4_float *)(a7))->v)), ((((struct o8_float *)(a7))->v)));
    }
    return t1;
}

int FUN_0c02ced4(int a4, float f4, float f5)
{
    nlUnitMatrix();
    FUN_0c0e2110(((((struct o20_float *)(a4))->v)), (((((struct o2D4_float *)(a4))->v)) + 1.0f), ((((struct o28_float *)(a4))->v)));
    nlScale(f4, f4, f4);
    return nlObjPutUseViewMatrixTrnsl((*(int *)(((*(int *)0xC4CFA70) + 0x0))), f5);
}

int FUN_0c02d1cc(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a4 + 0x0))) == 0) {
        return ((int (*)(int, int, int, int))(0xC02D40C))(a4, a5, a6, a7);
    }
    if ((*(signed char *)((a4 + 0x1))) == 0) {
        return ((int (*)(int, int, int, int))(0xC02D40C))(a4, a5, a6, a7);
    }
    FUN_0c0e1550(0x1);
    FUN_0c05fb58((*(signed char *)((a4 + 0x5))));
    if (((unsigned short)(*(short *)((a4 + 0x6))) & 0x200) != 0) {
        FUN_0c0dcd20(((((struct o60_float *)(a4))->v)), ((((struct o64_float *)(a4))->v)), ((((struct o68_float *)(a4))->v)));
    }
    FUN_0c05a164(a4);
    FUN_0c05a6e8(a4);
    return ((int (*)(void))(0xC02D400))();
}

int FUN_0c02d458(void)
{
    register int t0;
    register int t1;
    int t2;

    t0 = (((struct o0_int *)0xC386830)->v);
    if ((t0 != 0) && (((t0 == 0) || (t1 = (((struct o4_int *)0xC386830)->v), t1 != 0)) && (t2 = *(int *)0xC4CD1B4, t2 == 0))) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int game_draw_frame(void)
{
    register int t0;
    int t1;
    register int t2;

    t2 = FUN_0c02d458();
    if (t2 != 0) {
        return FUN_0c02828e();
    }
    if ((*(signed char *)0xC7F31D0) != 0) {
        if (((*(signed char *)0xC7F300B) == 0) && ((t0 = *(signed char *)0xC7F300E, t0 == 0) && (t1 = *(signed char *)0xC494D20, t1 == 0))) {
            (((struct o15_uchar *)0xC7F31BC)->v) = ((*(signed char *)0xC7F31D1) - 1);
        }
        t0 = *(signed char *)0xC7F31D0;
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                gfx_set_background_color(0xFFFF0000, 0xFFFF0000, 0xFFFF0000);
            }
        } else {
            gfx_set_background_color(0xFFC0C0C0, 0xFFC0C0C0, 0xFFC0C0C0);
        }
        if ((int)(*(signed char *)0xC7F31D1) > 0) {
        } else {
            (((struct o15_uchar *)0xC7F31BC)->v) = 0x0;
            (((struct o14_uchar *)0xC7F31BC)->v) = 0x0;
        }
    } else {
        gfx_set_background_color(((((struct o0_int *)0xC7F31BC)->v)), ((((struct o4_int *)0xC7F31BC)->v)), ((((struct o8_int *)0xC7F31BC)->v)));
        if ((*(signed char *)g_cam_split_flag) == 0) {
            *(unsigned int *)0xC321190 = 0x0;
            FUN_0c0e1550(0x3);
            nlUnitMatrix();
            FUN_0c0e2790(0x1D28, 1.33333325f, 0.299999982f, 12000.0f);
            FUN_0c0e1550(0x2);
            FUN_0c0e1240(0xC7F2A24);
            FUN_0c02d420();
        } else {
            FUN_0c0dca60(0x0, 0x0, 0x9, 0xE, 0x5);
            FUN_0c0e1550(0x3);
            nlUnitMatrix();
            FUN_0c0e2110(-0.5f, 0.0f, 0.0f);
            FUN_0c0e2790(0x1D28, 2.66666651f, 0.299999982f, 12000.0f);
            FUN_0c0e1550(0x2);
            FUN_0c0e1240(0xC7F2A24);
            *(unsigned int *)0xC321190 = 0x2;
            FUN_0c02d420();
            FUN_0c0dcac0(0xF, 0x2);
            FUN_0c0dca60(0x0, 0x0, 0x9, 0xE, 0x5);
            FUN_0c0e1550(0x3);
            nlUnitMatrix();
            FUN_0c0e2110(0.5f, 0.0f, 0.0f);
            FUN_0c0e2790(0x1D28, 2.66666651f, 0.299999982f, 12000.0f);
            FUN_0c0e1550(0x2);
            FUN_0c0e1240(0xC7F2C20);
            *(unsigned int *)0xC321190 = 0x3;
            FUN_0c02d420();
            FUN_0c0dcac0(0xF, 0x3);
            FUN_0c0dca60(0x0, 0x0, 0x9, 0xE, 0x5);
            *(unsigned int *)0xC321190 = 0x0;
            FUN_0c031388();
            FUN_0c0dcac0(0xF, 0x0);
        }
    }
    if ((unsigned char)(*(signed char *)0xC7F2EE4) == 4) {
        if ((int)(*(signed char *)0xC7F302C) >= (int)0x1) {
            if ((*(signed char *)0xC7F2F03) == 0) {
                *(volatile signed char *)0xC7F300B;
                return ((int (*)(void))(0xC02D6AC))();
            }
            return ((int (*)(void))(0xC02D6C4))();
        }
        return ((int (*)(void))(0xC02D6C4))();
    }
    return ((int (*)(void))(0xC02D6C4))();
}

int FUN_0c02d744(void)
{
    register int t0;

    t0 = FUN_0c02d458();
    if (t0 == 0) {
        stage_draw_lights();
        FUN_0c02cf18();
        FUN_0c0282cc();
        FUN_0c02ca74();
        return FUN_0c02cade();
    }
    return t0;
}
