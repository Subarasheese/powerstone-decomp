/* Starts state 18 of the object (+0x71BA), clears +0x71BC, calls FUN_0c09a808 with a random choice (3 or 2) and sets the flags at +0x71A8/+0x71A9 and a 60 timer at +0xEC. */
extern float FUN_0c0df940(void);
extern int FUN_0c09a808(char *o, int a, int b);
void FUN_0c0a12d8(char *o)
{
    o[0x71BA] = 18;
    o[0x71BC] = 0;
    if ((unsigned)(FUN_0c0df940() * 255.0f) % 2 == 0)
        FUN_0c09a808(o, 3, 3);
    else
        FUN_0c09a808(o, 3, 2);
    o[0x71A9] = 1;
    o[0x71A8] = 1;
    *(short *)(o + 0xEC) = 60;
}
