/* attract/demo screen objects (bank SYUKYAKU/DEMO COMN) (0c028524-0c028a4c) */

typedef struct { int x, y, z; } vec3_int_triple;
typedef struct { float x, y, z; } vec3f;
typedef struct { int x, y, z; } vec3i;
extern void math_vec3_sub(vec3f *, vec3f *, vec3f *);
extern void math_vec3i_sub(vec3i *, vec3i *, vec3i *);
extern void math_vec3_add(vec3f *, vec3f *, vec3f *);
extern void math_vec3i_add(vec3i *, vec3i *, vec3i *);
extern void FUN_0c02a9bc(float);
extern int obj_destroy(void *);
#define ST (*(signed char *)(obj + 8))
#define S236 (*(short *)(obj + 236))
#define S238 (*(short *)(obj + 238))
#define S240 (*(short *)(obj + 240))
#define S242 (*(short *)(obj + 242))
#define ROW(i) (keys + 40 * (i))
#define PF(o) (*(float *)(sub + (o)))
#define EF(o) (*(float *)(obj + (o)))

void demo_tick_keyframe_mover(char *obj)
{
    char *keys;
    char *sub;
    float frame_scale = 0.8333333134651184f;
    float duration, key_len, key_frames;
    short key_idx;
    int key_flags, sign;

    keys = *(char **)(0xC321074 + 4 * (signed char)obj[10]);
    sub = *(char **)(obj + 736);
    if (ST == 0) {
        ST = ST + 1;
        *(vec3_int_triple *)(sub + 4) = *(vec3_int_triple *)(keys + 8);
        *(vec3_int_triple *)(sub + 16) = *(vec3_int_triple *)(keys + 20);
        PF(28) = *(float *)(keys + 32);
        PF(32) = *(float *)(keys + 36);
        PF(36) = 1.0f;
        S236 = 0;
        S240 = 0;
        S238 = 0;
        S242 = 0;
        EF(68) = 0.0f;
    }
    S240 = S240 + 1;
    S242 = S242 + 1;
    if (S240 >= S236) {
        S238 = S238 + 1;
        if (*(int *)ROW(S238) == 0) {
            *(vec3_int_triple *)(sub + 4) = *(vec3_int_triple *)(ROW(S238) + 8);
            *(vec3_int_triple *)(sub + 16) = *(vec3_int_triple *)(ROW(S238) + 20);
            PF(28) = *(float *)(ROW(S238) + 32);
            PF(32) = *(float *)(ROW(S238) + 36);
            S238 = S238 + 1;
        }
        if (*(int *)ROW(S238) == -1) {
            obj_destroy(obj);
            return;
        }
        S240 = 0;
        if (*(int *)0xC386830 != 0) {
            S236 = (int)(((float)*(int *)ROW(S238) + EF(68)) * frame_scale);
            EF(68) = ((float)*(int *)ROW(S238) + EF(68)) - (float)S236 / frame_scale;
        } else {
            S236 = *(int *)ROW(S238);
        }
        duration = (float)S236;
        key_idx = S238;
        math_vec3_sub((vec3f *)(sub + 40), (vec3f *)(ROW(key_idx) + 8), (vec3f *)(ROW(key_idx - 1) + 8));
        PF(40) = PF(40) / duration;
        PF(44) = PF(44) / duration;
        PF(48) = PF(48) / duration;
        key_idx = S238;
        math_vec3i_sub((vec3i *)(sub + 52), (vec3i *)(ROW(key_idx) + 20), (vec3i *)(ROW(key_idx - 1) + 20));
        *(int *)(sub + 52) = (int)((float)*(int *)(sub + 52) / duration);
        *(int *)(sub + 56) = (int)((float)*(int *)(sub + 56) / duration);
        *(int *)(sub + 60) = (int)((float)*(int *)(sub + 60) / duration);
        EF(80) = *(float *)(ROW(S238) + 32) - *(float *)(ROW(S238 - 1) + 32);
        EF(84) = *(float *)(ROW(S238) + 36) - *(float *)(ROW(S238 - 1) + 36);
        EF(80) = EF(80) / duration;
        EF(84) = EF(84) / duration;
    }
    math_vec3_add((vec3f *)(sub + 4), (vec3f *)(sub + 4), (vec3f *)(sub + 40));
    math_vec3i_add((vec3i *)(sub + 16), (vec3i *)(sub + 16), (vec3i *)(sub + 52));
    PF(28) = PF(28) + EF(80);
    PF(32) = PF(32) + EF(84);
    if (*(int *)(ROW(S238) + 4) & 1) {
        sign = (S242 & 1) ? -1 : 1;
        PF(4) = PF(4) + 2.0f * ((float)(S242 & 2) * (float)sign);
    }
    if (*(int *)(ROW(S238) + 4) & 2) {
        sign = (S242 & 2) ? -1 : 1;
        PF(8) = PF(8) + 1.0f * ((float)(S242 & 4) * (float)sign);
    }
    if (*(int *)(ROW(S238) + 4) & 4) {
        sign = (S242 & 4) ? -1 : 1;
        PF(28) = PF(28) + 0.03999999910593033f * (float)sign;
    }
    if (*(int *)(ROW(S238) + 4) & 8) {
        sign = (S242 & 4) ? -1 : 1;
        PF(32) = PF(32) + 0.03999999910593033f * (float)sign;
    }
    if (*(int *)(ROW(S238) + 4) & 64) {
        key_frames = (float)*(int *)ROW(S238 - 1);
        key_len = key_frames;
        if (*(int *)0xC386830 != 0) {
            key_len = key_len * frame_scale;
        }
        *(short *)(obj + 6) = *(short *)(obj + 6) | 512;
        EF(96) = -((float)S240 / key_len) + 1.0f;
        EF(104) = EF(96);
        EF(100) = EF(96);
    }
    if (*(int *)(ROW(S238) + 4) & 128) {
        if (!(S242 & 2)) {
            FUN_0c02a9bc(PF(8) + -200.0f);
        }
    }
    PF(152) = PF(28);
    if (1.0f > PF(152)) {
        PF(152) = 1.0f;
    }
    if (PF(32) > PF(152)) {
        PF(152) = PF(32);
    }
}
