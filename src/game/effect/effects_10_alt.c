/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0342a0-0c034530) */

struct o24_float { char p[0x24]; float v; };
int obj_destroy(int, int, int, int);
int math_vec3_add(int, int, int);

int fx_tick_0342a0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 21) {
        return obj_destroy(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    math_vec3_add((a4 + 0x20), (a4 + 0x20), (a4 + 0x38));
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + 0x38E);
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x71C);
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0xAAA);
    t0 = 0x24;
    if (!(((((struct o24_float *)(a4))->v)) > 0.0f)) {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}
