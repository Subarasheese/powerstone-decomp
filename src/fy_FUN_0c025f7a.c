/* 3x3 dispatch on the low nibbles of the two kind arguments: calls the handler of that (kind, subkind) pair with (c, d) and returns its result, or returns the first argument unchanged for an unknown pair. */
extern int FUN_0c0235ca(int, int);
extern int FUN_0c0235ce(int, int);
extern int FUN_0c023680(int, int);
extern int FUN_0c02374e(int, int);
extern int FUN_0c02380c(int, int);
extern int FUN_0c0238be(int, int);
extern int FUN_0c0239b6(int, int);
extern int FUN_0c023a52(int, int);
extern int FUN_0c023b22(int, int);

int FUN_0c025f7a(int a, int b, int c, int d)
{
    switch (a & 15) {
    case 0:
        switch (b & 15) {
        case 0:
            a = FUN_0c0235ca(c, d);
            break;
        case 1:
            a = FUN_0c0235ce(c, d);
            break;
        case 2:
            a = FUN_0c023680(c, d);
            break;
        }
        break;
    case 1:
        switch (b & 15) {
        case 0:
            a = FUN_0c02374e(c, d);
            break;
        case 1:
            a = FUN_0c02380c(c, d);
            break;
        case 2:
            a = FUN_0c0238be(c, d);
            break;
        }
        break;
    case 2:
        switch (b & 15) {
        case 0:
            a = FUN_0c0239b6(c, d);
            break;
        case 1:
            a = FUN_0c023a52(c, d);
            break;
        case 2:
            a = FUN_0c023b22(c, d);
            break;
        }
        break;
    }
    return a;
}
