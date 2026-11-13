/* Draws an object's two sets of parts (counts from the table of byte pairs at 0xC320034 selected by the byte at 2): for each part record from FUN_0c022952 it builds the part's transform in a local block and submits it with FUN_0c024300 / FUN_0c024298 / FUN_0c0243b0 depending on the part kind. */
void FUN_0c023ebc(float *);
signed char *FUN_0c022952(char *, int, int, int);
void FUN_0c0229d8(char *, int, float *);
void FUN_0c022d50(char *, float *, int);
void FUN_0c022e90(char *, float *, int);
void FUN_0c021120(char *, float *, signed char *);
void FUN_0c0210f4(char *, float *, signed char *);
void FUN_0c0210c8(char *, float *, signed char *);
void FUN_0c024300(float *, float, float, float, float);
void FUN_0c024298(float *, float, float, float, float, float);
void FUN_0c0243b0(float *, float *, float, float, float);
void FUN_0c023f0a(char *o)
{
    float b[19];
    signed char *tbl = (signed char *)0xC320034;
    signed char *q;
    int j;

    FUN_0c023ebc((float *)(o + 32));
    if (o[0x105] == 0) {
        for (j = 0; j < tbl[o[2] * 2]; j++) {
            q = FUN_0c022952(o, 0, o[0x101], j);
            if (q[1] == 0) {
                FUN_0c0229d8(o, *(short *)(q + 2), b);
                FUN_0c022d50(o, b, q[0]);
                FUN_0c022e90(o, b, q[0]);
                FUN_0c024300(b, b[3], 1.0f, 0.0f, 0.0f);
            }
        }
    }
    for (j = 0; j < tbl[o[2] * 2 + 1]; j++) {
        q = FUN_0c022952(o, 1, o[0x102], j);
        if (j == 0) {
            if (o[0x107] == 0) {
                switch (q[1] & 15) {
                case 0:
                    FUN_0c021120(o, b + 15, q);
                    FUN_0c024300(b + 15, b[18], 0.0f, 0.0f, 1.0f);
                    break;
                case 1:
                    FUN_0c0210f4(o, b + 4, q);
                    FUN_0c024298(b + 4, b[8], b[7], 0.0f, 0.0f, 1.0f);
                    break;
                case 2:
                    FUN_0c0210c8(o, b + 9, q);
                    FUN_0c0243b0(b + 9, b + 12, 0.0f, 0.0f, 1.0f);
                    break;
                }
            }
        } else if (o[0x106] == 0) {
            if (q[1] == 0) {
                FUN_0c0229d8(o, *(short *)(q + 2), b);
                FUN_0c022d50(o, b, q[0]);
                FUN_0c022e90(o, b, q[0]);
                FUN_0c024300(b, b[3], 0.0f, 1.0f, 0.0f);
            }
        }
    }
}
