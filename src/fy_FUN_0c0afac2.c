/* Counts down a timer at +44 of the sub-object at +0x2E4; when it hits zero reloads it with 2, steps the index at +40 modulo 3 and calls FUN_0c06231c(obj, 0xC664958, index + 39). */
extern int FUN_0c06231c(int *, int, int);

void FUN_0c0afac2(unsigned char *a4)
{
    int *o = *(int **)(a4 + 0x2E4);

    if (--o[11] == 0) {
        o[11] = 2;
        o[10] = (o[10] + 1) % 3;
        FUN_0c06231c(o, 0xC664958, o[10] + 39);
    }
}
