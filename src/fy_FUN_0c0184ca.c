/* Builds a 56-byte parameter block on the stack from entry idx (12 bytes each) of the table at 0xC11B3D0: two overlapping 8-byte copies from +4 and +8 of the entry, then 7.0 at +12, fr4/1.0 at +16/+20, 0 at +40, fr5 at +44 and 5 at +52, and passes it with the entry's first halfword to FUN_0c027fa4. */
typedef struct { int a, b; } S8;
extern void FUN_0c027fa4(void *, int, int, int, int, int);
void FUN_0c0184ca(char idx, float a, float b)
{
    int rec[14];
    char *e = (char *)0xC11B3D0 + (short)(idx * 12);
    *(S8 *)((char *)rec + 4) = *(S8 *)(e + 4);
    *(S8 *)((char *)rec + 8) = *(S8 *)(e + 8);
    *(float *)&rec[3] = 7.0f;
    rec[10] = 0;
    *(float *)&rec[11] = b;
    rec[13] = 5;
    *(float *)&rec[4] = a;
    *(float *)&rec[5] = 1.0f;
    FUN_0c027fa4(rec, 0xC17FEA4, 0, *(short *)e, 0, 0);
}
