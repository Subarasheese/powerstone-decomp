/* Advances the phase (float at +68 of the object at +740) by 0.002 wrapping at 1.0, hands two of its words to FUN_0c062954, then until FUN_0c06297a reports done keeps getting a pair of floats from FUN_0c062aa8, shifting the first by the phase and giving the pair to FUN_0c062af0. */
struct P { char pad0[68]; float t; char pad1[156 - 72]; int w156; };
struct G { char pad[96]; int w96; };
struct O { char pad[740]; struct P *p; };
void FUN_0c062954(int a, int b);
int FUN_0c06297a(void);
void FUN_0c062aa8(float *a, float *b);
void FUN_0c062af0(float *a, float *b);
void FUN_0c02b950(struct O *o)
{
    float l[2];
    o->p->t = o->p->t + 0.00199999986f;
    if (!(1.0f > o->p->t))
        o->p->t = o->p->t - 1.0f;
    FUN_0c062954((*(struct G **)0xC664A08)->w96, o->p->w156);
    while (FUN_0c06297a() == 0) {
        FUN_0c062aa8(&l[1], &l[0]);
        l[0] = l[0] - o->p->t;
        FUN_0c062af0(&l[1], &l[0]);
    }
}
