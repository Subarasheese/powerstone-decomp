/* object pool, class lists, part pools, obj_create/obj_destroy/obj_tick_class (0c058ef4-0c059718) */

typedef struct block_t { char pad0[3]; char player_index; char pad4[16]; struct block_t *link_20; struct block_t *link_24; struct block_t *link_28; } block_t;
extern void *memset(void *, int, unsigned int);
int obj_release(int);
int mdl_setup_part_matrices(int);
struct o2DC_uchar { char p[0x2DC]; unsigned char v; };
struct o2DD_uchar { char p[0x2DD]; unsigned char v; };
int part_free0(int);
int part_free1(int);
int part_free2(int);

int obj_pool_pop(void);
int obj_destroy(int a4, int a5, int a6, int a7);
int part_alloc0(void);
int part_alloc1(void);
int part_alloc2(void);

void pl_reset_pair(void)
{
    block_t *first = (block_t *)0x0C7E40C4;
    block_t *second;
    memset(first, 0, 29392);
    second = (block_t *)((char *)first + 29392);
    memset(second, 0, 29392);
    first->link_20 = 0;
    first->link_24 = second;
    second->link_20 = first;
    second->link_24 = 0;
    first->player_index = 0;
    second->player_index = 1;
    first->link_28 = second;
    second->link_28 = first;
}

int obj_pool_pop(void)
{
    register int t0;

    t0 = *(int *)0xC7E40C0;
    if (t0 == 0) {
        return 0x0;
    }
    *(unsigned int *)0xC7E40C0 = (*(int *)((t0 + 0x14)));
    return t0;
}

int obj_release_all(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = 0xC7E4070;
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        t4 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        t5 = t4;
        for (;;) {
            if (t5 == 0) {
                break;
            }
            t4 = (*(int *)((t5 + 0x18)));
            t3 = (obj_release(t5));
            t5 = t4;
        }
        t3 = t1;
        *(unsigned int *)((0xC7E4070 + t3)) = 0x0;
        t2 = (t2 + 0x1);
        t3 = 0xC7E4098;
        *(unsigned int *)((t1 + t3)) = 0x0;
        t1 = (t1 + 0x4);
        if ((int)(short)t2 >= (int)0xA) {
            break;
        }
    }
    return t3;
}

int obj_release_class(int a4)
{
    register int t3;
    register int t2;

    t3 = (*(int *)(((a4 << 2) + 0xC7E4070)));
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t2 = (*(int *)((t3 + 0x18)));
        obj_release(t3);
        t3 = t2;
    }
    *(unsigned int *)(((a4 << 2) + 0xC7E4070)) = 0x0;
    *(unsigned int *)(((a4 << 2) + 0xC7E4098)) = 0x0;
    return 0xC7E4098;
}

int obj_release_all_but_class(int a4)
{
    register int t1;
    register int t4;
    register int t0;
    register int t2;
    register int t3;

    t1 = a4;
    t4 = 0x0;
    for (;;) {
        if ((short)t4 != a4) {
            t2 = (short)t4;
            t2 = (t2 << 2);
            t0 = t2;
            t1 = (*(int *)((0xC7E4070 + t0)));
            for (;;) {
                if (t1 == 0) {
                    break;
                }
                t3 = (*(int *)((t1 + 0x18)));
                t0 = (obj_release(t1));
                t1 = t3;
            }
            t0 = t2;
            *(unsigned int *)((0xC7E4070 + t0)) = 0x0;
            *(unsigned int *)((0xC7E4098 + t0)) = 0x0;
        }
        t4 = (t4 + 0x1);
        if ((int)(short)t4 >= (int)0xA) {
            break;
        }
    }
    return t0;
}

int obj_create(int a4, int a5, int a6, int a7)
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
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;

    t0 = obj_pool_pop();
    t1 = 0x0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x2)) = a4;
        if (a5 != 0) {
            if (a5 != 1) {
            } else {
                t2 = *(int *)((((a4 << 2) + 0xC7E4098) + 0x0));
                *(unsigned int *)((t0 + 0x14)) = t2;
                *(unsigned int *)((((a4 << 2) + 0xC7E4098) + 0x0)) = t0;
                *(unsigned int *)((t0 + 0x18)) = 0x0;
                if (t2 == 0) {
                    *(unsigned int *)((0xC7E4070 + (a4 << 2))) = t0;
                } else {
                    *(unsigned int *)((t2 + 0x18)) = t0;
                }
                t2 = ((a4 << 2) + 0xC7E4098);
            }
            t3 = t2;
        } else {
            t2 = *(int *)((((a4 << 2) + 0xC7E4070) + 0x0));
            *(unsigned int *)((t0 + 0x18)) = t2;
            *(unsigned int *)((((a4 << 2) + 0xC7E4070) + 0x0)) = t0;
            *(unsigned int *)((t0 + 0x14)) = 0x0;
            if (t2 == 0) {
                *(unsigned int *)((0xC7E4098 + (a4 << 2))) = t0;
            } else {
                *(unsigned int *)((t2 + 0x14)) = t0;
            }
            t3 = ((a4 << 2) + 0xC7E4070);
        }
        (((struct o2DD_uchar *)(t0))->v) = a7;
        t2 = t0;
        if ((int)a6 > 0) {
            t4 = a7;
            t5 = t3;
            t3 = (0x2E0 + t0);
            t6 = 0xC7E4098;
            t7 = 0xC7E4070;
            t8 = 0x0;
            t9 = (0x2E0 + t0);
            t10 = (0x2E0 + t0);
            t11 = (0x2E0 + t0);
            t12 = 0x0;
            for (;;) {
                t13 = *(signed char *)((t0 + 0x2DD));
                if (t13 != 0) {
                    if (t13 != 1) {
                        if (t13 != 2) {
                            t13 = t5;
                            t14 = t3;
                            t15 = t6;
                            t16 = t7;
                            t17 = t8;
                        } else {
                            *(unsigned int *)((t11 + 0x0)) = (part_alloc2());
                        }
                        t3 = t13;
                        t13 = t14;
                        t14 = t15;
                        t15 = t16;
                        t16 = t17;
                    } else {
                        *(unsigned int *)((t9 + 0x0)) = (part_alloc1());
                    }
                    t17 = t3;
                    t3 = t13;
                    t13 = t14;
                    t14 = t15;
                    t15 = t16;
                } else {
                    t4 = 0x2E0;
                    t5 = t12;
                    t5 = (t5 << 2);
                    t4 = (t4 + t0);
                    t5 = (t5 + t4);
                    *(unsigned int *)(((t5) + 0x0)) = (part_alloc0());
                }
                t4 = (*(int *)((t10 + 0x0)));
                t5 = t17;
                t6 = t13;
                t7 = t14;
                t8 = t15;
                if (t4 == 0) {
                    break;
                }
                t12 = (t12 + 0x1);
                t11 = (t11 + 0x4);
                t4 = (*(signed char *)((t0 + 0x2DC)));
                t10 = (t10 + 0x4);
                t4 = (t4 + 0x1);
                (((struct o2DC_uchar *)(t0))->v) = t4;
                t9 = (t9 + 0x4);
                if ((int)t12 >= (int)a6) {
                    return t0;
                }
            }
            obj_destroy(t0, t6, t7, t8);
            t2 = 0x0;
        }
        t1 = t2;
    }
    return t1;
}

int obj_destroy(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = a4;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        t2 = t1;
        t3 = *(signed char *)((a4 + 0x2DD));
        t2 = (t2 << 2);
        if (t3 != 0) {
            if (t3 != 1) {
                if (t3 != 2) {
                    t3 = t0;
                } else {
                    t0 = 0x2E0;
                    t0 = (t0 + a4);
                    t0 = (t0 + t2);
                    t0 = (*(int *)((t0 + 0x0)));
                    part_free2(t0);
                }
                t4 = t3;
            } else {
                t0 = 0x2E0;
                t0 = (t0 + a4);
                t0 = (t0 + t2);
                t0 = (*(int *)((t0 + 0x0)));
                part_free1(t0);
            }
            t3 = t4;
        } else {
            t0 = 0x2E0;
            t0 = (t0 + a4);
            t0 = (t0 + t2);
            t0 = (*(int *)((t0 + 0x0)));
            part_free0(t0);
        }
        t1 = (t1 + 0x1);
        t0 = t3;
    }
    if ((*(int *)((a4 + 0x14))) == 0) {
        t0 = *(int *)((a4 + 0x18));
        *(unsigned int *)(((0xC7E4070 + ((*(signed char *)((a4 + 0x2))) << 2)) + 0x0)) = t0;
        if (t0 == 0) {
            *(unsigned int *)((0xC7E4098 + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x0;
        } else {
            *(unsigned int *)((t0 + 0x14)) = 0x0;
        }
    } else {
        if ((*(int *)((a4 + 0x18))) == 0) {
            t0 = *(int *)((a4 + 0x14));
            *(unsigned int *)((0xC7E4098 + ((*(signed char *)((a4 + 0x2))) << 2))) = t0;
            *(unsigned int *)((t0 + 0x18)) = 0x0;
        } else {
            *(unsigned int *)(((*(int *)((a4 + 0x14))) + 0x18)) = (*(int *)((a4 + 0x18)));
            *(unsigned int *)(((*(int *)((a4 + 0x18))) + 0x14)) = (*(int *)((a4 + 0x14)));
        }
    }
    return ((int (*)(int, int, int, int))(0xC0593DA))(a4, 0xC7E4098, a6, a7);
}

int FUN_0c0593e0(int a4)
{
    register int t1;
    register int t3;
    register int t5;
    register int t18;
    register int t2;
    register int t4;
    register int t17;

    t1 = 0xC7E4070;
    t3 = a4;
    t5 = (*(int *)(((a4 << 2) + 0xC7E4070)));
    for (;;) {
        if (t5 == 0) {
            break;
        }
        t2 = (*(signed char *)((t5 + 0x0)));
        t4 = (*(int *)((t5 + 0x18)));
        t18 = t3;
        if (t2 != 0) {
            t1 = (*(short *)((t5 + 0x6)));
            t1 = (unsigned short)t1;
            if ((t1 & 0x80) == 0) {
                t3 = t5;
                t1 = (mdl_setup_part_matrices(t3));
            } else {
                t17 = t2;
                t18 = t3;
            }
        } else {
            t17 = t2;
        }
        t5 = t4;
        t2 = t17;
        t3 = t18;
    }
    return t1;
}

int FUN_0c05941e(int a4, int a5, int a6, int a7)
{
    *(volatile int *)(((a4 << 2) + 0xC7E4070));
    return ((int (*)(int, int, int, int))(0xC05947C))(a4, a5, a6, a7);
}

int obj_tick_class(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t3;
    register int t4;
    register int t2;
    register int t9;
    register int t10;

    t1 = 0xC7E4070;
    t3 = a4;
    t4 = (*(int *)(((a4 << 2) + 0xC7E4070)));
    for (;;) {
        if (t4 == 0) {
            break;
        }
        t2 = (*(signed char *)((t4 + 0x0)));
        if (t2 != 0) {
            t3 = t4;
            t1 = (((int (*)(int, int, int, int))((*(int *)((t4 + 0x10)))))(t3, a5, a6, a7));
        } else {
            t9 = t2;
            t10 = t3;
        }
        t4 = (*(int *)((t4 + 0x18)));
        t2 = t9;
        t3 = t10;
    }
    return t1;
}

int part_alloc0(void)
{
    register int t1;

    if ((*(int *)0xC3738E0) != 0) {
        t1 = *(int *)0xC3738E0;
        *(unsigned int *)0xC3738E0 = (t1 - 1);
        return (*(int *)((0xC373430 + ((t1 - 1) << 2))));
    }
    return 0x0;
}

int part_alloc1(void)
{
    register int t1;

    if ((*(int *)0xC37CAE8) != 0) {
        t1 = *(int *)0xC37CAE8;
        *(unsigned int *)0xC37CAE8 = (t1 - 1);
        return (*(int *)((0xC37CAAC + ((t1 - 1) << 2))));
    }
    return 0x0;
}

int part_alloc2(void)
{
    register int t1;

    if ((*(int *)0xC37E1E4) != 0) {
        t1 = *(int *)0xC37E1E4;
        *(unsigned int *)0xC37E1E4 = (t1 - 1);
        return (*(int *)((0xC37E16C + ((t1 - 1) << 2))));
    }
    return 0x0;
}
