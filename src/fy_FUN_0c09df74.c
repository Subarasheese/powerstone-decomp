/* Sets a velocity from an angle: clears two floats (+76, +68), takes the table entry for the character (stride 152) and costume (byte at +0x71F1 * 76) at 0x0C339540, picks a column by the move kind (FUN_0c09c6b8: 12 for kinds 1/2/3/15/16, else 8 when the byte at +0x7237 is 3, else 4), and stores cos(angle) * entry at +56 and sin(angle) * entry at +64 (angle = 0x14000 - a2). */
extern int FUN_0c09c6b8(char *);
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);

void FUN_0c09df74(char *o, int a2)
{
    char *tbl = (char *)0x0C339540;
    int ang = 0x14000 - a2;
    int off;
    char *p;

    *(float *)(o + 76) = 0.0f;
    *(float *)(o + 68) = 0.0f;
    switch ((signed char)FUN_0c09c6b8(o)) {
    case 1:
    case 2:
    case 3:
    case 15:
    case 16:
        off = 12;
        break;
    default:
        if (o[0x7237] == 3)
            off = 8;
        else
            off = 4;
        break;
    }
    p = tbl + o[4] * 152 + (unsigned char)(o[0x71F1] * 76);
    *(float *)(o + 56) = FUN_0c0df4d0(ang) * *(float *)(p + off);
    p = tbl + o[4] * 152 + (unsigned char)(o[0x71F1] * 76);
    *(float *)(o + 64) = FUN_0c0dfa50(ang) * *(float *)(p + off);
}
