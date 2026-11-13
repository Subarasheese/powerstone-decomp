/* Spawns a stage item / power stone (slot `kind`, the item pool at 0x0C7F2664 + 0x318, count at +0x32C; with more
   than 3 slots the first busy one (+0x30D) is reused) at `pos`: resets its state and timers, loads its model
   (FUN_0c0624c4 with the item model table 0x0C4CFA68, model kind + 89), and either launches it (dir == -1: pushed 100
   units forward, flying at 20 units per frame) or drops it in place with the default velocity and spin vectors
   (0x0C336320 / 0x0C33632C / 0x0C336338); then shows its parts, registers it (FUN_0c0498c4) and starts its action 17
   (FUN_0c0a3796). */
void FUN_0c0624c4(char *model, void *table, int kind);
float FUN_0c0df4d0(int angle);
float FUN_0c0dfa50(int angle);
void FUN_0c0498c4(char *e);
void FUN_0c0a3796(int side, int action);

typedef struct { float x, y, z; } VEC3;

#define G ((char *)0x0C7F2664)
#define SLOT(i) (((char **)(G + 0x318))[i])
#define H(o, n) (*(short *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define MDL(e, n) (*(char **)((e) + 0x2E0 + (n)))

void FUN_0c05cb46(VEC3 *pos, char kind, char dir)
{
    struct { signed char dir; float step; int ang; float speed; } s;
    char *e;
    int i, n, a;

    s.ang = 0;
    s.speed = 0.0f;
    s.dir = dir;
    n = *(signed char *)(G + 0x32C);
    if (n > 3) {
        for (i = 0; i < n; i++) {
            if (SLOT(i)[0x30D] != 0) {
                e = SLOT(i);
                break;
            }
        }
    } else {
        e = SLOT((signed char)kind);
    }
    e[1] = 0;
    e[0x30D] = 0;
    e[8] = 0;
    e[9] = 0;
    e[10] = 0;
    e[11] = 0;
    e[12] = 0;
    e[13] = s.dir;
    e[14] = kind;
    H(e, 0xEC) = 0;
    H(e, 0xEE) = 0;
    *(VEC3 *)(e + 32) = *pos;
    FUN_0c0624c4(MDL(e, 0) + 156, (void *)0x0C4CFA68, kind + 89);
    if (s.dir == -1) {
        a = 0x14000 - s.ang;
        F(e, 32) = F(e, 32) + 100.0f * FUN_0c0df4d0(a);
        F(e, 40) = F(e, 40) + 100.0f * FUN_0c0dfa50(a);
        s.step = s.speed / 20.0f;
        F(e, 56) = FUN_0c0df4d0(a) * 20.0f;
        F(e, 60) = s.step * 0.599999964f;
        F(e, 64) = FUN_0c0dfa50(a) * 20.0f;
        *(VEC3 *)(MDL(e, 0) + 28) = *(VEC3 *)0x0C336320;
    } else {
        *(VEC3 *)(e + 56) = *(VEC3 *)0x0C336320;
        F(e, 60) = 20.0f;
        *(VEC3 *)(MDL(e, 0) + 28) = *(VEC3 *)0x0C33632C;
    }
    *(VEC3 *)(e + 68) = *(VEC3 *)0x0C336338;
    e[0x107] = 0;
    MDL(e, 0)[0] = 1;
    MDL(e, 4)[0] = 0;
    MDL(e, 8)[0] = 0;
    MDL(e, 12)[0] = 0;
    FUN_0c0498c4(e);
    FUN_0c0a3796(*(signed char *)(e + 3), 17);
}
