/* generic model effect (node table, linked to owner record); same module as neighbours (0c047c6c-0c047df4) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o670_uint { char p[0x670]; unsigned int v; };
struct o674_uint { char p[0x674]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c062436(int, int, int);
int FUN_0c0e0ae0(int);
int FUN_0c0e1550(int);
extern int FUN_0c0e6fdc();
int FUN_0c0e6fe8(void);
int memcpy(int, int, int);
int nlUnitMatrix(void);

int fx_spawn_model_effect(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int stk[4];
    register int t0;
    register int t32;
    register int t2;
    register int t3;
    register int t5;
    register int t6;
    register int t23;
    register int t26;
    register int t29;
    register int t31;
    register int t7;
    register int t24;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    t0 = obj_create(0x5, 0x1, 0x1, 1);
    t32 = 0x0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0x200;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        t2 = ((int (*)(int))(FUN_0c0e6fdc))(0x1);
        (((struct oEE_ushort *)(t0))->v) = ((short)(a9 >> 0));
        *(unsigned char *)((t0 + 0xA)) = ((signed char)(a10 >> 0));
        t3 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(volatile int *)((t0 + 0x2E0));
        t5 = ((int (*)(void))(FUN_0c0e6fe8))();
        t6 = (((struct o2E0_int *)(t0))->v);
        *(unsigned char *)((t6 + 0x0)) = t7;
        *(unsigned short *)((t6 + 0x2)) = 0x0;
        FUN_0c062436(t6, (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 0))));
        memcpy((((0xA4 + t6) + 0x4) & 0xFFFFFFF8), ((((struct o9C_int *)(t6))->v)), 0x678);
        (((struct o9C_uint *)(t6))->v) = (((0xA4 + t6) + 0x4) & 0xFFFFFFF8);
        (((struct o90_uint *)(t6))->v) = (*(int *)(((int)stk + 8)));
        FUN_0c0e1550(0x1);
        nlUnitMatrix();
        FUN_0c0e0ae0((t6 + 0x50));
        FUN_0c0e0ae0((t0 + 0x6C));
        (((struct o64_uint *)(((((struct o9C_int *)(t6))->v))))->v) = 0x608;
        (((struct o6C_uint *)(((((struct o9C_int *)(t6))->v))))->v) = 0x30;
        (((struct o670_uint *)(((((struct o9C_int *)(t6))->v))))->v) = 0x0;
        (((struct o674_uint *)(((((struct o9C_int *)(t6))->v))))->v) = 0x30;
        *(volatile int *)((t6 + 0x9C));
        t23 = ((int (*)(int))(FUN_0c0e6fe8))(0xC14A818);
        *(volatile int *)((t6 + 0x9C));
        t26 = ((int (*)(int))(FUN_0c0e6fe8))(t24);
        *(unsigned int *)((((((struct o9C_int *)(t6))->v)) + 0x3C)) = 0xFFFFFFFF;
        *(volatile int *)((t6 + 0x9C));
        t29 = ((int (*)(void))(FUN_0c0e6fdc))();
        *(volatile int *)((t6 + 0x9C));
        t31 = ((int (*)(void))(FUN_0c0e6fdc))();
        t32 = t0;
    }
    return t32;
}
