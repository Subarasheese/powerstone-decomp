/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b5770-0c0b5a5c) */

int math_rand_next(void);
float math_rand_float(void);
int _modls(void);

/* r0 % r1-style division helper: result comes from the case */
void stage_random_spawn_position(float *out_pos)
{
    math_rand_next();
    switch (_modls()) {
    case 0: case 1: case 2: case 3:
        out_pos[0] = -450.0f + 900.0f * math_rand_float();
        out_pos[1] = 2.0f;
        out_pos[2] = -750.0f + 872.0f * math_rand_float();
        break;
    case 4: case 5:
        out_pos[0] = -700.0f + 307.0f * math_rand_float();
        out_pos[1] = 102.0f;
        out_pos[2] = -750.0f + 850.0f * math_rand_float();
        break;
    case 6:
        out_pos[0] = -700.0f + 496.0f * math_rand_float();
        out_pos[1] = 102.0f;
        out_pos[2] = 100.0f + 200.0f * math_rand_float();
        break;
    case 7:
        out_pos[0] = -248.0f + 497.0f * math_rand_float();
        out_pos[1] = 222.0f;
        out_pos[2] = 137.0f + 171.0f * math_rand_float();
        break;
    case 8: case 9:
        out_pos[0] = -700.0f + 1400.0f * math_rand_float();
        out_pos[1] = 222.0f;
        out_pos[2] = 308.0f + 392.0f * math_rand_float();
        break;
    }
}
