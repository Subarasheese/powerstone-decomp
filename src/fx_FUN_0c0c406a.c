/* Pop-up object state machine: ease its position toward the target object over states 0-1, then fade in/out (scale at +0x50) in states 2 and above. */
struct V3 { int x, y, z; };
int FUN_0c0a1d88(char *, int);
int FUN_0c0a3914(char *, int);
int FUN_0c0c2bd8(char *, int);
int FUN_0c0dc18e(int, int);
int thunk_FUN_0c062242(int, float *);

#define F(o) (*(float *)(p + (o)))

void FUN_0c0c406a(char *p)
{
    float v[3];
    char *q;
    char *T;
    float w;
    int s;

    q = *(char **)(p + 0x1C);
    s = p[12];
    if (s == 0) {
        p[12] = p[12] + 1;
        *(short *)(p + 0xF2) = 0;
        FUN_0c0a1d88(p, 124);
        s = 1;
    }
    if (s == 1) {
        *(short *)(p + 0xF2) = *(short *)(p + 0xF2) + 1;
        if (*(short *)(p + 0xF2) == 32) {
            p[12] = p[12] + 1;
            F(64) = 0.0f;
            F(56) = 0.0f;
            F(76) = 0.0f;
            F(68) = 0.0f;
            F(60) = -10.0f;
            F(72) = -5.0f;
        }
        w = F(80) + 0.099999994f;
        F(80) = w;
        if (w > 2.0f)
            F(80) = 2.0f;
        w = F(80);
        F(88) = w;
        F(84) = w;
        if (*(short *)(p + 0xF2) < 16) {
            T = (char *)0xC7E40C4 + (unsigned short)((unsigned short)q[3] * (unsigned short)0x72D0);
            thunk_FUN_0c062242((int)(T + 0x300) + (short)((short)T[0x71F1] * (short)0xDC0) + 0x840, v);
            *(struct V3 *)(p + 56) = *(struct V3 *)(q + 32);
            F(60) = v[1] + 20.0f;
            F(32) = F(32) + (F(56) - F(32)) / 5.0f;
            F(36) = F(36) + (F(60) - F(36)) / 5.0f;
            F(40) = F(40) + (F(64) - F(40)) / 5.0f;
        } else {
            T = (char *)0xC7E40C4 + (unsigned short)((unsigned short)q[3] * (unsigned short)0x72D0);
            thunk_FUN_0c062242((int)(T + 0x300) + (short)((short)T[0x71F1] * (short)0xDC0) + 0x840, v);
            *(struct V3 *)(p + 32) = *(struct V3 *)(q + 32);
            F(36) = v[1] + 20.0f;
        }
    } else if (s == 2) {
        w = F(80) + 0.099999994f;
        F(80) = w;
        if (w > 2.0f)
            F(80) = 2.0f;
        if (p[0x2D8] != 0) {
            p[12] = p[12] + 1;
            FUN_0c0c2bd8(p, 0);
            FUN_0c0a3914(q, 54);
            FUN_0c0dc18e(60, 60);
            p[0x105] = 0;
            F(80) = F(80) + 4.0f;
        } else {
            F(60) = F(60) + F(72);
            F(36) = F(36) + F(60);
        }
        w = F(80);
        F(88) = w;
        F(84) = w;
    } else {
        w = F(80) + 0.099999994f;
        F(80) = w;
        if (w > 1.0f)
            F(80) = 1.0f;
        w = F(80);
        F(88) = w;
        F(84) = w;
        p[0x105] = 1;
    }
}
