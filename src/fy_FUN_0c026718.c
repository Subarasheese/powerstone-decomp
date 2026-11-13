/* Looks up the entry FUN_0c022952 finds for the object, builds its data in a local buffer (FUN_0c022b90 / FUN_0c022c1a / FUN_0c022ca8 then FUN_0c021090 / FUN_0c021042 / FUN_0c020ff2), then offers it to each active slot (counts at +0x2A8 / +0x2D8) through FUN_0c026076 / FUN_0c025f7a and returns the first result of 4 or more, else 0. */
extern char *FUN_0c022952(char *, int, int, int);
extern void FUN_0c022b90(char *, int, char *);
extern void FUN_0c021090(char *, char *, char *);
extern void FUN_0c022c1a(char *, int, char *);
extern void FUN_0c021042(char *, char *, char *);
extern void FUN_0c022ca8(char *, int, char *);
extern void FUN_0c020ff2(char *, char *, char *);
extern int FUN_0c026076(int, int, char *, int, int);
extern int FUN_0c025f7a(int, int, char *, int);

int FUN_0c026718(char *o)
{
    char buf[60];
    char *e;
    char *p;
    int i, r;
    char *s;

    e = FUN_0c022952(o, 1, o[0x102], 0);
    switch (e[1] & 15) {
    case 0:
        FUN_0c022b90(o, *(short *)(e + 2), buf + 44);
        FUN_0c021090(o, buf + 44, buf + 44);
        p = buf + 44;
        break;
    case 1:
        FUN_0c022c1a(o, *(short *)(e + 2), buf);
        FUN_0c021042(o, buf, buf);
        p = buf;
        break;
    case 2:
        FUN_0c022ca8(o, *(short *)(e + 2), buf + 20);
        FUN_0c020ff2(o, buf + 20, buf + 20);
        p = buf + 20;
        break;
    }
    for (i = 0; i < *(signed char *)(o + 0x2A8); i++) {
        s = *(char **)(o + 0x294 + i * 4);
        if (s[2] == 0 || s[2] == 1 || s[2] == 2) {
            r = FUN_0c026076(e[1], *(signed char *)(o + 0x2A9 + i), p, *(int *)(o + 0x280 + i * 4), *(int *)(o + 0x294 + i * 4));
            if ((signed char)r >= 4) {
                return r;
            }
        }
    }
    for (i = 0; i < *(signed char *)(o + 0x2D8); i++) {
        r = FUN_0c025f7a(e[1], *(signed char *)(o + 0x2B8 + i), p, *(int *)(o + 0x2C0 + i * 4));
        if ((signed char)r >= 4) {
            return r;
        }
    }
    return 0;
}
