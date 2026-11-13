/* Per-frame timer step: after FUN_0c09a910, counts down the short at +0xEC and, when it runs out, reloads it with 300 and refreshes the object from the record at 0xC338E26 (byte, 0x10000 / ushort, short) and from two floats of the object at +28. */
typedef struct { char b0; char pad; unsigned short w2; short w4; } P;
extern void FUN_0c09a910(char *);

void FUN_0c098370(char *o)
{
    P *p;
    short c;
    float **q;

    FUN_0c09a910(o);
    c = *(short *)(o + 0xEC) - 1;
    *(short *)(o + 0xEC) = c;
    if (c <= 0) {
        p = (P *)0xC338E26;
        *(short *)(o + 0xEC) = 300;
        *(short *)(o + 0xEE) = 0;
        *(char *)(o + 0x723E) = p->b0;
        *(int *)(o + 0x7248) = 0x10000 / p->w2;
        *(short *)(o + 0xF0) = p->w4;
        o[11]++;
        *(float *)(o + 0x727C) = (*(float **)(o + 28))[8];
        *(float *)(o + 0x7284) = (*(float **)(o + 28))[10];
    }
}
