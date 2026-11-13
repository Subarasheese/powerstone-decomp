/* HUD: init, gauges, combo and hit counter, win marks, per-frame draw dispatcher (0c02ff18-0c03148c) */

/* named globals (symbols.txt) */
extern char g_res_eyecatch[];
struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int ui_sprite_queue_add(int, int, int);

int FUN_0c031030(void)
{
    int stk[16];

    *(float *)(((int)stk + 12)) = ((((struct o0_float *)0xC031128)->v));
    *(float *)(((int)stk + 16)) = ((((struct o4_float *)0xC031128)->v));
    *(float *)(((int)stk + 20)) = ((((struct o8_float *)0xC031128)->v));
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    *(float *)(((int)stk + 52)) = 1.0f;
    *(float *)(((int)stk + 28)) = 1.0f;
    *(float *)(((int)stk + 24)) = 1.0f;
    *(unsigned int *)(((int)stk + 60)) = 0x100A;
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    return (ui_sprite_queue_add((((int)stk + 0) + 0x8), ((int)g_res_eyecatch), 0x1));
}
