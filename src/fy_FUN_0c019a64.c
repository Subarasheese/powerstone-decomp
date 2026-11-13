/* Draws one sprite: fills a 56-byte record (position from slot a5, scale from the halfword at offset 6 of the object, picture size from the table at 0xC11BA58) and hands it to FUN_0c027fa4. */
extern float FUN_0c0dfa50(int);
extern void FUN_0c027fa4(float *, int, int, int, int, int);

void FUN_0c019a64(char *obj, signed char slot)
{
    float rec[14];

    rec[1] = 32.0f;
    rec[2] = 80.0f + 40.0f * (float)slot;
    rec[3] = 7.0999999f;
    ((int *)rec)[10] = 0;
    ((int *)rec)[13] = 5;
    rec[11] = 0.75f + 0.25f * FUN_0c0dfa50(*(short *)(obj + 6));
    rec[4] = ((float *)0xC11BA58)[slot];
    rec[5] = 1.0f;
    FUN_0c027fa4(rec, 0xC17FEA4, 1, 24, 0, 0);
}
