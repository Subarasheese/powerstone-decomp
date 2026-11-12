/* Hand-written: dispatcher on the state byte of an object; most states run the two update helpers and tail-call the handler of that state. */
int FUN_0c0d811e(char *p);
int FUN_0c0d821c(char *p);
int FUN_0c0d83c6(char *p);
int FUN_0c0d827e(char *p);
int FUN_0c0d87f6(char *p);
int FUN_0c0da42c(char *p);
int FUN_0c0da434(char *p);
int FUN_0c0da43c(char *p);
int FUN_0c0da4f0(char *p);
int FUN_0c0da54a(char *p);
int FUN_0c0da57e(char *p);
int FUN_0c0da638(char *p);
int FUN_0c0da874(char *p);
int FUN_0c0da886(char *p);
int FUN_0c0da8ae(char *p);
int FUN_0c0da952(char *p);
int FUN_0c0daa9e(char *p);
int FUN_0c0dab24(char *p);
int FUN_0c0dabbe(char *p);
int FUN_0c0dabfe(char *p);
int FUN_0c0dacdc(char *p);
int FUN_0c0daf52(char *p);
int FUN_0c0dafcc(char *p);
int FUN_0c0dafee(char *p);
int FUN_0c0db01c(char *p);
int FUN_0c0db03e(char *p);
int FUN_0c0db0e8(char *p);
int FUN_0c0db0fa(char *p);
int FUN_0c0db14a(char *p);
int FUN_0c0db184(char *p);
int FUN_0c0db1c0(char *p);
int FUN_0c0db9e6(char *p);
int FUN_0c0dbbf4(char *p);
int FUN_0c0dbe30(char *p);
int FUN_0c0dbf94(char *p);
int FUN_0c0dc9d4(char *p);

int FUN_0c0d8468(char *p)
{
    int r;

    switch (*(signed char *)(p + 2)) {
    case 0:
        FUN_0c0d811e(p);
        FUN_0c0d821c(p);
        r = FUN_0c0d83c6(p);
        if (r == 1) {
            return FUN_0c0db9e6(p);
        }
        if (r == 2) {
            return FUN_0c0dbe30(p);
        }
        if (r == 3) {
            return FUN_0c0dbbf4(p);
        }
        if (r == 4) {
            return FUN_0c0dbf94(p);
        }
        return FUN_0c0db1c0(p);
    case 1:
        FUN_0c0d811e(p);
        FUN_0c0d821c(p);
        return FUN_0c0da4f0(p);
    case 2:
        return FUN_0c0da54a(p);
    case 3:
        FUN_0c0d811e(p);
        FUN_0c0d821c(p);
        FUN_0c0dab24(p);
        return FUN_0c0d827e(p);
    case 4:
        FUN_0c0d811e(p);
        FUN_0c0d821c(p);
        FUN_0c0dabbe(p);
        return FUN_0c0d827e(p);
    case 5:
        FUN_0c0d811e(p);
        FUN_0c0d821c(p);
        return FUN_0c0da57e(p);
    case 6:
        FUN_0c0d811e(p);
        FUN_0c0d821c(p);
        return FUN_0c0da638(p);
    case 7:
        FUN_0c0d811e(p);
        FUN_0c0d821c(p);
        return FUN_0c0da874(p);
    case 8:
    case 9:
        FUN_0c0d811e(p);
        FUN_0c0d821c(p);
        return FUN_0c0dafcc(p);
    case 10:
        FUN_0c0d811e(p);
        FUN_0c0d821c(p);
        return FUN_0c0dafee(p);
    case 11:
    case 12:
        FUN_0c0d811e(p);
        FUN_0c0d821c(p);
        return FUN_0c0d87f6(p);
    case 13:
        FUN_0c0d811e(p);
        FUN_0c0d821c(p);
        return FUN_0c0da886(p);
    case 14:
        FUN_0c0d811e(p);
        FUN_0c0d821c(p);
        return FUN_0c0da952(p);
    case 15:
        FUN_0c0d811e(p);
        FUN_0c0d821c(p);
        return FUN_0c0daf52(p);
    case 16:
        FUN_0c0d811e(p);
        FUN_0c0d821c(p);
        return FUN_0c0da43c(p);
    case 17:
        FUN_0c0d811e(p);
        FUN_0c0d821c(p);
        return FUN_0c0dabfe(p);
    case 18:
        FUN_0c0d811e(p);
        FUN_0c0d821c(p);
        return FUN_0c0da8ae(p);
    case 19:
        FUN_0c0d811e(p);
        FUN_0c0d821c(p);
        FUN_0c0dc9d4(p);
        return FUN_0c0d827e(p);
    case 20:
        FUN_0c0d811e(p);
        FUN_0c0d821c(p);
        FUN_0c0daa9e(p);
        return FUN_0c0d827e(p);
    case 21:
        FUN_0c0d811e(p);
        FUN_0c0d821c(p);
        FUN_0c0db01c(p);
        return FUN_0c0d827e(p);
    case 22:
        FUN_0c0d811e(p);
        FUN_0c0d821c(p);
        FUN_0c0db03e(p);
        return FUN_0c0d827e(p);
    case 23:
        return FUN_0c0db0e8(p);
    case 24:
        return FUN_0c0db0fa(p);
    case 25:
        return FUN_0c0db14a(p);
    case 26:
        return FUN_0c0db184(p);
    case 27:
        FUN_0c0d811e(p);
        FUN_0c0d821c(p);
        FUN_0c0dacdc(p);
        return FUN_0c0d827e(p);
    case 28:
        return FUN_0c0da434(p);
    default:
        return FUN_0c0da42c(p);
    }
}
