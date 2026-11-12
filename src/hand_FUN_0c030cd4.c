/* Hand-written: draws a world-space marker at a position: a run of glyph cells (kind b, count/value c) built with FUN_0c027fa4 in a
   56-byte cell record that the loops step sideways by a multiple of the on-screen scale. */
typedef struct { float x, y, z; } V;
typedef struct {
    int w0;
    float x, y, z;
    float f4, f5;
    int w6, w7, w8, w9;
    int w10;
    float f11;
    int w12;
    int w13;
} S56;
extern int g17fdb0;
int FUN_0c0555c4(void);
void FUN_0c030a1e(V *src, V *dst, float *len, float scale);
void FUN_0c030be8(V *p, char *text, float len);
void FUN_0c027fa4(S56 *src, int *o, short idx, int n, char c5, char c6);
int sprintf(char *, const char *, ...);

void FUN_0c030cd4(V *pos, unsigned short b, unsigned short c, int d)
{
    S56 s;
    V dir;
    float len;
    char buf[8];
    int i;
    int n;
    int t;
    float q;
    float tb;

    if (FUN_0c0555c4() == 0) {
        return;
    }
    dir = *pos;
    FUN_0c030a1e(&dir, &dir, &len, 1.0f);
    s.f5 = len;
    s.f4 = len;
    *(V *)&s.x = dir;
    s.f11 = 1.0f;
    s.w13 = 10;
    s.w10 = 0;
    s.z = 9.0f;
    if (b == 0) {
        s.w10 += 0x4000;
        s.x -= len * 30.0f;
        if (c > 0) {
            i = 0;
            do {
                FUN_0c027fa4(&s, &g17fdb0, 9, 1, 0, 0);
                s.x += 12.0f * len;
                i++;
            } while (i < c);
        }
    } else if (b == 2) {
        s.x -= len * 40.0f;
        s.w10 += 0x4000;
        if (c > 0) {
            i = 0;
            do {
                FUN_0c027fa4(&s, &g17fdb0, 9, 0, 0, 0);
                s.x += 8.0f * len;
                i++;
            } while (i < c);
        }
    } else if (b == 13) {
        s.x -= len * 40.0f;
        s.w10 += 0x4000;
        n = (c - 1) / 5 + 1;
        if (n > 0) {
            i = 0;
            do {
                FUN_0c027fa4(&s, &g17fdb0, 9, 0, 0, 0);
                s.x += 8.0f * len;
                i++;
            } while (i < n);
        }
    } else if (b == 7 || b == 8 || b == 9) {
        sprintf(buf, (const char *)0xC149448, c / 60);
        FUN_0c030be8(&dir, buf, len);
    } else {
        s.x -= len * 26.0f;
        s.w13 = 9;
        FUN_0c027fa4(&s, &g17fdb0, 9, 2, 1, 0);
        s.w13 = 11;
        s.x += 52.0f * len;
        FUN_0c027fa4(&s, &g17fdb0, 9, 2, 0, 0);
        s.w13 = 9;
        s.x -= len * 50.0f;
        s.y += len;
        s.z += 0.01f;
        if (b == 14) {
            tb = (float)*(signed char *)(0xC336120 + b * 4 + 1);
        } else {
            tb = (float)*(unsigned short *)(0xC336120 + b * 4 + 2);
        }
        q = (float)c / tb;
        s.f4 = len * q * 12.0f;
        t = *(int *)(0xC3211EC + b * 4);
        FUN_0c027fa4(&s, &g17fdb0, 9, t % 4 * 2 + 3, 0, 0);
        s.z += 0.01f;
        s.f4 = len * 12.0f;
        FUN_0c027fa4(&s, &g17fdb0, 9, t % 4 * 2 + 4, 0, 0);
    }
}
