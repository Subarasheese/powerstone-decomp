/* Searches the two actor lists of the table at 0xC7E4070 for an active actor (not the current player id) in one of the given states; returns it or 0. */
struct Act {
    signed char active;     /* 0x00 */
    char p1[2];
    signed char owner;      /* 0x03 */
    signed char kind;       /* 0x04 */
    char p5[0x18 - 5];
    struct Act *next;       /* 0x18 */
    char p1c[0x30D - 0x1C];
    signed char mode;       /* 0x30D */
};
struct Tab {
    char p0[8];
    struct Act *list1;      /* 0x08 */
    struct Act *list2;      /* 0x0C */
};

struct Act *FUN_0c04cb96(void)
{
    struct Tab *s = (struct Tab *)0xC7E4070;
    unsigned char id = *(unsigned char *)0xC3673EE;
    struct Act *p;
    struct Act *next;

    for (p = s->list1; p != 0; p = next) {
        next = p->next;
        if (p->active != 0 && p->owner != id && (p->kind == 1 || p->kind == 18) &&
            (p->mode == 6 || p->mode == 7 || p->mode == 8 || p->mode == 9 || p->mode == 10 || p->mode == 11 || p->mode == 12)) {
            return p;
        }
    }
    for (p = s->list2; p != 0; p = next) {
        next = p->next;
        if (p->active != 0 && p->owner != id && p->kind == 6 && (p->mode == 13 || p->mode == 14 || p->mode == 15)) {
            return p;
        }
    }
    return 0;
}
