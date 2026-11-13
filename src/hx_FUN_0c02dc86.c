/* Round timer HUD: the two digits of the remaining time g_302c[33] (frame counter [34]) at x = 320, y = HUD top + 68,
   with a 20-frame flip animation (panel 0x0C366A70 + 28: +4 state, +8 countdown, +9 last value, +12 progress) when a
   digit changes - the old digit squashes away while the next one (value - 1, wrapping 0 -> 9) drops in from 48 units
   above; the infinite-time setting (g_0c7f2ee0[56] == 4) shows the infinity sign instead; the clock frame is drawn on
   top. Sprites through FUN_0c027fa4(descriptor, texture g17fdb0, 1, frame, 0, 0). */
typedef struct { int a0; float x; float y; float w; float sx; float sy; int p24[4]; int i40; float f44; int p48; int i52; } SPR;
void FUN_0c027fa4(SPR *s, void *tex, int mode, int frame, int side, int zero);

#define HUD ((char *)0x0C366A70)
#define TEX ((void *)0x0C17FDB0)
#define G ((signed char *)0x0C7F302C)
#define F(o, n) (*(float *)((o) + (n)))

void FUN_0c02dc86(void)
{
    SPR d;
    signed char *p;
    int lo, hi;

    p = (signed char *)(HUD + 28);
    d.i40 = 0;
    d.w = 8.0f;
    d.x = 320.0f;
    d.y = F(HUD, 4) + 68.0f;
    d.i52 = 13;
    d.f44 = 1.0f;
    if (*(signed char *)(0x0C7F2EE0 + 56) == 4) {
        d.x = 320.0f;
        d.y = F(HUD, 4) + 41.0f;
        d.w = 8.09999942f;
        d.sx = 1.0f;
        d.sy = 1.0f;
        d.i52 = 10;
        FUN_0c027fa4(&d, TEX, 1, 11, 0, 0);
    } else {
        if (G[34] > 20 && p[4] != 0)
            p[4] = 0;
        if (p[4] == 0) {
            if (!(G[34] > 20) && G[33] != 0) {
                p[4] = p[4] + 1;
                p[8] = 20;
                p[9] = G[33];
            }
            lo = G[33] % 10;
            d.x = d.x - 2.0f;
            d.sy = 1.0f;
            d.sx = 1.0f;
            FUN_0c027fa4(&d, TEX, 1, lo, 0, 0);
            d.i52 = 15;
            d.x = d.x + 4.0f;
            hi = G[33] / 10;
        } else {
            if (p[8] != 0) {
                if (*(int *)(0x0C7F2EE0 + 328) == 0)
                    p[8] = p[8] - 1;
                F(p, 12) = (float)p[8] / 20.0f;
            }
            lo = G[33] % 10;
            d.sx = 1.0f;
            d.sy = F(p, 12);
            d.x = d.x - 2.0f;
            FUN_0c027fa4(&d, TEX, 1, lo, 0, 0);
            lo = lo == 0 ? 9 : lo - 1;
            d.y = -(F(p, 12) * 48.0f) + F(HUD, 4) + 68.0f;
            d.sy = -F(p, 12) + 1.0f;
            FUN_0c027fa4(&d, TEX, 1, lo, 0, 0);
            d.y = F(HUD, 4) + 68.0f;
            d.x = d.x + 4.0f;
            d.i52 = 15;
            if (lo == 9) {
                hi = G[33] / 10;
                d.sy = F(p, 12);
                FUN_0c027fa4(&d, TEX, 1, hi, 0, 0);
                hi = hi == 0 ? 9 : hi - 1;
                d.y = -(F(p, 12) * 48.0f) + F(HUD, 4) + 68.0f;
                d.sy = -F(p, 12) + 1.0f;
            } else {
                hi = G[33] / 10;
                d.sy = 1.0f;
            }
        }
        FUN_0c027fa4(&d, TEX, 1, hi, 0, 0);
    }
    d.x = 320.0f;
    d.y = F(HUD, 4) + 41.0f;
    d.w = 8.09999942f;
    d.sx = 1.0f;
    d.sy = 1.0f;
    d.i52 = 10;
    FUN_0c027fa4(&d, TEX, 1, 10, 0, 0);
}
