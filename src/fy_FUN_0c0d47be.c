/* Debug-text print of a 120-byte record (index i, wrapped to a byte): formats its short at +68 with one of four strings (chosen by that value > 1 and the byte at +9) into the debug buffer, then draws the text at a position from FUN_0c0d5bc0 and the byte at +9. */
extern int sprintf(char *, const char *, ...);
extern float FUN_0c0d5bc0(void);
extern void FUN_0c02d9e0(const char *, int, float, float, float, float);

void FUN_0c0d47be(unsigned short i)
{
    char *e = (char *)0x0C7F2DF0 + (unsigned char)(i * 120);
    char *buf = (char *)0x0C7F36B8;
    short s = *(short *)(e + 68);
    const char *fmt;
    float x;

    if (s > 1) {
        if (e[9] == 0)
            fmt = (const char *)0x0C154828;
        else
            fmt = (const char *)0x0C154834;
    } else {
        if (e[9] == 0)
            fmt = (const char *)0x0C15484C;
        else
            fmt = (const char *)0x0C154854;
    }
    sprintf(buf, fmt, s);
    x = FUN_0c0d5bc0();
    FUN_0c02d9e0(buf, 0, (float)(e[9] * 19 + 1) * 16.0f, x + 16.0f, 1.0f, 1.0f);
}
