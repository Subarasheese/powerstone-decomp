/* Loads one stage's resource chunks into slot a of the buffer block at 0x0C664B50 (stride 0xB5EC8): copies 5 chunks of 512 bytes each from the table row for b (0x0C14E4C0, 120 bytes per b), then two lists of 5 chunks laid out one after another (pointer slots at the start of the slot and at +0xA1234), and finally the big chunk (size from FUN_0c05fc50). */
extern int FUN_0c05fc50(int);
extern void *memcpy(void *, const void *, unsigned int);

int FUN_0c062b1c(char a, char b)
{
    char *base = (char *)0x0C664B50 + a * 0xB5EC8;
    char *dst;
    int *e;
    int *ent;
    int i, off, len, r;

    FUN_0c05fc50(((int *)0x0C14E488)[b]);
    dst = base + 0xAAE88;
    e = (int *)(0x0C14E4C0 + (short)(b * 120));
    for (i = 0; i < 5; i++) {
        memcpy(dst, (char *)(e[2 * i] + 0x0CC00000), e[2 * i + 1]);
        dst += 512;
    }
    *(int *)base = (int)(base + 20);
    for (i = 0; i < 5; i++) {
        ent = e + 2 * (5 + i);
        len = ent[1];
        memcpy(*(char **)(base + 4 * i), (char *)(ent[0] + 0x0CC00000), len);
        if (i + 1 < 5)
            *(int *)(base + 4 * i + 4) = *(int *)(base + 4 * i) + len;
    }
    *(int *)(base + 0xA1234) = (int)(base + 0xA1248);
    ent = e + 20;
    off = 0;
    for (i = 0; i < 5; i++) {
        len = ent[1];
        memcpy(*(char **)(base + 0xA1234 + 4 * i), (char *)(ent[0] + 0x0CC00000), len);
        if (i + 1 < 5)
            *(int *)(base + 0xA1234 + off + 4) = *(int *)(base + 0xA1234 + off) + len;
        ent += 2;
        off += 4;
    }
    r = FUN_0c05fc50(((int *)0x0C14EAD8)[b]);
    memcpy(base + 0xAB888, (char *)0x0CC00000, r);
    return 0;
}
