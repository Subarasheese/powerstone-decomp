/* object pool, class lists, part pools, obj_create/obj_destroy/obj_tick_class (0c058ef4-0c059718) */

/* named globals (symbols.txt) */
extern char g_item_state[];
extern char g_obj_class_head[];
extern char g_obj_class_tail[];
extern char g_obj_free_list[];
extern char g_obj_pool[];
extern char g_part0_free_count[];
extern char g_part0_free_stack[];
extern char g_part0_pool[];
extern char g_part1_free_count[];
extern char g_part1_free_stack[];
extern char g_part1_pool[];
extern char g_part2_free_count[];
extern char g_part2_free_stack[];
extern char g_part2_pool[];
int pl_reset_pair(void);
int memset(int, int, int);
struct o2DC_uchar { char p[0x2DC]; unsigned char v; };
struct o2DD_uchar { char p[0x2DD]; unsigned char v; };
int obj_pool_pop(void);
int obj_destroy(int, int);
int part_alloc0(void);
int part_alloc1(void);
int part_alloc2(void);
int obj_tick_class(int);
int game_update_fighters(float);
int item_director_tick(void);

int item_clear_state(void);
int FUN_0c058f44(void);
int obj_system_init(void);
int part_pool0_init(void);
int part_pool1_init(void);
int part_pool2_init(void);

int item_clear_state(void)
{
    return memset(((int)g_item_state), 0x0, 0x334);
}

int FUN_0c058f44(void)
{
    return memset(0xC7F2998, 0x0, 0x60);
}

int game_reset_objects(void)
{
    item_clear_state();
    FUN_0c058f44();
    pl_reset_pair();
    return obj_system_init();
}

int obj_release(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x18));
    t1 = memset(a4, 0x0, 0x31C);
    *(unsigned int *)((a4 + 0x18)) = t0;
    *(unsigned int *)((a4 + 0x14)) = (*(int *)g_obj_free_list);
    *(unsigned int *)g_obj_free_list = a4;
    return t1;
}

int obj_system_init(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    part_pool0_init();
    part_pool1_init();
    part_pool2_init();
    *(unsigned int *)g_obj_free_list = ((int)g_obj_pool);
    t0 = ((int)g_obj_pool);
    t1 = 0x1;
    t2 = ((int)g_obj_pool);
    t3 = 0x0;
    for (;;) {
        memset(t0, 0x0, 0x31C);
        t3 = (t3 + 0x1);
        if (t1 != 100) {
            *(unsigned int *)((t2 + 0x14)) = (t2 + 0x31C);
        }
        t1 = (t1 + 0x1);
        t2 = (t2 + 0x31C);
        t0 = (t0 + 0x31C);
        if ((int)t3 >= (int)0x64) {
            break;
        }
    }
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t1 = (t1 + 0x1);
        *(unsigned int *)((((int)g_obj_class_head) + t0)) = 0x0;
        *(unsigned int *)((((int)g_obj_class_tail) + t0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((int)t1 >= (int)0xA) {
            break;
        }
    }
    return t0;
}

int obj_create_beside(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;

    t0 = obj_pool_pop();
    t1 = 0x0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x2)) = a4;
        if (a6 != 0) {
            if (a6 != 1) {
            } else {
                t2 = *(int *)((a5 + 0x18));
                if (t2 == 0) {
                    *(unsigned int *)(((a4 << 2) + ((int)g_obj_class_tail))) = t0;
                } else {
                    *(unsigned int *)((t2 + 0x14)) = t0;
                }
                *(unsigned int *)((t0 + 0x18)) = t2;
                *(unsigned int *)((t0 + 0x14)) = a5;
                *(unsigned int *)((a5 + 0x18)) = t0;
            }
        } else {
            t2 = *(int *)((a5 + 0x14));
            if (t2 == 0) {
                *(unsigned int *)(((a4 << 2) + ((int)g_obj_class_head))) = t0;
            } else {
                *(unsigned int *)((t2 + 0x18)) = t0;
            }
            *(unsigned int *)((t0 + 0x14)) = t2;
            *(unsigned int *)((t0 + 0x18)) = a5;
            *(unsigned int *)((a5 + 0x14)) = t0;
        }
        (((struct o2DD_uchar *)(t0))->v) = a8;
        t2 = t0;
        if ((int)a7 > 0) {
            t3 = a8;
            t4 = (0x2E0 + t0);
            t5 = (a4 << 2);
            t6 = (0x2E0 + t0);
            t7 = (0x2E0 + t0);
            t8 = (0x2E0 + t0);
            t9 = 0x0;
            for (;;) {
                t10 = *(signed char *)((t0 + 0x2DD));
                if (t10 != 0) {
                    if (t10 != 1) {
                        if (t10 != 2) {
                            t10 = t4;
                            t4 = t5;
                        } else {
                            *(unsigned int *)((t7 + 0x0)) = (part_alloc2());
                        }
                        t5 = t10;
                        t10 = t4;
                    } else {
                        *(unsigned int *)((t6 + 0x0)) = (part_alloc1());
                    }
                    t4 = t5;
                    t5 = t10;
                } else {
                    t3 = 0x2E0;
                    t3 = (t3 + t0);
                    *(unsigned int *)(((((t9 << 2) + t3)) + 0x0)) = (part_alloc0());
                }
                t3 = (*(int *)((t8 + 0x0)));
                if (t3 == 0) {
                    break;
                }
                t9 = (t9 + 0x1);
                t7 = (t7 + 0x4);
                t3 = (*(signed char *)((t0 + 0x2DC)));
                t8 = (t8 + 0x4);
                t3 = (t3 + 0x1);
                (((struct o2DC_uchar *)(t0))->v) = t3;
                t6 = (t6 + 0x4);
                if ((int)t9 >= (int)a7) {
                    return t0;
                }
            }
            obj_destroy(t0, t5);
            t2 = 0x0;
        }
        t1 = t2;
    }
    return t1;
}

int obj_tick_all(float f4)
{
    game_update_fighters(f4);
    item_director_tick();
    obj_tick_class(0x2);
    obj_tick_class(0x3);
    obj_tick_class(0x4);
    obj_tick_class(0x0);
    obj_tick_class(0x1);
    obj_tick_class(0x5);
    obj_tick_class(0x6);
    return obj_tick_class(0x7);
}

int part_pool0_init(void)
{
    register int t0;
    register int t2;
    register int t3;

    t0 = 0x0;
    for (;;) {
        memset(((unsigned short)((unsigned short)t0 * (unsigned short)0xA4) + ((int)g_part0_pool)), 0x0, 0xA4);
        t2 = ((unsigned short)((unsigned short)t0 * (unsigned short)0xA4) + ((int)g_part0_pool));
        t3 = t0;
        t0 = (t0 + 0x1);
        *(unsigned int *)((((int)g_part0_free_stack) + (t3 << 2))) = t2;
        if ((int)t0 >= (int)0x12C) {
            break;
        }
    }
    *(unsigned int *)g_part0_free_count = 0x12C;
    return (t3 << 2);
}

int part_free0(int a4)
{
    register int t1;

    memset(a4, 0x0, 0xA4);
    t1 = *(int *)g_part0_free_count;
    *(unsigned int *)g_part0_free_count = (t1 + 0x1);
    *(unsigned int *)(((((t1 + 0x1) - 1) << 2) + ((int)g_part0_free_stack))) = a4;
    return ((int)g_part0_free_stack);
}

int part_pool1_init(void)
{
    register int t0;
    register int t2;
    register int t3;

    t0 = 0x0;
    for (;;) {
        memset(((unsigned short)((unsigned short)t0 * (unsigned short)0x9B8) + ((int)g_part1_pool)), 0x0, 0x9B8);
        t2 = ((unsigned short)((unsigned short)t0 * (unsigned short)0x9B8) + ((int)g_part1_pool));
        t3 = t0;
        t0 = (t0 + 0x1);
        *(unsigned int *)((((int)g_part1_free_stack) + (t3 << 2))) = t2;
        if ((int)t0 >= (int)0xF) {
            break;
        }
    }
    *(unsigned int *)g_part1_free_count = 0xF;
    return (t3 << 2);
}

int part_free1(int a4)
{
    register int t1;

    memset(a4, 0x0, 0x9B8);
    t1 = *(int *)g_part1_free_count;
    *(unsigned int *)g_part1_free_count = (t1 + 0x1);
    *(unsigned int *)(((((t1 + 0x1) - 1) << 2) + ((int)g_part1_free_stack))) = a4;
    return ((int)g_part1_free_stack);
}

int part_pool2_init(void)
{
    register int t0;
    register int t3;
    register int t4;

    t0 = 0x0;
    for (;;) {
        memset(((short)(((((t0 << 1) + t0) << 2) << 2) << 2) + ((int)g_part2_pool)), 0x0, 0xC0);
        t3 = ((short)(((((t0 << 1) + t0) << 2) << 2) << 2) + ((int)g_part2_pool));
        t4 = t0;
        t0 = (t0 + 0x1);
        *(unsigned int *)((((int)g_part2_free_stack) + (t4 << 2))) = t3;
        if ((int)t0 >= (int)0x1E) {
            break;
        }
    }
    *(unsigned int *)g_part2_free_count = 0x1E;
    return (t4 << 2);
}

int part_free2(int a4)
{
    register int t1;

    memset(a4, 0x0, 0xC0);
    t1 = *(int *)g_part2_free_count;
    *(unsigned int *)g_part2_free_count = (t1 + 0x1);
    *(unsigned int *)(((((t1 + 0x1) - 1) << 2) + ((int)g_part2_free_stack))) = a4;
    return ((int)g_part2_free_stack);
}
