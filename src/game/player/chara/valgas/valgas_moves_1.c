/* Valgas (chars 9/10) frame hook, attack dispatch, move init stubs (part 1 of 2 of the same module) (0c087c34-0c087d60) */

struct o2E4_int { char p[0x2E4]; int v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o72BC_short { char p[0x72BC]; short v; };
struct o72BC_ushort { char p[0x72BC]; unsigned short v; };
int FUN_0c0555c4(void);
int pl_valgas_play_motion_sounds(int);
struct o2DC_int { char p[0x2DC]; int v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_short { char p[0x7248]; short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
int pl_stick_dir_angle(int);

int pl_valgas_frame_hook(int a4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    int t4;

    pl_valgas_play_motion_sounds(a4);
    if (((*(signed char *)((a4 + 0x71BA))) == 11) && ((t0 = *(signed char *)((a4 + 0x7223)), t0 == 2) && (t1 = (((struct o71F4_short *)(a4))->v), t1 != 0))) {
        t0 = FUN_0c0555c4();
        if ((t0 != 0) && (((t2 = *(signed char *)((a4 + 0xB)), t2 == 3) || (t2 == 4)) && ((t3 = (((struct o72BC_short *)(a4))->v), t3 != 0) && (t4 = *(signed char *)(((0x72BC + a4) + 0x2)), t4 == 0)))) {
            (((struct o72BC_ushort *)(a4))->v) = (((((struct o72BC_short *)(a4))->v)) - 1);
            if ((((((struct o2E4_int *)(a4))->v)) & 0x600) != 0) {
                *(unsigned char *)(((0x72BC + a4) + 0x2)) = 0x1;
                t0 = (((struct o71F4_short *)(a4))->v);
                (((struct o71F4_ushort *)(a4))->v) = (int)((float)t0 - 240.0f);
                if ((int)(short)(int)((float)t0 - 240.0f) < 0) {
                    (((struct o71F4_ushort *)(a4))->v) = 0x0;
                }
            }
        }
    }
    return 0x0;
}

int FUN_0c087cc4(int a4)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;

    t0 = (((struct o2DC_int *)(a4))->v);
    t1 = t0;
    if ((t0 & 240) != 0) {
        (((struct o7248_uint *)(a4))->v) = (unsigned short)(((pl_stick_dir_angle(a4)) + (*(short *)0xC7F31E0)) - (*(int *)((a4 + 0x30))));
        if ((((((struct o7248_int *)(a4))->v)) & 0x8000) != 0) {
            (((struct o7248_uint *)(a4))->v) = (((((struct o7248_int *)(a4))->v)) | 0xFFFF0000);
        }
        if ((int)((((struct o7248_int *)(a4))->v)) >= (int)0xB6) {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0xB6);
            t0 = 0x7248;
        } else {
            if ((int)((((struct o7248_int *)(a4))->v)) <= (int)0xFFFFFF4A) {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 0xB6);
                t0 = 0x7248;
            } else {
                t3 = *(int *)((a4 + 0x30));
                t4 = (((struct o7248_short *)(a4))->v);
                *(unsigned int *)((a4 + 0x30)) = (unsigned short)(t3 + t4);
                t0 = (unsigned short)(t3 + t4);
            }
        }
        t1 = t0;
    }
    return t1;
}
