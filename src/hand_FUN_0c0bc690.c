/* Hand-written: spawns a particle/effect object of kind 0..3 from the parent a4: copies the parent's position and angles,
   scatters them with the random generator FUN_0c0df940 and derives the velocity from the angles. */
extern char g_0c6002d0;
char *FUN_0c059132(int a, int b, int c);
int FUN_0c06233a(char *q, char *table, int n);
int FUN_0c0a1d88(char *o, int n);
float FUN_0c0df940(void);
float FUN_0c0df4d0(int ang);
float FUN_0c0dfa50(int ang);
void FUN_0c0bcb44(void);

#define B(p, off) (*(signed char *)((p) + (off)))
#define H(p, off) (*(short *)((p) + (off)))
#define I(p, off) (*(int *)((p) + (off)))
#define F(p, off) (*(float *)((p) + (off)))
#define Q(o) (*(char **)((o) + 736))

typedef struct { int a, b, c; } V3;

void FUN_0c0bc690(char *p, signed char kind)
{
    char *o;
    char *q;
    unsigned int n;
    unsigned int m;
    float sx;
    float sy;
    float scale;
    short state;

    o = FUN_0c059132(1, 1, 1);
    if (o == 0) {
        return;
    }
    B(o, 0) = 1;
    B(o, 3) = B(p, 3);
    B(o, 1) = 1;
    H(o, 6) = 1055;
    B(o, 5) = 25;
    *(void (**)(void))(o + 16) = FUN_0c0bcb44;
    *(V3 *)(o + 32) = *(V3 *)(p + 32);
    *(V3 *)(o + 44) = *(V3 *)(p + 44);
    F(o, 64) = 0.0f;
    F(o, 60) = 0.0f;
    F(o, 56) = 0.0f;
    F(o, 88) = 1.0f;
    F(o, 84) = 1.0f;
    F(o, 80) = 1.0f;
    B(o, 8) = kind;
    B(o, 9) = 0;
    if (kind == 0 || kind == 2) {
        FUN_0c06233a(Q(o), &g_0c6002d0 + (signed char)(B(p, 3) * 24), 2);
        q = Q(o);
        *q = 1;
        H(Q(o), 2) = 1055;
        F(Q(o), 64) = 1.0f;
        B(o, 257) = 2;
        B(o, 258) = 2;
        FUN_0c0a1d88(o, 118);
        if (kind == 2) {
            B(o, 261) = 1;
            B(o, 262) = 1;
            B(o, 263) = 1;
        }
        q = Q(o);
        n = (unsigned int)(FUN_0c0df940() * 255.0f);
        F(q, 28) = F(q, 32) = F(q, 36) = ((float *)0xC33C478)[n % 8] + 3.0f;
        m = (unsigned int)(FUN_0c0df940() * 255.0f);
        I(o, 44) += (int)((float)(m % 360) * 65536.0f / 360.0f);
        m = (unsigned int)(FUN_0c0df940() * 255.0f);
        I(o, 48) += (int)((float)(m % 360) * 65536.0f / 360.0f);
        m = (unsigned int)(FUN_0c0df940() * 255.0f);
        I(o, 52) += (int)((float)(m % 360) * 65536.0f / 360.0f);
        scale = 60.0f;
        state = 10;
    } else if (kind == 1 || kind == 3) {
        if (kind == 3) {
            *(V3 *)(o + 32) = *(V3 *)(*(char **)(p + 28) + 32);
        }
        FUN_0c06233a(Q(o), &g_0c6002d0 + (signed char)(B(p, 3) * 24), 2);
        q = Q(o);
        *q = 1;
        H(Q(o), 2) = 1055;
        F(Q(o), 64) = 1.0f;
        q = Q(o);
        n = (unsigned int)(FUN_0c0df940() * 255.0f);
        F(q, 28) = F(q, 32) = F(q, 36) = ((float *)0xC33C478)[n % 8] + 2.0f;
        m = (unsigned int)(FUN_0c0df940() * 255.0f);
        I(o, 44) += (int)((float)(m % 360) * 65536.0f / 360.0f);
        m = (unsigned int)(FUN_0c0df940() * 255.0f);
        I(o, 52) += (int)((float)(m % 360) * 65536.0f / 360.0f);
        scale = 30.0f;
        state = 4;
    } else {
        return;
    }
    I(o, 44) &= 0xFFFF;
    I(o, 48) &= 0xFFFF;
    I(o, 52) &= 0xFFFF;
    sx = FUN_0c0df4d0(0x14000 - I(o, 48));
    sy = FUN_0c0dfa50(0x14000 - I(o, 44));
    F(o, 56) = sx * sy * scale;
    sx = FUN_0c0dfa50(0x14000 - I(o, 48));
    sy = FUN_0c0dfa50(0x14000 - I(o, 44));
    F(o, 64) = sx * sy * scale;
    sx = FUN_0c0df4d0(0x14000 - I(o, 44));
    F(o, 60) = -(sx * scale);
    *(char **)(o + 28) = p;
    H(o, 236) = state;
}
