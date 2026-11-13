/* Straight-line functions with calls and guards (batch gen_ai): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int math_signed_sqrt(float);
int FUN_0c1070a0(int);
int FUN_0c10796a(int, int);
int mwRnaErrCallFunc(int, int, int, int);
int FUN_0c107482(int a4, int a5, int a6, int a7);
int math_mat_row_length(int a4, int a5);

int FUN_0c107482(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t2;
    register int t5;

    if (a4 == 0) {
        return (mwRnaErrCallFunc(0xC15B31C, a5, a6, a7));
    }
    t2 = *(signed char *)((a4 + 0x1));
    t5 = t2;
    if (t2 != 0) {
        FUN_0c1070a0(((int)stk + 0));
        t5 = (FUN_0c10796a(a4, 0x0));
    }
    return t5;
}

