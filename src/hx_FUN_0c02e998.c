/* HUD of both fighters (layout 0x0C366A70: per-side x offsets at +12, top y at +8; panels of 60 bytes from +92): the
   character name plate (two sprites from the 20-byte entries of 0x0C321198), the three power-stone slots (blinking
   counters at +32, a 0..4 sparkle frame at +38 cycling every 4 frames with a 300-frame pause; the slot is filled when
   the fighter holds that stone, or, in the stone-count rule (s7f4750[5], [21]), when it holds more than that many) and
   the transformation gauge (+0x71F4: seconds = /600, a bar scaled by 0.0533 / 8, mirrored for side 1). Sprites go
   through FUN_0c027fa4(descriptor, texture g17fdb0, mode, frame, side, 0); FUN_0c02e438 / FUN_0c02e4d0 open and close
   each panel. */
void FUN_0c02e438(char *panel, int side);
void FUN_0c02e4d0(char *panel);

typedef struct { int a0; float x; float y; float w; float sx; float sy; int p24[4]; int i40; float f44; int p48; int i52; } SPR;
void FUN_0c027fa4(SPR *s, void *tex, int mode, int frame, int side, int zero);

#define HUD ((char *)0x0C366A70)
#define XOFF ((float *)(HUD + 12))
#define TEX ((void *)0x0C17FDB0)
#define PLB(i, n) (*(signed char *)((char *)0xC7E40C4 + (unsigned short)((unsigned short)(i) * (unsigned short)0x72D0) + (n)))
#define PLH(i, n) (*(short *)((char *)0xC7E40C4 + (unsigned short)((unsigned short)(i) * (unsigned short)0x72D0) + (n)))
#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))

void FUN_0c02e998(void)
{
    struct { signed char side; SPR d; } s;
    char *h, *e;
    int i, j;

    FUN_0c02e438(HUD + 92, 0);
    FUN_0c02e438(HUD + 92 + 60, 1);
    for (i = 0; i < 2; i++) {
        if (PLB(i, 4) == 10)
            continue;
        h = HUD + 92 + (signed char)(i * 60);
        if (B(h, 2) != 0) {
            e = (char *)0x0C321198 + (signed char)((B(h, 29) * 2 + i) * 20);
            s.d.i40 = 0;
            s.d.f44 = 1.0f;
            s.d.i52 = 5;
            s.d.sx = 1.0f;
            s.d.sy = 1.0f;
            s.d.x = F(h, 8) + XOFF[i];
            s.d.y = F(h, 12) + F(HUD, 8);
            s.d.w = F(e, 16);
            FUN_0c027fa4(&s.d, TEX, 2, *(int *)e, i, 0);
            s.d.w = s.d.w + F(e, 8);
            s.d.sx = s.d.sx + F(e, 12);
            FUN_0c027fa4(&s.d, TEX, 2, *(int *)(e + 4), i, 0);
        }
        if (B(h, 3) != 0) {
            s.d.i40 = 0;
            s.d.f44 = 1.0f;
            s.d.i52 = 5;
            s.d.sx = 1.0f;
            s.d.sy = 1.0f;
            s.d.x = F(h, 16) - F(h, 20) + XOFF[B(h, 1)];
            s.d.y = F(HUD, 8) + 424.0f;
            for (j = 0; j < 3; j++) {
                s.d.w = 7.79999924f;
                if (*(int *)(0x0C7F2EE0 + 328) != 0)
                    H(h, 32 + j * 2) = H(h, 32 + j * 2) + 1;
                H(h, 32 + j * 2) = H(h, 32 + j * 2) - 1;
                if (H(h, 32 + j * 2) == 0) {
                    B(h, 38 + j) = (B(h, 38 + j) + 1) % 5;
                    H(h, 32 + j * 2) = B(h, 38 + j) == 0 ? 300 : 4;
                }
                if (*(signed char *)(0x0C7F4750 + 5) != 0 && *(signed char *)(0x0C7F4750 + 21) != 0) {
                    if (PLB(B(h, 1), 0x7230) > j) {
                        FUN_0c027fa4(&s.d, TEX, 2, 13, B(h, 1), 0);
                        if (B(h, 38 + j) != 0) {
                            s.d.w = s.d.w - 0.0999999940f;
                            FUN_0c027fa4(&s.d, TEX, 2, B(h, 38 + j) + 7, B(h, 1), 0);
                        }
                    } else {
                        FUN_0c027fa4(&s.d, TEX, 2, 12, B(h, 1), 0);
                    }
                } else if (PLB(B(h, 1), 0x7231) & (1 << j)) {
                    FUN_0c027fa4(&s.d, TEX, 2, j + 13, B(h, 1), 0);
                    if (B(h, 38 + j) != 0) {
                        s.d.w = s.d.w - 0.0999999940f;
                        FUN_0c027fa4(&s.d, TEX, 2, B(h, 38 + j) + 7, B(h, 1), 0);
                    }
                } else {
                    FUN_0c027fa4(&s.d, TEX, 2, 12, B(h, 1), 0);
                }
                s.d.x = s.d.x + F(h, 20);
            }
        }
        if (B(h, 30) != 0) {
            s.d.i40 = 0;
            s.d.f44 = 1.0f;
            s.d.i52 = 5;
            s.d.sx = 1.0f;
            s.d.sy = 1.0f;
            s.d.x = F(h, 24) + XOFF[B(h, 1)];
            s.d.y = F(HUD, 8) + 432.0f;
            s.d.w = 8.29999924f;
            FUN_0c027fa4(&s.d, TEX, 2, 7, B(h, 1), 0);
            s.d.i40 = 0;
            s.d.f44 = 1.0f;
            if (B(h, 1) == 0) {
                s.d.i52 = 5;
                s.d.x = F(h, 24) + 16.0f;
            } else {
                s.d.i52 = 7;
                s.d.x = F(h, 24) + 144.0f;
            }
            s.d.x = s.d.x + XOFF[B(h, 1)];
            s.d.y = F(HUD, 8) + 441.0f;
            s.d.w = 8.39999962f;
            s.d.sx = (float)PLH(B(h, 1), 0x71F4) * 0.0533333309f / 8.0f;
            s.d.sy = 14.0f;
            s.side = B(h, 1);
            FUN_0c027fa4(&s.d, TEX, 6, PLH(s.side, 0x71F4) / 600, B(h, 1), 0);
            if (B(h, 1) != 0)
                s.d.x = s.d.x - s.d.sx * 8.0f;
            else
                s.d.x = s.d.x + s.d.sx * 8.0f;
            s.d.sx = (-(s.d.sx * 8.0f) + 128.0f) / 8.0f;
            s.d.y = F(HUD, 8) + 441.0f;
            s.d.w = 8.5f;
            FUN_0c027fa4(&s.d, TEX, 6, 5, B(h, 1), 0);
        }
    }
    FUN_0c02e4d0(HUD + 92);
    FUN_0c02e4d0(HUD + 92 + 60);
}
