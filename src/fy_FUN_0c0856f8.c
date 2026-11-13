/* Random pick for object o: one time in 32 (random*255 % 32 == 0), when the short at +238 is positive, it consumes the next entry (+238 counts down, +240 selects the row of 4) of the byte table at 0xC15053A and tail-calls FUN_0c03d8b0 with it; otherwise it calls FUN_0c03d8b0 with a random 0..2. */
extern float FUN_0c0df940(void);
extern void FUN_0c03d8b0(char *o, int k);
void FUN_0c0856f8(char *o)
{
    if ((unsigned)(FUN_0c0df940() * 255.0f) % 32 == 0 && *(short *)(o + 238) > 0) {
        *(short *)(o + 238) = *(short *)(o + 238) - 1;
        FUN_0c03d8b0(o, *(signed char *)(0xC15053A + *(short *)(o + 240) * 4 + *(short *)(o + 238)));
        return;
    }
    FUN_0c03d8b0(o, (unsigned)(FUN_0c0df940() * 255.0f) % 3);
}
