/* character 3 (Jack) (0c076978-0c076a90) */

struct V { int x, y, z; };
extern int pl_start_motion(unsigned char *, int, int);
extern int pl_start_motion_owner(unsigned char *, int, int);
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

void pl_jack_special2_phase0(unsigned char *obj)
{
    unsigned char *linked;

    pl_start_motion(obj, 4, 3);
    obj[0x71A9] = 1;
    obj[0x71A8] = 1;
    *(struct V *)(*(unsigned char **)(obj + 28) + 32) = *(struct V *)(obj + 32);
    *(int *)(*(unsigned char **)(obj + 28) + 48) = (unsigned short)(*(int *)(obj + 48) + 0x8000);
    pl_start_motion_owner(*(unsigned char **)(obj + 28), 4, 57);
    (*(unsigned char **)(obj + 28))[0x71A9] = 1;
    (*(unsigned char **)(obj + 28))[0x71A8] = 1;
    (*(unsigned char **)(obj + 28))[0x710B] = 1;
    (*(unsigned char **)(obj + 28))[0x710C] = 1;
    (*(unsigned char **)(obj + 28))[11] = 2;
    (*(unsigned char **)(obj + 28))[12] = 0;
    *(short *)(obj + 236) = 12;
    *(short *)(obj + 238) = 10;
    obj[10]++;
}

int pl_jack_special2_phase1(int a4)
{
    int t0;
    register int t1;
    register int t2;

    pl_step_motion(a4);
    t2 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t2 - 1);
    if (((short)(t2 - 1) == 0) && (t0 = *(int *)((a4 + 0x1C)), t1 = *(signed char *)((t0 + 0x71F1)), t1 == 0)) {
        (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) == 0) {
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 16.7999992f;
        (((struct o48_float *)(a4))->v) = -1.19999993f;
        (((struct oEC_ushort *)(a4))->v) = 0x8;
        (((struct o7248_uint *)(a4))->v) = 0x0;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
