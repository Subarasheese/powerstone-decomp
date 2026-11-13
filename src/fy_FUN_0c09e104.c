/* Sets an object's motion vector from its table row (row = 152 bytes per kind at byte 4, 76 per variant at 0x71f1, table at 0xC339540): z/x speed components at 56/64 are the row speed at 20 times cos/sin of the heading, the heading being the turn target when it lies within about +-30 degrees of the current one; mode 4 clears the components instead. */
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);
int FUN_0c09ddfe(char *);
int FUN_0c09db78(char *);
void FUN_0c09e104(char *o)
{
    int ang, d, a;
    float *row;

    ang = (unsigned short)(*(short *)0xC7F31E0 + FUN_0c09ddfe(o));
    d = (unsigned short)(ang - FUN_0c09db78(o));
    if (d & 0x8000)
        d |= 0xffff0000;
    if (d >= -5461 && d <= 5461)
        ang = FUN_0c09db78(o);
    row = (float *)(0xC339540 + (signed char)o[4] * 152 + (unsigned char)(o[0x71f1] * 76));
    if (o[0x71ef] == 4) {
        *(float *)(o + 76) = 0.0f;
        *(float *)(o + 68) = 0.0f;
        *(float *)(o + 64) = 0.0f;
        *(float *)(o + 56) = 0.0f;
        *(float *)(o + 60) = row[4];
        *(float *)(o + 72) = row[6];
    } else {
        *(float *)(o + 76) = 0.0f;
        *(float *)(o + 68) = 0.0f;
        *(float *)(o + 60) = row[4];
        *(float *)(o + 72) = row[6];
        a = 0x14000 - ang;
        *(float *)(o + 56) = row[5] * FUN_0c0df4d0(a);
        *(float *)(o + 64) = row[5] * FUN_0c0dfa50(a);
    }
}
