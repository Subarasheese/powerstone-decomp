/* Runs whichever of three sub-handlers (owner slots 0x2E0, 0x2E4, 0x2E8) are active; releases the object when none is. */
int FUN_0c033390(int);
int FUN_0c033442(int);
int FUN_0c033528(int);
int FUN_0c059330(int);

struct Obj {
    char p0[0x2E0];
    char *h0;               /* 0x2E0 */
    char *h1;               /* 0x2E4 */
    char *h2;               /* 0x2E8 */
};

void FUN_0c033602(struct Obj *o)
{
    int n = 0;

    if (*o->h0 != 0) {
        FUN_0c033390((int)o);
        n++;
    }
    if (*o->h1 != 0) {
        FUN_0c033442((int)o);
        n++;
    }
    if (*o->h2 != 0) {
        FUN_0c033528((int)o);
        n++;
    }
    if (n == 0) {
        FUN_0c059330((int)o);
    }
}
