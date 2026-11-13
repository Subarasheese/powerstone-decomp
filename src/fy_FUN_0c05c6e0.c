/* Calls FUN_0c0624c4 on the object's +0x2E4 block (+0x9C) with a table at 0x0C4CFA68 and 0x84 + (state & 7), copies 12 bytes from the +0x2E0 block (+4) to the +0x2E4 block (+4), and adds 25.0 to the float at +8 of the +0x2E4 block. */
typedef struct { int a, b, c; } S12;
extern void FUN_0c0624c4(char *, char *, int);

void FUN_0c05c6e0(char *o)
{
    FUN_0c0624c4(*(char **)(o + 0x2E4) + 0x9C, (char *)0x0C4CFA68, 0x84 + (*(char *)0x0C7F307C & 7));
    *(S12 *)(*(char **)(o + 0x2E4) + 4) = *(S12 *)(*(char **)(o + 0x2E0) + 4);
    *(float *)(*(char **)(o + 0x2E4) + 8) += 25.0f;
}
