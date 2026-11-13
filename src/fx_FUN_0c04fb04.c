/* Spawn a random scatter for the active slot: two random offsets (-500..490, in steps of 10) and a copy of the saved word, then flag the slot ready. */
float FUN_0c0df940(void);
int FUN_0c04cdf2(void);

#define SLOT ((char *)0xC366F40 + (short)((short)*(unsigned char *)0xC3673EE * (short)0x254))

int FUN_0c04fb04(void)
{
    unsigned int r;
    int x;

    r = (unsigned int)(FUN_0c0df940() * 255.0f);
    *(float *)(SLOT + 96) = (float)(short)(int)(10.0f * (float)(r % 100) + -500.0f);
    *(float *)(SLOT + 100) = 0.0f;
    r = (unsigned int)(FUN_0c0df940() * 255.0f);
    *(float *)(SLOT + 104) = (float)(short)(int)(10.0f * (float)(r % 100) + -500.0f);
    *(int *)(SLOT + 12) = *(int *)0xC3673E8;
    x = FUN_0c04cdf2();
    *(short *)0xC3673EC = 1;
    return x;
}
