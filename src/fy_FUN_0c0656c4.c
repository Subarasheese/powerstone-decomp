/* Spawns the effect entries of a fighter's current animation frame: in modes 0/1 (+0x721E) it walks two 2-byte entries of the table at 0xC14ED54 (row from +4 and the side flag +0x71EC, +4 for mode 1) and, for each whose record in the table at 0xC14EB94 carries the current frame (+240, incremented first), calls FUN_0c046830; then FUN_0c09a910, FUN_0c09da1c and, if +0x71AA is set, FUN_0c0a2080 and the two flags. */
extern int FUN_0c046830(int, int, int, int, int, int, int, int);
extern void FUN_0c09a910(char *o);
extern void FUN_0c09da1c(char *o);
extern void FUN_0c0a2080(char *o);
void FUN_0c0656c4(char *o)
{
    signed char *p;
    char *e;
    int k, i, mode;

    k = (1 - o[0x71EC]) & 1;
    *(short *)(o + 240) = *(short *)(o + 240) + 1;
    mode = o[0x721E];
    if (mode == 0 || mode == 1) {
        p = (signed char *)(0xC14ED54 + o[4] * 16 + (k << 3) + (mode == 1 ? 4 : 0));
        for (i = 0; i < 2; i++, p += 2) {
            if (p[0] >= 0) {
                e = (char *)(0xC14EB94 + p[0] * 32);
                if (*(short *)e == *(short *)(o + 240))
                    FUN_0c046830(o[3], 0, e[4], p[1], *(short *)(e + 2), 82, (int)(e + 8), (int)(e + 20));
            }
        }
    }
    FUN_0c09a910(o);
    FUN_0c09da1c(o);
    if (o[0x71AA] != 0) {
        FUN_0c0a2080(o);
        o[0x71A9] = 1;
        o[0x71A8] = 1;
    }
}
