/* Sets up the matrices of a model object and its part objects (table of pointers at 0x2e0, count byte at 0x2dc): per object, by its flag halfword (mask 0x1bf, bit 32 = full transform with a stored matrix), loads a unit matrix, applies position/rotation/scale through FUN_0c02ccbc and writes the matrix with FUN_0c0e0ae0. */
extern void nlUnitMatrix(void);
extern void nlMultiMatrix(char *);
extern void nlCalcPoint(char *, float *);
int FUN_0c0e1550(int);
int FUN_0c0e1240(char *);
void FUN_0c0e0ae0(char *);
void FUN_0c0e2080(float *);
void FUN_0c02ccbc(int, char *, char *, char *);
void FUN_0c02cd60(char *o)
{
    float tmp[3];
    signed char i;
    char *e;

    FUN_0c0e1550(1);
    if (*(unsigned short *)(o + 6) & 0x1bf) {
        nlUnitMatrix();
        if (*(unsigned short *)(o + 6) & 32) {
            FUN_0c02ccbc(*(short *)(o + 6) & -2, o + 32, o + 44, o + 80);
            FUN_0c0e0ae0(o + 108);
            FUN_0c0e1240((char *)(0xC7F29F8 + 108));
            FUN_0c0e2080((float *)(o + 32));
            nlMultiMatrix(o + 108);
        } else {
            if (*(int *)(o + 0x118) != 0)
                FUN_0c0e1240(*(char **)(o + 0x118));
            FUN_0c02ccbc(*(short *)(o + 6), o + 32, o + 44, o + 80);
        }
        FUN_0c0e0ae0(o + 108);
    }
    for (i = 0; i < o[0x2dc]; i++) {
        e = *(char **)(o + 0x2e0 + i * 4);
        if (*(unsigned short *)(e + 2) & 0x1bf) {
            if (*(int *)(e + 0x90) != 0)
                FUN_0c0e1240(*(char **)(e + 0x90));
            else
                FUN_0c0e1240(o + 108);
            if (*(unsigned short *)(e + 2) & 32) {
                nlCalcPoint(e + 4, tmp);
                nlUnitMatrix();
                FUN_0c02ccbc(*(short *)(e + 2) & -2, e + 4, e + 16, e + 28);
                FUN_0c0e0ae0(e + 80);
                FUN_0c0e1240((char *)(0xC7F29F8 + 108));
                FUN_0c0e2080(tmp);
                nlMultiMatrix(e + 80);
            } else {
                FUN_0c02ccbc(*(short *)(e + 2), e + 4, e + 16, e + 28);
            }
            FUN_0c0e0ae0(e + 80);
        }
    }
}
