/* secondary actor objects (arena clamp, angle helpers, owner transforms) (part 5 of 6 of the same module) (0c08c5c0-0c08c648) */

struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int pl_step_motion(int);

int FUN_0c08c5c0(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 16.7999992f;
        (((struct o48_float *)(a4))->v) = -1.19999993f;
        (((struct oEC_ushort *)(a4))->v) = 0x8;
        (((struct o7248_uint *)(a4))->v) = 0x0;
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    }
    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEE;
    if ((short)(t0 - 1) == 0) {
        t0 = 0x71F1;
        if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
            (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
            t0 = 0x710A;
        }
        t1 = t0;
    }
    return t1;
}
