/* Straight-line functions with calls and guards (batch gen_a): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct oC_int { char p[0xC]; int v; };
int ovMdlEntryTbl(int);
int ovMdlDeleteTbl(int);
#pragma inline_asm(iaOcbp)
static void iaOcbp(void *p)
{
    .DATA.W H'04A3
}
int FUN_0c0101a8(void);
int FUN_0c010160(void);
void FUN_0c010038(void);
int FUN_0c0100b0(int a4, int a5);
int FUN_0c010030(void);
int FUN_0c010028(void);
void FUN_0c01015c(void);
void FUN_0c01013c(void);

int FUN_0c0101a8(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = 0xC178230;
    t1 = 0xC0;
    t2 = 0xC177B70;
    for (;;) {
        t3 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        t4 = 0x7;
        t5 = 0x0;
        for (;;) {
            if ((((unsigned int)(unsigned char)t3 << (int)(-t4)) & 0x1) != 0) {
                *(unsigned char *)((t2 + 0x0)) = 0x8;
            } else {
                *(unsigned char *)((t2 + 0x0)) = 0x0;
            }
            t5 = (t5 + 0x1);
            t2 = (t2 + 0x1);
            t4 = (t4 - 1);
            if ((int)t5 >= (int)0x8) {
                break;
            }
        }
        t1 = (t1 - 0x1);
        if (t1 == 0) {
            break;
        }
    }
    return t3;
}

int FUN_0c010160(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = 0xC178170;
    t1 = 0xC0;
    t2 = 0xC177B70;
    for (;;) {
        t3 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        t4 = 0x7;
        t5 = 0x0;
        for (;;) {
            if ((((unsigned int)(unsigned char)t3 << (int)(-t4)) & 0x1) != 0) {
                *(unsigned char *)((t2 + 0x0)) = 0x0;
            } else {
                *(unsigned char *)((t2 + 0x0)) = 0x8;
            }
            t5 = (t5 + 0x1);
            t2 = (t2 + 0x1);
            t4 = (t4 - 1);
            if ((int)t5 >= (int)0x8) {
                break;
            }
        }
        t1 = (t1 - 0x1);
        if (t1 == 0) {
            break;
        }
    }
    return t3;
}

void FUN_0c010038(void)
{
    register int t0;

    t0 = ((((struct o0_int *)0xC1161D0)->v));
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)((((struct oC_int *)0xC1161D0)->v))) {
            break;
        }
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x1);
    }
    t0 = ((((struct o0_int *)0xC15A0E0)->v));
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)((((struct oC_int *)0xC15A0E0)->v))) {
            break;
        }
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x1);
    }
}

int FUN_0c0100b0(int a4, int a5)
{
    register int t1;
    register int t2;

    t1 = (a4 & 0xFFFFFFE0);
    t2 = ((unsigned int)((unsigned int)((unsigned int)a5 >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbp((void *)t1);
        t1 = (t1 + 0x20);
        t2 = (t2 - 0x1);
        if (t2 == 0) {
            break;
        }
    }
    return t1;
}

int FUN_0c010030(void)
{
    return ovMdlDeleteTbl((*(int *)0xC15A0B4));
}

int FUN_0c010028(void)
{
    return ovMdlEntryTbl((*(int *)0xC15A0B4));
}

void FUN_0c01015c(void)
{
    
}

void FUN_0c01013c(void)
{
    
}
