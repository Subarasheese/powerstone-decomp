/* Camera follow step: state 0 (byte +3) runs FUN_0c0da1f6 for the camera mode and FUN_0c0da5b2, and once that is done copies the 52-byte camera preset from the pointer at 0xC34011C to +424 and derives the start angles (+434, +436, +438) from the object's words and floats; state 1 turns the angles (+436 and +434 by the pad bits 64/128 and 16/32, +438 by the bits 0x604) within the limits of the preset, and then calls FUN_0c0d9288(o, o + 424). */
struct S52 { int w[13]; };
int FUN_0c0da5b2(char *o);
void FUN_0c0da1f6(char *o, int v);
void FUN_0c0d9288(char *o, char *cam);
#define P (*(char **)0xC34011C)
#define PADF(o) (*(int *)((char *)0xC7F31F0 + (signed char)((signed char)(o)[388] * 36)))
void FUN_0c0da638(char *o)
{
    int v;
    float f;
    switch (o[3]) {
    case 0:
        FUN_0c0da1f6(o, *(int *)(0xC340554 + (signed char)o[4] * 4));
        if (FUN_0c0da5b2(o) == 0)
            return;
        o[3] = o[3] + 1;
        *(struct S52 *)(o + 424) = **(struct S52 **)0xC34011C;
        *(short *)(o + 434) = (short)(int)((float)*(int *)(o + 340) * 360.0f / 65536.0f);
        v = *(int *)(o + 276) - *(int *)(0xC7E40F4 + (unsigned short)((signed char)o[388] * 0x72D0));
        f = (float)v;
        if (f > 32768.0f)
            f = f + -65536.0f;
        *(short *)(o + 436) = (short)(int)(f * 360.0f / 65536.0f);
        *(short *)(o + 438) = (short)(int)*(float *)(o + 308);
        return;
    case 1:
        if (PADF(o) & 64) {
            if (*(short *)(o + 436) < 30)
                *(short *)(o + 436) = *(short *)(o + 436) + *(short *)(o + 444);
        } else if (PADF(o) & 128) {
            if (*(short *)(o + 436) > -30)
                *(short *)(o + 436) = *(short *)(o + 436) - *(short *)(o + 444);
        }
        if (PADF(o) & 16) {
            if (*(short *)(o + 434) < *(short *)(P + 10) + 60)
                *(short *)(o + 434) = *(short *)(o + 434) + *(short *)(o + 446);
        } else if (PADF(o) & 32) {
            if (*(short *)(o + 434) > *(short *)(P + 10) - 30)
                *(short *)(o + 434) = *(short *)(o + 434) - *(short *)(o + 446);
        }
        if (PADF(o) & 0x604) {
            if (*(short *)(o + 438) > *(short *)(P + 18))
                *(short *)(o + 438) = *(short *)(o + 438) - *(short *)(o + 440);
        } else {
            if (*(short *)(o + 438) < *(short *)(P + 14))
                *(short *)(o + 438) = *(short *)(o + 438) + *(short *)(o + 440);
        }
        FUN_0c0d9288(o, o + 424);
        return;
    default:
        return;
    }
}
