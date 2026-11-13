/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0bc690-0c0bcc64) */

extern char g_spr_bank_player_fx;
char *obj_create(int a, int b, int c);
int FUN_0c06233a(char *dst, char *table, int n);
int obj_set_record_char(char *obj, int n);
float math_rand_float(void);
float math_cos_angle16(int ang);
float math_sin_angle16(int ang);
void fx_update_17(void);
#define B(parent, off) (*(signed char *)((parent) + (off)))
#define H(parent, off) (*(short *)((parent) + (off)))
#define I(parent, off) (*(int *)((parent) + (off)))
#define F(parent, off) (*(float *)((parent) + (off)))
#define Q(fx) (*(char **)((fx) + 736))
typedef struct { int x, y, z; } vec3_int;

void fx_spawn_17(char *parent, signed char kind)
{
    char *fx;
    char *sub;
    unsigned int rnd_a;
    unsigned int rnd_b;
    float trig_a;
    float trig_b;
    float speed;
    short life;

    fx = ((char *(*)(int, int, int, int))obj_create)(1, 1, 1, 0x0);
    if (fx == 0) {
        return;
    }
    B(fx, 0) = 1;
    B(fx, 3) = B(parent, 3);
    B(fx, 1) = 1;
    H(fx, 6) = 1055;
    B(fx, 5) = 25;
    *(void (**)(void))(fx + 16) = fx_update_17;
    *(vec3_int *)(fx + 32) = *(vec3_int *)(parent + 32);
    *(vec3_int *)(fx + 44) = *(vec3_int *)(parent + 44);
    F(fx, 64) = 0.0f;
    F(fx, 60) = 0.0f;
    F(fx, 56) = 0.0f;
    F(fx, 88) = 1.0f;
    F(fx, 84) = 1.0f;
    F(fx, 80) = 1.0f;
    B(fx, 8) = kind;
    B(fx, 9) = 0;
    if (kind == 0 || kind == 2) {
        FUN_0c06233a(Q(fx), &g_spr_bank_player_fx + (signed char)(B(parent, 3) * 24), 2);
        sub = Q(fx);
        *sub = 1;
        H(Q(fx), 2) = 1055;
        F(Q(fx), 64) = 1.0f;
        B(fx, 257) = 2;
        B(fx, 258) = 2;
        obj_set_record_char(fx, 118);
        if (kind == 2) {
            B(fx, 261) = 1;
            B(fx, 262) = 1;
            B(fx, 263) = 1;
        }
        sub = Q(fx);
        rnd_a = (unsigned int)(math_rand_float() * 255.0f);
        F(sub, 28) = F(sub, 32) = F(sub, 36) = ((float *)0xC33C478)[rnd_a % 8] + 3.0f;
        rnd_b = (unsigned int)(math_rand_float() * 255.0f);
        I(fx, 44) += (int)((float)(rnd_b % 360) * 65536.0f / 360.0f);
        rnd_b = (unsigned int)(math_rand_float() * 255.0f);
        I(fx, 48) += (int)((float)(rnd_b % 360) * 65536.0f / 360.0f);
        rnd_b = (unsigned int)(math_rand_float() * 255.0f);
        I(fx, 52) += (int)((float)(rnd_b % 360) * 65536.0f / 360.0f);
        speed = 60.0f;
        life = 10;
    } else if (kind == 1 || kind == 3) {
        if (kind == 3) {
            *(vec3_int *)(fx + 32) = *(vec3_int *)(*(char **)(parent + 28) + 32);
        }
        FUN_0c06233a(Q(fx), &g_spr_bank_player_fx + (signed char)(B(parent, 3) * 24), 2);
        sub = Q(fx);
        *sub = 1;
        H(Q(fx), 2) = 1055;
        F(Q(fx), 64) = 1.0f;
        sub = Q(fx);
        rnd_a = (unsigned int)(math_rand_float() * 255.0f);
        F(sub, 28) = F(sub, 32) = F(sub, 36) = ((float *)0xC33C478)[rnd_a % 8] + 2.0f;
        rnd_b = (unsigned int)(math_rand_float() * 255.0f);
        I(fx, 44) += (int)((float)(rnd_b % 360) * 65536.0f / 360.0f);
        rnd_b = (unsigned int)(math_rand_float() * 255.0f);
        I(fx, 52) += (int)((float)(rnd_b % 360) * 65536.0f / 360.0f);
        speed = 30.0f;
        life = 4;
    } else {
        return;
    }
    I(fx, 44) &= 0xFFFF;
    I(fx, 48) &= 0xFFFF;
    I(fx, 52) &= 0xFFFF;
    trig_a = math_cos_angle16(0x14000 - I(fx, 48));
    trig_b = math_sin_angle16(0x14000 - I(fx, 44));
    F(fx, 56) = trig_a * trig_b * speed;
    trig_a = math_sin_angle16(0x14000 - I(fx, 48));
    trig_b = math_sin_angle16(0x14000 - I(fx, 44));
    F(fx, 64) = trig_a * trig_b * speed;
    trig_a = math_cos_angle16(0x14000 - I(fx, 44));
    F(fx, 60) = -(trig_a * speed);
    *(char **)(fx + 28) = parent;
    H(fx, 236) = life;
}
