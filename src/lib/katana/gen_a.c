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
int vmu_lcd_set_busy_image(void);
int vmu_lcd_set_idle_image(void);
void FUN_0c010038(void);
int FUN_0c0100b0(int a4, int a5);
int FUN_0c010030(void);
int FUN_0c010028(void);
void FUN_0c01015c(void);
void FUN_0c01013c(void);

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
