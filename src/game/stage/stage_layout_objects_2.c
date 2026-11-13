/* stage placement records: spawners and update/mode handlers for record types 1 2 3 4 8 11 12 and debris (0c0ac8dc-0c0aca24) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int);
int _quick_odd_mvn(void);
typedef struct { int a, b, c; } vec12;
extern void math_mat_transform_point(void *, void *);

int FUN_0c0ac900(int a4, int a5);

int FUN_0c0ac8dc(int a4)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c0ac900(a4, t0);
        t0 = (t0 + 0x1);
        if ((unsigned int)t0 >= (unsigned int)0x8) {
            break;
        }
    }
    return t1;
}

int FUN_0c0ac900(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t4;
    register int t13;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x2, 0x1, 0x0, 0x0);
    t13 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x3)));
        *(unsigned short *)((t0 + 0x6)) = 0x41F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0AC9A4;
        *(unsigned char *)((t0 + 0x4)) = 0xD;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC339CD0); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC339CC4); }
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x0;
        (((struct o2D9_uchar *)(t0))->v) = 0x1;
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = (*(int *)(((int)stk + 0)));
        t4 = *(signed char *)(((int)stk + 4));
        (((struct oEC_ushort *)(t0))->v) = (*(signed char *)(((((t4 << 2) << 2) + 0xC152D98) + 0x0)));
        (((struct o101_uchar *)(t0))->v) = 0x0;
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)(((((t4 << 2) << 2) + 0xC152D98) + 0x1)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x38)) = *(struct mv3 *)(((((t4 << 2) << 2) + 0xC152D98) + 0x4)); }
        /* r0 as the original leaves it: the last word the block copy loaded (the source's second word) */
        t13 = *(int *)(((((t4 << 2) << 2) + 0xC152D98) + 0x8));
    }
    return t13;
}

void FUN_0c0ac9a4(char *fx)
{
    signed char *owner;

    owner = *(signed char **)(fx + 28);
    *(vec12 *)(fx + 32) = *(vec12 *)(fx + 56);
    math_mat_transform_point(fx + 32, (char *)owner + 0x300 + (short)(owner[0x71F1] * 3520) + (short)(*(short *)(fx + 0xEC) * 176));
}
