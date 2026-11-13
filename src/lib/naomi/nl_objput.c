/* nlObjPut family (object put with world or view matrix) (0c0dcae0-0c0dcf10) */

extern int nlStoreMatrix8();
int nlLoadMatrix8(int);
int nlMultiMatrixRevOrder8(int);
int nlInvLightVector(void);
int nlInvLightVectorUseViewMatrix(void);
int nlobjput_sub(int);
int nlobjput_sub_trnsl(int);
int nlMakeModelViewProjectMatrix_objput(void);
int nlPushMatrix(int);
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct oC_float { char p[0xC]; float v; };
struct Vec3f { float x, y, z; };

/* Fills a 32x128 float table at 0xC7F4780 (row i = ((2*(x+0.7071)^2 - 1)^2)^i with x = j*0.29289/127; rows 0 and 1 hold the base value) and initialises two globals. */
void nlObjPutInit(void)
{
    float *tbl = (float *)0x0C7F4780;
    int i, j, k;
    float x, y, p;

    *(float *)0x0C7FCC9C = *(float *)0x0C346878;
    *(int *)0x0C7F87C0 = 0;
    for (i = 0; i < 32; i++) {
        for (j = 0; j < 128; j++) {
            x = (float)j * 0.292893052f / 127.0f;
            y = x + 0.707106948f;
            y = y * y;
            y = y + y;
            y = y - 1.0f;
            y = y * y;
            if (i < 2) {
                tbl[i * 128 + j] = y;
            } else {
                p = 1.0f;
                for (k = 0; k < i; k++)
                    p = p * y;
                tbl[i * 128 + j] = p;
            }
        }
    }
}

int nlObjPutWorldMatrixMode(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;

    t0 = ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(nlStoreMatrix8))(0xC7F8780, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
    nlMultiMatrixRevOrder8(0xC7FCFC0);
    t0 = ((int (*)(int))(nlStoreMatrix8))(0xC7FCF80);
    return nlLoadMatrix8(0xC7F8780);
}

int nlObjPut(int a4)
{
    if (((*(int *)((a4 + 0x4))) & 0x2) == 0) {
        nlInvLightVector();
    }
    nlPushMatrix(0x0);
    nlMultiMatrixRevOrder8(0xC7FCF80);
    return nlobjput_sub(a4);
}

int nlObjPutUseViewMatrix(int a4)
{
    if (((*(int *)((a4 + 0x4))) & 2) == 0) {
        nlInvLightVectorUseViewMatrix();
    }
    nlMakeModelViewProjectMatrix_objput();
    return nlobjput_sub(a4);
}

int nlObjPutTrnsl(int a4, float f4)
{
    if (((*(int *)((a4 + 0x4))) & 2) == 0) {
        nlInvLightVector();
    }
    nlPushMatrix(0x0);
    nlMultiMatrixRevOrder8(0xC7FCF80);
    return nlobjput_sub_trnsl(a4);
}

int nlObjPutUseViewMatrixTrnsl(int a4, float f4)
{
    if (((*(int *)((a4 + 0x4))) & 2) == 0) {
        nlInvLightVectorUseViewMatrix();
    }
    nlMakeModelViewProjectMatrix_objput();
    return nlobjput_sub_trnsl(a4);
}

void nlObjPutSetGlobalAmbience(float f4)
{
    *(float *)0xC346878 = f4;
    *(float *)0xC7FCC9C = f4;
}

int FUN_0c0dccb0(int a4, int a5, int a6, int a7)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = (((struct o8_float *)(a4))->v);
    u1 = *(float *)((a4 + 0x0));
    u2 = (((struct o4_float *)(a4))->v);
    return ((int (*)(int, int, int, int, float, float, float))(0xC0DCC80))(a4, a5, a6, a7, u1, u2, u0);
}

int nlSetLightDirection(int a4)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = (((struct o8_float *)(a4))->v);
    u1 = *(float *)((a4 + 0x0));
    u2 = (((struct o4_float *)(a4))->v);
    (((struct o0_float *)0xC346880)->v) = u1;
    (((struct o4_float *)0xC346880)->v) = u2;
    (((struct o8_float *)0xC346880)->v) = u0;
    (((struct oC_float *)0xC346880)->v) = (u0 + 1.0f);
    (((struct o10_float *)0xC346880)->v) = u1;
    (((struct o14_float *)0xC346880)->v) = u2;
    (((struct o18_float *)0xC346880)->v) = (u0 + 1.0f);
    (((struct o20_float *)0xC346880)->v) = 0.0f;
    (((struct o24_float *)0xC346880)->v) = 0.0f;
    (((struct o28_float *)0xC346880)->v) = 1.0f;
    return 0x8;
}

void nlSetLightColor(float x, float y, float z)
{
    struct Vec3f *stored = (struct Vec3f *)0xC3468B0;
    struct Vec3f *copy = (struct Vec3f *)0xC3468C0;
    stored->x = x;
    stored->y = y;
    stored->z = z;
    *copy = *stored;
}
