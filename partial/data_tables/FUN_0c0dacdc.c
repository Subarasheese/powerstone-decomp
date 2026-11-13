/* Draft: proven, but its cases embedded slices of the game data tables, so it is withdrawn until synthetic cases exist. */
void FUN_0c0dacdc(char *o)
{
    float d[3];
    float *V;
    unsigned short pad;
    float f5;
    short *sa;
    short *sb;
    short *sc;

    switch (o[4]) {
    case 0:
        o[4] = o[4] + 1;
        *(struct s52 *)(o + 0x1A8) = *(struct s52 *)0xC155230;
        /* fall through */
    case 1:
        pad = *(unsigned short *)0xC361C34;
        sa = (short *)(o + 0x1B4);
        sb = (short *)(o + 0x1B2);
        sc = (short *)(o + 0x1B6);
        if (!(pad & 0x400)) {
            if (pad & 0x40)
                *sa = *sa + 4;
            else if (*(unsigned short *)0xC361C34 & 0x80)
                *sa = *sa - 4;
            if (*sa < 0)
                *(short *)(o + 0x1B4) = *(short *)(o + 0x1B4) + 360;
            if (*sa > 360)
                *(short *)(o + 0x1B4) = *(short *)(o + 0x1B4) - 360;
            pad = *(unsigned short *)0xC361C34;
            if (pad & 0x10)
                *sb = *sb + 4;
            else if (pad & 0x20)
                *sb = *sb - 4;
            if (*sb < 0)
                *(short *)(o + 0x1B2) = *(short *)(o + 0x1B2) + 360;
            if (*sb > 360)
                *(short *)(o + 0x1B2) = *(short *)(o + 0x1B2) - 360;
            pad = *(unsigned short *)0xC361C34;
            if (pad & 4) {
                *sc = *sc - 20;
                if (*sc < 1)
                    *sc = 1;
            } else if (pad & 2) {
                *sc = *sc + 20;
            }
        } else {
            V = (float *)0xC33F9BC;
            d[0] = *(float *)(o + 0xEC) - *(float *)(o + 0xBC);
            d[1] = *(float *)(o + 0xF0) - *(float *)(o + 0xC0);
            d[2] = *(float *)(o + 0xF4) - *(float *)(o + 0xC4);
            if (d[0] == 0.0f && d[2] == 0.0f) {
                d[2] = 9.99999975e-05f;
                d[0] = 9.99999975e-05f;
            }
            FUN_0c0e24f0(d);
            pad = *(unsigned short *)0xC361C34;
            f5 = d[2] * 10.0f;
            if (pad & 0x40) {
                V[0] = V[0] + f5;
                V[2] = V[2] + (-(d[0] * 10.0f));
            } else if (pad & 0x80) {
                V[0] = V[0] - f5;
                V[2] = V[2] - (-(d[0] * 10.0f));
            }
            if (pad & 0x10)
                V[1] = V[1] + 10.0f;
            else if (pad & 0x20)
                V[1] = V[1] - 10.0f;
            f5 = d[0] * 10.0f;
            if (pad & 4) {
                V[0] = V[0] + f5;
                V[1] = V[1] + 10.0f * d[1];
                V[2] = V[2] + 10.0f * d[2];
            } else if (pad & 2) {
                V[0] = V[0] - f5;
                V[1] = V[1] - d[1] * 10.0f;
                V[2] = V[2] - d[2] * 10.0f;
            }
        }
        FUN_0c0d9288(o, o + 0x1A8);
        return;
    default:
        return;
    }
}
