/* Looks up the 10-byte record number idx in the list picked by the object's kind (byte +2) and sub-kind (byte +3), hands a copy of it to FUN_0c020e3e with the third argument, and returns the record's address. */
typedef struct { char b[10]; } S10;
extern void FUN_0c020e3e(int, S10 *);

S10 *FUN_0c022c1a(char *o, unsigned short idx, int a6)
{
    S10 loc;
    S10 *p;
    int v, k;

    v = o[3];
    switch (o[2]) {
    case 0:
        k = (v >= 2 ? v - 2 : v) << 1;
        break;
    case 1:
        k = ((v >= 2 ? v - 2 : v) << 1) + 1;
        break;
    case 2:
    case 3:
    case 4:
        k = 4;
        break;
    default:
        k = 0;
        break;
    }
    p = ((S10 **)0xC7D08F0)[k * 8] + idx;
    loc = *p;
    FUN_0c020e3e(a6, &loc);
    return p;
}
