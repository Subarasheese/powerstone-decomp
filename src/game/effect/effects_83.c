/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03fd08-0c040260) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int fx_spawn_04015c(int);
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(void);
typedef struct { int x, y, z; } S12;
typedef struct { float x, y, z; } V3;
extern void math_mat_transform_point(void *, void *);
extern void math_vec3_sub(V3 *, V3 *, V3 *);
extern int math_atan_angle16(float);

int fx_spawn_03fd08(int a4)
{
    register int t0;
    register int t2;
    register int t3;

    t0 = obj_create(0x5, 0x1, 0x1, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03FEC2;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(0xC149AB8); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC149AC4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC149AD0); }
        (((struct o28_float *)(t0))->v) = 50.0f;
        (((struct o24_float *)(t0))->v) = -30.0f;
        (((struct oEE_ushort *)(t0))->v) = 0x50;
        (((struct oF2_ushort *)(t0))->v) = 0x0;
        (((struct o118_uint *)(t0))->v) = (0x47C0 + a4);
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t2 = (((struct o2E0_int *)(t0))->v);
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        t3 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t2, ((signed char)((((t3 << 1) + t3) << 2) << 1) + 0xC6002D0), 0x11);
        *(unsigned short *)((t2 + 0x2)) = 0x230;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x4)) = *(struct mv3 *)(0xC149AB8); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x1C)) = *(struct mv3 *)(0xC149AB8); }
        (((struct o24_float *)(t2))->v) = 1.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x44)) = *(struct mv3 *)(0xC149AB8); }
        fx_spawn_04015c(t0);
        fx_spawn_04015c(t0);
        return fx_spawn_04015c(t0);
    }
    return t0;
}

void fx_aim_at_target(char *actor, char *target)
{
    V3 delta;
    float dz;
    int yaw;

    *(float *)(actor + 32) = 0.0f;
    *(float *)(actor + 36) = 0.0f;
    *(float *)(actor + 40) = 70.0f;
    math_mat_transform_point(actor + 32, target + 0x47C0);
    *(float *)(actor + 36) = *(float *)(target + 36) + 200.0f;
    math_vec3_sub(&delta, (V3 *)(actor + 32), (V3 *)(target + 32));
    dz = delta.z;
    if (dz == 0.0f) {
        dz = 9.99999975e-06f;
    }
    yaw = math_atan_angle16(delta.x / dz);
    if (dz < 0.0f) {
        yaw += 0x8000;
    }
    *(S12 *)(actor + 44) = *(S12 *)(target + 44);
    *(int *)(actor + 44) += *(int *)(target + 0x7244);
    *(int *)(actor + 48) = yaw;
}
