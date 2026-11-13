/* Loads the model block a: copies its data to 0xC618940, relocates its three pointer lists into one table at 0xC618620 and builds three draw records handed to FUN_0c05fd86. */
struct Out { short h0; short h2; int w4; int w8; int w12; int w16; int w20; };
extern int FUN_0c05fcda(int a);
extern void FUN_0c05fc68(int a);
extern void FUN_0c05fd86(struct Out *o, int q);
extern void *memcpy(void *d, const void *s, unsigned n);
void FUN_0c0603d8(char a)
{
    int *P = (int *)0xC618620;
    int base = 0xC618940;
    int *rec;
    int *q;
    int *l2;
    int *l3;
    int i, j, k;
    struct Out *A = (struct Out *)0xC664940;
    struct Out *B = (struct Out *)0xC664958;
    struct Out *C = (struct Out *)0xC664970;
    int n = FUN_0c05fcda(((int *)0xC14DDD8)[a]);
    memcpy((void *)0xC618940, (void *)0xCC00000, n);
    A->w8 = (int)P;
    rec = (int *)(0xC350B60 + a * 52);
    q = (int *)rec[0];
    i = 0;
    do {
        P[i] = *q++ + base;
        i++;
    } while (i < 10);
    B->w8 = (int)&P[i];
    for (j = 0; j < rec[8]; j++) {
        P[i] = ((int *)rec[1])[j] + base;
        i++;
    }
    C->w8 = (int)&P[i];
    l3 = &P[i];
    for (k = 0; k < rec[9]; k++) {
        l3[k] = ((int *)rec[2])[k] + base;
    }
    FUN_0c05fc68(((int *)0xC14DD9C)[a]);
    A->h2 = 10;
    B->h2 = rec[8];
    C->h2 = rec[9];
    A->w12 = base + rec[10];
    B->w12 = A->w12;
    C->w12 = A->w12;
    A->w4 = 100;
    B->w4 = 100;
    C->w4 = 100;
    A->w16 = 0;
    B->w16 = rec[6];
    C->w16 = 0;
    A->w20 = 0;
    B->w20 = rec[7];
    C->w20 = 0;
    FUN_0c05fd86(A, 0xC14DE14);
    FUN_0c05fd86(B, 0xC14DE1C);
    FUN_0c05fd86(C, 0xC14DE20);
}
