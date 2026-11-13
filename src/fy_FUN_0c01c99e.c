/* Spawns a 5/1 object (kind 5) and fills it in: flags, argument byte at +4, a handler pointer from a table at 0x0C1804FC, a byte from the table at 0x0C180546, and for each of its 5 sub-blocks at +0x2E0 clears/marks it and calls FUN_0c06233a with a table-driven code (the last one depends on FUN_0c01d0ec(b)). */
extern char *FUN_0c059132(int, int, int, int);
extern char FUN_0c01d0ec(int);
extern void FUN_0c06233a(char *, char *, int);

void FUN_0c01c99e(char a, int b)
{
    char *o;
    signed char *p1;
    signed char *p2;
    int i;

    o = FUN_0c059132(5, 1, 5, 0);
    if (o == 0)
        return;
    o[0] = 1;
    o[3] = 2;
    o[4] = a;
    o[1] = 1;
    *(short *)(o + 6) = 15;
    o[5] = 1;
    *(int *)(o + 16) = ((int *)0x0C1804FC)[o[3]];
    o[15] = ((char *)0x0C180546)[(unsigned char)b];
    *(int *)(o + 52) = 0;
    *(int *)(o + 48) = 0;
    *(int *)(o + 44) = 0;
    p1 = (signed char *)0x0C180555;
    p2 = (signed char *)0x0C180546 + (unsigned char)b;
    for (i = 0; i < 5; i++) {
        **(char **)(o + 0x2E0 + 4 * i) = 1;
        *(short *)(*(char **)(o + 0x2E0 + 4 * i) + 2) = 0x41F;
        *(float *)(*(char **)(o + 0x2E0 + 4 * i) + 64) = 1.0f;
        if (i < 4) {
            FUN_0c06233a(*(char **)(o + 0x2E0 + 4 * i), (char *)0x0C664AA8, ((signed char *)0x0C180542)[i]);
        } else {
            if (FUN_0c01d0ec(b) != 0)
                FUN_0c06233a(*(char **)(o + 0x2E0 + 4 * i), (char *)0x0C664AA8, *p2);
            else
                FUN_0c06233a(*(char **)(o + 0x2E0 + 4 * i), (char *)0x0C664AA8, *p1);
        }
    }
}
