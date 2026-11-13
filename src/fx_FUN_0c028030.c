/* Project a 3D point through the matrix stack to screen space and hand a scaled copy of a 56-byte draw request to the renderer. */
struct V { float x, y, z; };
struct S { int w0; struct V v; float f16, f20; char pad[24]; int k48; int w52; };
int FUN_0c0e1550(int);
int FUN_0c0e19b0(int);
int FUN_0c0e3c54(struct S *);
int nlCalcPoint(struct V *, struct V *);
int nlCalcPoint44(struct V *, float *);
int nlPopMatrix(int);

int FUN_0c028030(struct S *a4)
{
    float stk[18];
    struct S s;
    float k;

    FUN_0c0e19b0(0);
    s = *a4;
    *(struct V *)&stk[15] = s.v;
    FUN_0c0e1550(2);
    nlCalcPoint((struct V *)&stk[15], (struct V *)&stk[12]);
    *(struct V *)&stk[9] = *(struct V *)&stk[12];
    stk[9] = stk[9] + 1.0f;
    FUN_0c0e1550(3);
    nlCalcPoint44((struct V *)&stk[12], &stk[5]);
    nlCalcPoint44((struct V *)&stk[9], &stk[1]);
    FUN_0c0e1550(1);
    nlPopMatrix(1);
    stk[15] = (((stk[5] / stk[8]) + 1.0f) / 2.0f) * 640.0f;
    stk[16] = -((((stk[6] / stk[8]) + 1.0f) / 2.0f) * 480.0f) + 480.0f;
    stk[17] = -(stk[14] * 1.0f);
    k = ((((stk[1] / stk[4]) + 1.0f) / 2.0f) * 640.0f) - stk[15];
    s.v = *(struct V *)&stk[15];
    s.f16 = s.f16 * k;
    s.f20 = s.f20 * k;
    s.k48 = 2;
    return FUN_0c0e3c54(&s);
}
