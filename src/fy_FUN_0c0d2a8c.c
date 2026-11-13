/* Debug dump of an object's ten state fields: for each it prints the value into the debug buffer 0xC7F36B8 with sprintf and draws that text at row (30*o[5]+10)*8 and column 24, 32, ... 96. */
extern int sprintf(char *, int, int, int, const char *, int);
extern void FUN_0c0ccefc(char *s, int n, float y, float x, float sx, float sy);
void FUN_0c0d2a8c(char *o)
{
    char *buf = (char *)0xC7F36B8;
    char *base;
    float eight = 8.0f;

    sprintf(buf, 0, 0, 0, (const char *)0xC154588, o[6]);
    FUN_0c0ccefc(buf, 7, (float)((o[5] * 30 + 10) * 8), 24.0f, eight, eight);
    sprintf(buf, 0, 0, 0, (const char *)0xC15459C, (unsigned char)o[7]);
    FUN_0c0ccefc(buf, 7, (float)((o[5] * 30 + 10) * 8), 32.0f, eight, eight);
    sprintf(buf, 0, 0, 0, (const char *)0xC1545B0, o[8]);
    FUN_0c0ccefc(buf, 7, (float)((o[5] * 30 + 10) * 8), 40.0f, eight, eight);
    sprintf(buf, 0, 0, 0, (const char *)0xC1545C4, (unsigned char)o[9]);
    FUN_0c0ccefc(buf, 7, (float)((o[5] * 30 + 10) * 8), 48.0f, eight, eight);
    base = (char *)(0xC7E40C4 + (unsigned short)(o[5] * 29392));
    sprintf(buf, 0, 0, 0, (const char *)0xC1545D8, (unsigned char)base[29084]);
    FUN_0c0ccefc(buf, 7, (float)((o[5] * 30 + 10) * 8), 56.0f, eight, eight);
    base = (char *)(0xC7E40C4 + (unsigned short)(o[5] * 29392));
    sprintf(buf, 0, 0, 0, (const char *)0xC1545EC, (unsigned char)base[29094]);
    FUN_0c0ccefc(buf, 7, (float)((o[5] * 30 + 10) * 8), 64.0f, eight, eight);
    base = (char *)(0xC7E40C4 + (unsigned short)(o[5] * 29392));
    sprintf(buf, 0, 0, 0, (const char *)0xC154600, *(unsigned short *)(base + 29086));
    FUN_0c0ccefc(buf, 7, (float)((o[5] * 30 + 10) * 8), 72.0f, eight, eight);
    sprintf(buf, 0, 0, 0, (const char *)0xC154614, *(unsigned short *)(o + 162));
    FUN_0c0ccefc(buf, 7, (float)((o[5] * 30 + 10) * 8), 80.0f, eight, eight);
    sprintf(buf, 0, 0, 0, (const char *)0xC154628, (unsigned char)(*(char **)(o + 28))[257]);
    FUN_0c0ccefc(buf, 7, (float)((o[5] * 30 + 10) * 8), 88.0f, eight, eight);
    sprintf(buf, 0, 0, 0, (const char *)0xC15463C, (unsigned char)(*(char **)(o + 28))[258]);
    FUN_0c0ccefc(buf, 7, (float)((o[5] * 30 + 10) * 8), 96.0f, eight, eight);
}
