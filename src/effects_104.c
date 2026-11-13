/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c044e38-0c04512c) */

typedef struct { int x, y, z; } vec3i;
extern char *obj_create(int, int, int, int);
extern void FUN_0c06233a(int owner_id, int b, int c);
extern int thunk_FUN_0c062242(int, float *);
extern float math_rand_float(void);
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_destroy(int, int, int, int);
int FUN_0c06231c(int, int, int);

void fx_spawn_044e38(char owner_id)
{
    char *effect;
    char *player_base;
    signed char *block_tbl = (signed char *)0xC14A640;
    float pos[3];
    float jitter_min = -15.0f;
    float rand_scale = 255.0f;
    int i, row;
    char *particle;

    effect = obj_create(6, 1, 8, 0);
    if (effect == 0)
        return;
    effect[0] = 1;
    effect[1] = 1;
    effect[3] = owner_id;
    *(short *)(effect + 6) = 15;
    effect[5] = 32;
    *(int *)(effect + 16) = 0xC045048;
    *(int *)(effect + 280) = 0;
    *(int *)(effect + 52) = 0;
    *(int *)(effect + 48) = 0;
    *(int *)(effect + 44) = 0;
    *(float *)(effect + 88) = 1.0f;
    *(float *)(effect + 84) = 1.0f;
    *(float *)(effect + 80) = 1.0f;
    player_base = (char *)(0xC7E40C4 + (unsigned short)(owner_id * 29392));
    for (i = 0; i < 8; i++) {
        FUN_0c06233a(*(int *)(effect + 736 + i * 4), 0xC4CFA68, 92);
        row = player_base[0x71F1];
        thunk_FUN_0c062242((int)(player_base + 768 + (short)(row * 3520) + (short)(block_tbl[i] * 176)), pos);
        pos[0] = pos[0] + ((float)((unsigned)(math_rand_float() * rand_scale) % 30) + jitter_min);
        pos[1] = pos[1] + ((float)((unsigned)(math_rand_float() * rand_scale) % 30) + jitter_min);
        pos[2] = pos[2] + ((float)((unsigned)(math_rand_float() * rand_scale) % 30) + jitter_min);
        particle = (char *)*(int *)(effect + 736 + i * 4);
        *(vec3i *)(particle + 4) = *(vec3i *)pos;
        *particle = 1;
        *(short *)(particle + 2) = 33;
    }
}

int fx_tick_044e38(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if ((t0 != 2) && (t0 != 3)) {
                return t0;
            }
            return obj_destroy(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x4;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct oEC_ushort *)(a4))->v) = 0x4;
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
        if ((int)((((struct oEE_short *)(a4))->v)) > (int)0x3) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        } else {
            t0 = 0x0;
            t1 = (0x2E0 + a4);
            for (;;) {
                t2 = *(int *)((t1 + 0x0));
                t1 = (t1 + 0x4);
                FUN_0c06231c(t2, 0xC4CFA68, ((*(signed char *)((a4 + 0xEE))) + 0x5C));
                t0 = (t0 + 0x1);
                if ((int)(signed char)t0 >= (int)0x8) {
                    break;
                }
            }
        }
    }
    t0 = (0x2E0 + a4);
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        t1 = (t1 + 0x1);
        (((struct o8_float *)(t2))->v) = (((((struct o8_float *)(t2))->v)) + 5.0f);
        if ((int)(signed char)t1 >= (int)0x8) {
            break;
        }
    }
    return 0x8;
}
