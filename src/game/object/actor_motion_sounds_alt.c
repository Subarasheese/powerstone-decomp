/* motion-id sound table of the secondary actors (0c08c864-0c08d644) */

int ai_dist_class(int a4);
struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int pl_rel_angle_to_linked(int);
float ai_dist_to_opponent(int);
float math_rand_float(int arg);
typedef struct { float x, y, z; } V3;
extern short g_cam_yaw16;
extern void math_vec3_sub(V3 *, char *, char *);
extern int math_atan_angle16(float);
int ai_select_variant_script(int, int);
int FUN_0c08cd18(int);
int ai_run_reaction_script(int);

int ai_dist_class(int a4);


int ai_roll_chance(int arg, unsigned char *obj)
{
    unsigned int scaled = (unsigned int)(math_rand_float(arg) * 255.0f);
    unsigned char rnd = scaled % 32;
    int index = (*(unsigned char *)0xC7F305C - 20) % 12;
    if (rnd < obj[index])
        return 1;
    return 0;
}

int ai_lookup_dir_sector(char *obj, char row)
{
    V3 delta;
    int angle;
    int *table;

    math_vec3_sub(&delta, *(char **)(obj + 28) + 32, obj + 32);
    if (delta.z == 0.0f) {
        delta.z = 0.0001f;
    }
    angle = math_atan_angle16(delta.x / delta.z);
    if (delta.z < 0.0f) {
        angle += 0x8000;
    }
    angle = (unsigned short)angle - g_cam_yaw16;
    table = (int *)0xC1505F0;
    return table[row * 8 + (((unsigned short)(0x1000 + angle)) / 0x2000 & 7)];
}

int ai_slot_state1_update(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = *(int *)((0xC338518 + ((*(signed char *)((a4 + 0x5))) << 2)));
            return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
        ai_select_variant_script(a4, a5);
    }
    *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
    t0 = FUN_0c08cd18(a4);
    if ((signed char)t0 != 0) {
        ai_select_variant_script(a4, a5);
    }
    t0 = ai_dist_class(a5);
    t1 = *(signed char *)((a4 + 0x9));
    if (t1 == 4) {
        if ((int)(signed char)t0 >= (int)0x4) {
        } else {
            ai_select_variant_script(a4, a5);
        }
    } else {
        if (t1 == 5) {
            if ((int)(signed char)t0 < (int)0x5) {
                ai_select_variant_script(a4, a5);
            }
        } else {
            if ((int)(*(signed char *)((a4 + 0x9))) < (int)(signed char)t0) {
                ai_select_variant_script(a4, a5);
            }
        }
    }
    return ai_run_reaction_script(a4);
}
