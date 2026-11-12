/* Hand-written: dispatcher on the state byte of an object, tail-calling the handler of that state. */
int FUN_0c06382e(char *p);
int FUN_0c063d60(char *p);
int FUN_0c064130(char *p);
int FUN_0c0652a8(char *p);
int FUN_0c0652f4(char *p);
int FUN_0c0649a0(char *p);
int FUN_0c06544e(char *p);
int FUN_0c06566a(char *p);
int FUN_0c0656c4(char *p);
int FUN_0c06588c(char *p);
int FUN_0c0671c0(char *p);
int FUN_0c084878(char *p);
int FUN_0c084ac2(char *p);
int FUN_0c084444(char *p);

int FUN_0c084310(char *p)
{
    int sub;

    switch (*(unsigned char *)(p + 0x721F)) {
    case 1:
    case 3:
        return FUN_0c06382e(p);
    case 4:
        return FUN_0c084878(p);
    case 5:
        return FUN_0c063d60(p);
    case 6:
        return FUN_0c064130(p);
    case 7:
        return FUN_0c084ac2(p);
    case 8:
        return FUN_0c0652a8(p);
    case 9:
        return FUN_0c0652f4(p);
    case 10:
        return FUN_0c0649a0(p);
    case 11:
        return FUN_0c06544e(p);
    case 12:
        return FUN_0c06566a(p);
    case 13:
        sub = *(signed char *)(p + 0x721E);
        if (sub == 0) {
            return FUN_0c0656c4(p);
        }
        if (sub == 1) {
            return FUN_0c084444(p);
        }
        return sub;
    case 14:
        return FUN_0c06588c(p);
    case 15:
        return FUN_0c0671c0(p);
    default:
        return ((int (*)(char *))(*(int *)(0xC337B50 + *(unsigned char *)(p + 0x7238) * 4)))(p);
    }
}
