/* same module (continues) (0c0c9834-0c0c99c0) */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o316_uchar { char p[0x316]; unsigned char v; };
struct o317_uchar { char p[0x317]; unsigned char v; };
struct o318_uchar { char p[0x318]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int fx_spawn_041820(int);
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int memset(int, int, int);
typedef struct { int x, y, z; } vec3i;

int FUN_0c0c9834(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t5;
    register int t14;
    register int t15;

    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = obj_create(0x1, 0x1, 0x2);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)((a4 + 0x4)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C9B08;
        (((struct o118_uint *)(t0))->v) = 0x0;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
        t5 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t5 << 1) + t5) << 2) << 1) + 0xC6002D0), 0x7);
        (((struct o24_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.0f;
        (((struct o90_uint *)(((((struct o2E0_int *)(t0))->v))))->v) = (*(int *)(((int)stk + 0)));
        t14 = *(signed char *)((a4 + 0x3));
        t15 = *(int *)((((0x2E0 + t0) + 0x4) + 0x0));
        *(volatile int *)(((0x50 + ((((struct o2E0_int *)(t0))->v))) + 0x0));
        FUN_0c06233a(t15, ((signed char)((((t14 << 1) + t14) << 2) << 1) + 0xC6002D0), 0x6);
        *(unsigned char *)((t15 + 0x0)) = 0x0;
        *(unsigned short *)((t15 + 0x2)) = 0x41F;
        (((struct o24_float *)(t15))->v) = 1.0f;
        (((struct o20_float *)(t15))->v) = 1.0f;
        (((struct o1C_float *)(t15))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct oEE_ushort *)(t0))->v) = (unsigned char)(*(signed char *)(((int)stk + 4)));
        memset((0x308 + t0), 0x0, 0x14);
        (((struct o316_uchar *)(t0))->v) = 0x0;
        (((struct o317_uchar *)(t0))->v) = 0x0;
        (((struct o318_uchar *)(t0))->v) = 0x8;
        return fx_spawn_041820(t0);
    }
    return t0;
}

void FUN_0c0c9962(char *obj)
{
    signed char *partner_pos = *(signed char **)(obj + 28) + 0x308;

    *(vec3i *)(obj + 32) = *(vec3i *)partner_pos;
    *(short *)(obj + 0xEC) = partner_pos[13];
}

int FUN_0c0c9982(int a4)
{
    return ((((int)(*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x8))) >= (int)0x2)) ? 1 : 0);
}
