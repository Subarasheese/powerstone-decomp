/* Debug readout for a stage object: the left/right input bits (+72) step the selection short at +156 (wrapping at 255), then the selected record's 12 bytes are copied to the owner's +44 (when the short at +164 is set), the owner's entry is drawn through FUN_0c06233a and two text lines are printed with sprintf into the debug buffer 0xC7F36B8. */
typedef struct { int a, b, c; } S12;
extern int sprintf(char *, int, int, int, const char *, int);
extern void FUN_0c06233a(int a, int b, int c);
extern void FUN_0c0ccefc(char *s, int n, float x, float y, float sx, float sy);
void FUN_0c0d16d2(char *o)
{
    char *p = *(char **)(o + 40);
    char *buf;
    int sel, rec;
    float eight = 8.0f;

    if (*(int *)(o + 72) & 64) {
        *(short *)(o + 156) = *(short *)(o + 156) - 1;
        if ((unsigned short)*(short *)(o + 156) > 255)
            *(short *)(o + 156) = 255;
    }
    if (*(int *)(o + 72) & 128) {
        *(short *)(o + 156) = *(short *)(o + 156) + 1;
        if ((unsigned short)*(short *)(o + 156) > 255)
            *(short *)(o + 156) = 0;
    }
    if (*(short *)(o + 164) != 0) {
        rec = *(int *)(0xC350B7C + (short)((unsigned char)o[158] * 52));
        *(S12 *)(p + 44) = *(S12 *)(rec + (unsigned short)*(short *)(o + 156) * 12);
        FUN_0c06233a(*(int *)(p + 736), 0xC664958, *(short *)(o + 156));
    } else {
        FUN_0c06233a(*(int *)(p + 736), 0xC4CFA68, *(short *)(o + 156));
    }
    buf = (char *)0xC7F36B8;
    sprintf(buf, 0, 0, 0, (const char *)0xC1544D0, 0);
    FUN_0c0ccefc(buf, 7, 40.0f, 136.0f, eight, eight);
    sprintf(buf, 0, 0, 0, (const char *)0xC1544C8, (unsigned short)*(short *)(o + 156));
    FUN_0c0ccefc(buf, 7, 160.0f, 136.0f, eight, eight);
}
