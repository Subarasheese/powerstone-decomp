/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c04b428-0c04b6b8) */

typedef struct { int x, y, z; } vec3i;
extern int FUN_0c0555dc(void);
extern int obj_destroy(void *);
#define F(child) (*(float *)(effect + (child)))
#define ST (*(signed char *)(effect + 8))
#define CNT (*(short *)(effect + 0xEC))
#define STEP(n) do { CNT = CNT + 1; if (CNT >= (n)) { ST = ST + 1; CNT = 0; } } while (0)

void fx_tick_04b2d4(char *effect)
{
    char *child;
    float ease_step = 0.099999994f;

    *(vec3i *)(effect + 32) = *(vec3i *)(*(char **)(effect + 28) + 32);
    *(vec3i *)(effect + 44) = *(vec3i *)(*(char **)(effect + 28) + 44);
    child = *(char **)(effect + 0x2E0);
    if (effect[4] == 0) {
        *(int *)(child + 20) += 0x1111;
        if (FUN_0c0555dc()) {
            ST = 3;
        }
        switch (ST) {
        case 0:
            ST = ST + 1;
            return;
        case 1:
            STEP(30);
            F(80) += 0.0199999996f;
            F(88) += 0.0199999996f;
            return;
        case 2:
            STEP(15);
            F(96) -= 0.0666666627f;
            F(100) -= 0.0666666627f;
            F(104) -= 0.0666666627f;
            F(80) += ease_step;
            F(88) += ease_step;
            return;
        default:
            obj_destroy(effect);
            return;
        }
    } else if (effect[4] == 1) {
        if (FUN_0c0555dc()) {
            ST = 6;
        }
        switch (ST) {
        case 0:
            ST = ST + 1;
            F(80) = 0.0f;
            F(84) = 0.0f;
            F(88) = 0.0f;
            return;
        case 1:
            CNT = CNT + 1;
            if (CNT >= 19) {
                ST = ST + 1;
                CNT = 0;
            }
            return;
        case 2:
            STEP(7);
            F(80) += 0.139999986f;
            F(84) += 0.289999992f;
            F(88) += 0.139999986f;
            return;
        case 3:
            STEP(6);
            F(80) += 0.049999997f;
            F(84) -= 0.169999987f;
            F(88) += 0.049999997f;
            return;
        case 4:
            STEP(6);
            F(80) += 0.0299999993f;
            F(84) -= 0.129999995f;
            F(88) += 0.0299999993f;
            return;
        case 5:
            STEP(2);
            F(80) -= 0.75f;
            F(84) -= ease_step;
            F(88) -= 0.75f;
            return;
        default:
            obj_destroy(effect);
            return;
        }
    }
}
