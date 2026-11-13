/* Initialises an object from the record it links to (field 28): bumps its counter, copies the link's byte at 3, sets its flags, installs two constant vectors into the sub-record at 0x2e0, reacts to the mode byte at 0x30c, computes the position word at 0x118 from the link, and marks the global table entry at 0xC7F2664 on the first call. */
struct V3 { int a, b, c; };
struct Link {
    char p0[3];
    signed char tag;        /* 3 */
    char p4[0x300 - 4];
    char base[0x71f1 - 0x300];
    signed char sel;        /* 0x71f1 */
};
struct Sub {
    char p0[2];
    short s2;               /* 2 */
    struct V3 v4;           /* 4 */
    struct V3 v16;          /* 16 */
};
void FUN_0c05a8f8(char *);
void FUN_0c0a3796(int, int);
void FUN_0c05b0da(char *o)
{
    struct Link *l = *(struct Link **)(o + 28);
    struct Sub *sub;

    o[8] = o[8] + 1;
    o[3] = l->tag;
    o[1] = 1;
    o[0x105] = 1;
    o[0x107] = 1;
    FUN_0c05a8f8(o);
    sub = *(struct Sub **)(o + 0x2e0);
    sub->v4 = *(struct V3 *)0xC336220;
    sub = *(struct Sub **)(o + 0x2e0);
    sub->v16 = *(struct V3 *)0xC336238;
    if (o[0x30c] == 14)
        FUN_0c0a3796(o[3], 53);
    if (o[0x30c] == 2)
        (*(struct Sub **)(o + 0x2e0))->s2 = 15;
    *(int *)(o + 0x118) = (short)(l->sel * 3520) + (int)((char *)l + 0x300) + 0x580;
    if (o[11] == 0) {
        *(char *)(0xC7F2664 + 0x315) = o[13];
        *(char *)(0xC7F2664 + 0x316) = 1;
        o[11] = 1;
    }
}
