/* scene render per frame (cameras, split screen), then HUD (0c02ca74-0c02d774) */

struct o0_int { int v; };
struct o24_int { char p[0x24]; int v; };
int FUN_0c02cb4a(int);
int draw_set_layer_lighting(int, float);
int nlObjPutUseViewMatrix(int);
int nlSelectMatrixStack(int);
int nlUnitMatrix(void);
int draw_object_classes(void);
int draw_fighter(int);

int FUN_0c02cc18(float f4);

int FUN_0c02cc18(float f4)
{
    register int t0;
    register int t1;

    draw_set_layer_lighting(0x19, f4);
    t0 = *(signed char *)0xC7F2665;
    t1 = t0;
    if (t0 != 0) {
        nlSelectMatrixStack(0x1);
        nlUnitMatrix();
        FUN_0c02cb4a(((((struct o0_int *)0xC7F294C)->v)));
        nlObjPutUseViewMatrix(((((struct o0_int *)0xC7F294C)->v)));
        t0 = 0x0;
        for (;;) {
            if ((int)(*(int *)(((*(int *)((((*(signed char *)(((0xC7F2941 + t0) + 0x0))) << 2) + (0xC7F2950 + ((t0 << 2) << 1))))) + 0x0))) >= 0) {
                FUN_0c02cb4a((*(int *)((((*(signed char *)(((0xC7F2941 + t0) + 0x0))) << 2) + (0xC7F2950 + ((t0 << 2) << 1))))));
                nlObjPutUseViewMatrix((*(int *)((((*(signed char *)(((0xC7F2941 + t0) + 0x0))) << 2) + (0xC7F2950 + ((t0 << 2) << 1))))));
            }
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x4) {
                break;
            }
        }
        t0 = (((struct o24_int *)0xC7F294C)->v);
        t1 = 0x30C;
        if ((int)(*(int *)((t0 + 0x0))) >= 0) {
            FUN_0c02cb4a(t0);
            t1 = (nlObjPutUseViewMatrix(((((struct o24_int *)0xC7F294C)->v))));
        }
    }
    return t1;
}

int draw_world(float f4)
{
    register int t1;
    register int t3;
    register int t4;
    register int t2;
    int t6;
    register int t9;

    t1 = (FUN_0c02cc18(f4));
    t3 = 0x0;
    t4 = 0xC7E40C4;
    for (;;) {
        if (((*(signed char *)((t4 + 0x0))) != 0) && (t6 = *(signed char *)((t4 + 0x1)), t1 = t6, t1 != 0)) {
            t1 = (draw_fighter(t4));
        } else {
            t9 = t2;
        }
        t3 = (t3 + 0x1);
        t2 = t9;
        t2 = (signed char)t3;
        t4 = (t4 + 0x72D0);
        if ((int)t2 >= (int)0x2) {
            break;
        }
    }
    return draw_object_classes();
}
