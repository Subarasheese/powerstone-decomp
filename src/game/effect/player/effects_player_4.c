/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0b8968-0c0b8b00) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_math_mat_get_translate(int, int);

int fx_spawn_11(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = ((int (*)(int, int, int, int))obj_create)(0x1, 0x1, 0x2, 0x0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)((a4 + 0x4)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned int *)((t0 + 0x1C)) = (*(int *)((a4 + 0x1C)));
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B8B00;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0x30)));
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        t2 = *(signed char *)((a4 + 0x3));
        thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580), t0 + 0x20);
        u0 = ((((struct o38_float *)(t0))->v));
        u0 = u0 + 8.0f * (math_cos_angle16(((-(*(int *)((t0 + 0x30)))) + 0x14000)));
        (((struct o38_float *)(t0))->v) = u0;
        u0 = ((((struct o40_float *)(t0))->v));
        u0 = u0 + 8.0f * (math_sin_angle16(((-(*(int *)((t0 + 0x30)))) + 0x14000)));
        (((struct o40_float *)(t0))->v) = u0;
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        (((struct o101_uchar *)(t0))->v) = 0x0;
        (((struct o102_uchar *)(t0))->v) = 0x0;
        obj_set_record_char(t0, 0x75);
        t2 = 0x0;
        t3 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t3 = t2;
            t3 = (t3 << 2);
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t3) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t3) + 0x0))) + 0x2)) = (*(short *)((0xC153150 + (t2 << 1))));
            t4 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t3) + 0x0))), ((signed char)((((t4 << 1) + t4) << 2) << 1) + 0xC6002D0), (t2 + 0x3));
            t2 = (t2 + 0x1);
        }
        t1 = 0x2DC;
    }
    return t1;
}
