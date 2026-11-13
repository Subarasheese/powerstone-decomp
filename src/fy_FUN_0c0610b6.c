/* Starts streaming a file (ADX file handle from FUN_0c0f547e): checks its size, stores its length, then waits on a frame counter (busy loop that unmasks interrupts after 0x600000 spins) until the load finishes (status 4: stop and return 2) or is done (status 3: return 0); a failed open returns 1, an oversized file 3. The result is also left in the status word at 0x0C383818. */
extern void FUN_0c061434();
extern int FUN_0c0f547e(int, int);
extern int FUN_0c0f5810(int);
extern int FUN_0c0f581e(int);
extern void FUN_0c0f5630(int, int, int);
extern int FUN_0c06148a(void);
extern void ADXF_Stop(int);
extern void FUN_0c0f5570(int);
extern void FUN_0c06144e(void);
extern void FUN_0c061f60(void);
extern void FUN_0c0a3274(void);
extern int FUN_0c0f5850(int);

int FUN_0c0610b6(int a, int b, int *c)
{
    int *status = (int *)0x0C383818;
    int *frame = (int *)0x0C386828;
    int *spin = (int *)0x0C383824;
    int *tick = (int *)0x0C383820;
    int h, t, v, st;

    FUN_0c061434(a, b, c);
    h = FUN_0c0f547e(a, 0);
    if (h == 0) {
        *status = 1;
        return 1;
    }
    t = FUN_0c0f5810(h);
    if ((t << 11) > 0x200000) {
        *status = 3;
        return 3;
    }
    *c = FUN_0c0f581e(h);
    FUN_0c0f5630(h, t, b);
    v = *frame;
    for (;;) {
        FUN_0c061434();
        *spin = 0;
        while (v == *frame) {
            *tick = *tick + 1;
            *spin = *spin + 1;
            if (*spin >= 0x600000) {
                _builtin_set_cr(_builtin_get_cr() & 0xFFFFFF0F);
                *spin = 0;
            }
        }
        v = *frame;
        if (*(int *)0x0C361BA0 == 0 && FUN_0c06148a() != 0) {
            ADXF_Stop(h);
            FUN_0c0f5570(h);
            FUN_0c06144e();
            *(int *)0x0C38682C = 1;
            FUN_0c061f60();
            for (;;)
                ;
        }
        FUN_0c0a3274();
        st = FUN_0c0f5850(h);
        if (st == 4) {
            ADXF_Stop(h);
            FUN_0c0f5570(h);
            *status = 2;
            return 2;
        }
        if (st == 3) {
            FUN_0c0f5570(h);
            *status = 0;
            return 0;
        }
    }
}
