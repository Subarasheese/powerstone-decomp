/* Allocates 7 objects of kind 6/1/2 in a loop; each one that was obtained is marked, numbered with the loop index at +4, given a 12-byte template from 0x0C14BA34 at +80 and the callback FUN_0c057850 at +16. */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);
extern void FUN_0c057850(void);

void FUN_0c057ab6(void)
{
    S12 t;
    char *p;
    int i;

    t = *(S12 *)0x0C14BA34;
    for (i = 0; i < 7; i++) {
        p = FUN_0c059132(6, 1, 2, 0);
        if (p) {
            *p = 1;
            p[4] = i;
            *(void (**)(void))(p + 16) = FUN_0c057850;
            *(S12 *)(p + 80) = t;
        }
    }
}
