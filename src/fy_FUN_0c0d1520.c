/* Debug-menu editor for one numeric field: shoulder/direction bits (+72) step the 16-bit value at +156 down (0x10) / up (0x20) with wrap at 255, and the row byte at +158 up/down (0x40 / 0x80, 0..9) with a menu refresh; then loads the selected 12-byte table row (when +164 is set), hands the value to FUN_0c06233a and prints the label, row number and value with sprintf + FUN_0c0ccefc. */
typedef struct { int a, b, c; } S12;
extern void FUN_0c0603c4(void);
extern void FUN_0c0603d8(int);
extern void FUN_0c062d78(void);
extern void FUN_0c06233a(char *, char *, int);
extern int sprintf(char *, const char *, ...);
extern void FUN_0c0ccefc(char *, int, float, float, float, float);

void FUN_0c0d1520(char *o)
{
    char *p = *(char **)(o + 40);
    char *buf = (char *)0x0C7F36B8;
    char *r5;

    if (*(int *)(o + 72) & 0x10) {
        *(short *)(o + 156) = *(short *)(o + 156) - 1;
        if ((unsigned short)*(short *)(o + 156) > 255)
            *(short *)(o + 156) = 255;
    }
    if (*(int *)(o + 72) & 0x20) {
        *(short *)(o + 156) = *(short *)(o + 156) + 1;
        if ((unsigned short)*(short *)(o + 156) > 255)
            *(short *)(o + 156) = 0;
    }
    if (*(int *)(o + 72) & 0x40) {
        if ((unsigned char)o[158] > 0)
            o[158] = o[158] - 1;
        FUN_0c0603c4();
        FUN_0c0603d8(o[158]);
        FUN_0c062d78();
    }
    if (*(int *)(o + 72) & 0x80) {
        if ((unsigned char)o[158] < 9)
            o[158] = o[158] + 1;
        FUN_0c0603c4();
        FUN_0c0603d8(o[158]);
        FUN_0c062d78();
    }
    if (*(short *)(o + 164) != 0) {
        *(S12 *)(p + 44) = *(S12 *)(*(char **)((char *)0x0C350B7C + (short)((unsigned char)o[158] * 52)) + (unsigned short)*(short *)(o + 156) * 12);
        r5 = (char *)0x0C664958;
    } else {
        r5 = (char *)0x0C4CFA68;
    }
    FUN_0c06233a(*(char **)(p + 0x2E0), r5, *(short *)(o + 156));
    sprintf(buf, (const char *)0x0C1544E0);
    FUN_0c0ccefc(buf, 7, 80.0f, 104.0f, 8.0f, 8.0f);
    sprintf(buf, (const char *)0x0C1544C8, (unsigned char)o[158]);
    FUN_0c0ccefc(buf, 7, 200.0f, 104.0f, 8.0f, 8.0f);
    sprintf(buf, (const char *)0x0C1544D0);
    FUN_0c0ccefc(buf, 7, 80.0f, 112.0f, 8.0f, 8.0f);
    sprintf(buf, (const char *)0x0C1544C8, (unsigned short)*(short *)(o + 156));
    FUN_0c0ccefc(buf, 7, 200.0f, 112.0f, 8.0f, 8.0f);
}
