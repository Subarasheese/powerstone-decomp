/* effects that follow their owner (constructor and update) (0c0cb50c-0c0cb994) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int, int);
int obj_set_record_char(int, int);
int _quick_odd_mvn(int, int);
struct vec3i { int w0, w1, w2; };
extern int FUN_0c0555dc(void);
extern float math_cos_angle16(int a);
extern float math_sin_angle16(int a);
extern void obj_destroy(char *effect);
extern void FUN_0c0cb5d6(void);

int fx_follow_owner_create(int a4, int a5)
{
    int stk[2];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = obj_create(0x1, 0x1, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0CB86C;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC1533CC); }
        *(unsigned int *)((t0 + 0x1C)) = (*(int *)(((int)stk + 0)));
        (((struct o118_uint *)(t0))->v) = 0x0;
        (((struct oF2_ushort *)(t0))->v) = (*(signed char *)(((int)stk + 4)));
        (((struct o105_uchar *)(t0))->v) = 0x0;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        (((struct o101_uchar *)(t0))->v) = 0xF;
        (((struct o102_uchar *)(t0))->v) = 0x0;
        return obj_set_record_char(t0, 0x73);
    }
    return t0;
}

void fx_follow_owner_update(char *effect)
{
    char *owner;
    float tmp_a, tmp_b, tmp_c;
    if (FUN_0c0555dc() != 0)
        effect[8] = 2;
    owner = *(char **)(effect + 28);
    if (*(void **)(owner + 16) != (void *)FUN_0c0cb5d6)
        effect[8] = 2;
    switch (effect[8]) {
    case 0:
        *(struct vec3i *)(effect + 44) = *(struct vec3i *)(owner + 44);
        *(struct vec3i *)(effect + 32) = *(struct vec3i *)(owner + 32);
        tmp_a = math_cos_angle16(*(int *)(effect + 48)) * 100.0f;
        tmp_b = math_sin_angle16(*(int *)(effect + 48)) * 0.0f;
        *(float *)(effect + 40) += (tmp_a - tmp_b);
        tmp_c = math_sin_angle16(*(int *)(effect + 48));
        tmp_a = math_cos_angle16(*(int *)(effect + 48)) * 0.0f;
        *(float *)(effect + 32) += (100.0f * tmp_c + tmp_a);
        *(float *)(effect + 36) += 80.0f;
        if (owner[8] >= 2)
            effect[8]++;
        return;
    case 1:
        effect[8]++;
        /* fall through */
    case 2:
        obj_destroy(effect);
        return;
    default:
        return;
    }
}
