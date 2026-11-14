/* scratch */
struct o40_int { char p[0x40]; int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4C_short { char p[0x4C]; short v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int gdFsWaitCompleteReq(int);
void FUN_0c0f1bb2(int a4, int a5, int a6, int a7);

void FUN_0c0f1bb2(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    if ((a4 != 0) && (t0 = (((struct o4C_short *)(a4))->v), t0 != 0)) {
        if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x1C))) == 0) {
            t0 = _builtin_get_imask();
            _builtin_set_imask(0xF);
            t1 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((a4 + 0x0))) + 0xC))) + 0x18)))))(((*(int *)((a4 + 0x8))) + (*(int *)((a4 + 0x14)))), a5, a6, a7);
            if (t1 != 0) {
                *(unsigned int *)((a4 + 0x3C)) = t1;
                (((struct o50_ushort *)(a4))->v) = 0x3;
                (((struct o48_ushort *)(a4))->v) = 0x2;
                *(unsigned int *)(((*(int *)((a4 + 0x0))) + 0x1C)) = a4;
                t2 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)((a4 + 0x0))) + 0xC)))))->v))))();
            }
            _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
            if (t1 != 0) {
                gdFsWaitCompleteReq(a4);
            }
        }
    }
}

