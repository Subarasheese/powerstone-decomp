/* For each of the three actors (pointer triples at +0x2E0, 12 bytes apart): runs FUN_0c0b16d8 on its first record and copies the 12-byte entries picked by that record's index byte (+64, times 12) from the two tables at 0xC152ED8 and 0xC152F20 into the second record (+4, +16) and the third one (same, entry 36 bytes on). */
typedef struct { int a, b, c; } S12;
extern void FUN_0c0b16d8(char *, char *);

void FUN_0c0b1a60(char *o)
{
    int i;
    char *p, *q1, *q2;
    char *ta, *tb;

    ta = (char *)0xC152ED8;
    tb = (char *)0xC152F20;
    for (i = 0; i < 3; i++) {
        p = *(char **)(o + 0x2E0 + i * 12);
        FUN_0c0b16d8(p, p + 40);
        q1 = *(char **)(o + 0x2E4 + i * 12);
        *(S12 *)(q1 + 4) = *(S12 *)(ta + (signed char)(p[64] * 12));
        *(S12 *)(q1 + 16) = *(S12 *)(tb + (signed char)(p[64] * 12));
        q2 = *(char **)(o + 0x2E8 + i * 12);
        *(S12 *)(q2 + 4) = *(S12 *)(ta + (signed char)(p[64] * 12) + 36);
        *(S12 *)(q2 + 16) = *(S12 *)(tb + (signed char)(p[64] * 12) + 36);
    }
}
