/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c07bc-0c0c0c70) */

struct fld0_float { float value; };
struct fld101_uchar { char pad[0x101]; unsigned char value; };
struct fld102_uchar { char pad[0x102]; unsigned char value; };
struct pos_x_float { char pad[0x20]; float value; };
struct pos_y_float { char pad[0x24]; float value; };
struct pos_z_float { char pad[0x28]; float value; };
struct fld2E0_int { char pad[0x2E0]; int value; };
struct fld2E4_int { char pad[0x2E4]; int value; };
struct fld4_float { char pad[0x4]; float value; };
struct fld44_float { char pad[0x44]; float value; };
struct fld48_float { char pad[0x48]; float value; };
struct fld4C_float { char pad[0x4C]; float value; };
struct fld8_float { char pad[0x8]; float value; };
struct fldEC_ushort { char pad[0xEC]; unsigned short value; };
struct fldEE_ushort { char pad[0xEE]; unsigned short value; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
int FUN_0c0c07bc(int, int, int, int, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
struct vec3i { int x, y, z; };

int fx_spawn_state11_pulse(int owner, int kind, int variant)
{
    int stack_args[3];
    register int new_obj;
    register int result;
    register float ftmp8;
    register float ftmp15;
    register int model;
    register int char_a;
    register int char_b;
    register float ftmp41;
    int kind_val;

    *(unsigned char *)(((int)stack_args + 4)) = kind;
    *(unsigned char *)(((int)stack_args + 8)) = variant;
    new_obj = obj_create(0x1, 0x1, 0x2);
    result = new_obj;
    if (new_obj == 0) {
    } else {
        *(unsigned char *)((new_obj + 0x0)) = 0x1;
        *(unsigned char *)((new_obj + 0x1)) = 0x1;
        *(unsigned char *)((new_obj + 0x3)) = (*(signed char *)((owner + 0x3)));
        *(unsigned char *)((new_obj + 0x4)) = (*(signed char *)(((int)stack_args + 4)));
        *(unsigned short *)((new_obj + 0x6)) = 0x5;
        *(unsigned char *)((new_obj + 0x5)) = 0x19;
        *(unsigned char *)((new_obj + 0x8)) = 0x0;
        *(unsigned char *)((new_obj + 0x9)) = 0x0;
        (((struct fldEC_ushort *)(new_obj))->value) = 0x0;
        (((struct fldEE_ushort *)(new_obj))->value) = 0x0;
        *(unsigned int *)((new_obj + 0x10)) = 0xC0C0A64;
        *(unsigned int *)((new_obj + 0x1C)) = owner;
        *(struct vec3i *)(new_obj + 32) = *(struct vec3i *)(owner + 32);
        *(int *)((int)stack_args + 0) = (new_obj + 0x20);
        ftmp8 = ((((struct pos_x_float *)(new_obj))->value));
        ftmp8 = ftmp8 + (math_cos_angle16(((-(*(int *)((owner + 0x30)))) + 0x14000))) * ((((struct fld0_float *)0xC33C71C)->value));
        (((struct pos_x_float *)(new_obj))->value) = ftmp8;
        (((struct pos_y_float *)(new_obj))->value) = (((((struct pos_y_float *)(new_obj))->value)) + ((((struct fld4_float *)0xC33C71C)->value)));
        *(int *)((int)stack_args + 0) = (new_obj + 0x28);
        ftmp15 = ((((struct pos_z_float *)(new_obj))->value));
        ftmp15 = ftmp15 + (math_sin_angle16(((-(*(int *)((owner + 0x30)))) + 0x14000))) * ((((struct fld8_float *)0xC33C71C)->value));
        (((struct pos_z_float *)(new_obj))->value) = ftmp15;
        *(struct vec3i *)(new_obj + 44) = *(struct vec3i *)(owner + 44);
        *(struct vec3i *)(new_obj + 80) = *(struct vec3i *)0xC33C704;
        FUN_0c0c07bc((new_obj + 0x38), (owner + 0x20), ((*(int *)((owner + 0x1C))) + 0x20), (*(int *)((owner + 0x30))), 30.0f);
        (((struct fld101_uchar *)(new_obj))->value) = 0x3;
        (((struct fld102_uchar *)(new_obj))->value) = 0x0;
        model = 0x71;
        if (((*(signed char *)(((int)stack_args + 8))) == 1) && (kind_val = *(signed char *)(((int)stack_args + 4)), kind_val == 2)) {
            model = 0x79;
        }
        obj_set_record_char(new_obj, model);
        char_a = *(signed char *)((owner + 0x3));
        FUN_0c06233a(((((struct fld2E0_int *)(new_obj))->value)), ((signed char)((((char_a << 1) + char_a) << 2) << 1) + 0xC6002D0), 0x3);
        *(unsigned char *)((((((struct fld2E0_int *)(new_obj))->value)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct fld2E0_int *)(new_obj))->value)) + 0x2)) = 0xB;
        *(unsigned int *)((((((struct fld2E0_int *)(new_obj))->value)) + 0x18)) = 0x4000;
        char_b = *(signed char *)((owner + 0x3));
        FUN_0c06233a(((((struct fld2E4_int *)(new_obj))->value)), ((signed char)((((char_b << 1) + char_b) << 2) << 1) + 0xC6002D0), 0x4);
        *(unsigned char *)((((((struct fld2E4_int *)(new_obj))->value)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct fld2E4_int *)(new_obj))->value)) + 0x2)) = 0x21B;
        ftmp41 = *(float *)0xC0C0AFC;
        (((struct fld44_float *)(((((struct fld2E4_int *)(new_obj))->value))))->value) = ftmp41;
        (((struct fld48_float *)(((((struct fld2E4_int *)(new_obj))->value))))->value) = ftmp41;
        (((struct fld4C_float *)(((((struct fld2E4_int *)(new_obj))->value))))->value) = ftmp41;
        *(unsigned int *)((((((struct fld2E4_int *)(new_obj))->value)) + 0x18)) = 0x4000;
        result = 0x2E4;
    }
    return result;
}
