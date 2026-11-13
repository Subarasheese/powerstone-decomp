/* matrix/view computation helpers (invert, transform points) (0c062f10-0c063318) */

struct o4_float { char p[0x4]; float v; };
struct o41_uchar { char p[0x41]; unsigned char v; };
int math_vec3_sub(int, int, int);
float math_vec3_length(int);
int math_mat_get_translate(int, int);
int FUN_0c0ccf38(int, int, int);
int FUN_0c0e1550(int);

int FUN_0c062f10(int a4, int a5, int a6, int a7)
{
    int stk[31];
    register int t6;
    register int t10;
    register int t26;
    register int t32;
    register int t8;
    register int t9;

    t10 = *(int *)(((((*(signed char *)(((0x71F1 + a4) + 0x0))) << 2) + (0xC336880 + (((*(signed char *)((a4 + 0x4))) << 2) << 1))) + 0x0));
    FUN_0c0e1550(0x1);
    t6 = *(signed char *)((0xC439DE8 + ((*(signed char *)((a4 + 0x3))) << 2)));
    if (t6 != 0) {
        if (t6 != 1) {
            if (t6 != 2) {
                return t6;
            }
            return ((int (*)(int, int, int, int))(0xC0632C4))(0xC439DE8, a5, a6, a7);
        }
        for (;;) {
            if ((*(signed char *)((t10 + 0x0))) == -1) {
                break;
            }
            t9 = (FUN_0c0ccf38(a4, (*(signed char *)((t10 + 0x1))), (*(short *)((t10 + 0x2)))));
            *(unsigned int *)(((int)stk + 0)) = (FUN_0c0ccf38(a4, (*(signed char *)((t9 + 0x42))), (*(signed char *)((t9 + 0x43)))));
            t8 = (*(signed char *)((t10 + 0x0)));
            if (t8 == 0) {
                math_mat_get_translate(t9, (((int)stk + 0) + 0x70));
                math_mat_get_translate((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x64));
                math_vec3_sub((((int)stk + 0) + 0x70), (((int)stk + 0) + 0x70), (((int)stk + 0) + 0x64));
                t8 = 0x1;
                (((struct o4_float *)(t10))->v) = (math_vec3_length((((int)stk + 0) + 0x70)));
                *(unsigned char *)((t10 + 0x0)) = t8;
            }
            t10 = (t10 + 0x10);
            (((struct o41_uchar *)(t9))->v) = (0x1);
        }
        t26 = *(signed char *)((a4 + 0x3));
        *(unsigned char *)((0xC439DE8 + (t26 << 2))) = ((*(signed char *)((0xC439DE8 + (t26 << 2)))) + 0x1);
        *(volatile int *)(((((*(signed char *)(((0x71F1 + a4) + 0x0))) << 2) + (0xC336880 + (((*(signed char *)((a4 + 0x4))) << 2) << 1))) + 0x0));
        return ((int (*)(int, int, int, int))(0xC0632C4))(0xC439DE8, a5, a6, a7);
    }
    t32 = *(signed char *)((a4 + 0x3));
    *(unsigned char *)(((0xC439DE8 + (t32 << 2)) + 0x0)) = ((*(signed char *)(((0xC439DE8 + (t32 << 2)) + 0x0))) + 0x1);
    return (t32 << 2);
}
