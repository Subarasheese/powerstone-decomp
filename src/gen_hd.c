/* Straight-line functions with calls and guards (batch gen_hd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0dd5d0(int, int);
int FUN_0c0dd9e0(int);
extern float _builtin_sqrtf(float);
int FUN_0c05fd86(int a4);
int FUN_0c0df650(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0df700(float f4);

int FUN_0c05fd86(int a4)
{
    register int t3;

    if ((*(signed char *)((a4 + 0x0))) == 0) {
        FUN_0c0dd9e0((*(int *)((a4 + 0x4))));
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)(*(short *)((a4 + 0x2)))) {
                break;
            }
            FUN_0c0dd5d0((*(int *)(((t3 << 2) + (*(int *)((a4 + 0x8)))))), (*(int *)((a4 + 0xC))));
            t3 = (t3 + 0x1);
        }
        *(unsigned char *)((a4 + 0x0)) = 0x1;
    }
    return 0x0;
}


