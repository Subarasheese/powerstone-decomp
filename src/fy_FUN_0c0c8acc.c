/* Spawns a dust-cloud slot (type 1, size 4) for an object with variant a5: copies its character number, position and angles (angle shifted by a table entry), clears the 20-byte block at +776 and sets its first byte from a table, and initialises the four child slots (the first three from the object tables, the last as a 0.125-scaled puff). */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);
extern void FUN_0c06233a(char *, char *, int);
extern char g_0c6002d0[];
extern void *memset(void *, int, int);
extern void FUN_0c0c8d80(void);

void FUN_0c0c8acc(char *o, unsigned char a5)
{
    char *s, *c;
    int z;
    float one;

    s = FUN_0c059132(1, 1, 4, 0);
    if (s == 0) {
        return;
    }
    s[0] = 1;
    s[3] = o[3];
    s[4] = o[4];
    s[1] = 1;
    *(short *)(s + 6) = 31;
    s[5] = 25;
    *(void (**)(void))(s + 16) = FUN_0c0c8d80;
    *(S12 *)(s + 32) = *(S12 *)(o + 32);
    *(S12 *)(s + 44) = *(S12 *)(o + 44);
    one = 1.0f;
    *(int *)(s + 44) = *(int *)(s + 44) + ((int *)0xC33C948)[a5];
    *(float *)(s + 84) = one;
    *(float *)(s + 80) = one;
    *(float *)(s + 88) = one;
    memset(s + 776, 0, 20);
    *(char *)(s + 776 + 6) = ((char *)0xC153350)[a5];
    z = 0;
    c = *(char **)(s + 0x2E0);
    c[0] = 1;
    c = *(char **)(s + 0x2E0);
    *(short *)(c + 2) = 31;
    FUN_0c06233a(*(char **)(s + 0x2E0), g_0c6002d0 + (signed char)(o[3] * 24), 21);
    c = *(char **)(s + 0x2E0);
    *(float *)(c + 36) = 0.0f;
    *(int *)(c + 144) = z;
    c = *(char **)(s + 0x2E4);
    c[0] = 1;
    c = *(char **)(s + 0x2E4);
    *(short *)(c + 2) = 31;
    FUN_0c06233a(*(char **)(s + 0x2E4), g_0c6002d0 + (signed char)(o[3] * 24), 22);
    c = *(char **)(s + 0x2E4);
    *(float *)(c + 36) = 0.0f;
    *(int *)(c + 144) = z;
    c = *(char **)(s + 0x2E8);
    c[0] = 1;
    c = *(char **)(s + 0x2E8);
    *(short *)(c + 2) = 31;
    FUN_0c06233a(*(char **)(s + 0x2E8), g_0c6002d0 + (signed char)(o[3] * 24), 23);
    c = *(char **)(s + 0x2E8);
    *(float *)(c + 36) = 0.0f;
    *(int *)(c + 144) = z;
    c = *(char **)(s + 0x2EC);
    FUN_0c06233a(c, (char *)0xC4CFA68, 106);
    c[0] = 0;
    *(short *)(c + 2) = 543;
    *(float *)(c + 36) = 0.125f;
    *(float *)(c + 32) = 0.125f;
    *(float *)(c + 28) = 0.125f;
    *(float *)(c + 32) = one;
    *(float *)(c + 28) = one;
    *(float *)(c + 36) = one / *(float *)(s + 88);
    *(float *)(c + 76) = one;
    *(float *)(c + 72) = one;
    *(float *)(c + 68) = one;
    *(char **)(s + 28) = o;
    *(short *)(s + 236) = 4;
    *(short *)(s + 238) = a5;
}
