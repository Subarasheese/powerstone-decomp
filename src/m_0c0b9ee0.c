/* @unit 0c0b9ee0-0c0ba090 -macsave=1 */
struct EE { char p[768]; char r[1]; char q[28400]; signed char sc; };
struct W { char b0; char pad[1]; short w2; };
struct F { char b0; char pad[1]; short w2; char p2[16]; int u20; char p3[4]; float f28, f32, f36; };
struct N { char b0; char b1; char p0; char b3; char p1; char b5; short w6; char p2[8]; void *p16; char p3[8]; void *p28; char p4[4]; float f36; char p5[4]; int i44, i48, i52; char p6[24]; float f80, f84, f88; char p7[150]; short w242; char p8[13]; char b257, b258; char p9[477]; struct F *p736, *p740, *p744; };
struct O { char p0[3]; char b3; char p1[40]; int i44, i48, i52; };
extern char g_base7e40c4[];
extern char g_t6002d0[];
extern struct N *FUN_0c059132(int, int, int, int);
extern void FUN_0c0ba090(void);
extern void thunk_FUN_0c062242(char *, char *);
extern void FUN_0c0a1d88(struct N *, int);
extern void FUN_0c06233a(struct F *, char *, int);
void FUN_0c0b9ee0(struct O *o, char c)
{
    struct N *e;
    if ((e = FUN_0c059132(1, 1, 3, 0))) {
        e->b0 = 1;
        e->b1 = 0;
        e->b3 = o->b3;
        e->p16 = FUN_0c0ba090;
        e->p28 = o;
        e->w6 = 31;
        e->b5 = 25;
#define ENT ((struct EE *)(g_base7e40c4 + (unsigned short)(o->b3 * 29392)))
        thunk_FUN_0c062242(ENT->r + (short)(ENT->sc * 3520) + 704, (char *)e + 32);
        e->f36 += 50.0f;
        e->i44 = o->i44;
        e->i48 = o->i48;
        e->i52 = o->i52;
        e->f80 = 0.0f;
        e->f84 = 0.0f;
        e->f88 = 0.0f;
        e->w242 = (unsigned char)c;
        e->b257 = 2;
        e->b258 = 2;
        FUN_0c0a1d88(e, 115);
        FUN_0c06233a(e->p736, g_t6002d0 + (signed char)(o->b3 * 24), 7);
        e->p736->b0 = 1;
        e->p736->w2 = 15;
        FUN_0c06233a(e->p740, g_t6002d0 + (signed char)(o->b3 * 24), 10);
        e->p740->b0 = 1;
        e->p740->w2 = 63;
        e->p740->f28 = 0.0f;
        e->p740->f32 = 0.0f;
        e->p740->f36 = 0.0f;
        e->p740->u20 = 16384;
        FUN_0c06233a(e->p744, g_t6002d0 + (signed char)(o->b3 * 24), 8);
        e->p744->b0 = 1;
        e->p744->w2 = 63;
        e->p744->f28 = 0.0f;
        e->p744->f32 = 0.0f;
        e->p744->f36 = 0.0f;
        e->p744->u20 = 16384;
    }
}
