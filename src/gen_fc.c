/* Straight-line functions with calls and guards (batch gen_fc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o30_int { char p[0x30]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c0fffb8(int, int, int, int);
int FUN_0c0ffc30(int a4, int a5, int a6, int a7);
int FUN_0c0ffaf8(int a4);
int FUN_0c0ffb32(int a4);
int FUN_0c0ffb4c(void);

int FUN_0c0ffc30(int a4, int a5, int a6, int a7)
{
    register int t3;
    register int t6;

    (((struct o0_uint *)0xC805490)->v) = (((((struct o0_int *)0xC805490)->v)) + 0x1);
    if ((*(int *)0xC805710) != 0) {
        (((struct oC_uint *)0xC805490)->v) = (((((struct oC_int *)0xC805490)->v)) + 0x1);
        t3 = (((struct o30_int *)0xC805490)->v);
        if (t3 != 0) {
            t6 = (((int (*)(int, int, int, int))(t3))(0x0, 0xFFFFFFFF, ((((struct o0_int *)0xC805490)->v)), 0x0));
        }
        return t6;
    }
    return FUN_0c0fffb8(a4, a5, a6, a7);
}

int FUN_0c0ffaf8(int a4)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t1 = a4;
    if (((unsigned short)a4 != 0) && (((unsigned short)a4 != 1) && (((unsigned short)a4 != 2) && (((unsigned short)a4 != 3) && ((unsigned short)a4 != 4))))) {
        t1 = 0x2;
    }
    t2 = *(volatile signed char *)0xFFD80004;
    t3 = *(volatile signed char *)0xFFD80004;
    *(volatile unsigned char *)0xFFD80004 = (t3 & 0xFB);
    t4 = *(volatile short *)0xFFD80028;
    *(volatile unsigned short *)0xFFD80028 = ((t4 & 0xFFFFFFF8) | t1);
    *(volatile unsigned char *)0xFFD80004 = t2;
    return (t3 & 0xFB);
}

int FUN_0c0ffb32(int a4)
{
    register int t0;
    register int t1;

    t0 = *(volatile signed char *)0xFFD80004;
    t1 = *(volatile signed char *)0xFFD80004;
    *(volatile unsigned char *)0xFFD80004 = (t1 & 0xFB);
    *(volatile unsigned int *)0xFFD80020 = 0xFFFFFFFF;
    *(volatile unsigned int *)0xFFD80024 = (-a4);
    *(volatile unsigned char *)0xFFD80004 = t0;
    return (t1 & 0xFB);
}

int FUN_0c0ffb4c(void)
{
    register int t0;

    t0 = *(volatile int *)0xFFD80024;
    return (0xFFFFFFFF - t0);
}
