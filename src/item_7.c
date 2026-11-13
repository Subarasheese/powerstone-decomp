/* item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item (0c05c6e0-0c05ca54) */

typedef struct { int x, y, z; } S12;
extern void FUN_0c0624c4(char *, char *, int);

void FUN_0c05c6e0(char *obj)
{
    FUN_0c0624c4(*(char **)(obj + 0x2E4) + 0x9C, (char *)0x0C4CFA68, 0x84 + (*(char *)0x0C7F307C & 7));
    *(S12 *)(*(char **)(obj + 0x2E4) + 4) = *(S12 *)(*(char **)(obj + 0x2E0) + 4);
    *(float *)(*(char **)(obj + 0x2E4) + 8) += 25.0f;
}
