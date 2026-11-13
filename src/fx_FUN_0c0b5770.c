/* Picks a random spawn position (x, y, z) into a float[3]: a random range per rand()%10 bucket. */
int FUN_0c0df920(void);
float FUN_0c0df940(void);
int _modls(void); /* r0 % r1-style division helper: result comes from the case */

void FUN_0c0b5770(float *p)
{
    FUN_0c0df920();
    switch (_modls()) {
    case 0: case 1: case 2: case 3:
        p[0] = -450.0f + 900.0f * FUN_0c0df940();
        p[1] = 2.0f;
        p[2] = -750.0f + 872.0f * FUN_0c0df940();
        break;
    case 4: case 5:
        p[0] = -700.0f + 307.0f * FUN_0c0df940();
        p[1] = 102.0f;
        p[2] = -750.0f + 850.0f * FUN_0c0df940();
        break;
    case 6:
        p[0] = -700.0f + 496.0f * FUN_0c0df940();
        p[1] = 102.0f;
        p[2] = 100.0f + 200.0f * FUN_0c0df940();
        break;
    case 7:
        p[0] = -248.0f + 497.0f * FUN_0c0df940();
        p[1] = 222.0f;
        p[2] = 137.0f + 171.0f * FUN_0c0df940();
        break;
    case 8: case 9:
        p[0] = -700.0f + 1400.0f * FUN_0c0df940();
        p[1] = 222.0f;
        p[2] = 308.0f + 392.0f * FUN_0c0df940();
        break;
    }
}
