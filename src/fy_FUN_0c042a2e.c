/* Spawns eight copies of the 12-byte vector b offset by consecutive entries of the table at 0xC149F44 (chosen by the player's mode byte and the flag bit 2 of 0xC7F3014), then creates the effect object with FUN_0c042f48 and, when it exists, sets its scale float (+792) to 1.2 or 1.0 and its short +236 from the table at 0xC7E4340. */
typedef struct { int a, b, c; } S12;
extern void FUN_0c062050(S12 *d, S12 *a, S12 *b);
extern char *FUN_0c042f48(int a, int b, int c, S12 *buf, void *p2, void *p1);
void FUN_0c042a2e(int a, S12 *b)
{
    S12 buf[8];
    char *o;
    int mode, r8, r10, r13, i;
    float f;

    a = (signed char)a;
    r8 = (*(int *)0xC7F3014 & 2) << 1;
    mode = *(signed char *)(0xC7E40C8 + (unsigned short)(a * 29392));
    if (mode == 4 || mode == 5 || mode == 8 || mode == 9)
        r10 = 12;
    else
        r10 = 0;
    r13 = (signed char)r8;
    for (i = 0; i < 8; i++) {
        buf[i] = *b;
        FUN_0c062050(&buf[i], &buf[i], (S12 *)(0xC149F44 + (short)(((signed char)r10 + r13) * 12)));
        r13++;
    }
    o = FUN_0c042f48(a, 8, 2, buf, (void *)(0xC149EB4 + (unsigned char)(r8 * 12)),
                     (void *)(0xC14A110 + (unsigned char)((*(unsigned char *)0xC7F3014 & 7) * 12)));
    if (o != 0) {
        mode = *(signed char *)(0xC7E40C8 + (unsigned short)(a * 29392));
        if (mode == 4 || mode == 5 || mode == 8 || mode == 9)
            f = 1.19999993f;
        else
            f = 1.0f;
        *(float *)(o + 776 + 16) = f;
        *(short *)(o + 236) = *(signed char *)(0xC7E4340 + (unsigned short)(a * 29392));
    }
}
