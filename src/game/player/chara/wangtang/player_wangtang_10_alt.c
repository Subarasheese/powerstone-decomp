/* character 2 (Wang Tang) (0c07164c-0c071b2c) */

int pl_wangtang_state12_phase0(int, int, int);
int pl_wangtang_state12_phase1(int);
typedef struct { int x, y, z; } vec3_int;
extern void obj_place_linked_ahead(char *, int, float);
extern void pl_start_motion(char *, int, int);
extern void pl_start_motion_owner(char *, int, int);

int pl_wangtang_state12_update(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_wangtang_state12_phase1(a4);
    }
    return pl_wangtang_state12_phase0(a4, a5, a6);
}

void pl_wangtang_special2_phase0(char *obj)
{
    char *partner;

    partner = *(char **)(obj + 28);
    *(int *)(partner + 48) = (unsigned short)(*(int *)(obj + 48) + 0x8000);
    *(vec3_int *)(*(char **)(obj + 28) + 32) = *(vec3_int *)(obj + 32);
    obj_place_linked_ahead(obj, 0, 100.0f);
    *(float *)(obj + 64) = 0.0f;
    *(float *)(obj + 56) = 0.0f;
    *(float *)(obj + 76) = 0.0f;
    *(float *)(obj + 68) = 0.0f;
    *(float *)(obj + 60) = 0.0f;
    if (*(float *)(obj + 72) > -2.0f) {
        *(float *)(obj + 72) = -2.0f;
    }
    pl_start_motion(obj, 4, 3);
    obj[0x71A9] = 1;
    obj[0x71A8] = 1;
    pl_start_motion_owner(*(char **)(obj + 28), 4, 57);
    partner = *(char **)(obj + 28);
    partner[0x71A9] = 1;
    partner[0x71A8] = 1;
    *(char *)(*(char **)(obj + 28) + 10) = 1;
    *(short *)(obj + 0xEC) = 20;
    *(short *)(obj + 0xEE) = 14;
    obj[10]++;
}
