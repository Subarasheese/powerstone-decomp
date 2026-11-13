/* same module (inverse light vector) (0c0dd0d0-0c0dd1f0) */

int nlCalcVector(int, int);
int nlTransposeMatrix(void);
int FUN_0c0e22e0(int, int, float);
struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int nlSelectMatrixStack(int);

int nlInvLightVector(void)
{
    nlTransposeMatrix();
    nlCalcVector(0xC346880, 0xC7FCC90);
    nlCalcVector(0xC346890, 0xC7FCC80);
    FUN_0c0e22e0(0xC7FCC80, 0xC7FCC80, (*(float *)0xC0DD1A0));
    return nlTransposeMatrix();
}

int nlInvLightVectorUseViewMatrix(void)
{
    nlSelectMatrixStack(0x2);
    nlTransposeMatrix();
    nlCalcVector(0xC3468A0, 0xC7FCC80);
    nlTransposeMatrix();
    nlSelectMatrixStack(0x1);
    nlTransposeMatrix();
    nlCalcVector(0xC346880, 0xC7FCC90);
    (((struct o0_float *)0xC7FCC80)->v) = (((((struct o0_float *)0xC7FCC80)->v)) + ((((struct o0_float *)0xC346880)->v)));
    (((struct o4_float *)0xC7FCC80)->v) = (((((struct o4_float *)0xC7FCC80)->v)) + ((((struct o4_float *)0xC346880)->v)));
    (((struct o8_float *)0xC7FCC80)->v) = (((((struct o8_float *)0xC7FCC80)->v)) + ((((struct o8_float *)0xC346880)->v)));
    nlCalcVector(0xC7FCC80, 0xC7FCC80);
    FUN_0c0e22e0(0xC7FCC80, 0xC7FCC80, 436.5f);
    return (nlTransposeMatrix());
}
