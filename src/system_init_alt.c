/* boot/init/shutdown of the system, file loader with retry (gd error handler), boot sequence returning the next scene (0c061094-0c0612f4) */

struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int sys_load_file_adx(int, int, int);
int FUN_0c06144e(void);
int sys_shutdown_all(void);
int gdFsReinit(int);

int sys_load_file(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t2;
    int t6;
    register int t5;

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = *(int *)(((a5 << 2) + 0xC180BD0));
    (((struct o0_uint *)0xC38381C)->v) = t0;
    for (;;) {
        t2 = sys_load_file_adx(t0, (*(int *)(((int)stk + 4))), ((int)stk + 0));
        if (t2 == 0) {
            return (*(int *)(((int)stk + 0)));
        }
        (((struct o4_uint *)0xC38381C)->v) = (((((struct o4_int *)0xC38381C)->v)) + 0x1);
        t6 = t5;
        for (;;) {
            t6 = (gdFsReinit(t6));
            if (t6 == 0) {
                break;
            }
            if ((t6 != -23) && ((t6 != -5) && (t6 != -33))) continue;
            FUN_0c06144e();
            *(unsigned int *)0xC38682C = 0x1;
            sys_shutdown_all();
            for (;;) {
            }
        }
    }
}
