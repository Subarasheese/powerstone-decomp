/* Stage-select cursor step: state 0 loads the stage's two limits from a table into the record at 33fe54, then states 0 and 1 run the common update. */
struct T40 { short s[20]; };
extern signed char g_302c[];
int FUN_0c0da1f6(char *, char *);

void FUN_0c0db0fa(char *p)
{
    struct T40 t;
    char *r;
    int i;

    t = *(struct T40 *)0xC155264;
    r = (char *)0xC33FE54;
    if (p[4] == 0) {
        p[4] = p[4] + 1;
        i = g_302c[37] * 2;
        *(short *)(r + 14) = t.s[i];
        *(short *)(r + 8) = t.s[i];
        i = g_302c[37] * 2;
        *(short *)(r + 18) = t.s[i + 1];
        *(short *)(r + 12) = t.s[i + 1];
        FUN_0c0da1f6(p, r);
    } else if (p[4] == 1) {
        FUN_0c0da1f6(p, r);
    }
}
