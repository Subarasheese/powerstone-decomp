/* Dispatch on the entry type (low nibble of byte +1) of the entry FUN_0c022952 finds for the object: builds the entry's data (FUN_0c022b90 / FUN_0c022c1a / FUN_0c022ca8) in a local buffer and applies it (FUN_0c021090 / FUN_0c021042 / FUN_0c020ff2); returns the type. */
extern char *FUN_0c022952(char *, int, int, int);
extern void FUN_0c022b90(char *, int, char *);
extern void FUN_0c021090(char *, int, char *);
extern void FUN_0c022c1a(char *, int, char *);
extern void FUN_0c021042(char *, int, char *);
extern void FUN_0c022ca8(char *, int, char *);
extern void FUN_0c020ff2(char *, int, char *);

int FUN_0c023524(char *o, int c)
{
    char buf[60];
    char *e;

    e = FUN_0c022952(o, 1, o[0x102], 0);
    switch (e[1] & 15) {
    case 0:
        FUN_0c022b90(o, *(short *)(e + 2), buf + 44);
        FUN_0c021090(o, c, buf + 44);
        break;
    case 1:
        FUN_0c022c1a(o, *(short *)(e + 2), buf);
        FUN_0c021042(o, c, buf);
        break;
    case 2:
        FUN_0c022ca8(o, *(short *)(e + 2), buf + 20);
        FUN_0c020ff2(o, c, buf + 20);
        break;
    }
    return e[1] & 15;
}
