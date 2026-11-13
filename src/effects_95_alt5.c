/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c042728-0c043384) */

struct vec3f { float x, y, z; };
struct Obj { char pad[236]; short timer; char pad2[554]; float scale; };
extern float math_sin_angle16(int);
extern float math_cos_angle16(int);
extern struct Obj *fx_spawn_burst_slot(int, int, int, struct vec3f *, int, int);

void fx_spawn_double_ring(char kind, struct vec3f *center)
{
    struct vec3f pts[8];
    unsigned char *rec = (unsigned char *)0xC7E40C4 + (unsigned short)(kind * 0x72D0);
    int angle = *(int *)(rec + 48) + 0x4000;
    float ring_scale = ((float *)0xC14A064)[(signed char)rec[4]];
    float *tbl = (float *)0xC14A090;
    float s1, c1, c2, s2, k, k2;
    struct Obj *fx;
    int pass;
    int idx;

    for (pass = 2; pass != 0; pass--) {
        for (idx = 0; idx < 8; idx++, tbl += 2) {
            pts[idx] = *center;
            s1 = math_sin_angle16(angle);
            k = tbl[1] * ring_scale * 5.0f / 8.0f;
            c1 = math_cos_angle16(angle);
            pts[idx].x = pts[idx].x + (s1 * k - c1 * tbl[0] * ring_scale);
            c2 = math_cos_angle16(angle);
            k2 = tbl[1] * ring_scale * 5.0f / 8.0f;
            s2 = math_sin_angle16(angle);
            pts[idx].z = pts[idx].z + (s2 * tbl[0] * ring_scale + k2 * c2);
            pts[idx].y = pts[idx].y + 16.0f;
        }
        fx = fx_spawn_burst_slot(kind, 8, 2, pts, 0xC149EB4, 0xC14A110);
        if (fx) {
            if ((signed char)rec[4] == 4 || (signed char)rec[4] == 5 || (signed char)rec[4] == 8 || (signed char)rec[4] == 9)
                fx->scale = 1.19999993f;
            else
                fx->scale = 1.0f;
            fx->timer = (signed char)rec[0x27C];
        }
    }
}
