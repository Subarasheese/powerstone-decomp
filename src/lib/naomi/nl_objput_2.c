/* same module (point calc helpers) (0c0dcf10-0c0dd0d0) */

struct o0_float { float v; };
struct o14_float { char p[0x14]; float v; };
struct o4_float { char p[0x4]; float v; };
int nlCalcPoint(int, int);
int nlMultiMatrixRevOrder8(int);
int nlPopMatrix(int);
int nlPushMatrix(int);

int FUN_0c0dcf10(int a4)
{
    int stk[4];
    register float u0;
    register float u1;
    register float u7;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u15;
    register float u17;

    *(unsigned int *)(((int)stk + 0)) = a4;
    u0 = (((struct o14_float *)(a4))->v);
    u1 = *(float *)0xC7FD648;
    nlPushMatrix(0x0);
    nlMultiMatrixRevOrder8(0xC7FCF80);
    nlCalcPoint(((*(int *)(((int)stk + 0))) + 0x8), (((int)stk + 0) + 0x4));
    nlPopMatrix(0x1);
    u7 = *(float *)(((int)stk + 4));
    if (!((*(float *)0xC7FCCA4) > (u7 + ((u0 * u1))))) {
        u10 = *(float *)(((int)stk + 8));
        u11 = *(float *)0xC7FCF68;
        u12 = (u0 * u1);
        if (u10 > (-(u11 * u12))) {
            u13 = *(float *)(((int)stk + 12));
            if (u13 > (-(u11 * u12))) {
                u15 = (u11 * u12);
                u15 = u15 + u7 * ((((struct o0_float *)0xC346AC4)->v));
                if (u15 > u10) {
                    u17 = (u11 * u12);
                    u17 = u17 + u7 * ((((struct o4_float *)0xC346AC4)->v));
                    if (!(u17 > u13)) {
                        return 0x0;
                    }
                    return 0x1;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c0dcfb0(int a4)
{
    int stk[4];
    register float u0;
    register float u1;
    register float u7;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u17;
    register float u19;

    *(unsigned int *)(((int)stk + 0)) = a4;
    u0 = (((struct o14_float *)(a4))->v);
    u1 = *(float *)0xC7FD648;
    nlPushMatrix(0x0);
    nlMultiMatrixRevOrder8(0xC7FCF80);
    nlCalcPoint(((*(int *)(((int)stk + 0))) + 0x8), (((int)stk + 0) + 0x4));
    nlPopMatrix(0x1);
    u7 = *(float *)(((int)stk + 4));
    if (!(((((struct o0_float *)0xC7FCCA4)->v)) > (u7 + ((u0 * u1))))) {
        if (!((u7 - ((u0 * u1))) > ((((struct o4_float *)0xC7FCCA4)->v)))) {
            u12 = *(float *)(((int)stk + 8));
            u13 = *(float *)0xC7FCF68;
            u14 = (u0 * u1);
            if (u12 > (-(u13 * u14))) {
                u15 = *(float *)(((int)stk + 12));
                if (u15 > (-(u13 * u14))) {
                    u17 = (u13 * u14);
                    u17 = u17 + u7 * ((((struct o0_float *)0xC346AC4)->v));
                    if (u17 > u12) {
                        u19 = (u13 * u14);
                        u19 = u19 + u7 * ((((struct o4_float *)0xC346AC4)->v));
                        if (!(u19 > u15)) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}
