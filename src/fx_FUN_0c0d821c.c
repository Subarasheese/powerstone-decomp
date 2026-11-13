/* Projects two points to the screen (templates at 0xC7E40E4 and 0xC7EB3B4) and sets obj byte +20 to 0 when the second projected x is greater than the first, else 1. */
typedef struct { int a, b, c; } S12;
extern void nlProjectScreen(void *, float *);

void FUN_0c0d821c(char *obj)
{
    S12 pt;
    float o1[2];
    float o2[2];

    pt = *(S12 *)(0xC7E40C4 + 32);
    nlProjectScreen(&pt, o1);
    pt = *(S12 *)(0xC7EB394 + 32);
    nlProjectScreen(&pt, o2);
    if (o2[0] > o1[0]) {
        obj[20] = 0;
    } else {
        obj[20] = 1;
    }
}
