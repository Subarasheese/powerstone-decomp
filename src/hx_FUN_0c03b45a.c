/* Steps an object's counter at +0xEC; when it reaches the limit at +0xEE, or when the object's two match fields
   (+0xF0, +0xF2) no longer match the bytes at +0x71A4/+0x71A5 of the record it points at (+0x1C), it hands the
   object to FUN_0c059330 (tail call; the second argument is the record, or the caller's r5 on the limit path). */
extern int FUN_0c059330(char *o, int a);

int FUN_0c03b45a(char *o, int a5)
{
    short n = *(short *)(o + 0xEC) + 1;
    char *p;

    *(short *)(o + 0xEC) = n;
    if (n >= *(short *)(o + 0xEE))
        return FUN_0c059330(o, a5);
    p = *(char **)(o + 0x1C);
    if (*(short *)(o + 0xF0) != *(signed char *)(p + 0x71A4))
        return FUN_0c059330(o, (int)p);
    if (*(short *)(o + 0xF2) == *(unsigned char *)(p + 0x71A5))
        return 0x71A5;
    return FUN_0c059330(o, (int)p);
}
