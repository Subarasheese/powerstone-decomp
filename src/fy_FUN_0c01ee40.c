/* Dispatches on the mode byte at +49 of the object: modes 0/2/3/5/17 run FUN_0c01fb0c and, when it does not report an error (< 0), continue with the mode's handler (2 sets 2,0 in the global at 0xC362A50, 5 -> FUN_0c01f19e, 3 and 17 -> FUN_0c01f0e4); 6, 8 go straight to FUN_0c01f1f6 / FUN_0c01f28e and 7 copies +47 to the global. */
extern signed char FUN_0c01fb0c(char *o);
extern void FUN_0c01f19e(char *o);
extern void FUN_0c01f0e4(char *o);
extern void FUN_0c01f1f6(char *o);
extern void FUN_0c01f28e(char *o);
void FUN_0c01ee40(char *o)
{
    char *g = (char *)0xC362A50;
    switch (o[49]) {
    case 0:
        FUN_0c01fb0c(o);
        break;
    case 2:
        if (FUN_0c01fb0c(o) >= 0) {
            g[2] = 2;
            g[3] = 0;
        }
        break;
    case 5:
        if (FUN_0c01fb0c(o) >= 0)
            FUN_0c01f19e(o);
        break;
    case 3:
    case 17:
        if (FUN_0c01fb0c(o) >= 0)
            FUN_0c01f0e4(o);
        break;
    case 6:
        FUN_0c01f1f6(o);
        break;
    case 7:
        g[0] = o[47];
        break;
    case 8:
        FUN_0c01f28e(o);
        break;
    }
}
