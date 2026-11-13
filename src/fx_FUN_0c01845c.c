/* Builds a 56-byte cell record from table entry idx (12-byte entries at 0xC11B3D0: x, y copied, z fixed at 7.0) and hands it to FUN_0c027fa4. */
typedef struct {
    int w0;
    float x, y, z;
    float f4, f5;
    int w6, w7, w8, w9;
    int w10;
    float f11;
    int w12;
    int w13;
} S56;
extern int g8_o17fea4;
void FUN_0c027fa4(S56 *src, int *o, short idx, int n, char c5, char c6);

void FUN_0c01845c(signed char idx)
{
    short *e;
    S56 s;

    e = (short *)(0xC11B3D0 + (short)(idx * 12));
    s.x = ((float *)e)[1];
    s.y = ((float *)e)[2];
    s.z = 7.0f;
    s.f4 = 1.0f;
    s.f5 = 1.0f;
    s.w10 = 0;
    s.f11 = 1.0f;
    s.w13 = 5;
    FUN_0c027fa4(&s, &g8_o17fea4, 0, *e, 0, 0);
}
