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
int nlStoreMatrix(int);
int nlSelectMatrixStack(int);
extern int _quick_evn_mvn();
int _quick_odd_mvn(void);
int memcpy(int, int, int);
int nlUnitMatrix(void);

int fx_spawn_model_effect(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int stk[4];
    register int t0;
    register int t23;
    register int t3;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    t0 = obj_create(0x5, 0x1, 0x1, 0x1);
    t23 = 0x0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0x200;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        { struct mv4 { int w[4]; }; *(struct mv4 *)((t0 + 0x5C)) = *(struct mv4 *)(a8); }
        (((struct oEE_ushort *)(t0))->v) = ((short)(a9 >> 0));
        *(unsigned char *)((t0 + 0xA)) = ((signed char)(a10 >> 0));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(a11); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(t0))->v)) + 0x4)) = *(struct mv3 *)(a12); }
        t3 = (((struct o2E0_int *)(t0))->v);
        *(unsigned char *)((t3 + 0x0)) = 0x1;
        *(unsigned short *)((t3 + 0x2)) = 0x0;
        FUN_0c062436(t3, (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 0))));
        memcpy((((0xA4 + t3) + 0x4) & 0xFFFFFFF8), ((((struct o9C_int *)(t3))->v)), 0x678);
        (((struct o9C_uint *)(t3))->v) = (((0xA4 + t3) + 0x4) & 0xFFFFFFF8);
        (((struct o90_uint *)(t3))->v) = (*(int *)(((int)stk + 8)));
        nlSelectMatrixStack(0x1);
        nlUnitMatrix();
        nlStoreMatrix((t3 + 0x50));
        nlStoreMatrix((t0 + 0x6C));
        (((struct o64_uint *)(((((struct o9C_int *)(t3))->v))))->v) = 0x608;
        (((struct o6C_uint *)(((((struct o9C_int *)(t3))->v))))->v) = 0x30;
        (((struct o670_uint *)(((((struct o9C_int *)(t3))->v))))->v) = 0x0;
        (((struct o674_uint *)(((((struct o9C_int *)(t3))->v))))->v) = 0x30;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o9C_int *)(t3))->v)) + 0x8)) = *(struct mv3 *)(0xC14A818); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o9C_int *)(t3))->v)) + 0x28)) = *(struct mv3 *)(0xC14A818); }
        *(unsigned int *)((((((struct o9C_int *)(t3))->v)) + 0x3C)) = 0xFFFFFFFF;
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct o9C_int *)(t3))->v)) + 0x44)) = *(struct mv4 *)((t0 + 0x5C)); }
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct o9C_int *)(t3))->v)) + 0x54)) = *(struct mv4 *)((t0 + 0x5C)); }
        t23 = t0;
    }
    return t23;
}
