/* Rebuilds the four flag words (+0x2DC..) of player slot a4 from a copied snapshot and a per-button lookup. */
struct snap { int w[9]; };

void FUN_0c092908(int a4)
{
    char *b;
    struct snap s;
    int j, k;
    signed char *sel;
    int *mask, *val;
    signed char *vtab;

    b = (char *)0xC7E40C4 + (unsigned short)((unsigned short)a4 * (unsigned short)0x72D0);
    s = *(struct snap *)(b + 0x2DC);
    *(int *)(b + 0x2DC) &= 0xFFFCF8F8;
    *(int *)(b + 0x2E0) &= 0xFFFCF8F8;
    *(int *)(b + 0x2E4) &= 0xFFFCF8F8;
    *(int *)(b + 0x2E8) &= 0xFFFCF8F8;
    *(unsigned char *)(b + 0x7204) = 0;
    mask = (int *)0xC1508D0;
    val = (int *)0xC1508F0;
    vtab = (signed char *)0xC150914;
    sel = (signed char *)0xC7F4750 + 29 + a4 * 8;
    for (j = 0; j < 8; j++) {
        for (k = 0; k < 4; k++) {
            if (s.w[k] & mask[j])
                *(int *)(b + 0x2DC + 4 * k) |= val[sel[j]];
            if (k == 2 && (s.w[2] & mask[j]))
                *(signed char *)(b + 0x7204) = vtab[sel[j]];
        }
    }
}
