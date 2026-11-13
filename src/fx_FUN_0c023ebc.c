/* Builds a 56-byte parameter block on the stack (a halfword from 0x0C17FDB2, a 12-byte vector copied from the argument, two 10.0 floats, 1.0, 10) and passes it to FUN_0c027fa4. */
typedef struct { int a, b, c; } S12;
struct L { int h; S12 v; float f16, f20; int pad24[4]; int i40; float f44; int pad48; int i52; };
void FUN_0c027fa4(void *, int, int, int, int, int);
void FUN_0c023ebc(S12 *vec)
{
    struct L l;
    l.i40 = 0;
    l.i52 = 10;
    l.f44 = 1.0f;
    l.f16 = 10.0f;
    l.f20 = 10.0f;
    l.h = *(short *)0x0C17FDB2;
    l.v = *vec;
    FUN_0c027fa4(&l, 0x0c17fdb0, 3, 0, 0, 2);
}
