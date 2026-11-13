/* Looks up an 8-byte entry (index idx) in the table selected by the object's kind (+2) and sub-kind (+3), copies it to a local, hands it to FUN_0c020e78 with the third argument, and returns the entry's address. */
typedef struct { char b[8]; } E8;
extern void FUN_0c020e78(int, E8 *);

E8 *FUN_0c022b90(char *o, unsigned short idx, int arg)
{
    E8 local;
    E8 *p;
    int k = 0;
    int v;

    switch (o[2]) {
    case 0:
        v = o[3];
        k = (v >= 2 ? v - 2 : v) << 1;
        break;
    case 1:
        v = o[3];
        k = ((v >= 2 ? v - 2 : v) << 1) + 1;
        break;
    case 2:
    case 3:
    case 4:
        k = 4;
        break;
    }
    p = ((E8 **)0x0C7D08EC)[k * 8] + idx;
    local = *p;
    FUN_0c020e78(arg, &local);
    return p;
}
