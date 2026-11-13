/* battle round flow record g_round_flow (init (0c0cc074-0c0ccefc) */

/* named globals (symbols.txt) */
int item_director_pick_spot(int a4, int a5, int a6, int a7);
int FUN_0c0cc074(int a4, int a5, int a6, int a7);
int item_director_pick_kind(int slot);
int FUN_0c0ccb60(int a4, int a5, int a6, int a7);
extern char g_camera_pos[];
extern char g_item_player_flags[];
extern char g_item_state[];
extern char g_res_kyoutsuu[];
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o2E_uchar { char p[0x2E]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
int FUN_0c049288(void);
int obj_spawn_05ca54(int);
int snd_play_stage_obj_se(int, int, int);
int stage_spawn_layout_objects(void);
struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int math_rand_next(void);
int FUN_0c0e6e5c(void);
float FUN_0c0e2240(int, int);
extern int FUN_0c0e6fdc();
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
typedef struct { float x, y, z; } vec3;
extern void FUN_0c05cb46(vec3 *, int, int);
extern void fx_spawn_04463c(vec3 *);
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);

int item_director_roll_variant(int a4);
int FUN_0c0cc7fc(int a4);
int FUN_0c0ccbfe(void);


int item_director_count_free_slots(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t2 = *(signed char *)((((signed char)t0 + ((int)g_item_player_flags)) + 0x0));
        t0 = (t0 + 0x1);
        if (t2 == 0) {
            t1 = (t1 + 0x1);
        }
        if ((int)(signed char)t0 >= (int)0x3) {
            break;
        }
    }
    return t1;
}

int item_director_roll_variant(int a4)
{
    int stk[1];
    register int t19;
    register int t24;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t19 = 0x0;
    if ((int)(*(short *)0xC7EB298) < (int)(*(short *)0xC7F2568)) {
    } else {
        t19 = 0x1;
        if ((int)(*(short *)0xC7EB298) > (int)(*(short *)0xC7F2568)) {
        } else {
            math_rand_next();
            t19 = (FUN_0c0e6e5c());
        }
    }
    t24 = t19;
    if ((*(signed char *)(((int)stk + 0))) == 1) {
        t24 = (0x1 - t19);
    }
    return t24;
}



int FUN_0c0cc7fc(int a4)
{
    *(unsigned short *)0xC7F2750 = 0x0;
    (((struct o0_uchar *)0xC7F2991)->v) = ((*(signed char *)0xC7F2991) + 0x1);
    (((struct o5_uchar *)0xC7F2991)->v) = (*(signed char *)0xC7F2995);
    (((struct o4_uchar *)0xC7F2991)->v) = (*(signed char *)0xC7F2994);
    (((struct o3_uchar *)0xC7F2991)->v) = (*(signed char *)0xC7F2993);
    (((struct o2_uchar *)0xC7F2991)->v) = (*(signed char *)0xC7F2992);
    (((struct o1_uchar *)0xC7F2991)->v) = a4;
    return 0x32E;
}

void item_director_spawn_queued(char arg)
{
    vec3 entry;
    char *block = (char *)g_item_state;
    char *queue;
    int set_idx = *(signed char *)0x0C7F3051;

    entry = *(vec3 *)((char *)0x0C33CA80 + (short)(set_idx * 72) + (signed char)(arg * 24));
    FUN_0c05cb46(&entry, block[0x32E], arg);
    block[0x32D] = block[0x32D] - 1;
    queue = block + 0x32E;
    queue[0] = queue[1];
    queue = block + 0x32E;
    queue[1] = queue[2];
    queue = block + 0x32E;
    queue[2] = queue[3];
    queue = block + 0x32E;
    queue[3] = queue[4];
    entry.y = entry.y - 40.0f;
    fx_spawn_04463c(&entry);
}

int item_director_phase0(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)0xC7F302C;
    t2 = t0;
    if (t0 == 3) {
        *(unsigned char *)0xC7F266C = ((*(signed char *)0xC7F266C) + 0x1);
        *(unsigned short *)0xC7F2750 = 0x0;
        *(unsigned char *)0xC7F2978 = 0x1;
        t2 = 0x314;
    }
    return t2;
}

int item_director_phase1(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t1 = *(short *)0xC7F2750;
    *(unsigned short *)0xC7F2750 = (t1 + 0x1);
    t2 = 0xEC;
    if ((int)(short)(t1 + 0x1) >= (int)0x12C) {
        t1 = *(signed char *)0xC7F2990;
        if (((*(signed char *)0xC7E40C8) != 10) && (t0 = *(signed char *)0xC7EB398, t0 != 10)) {
            if ((int)t1 > (int)0x3) {
                t0 = 0x0;
                for (;;) {
                    if ((int)t0 >= (int)((*(signed char *)0xC7F2990) - 2)) {
                        break;
                    }
                    FUN_0c0cc7fc(0x0);
                    t0 = (t0 + 0x1);
                }
            } else {
                FUN_0c0cc7fc(0x2);
            }
            t0 = ((*(signed char *)0xC7F266C) + 0x2);
        } else {
            if ((int)t1 > (int)0x3) {
                t1 = 0x0;
                for (;;) {
                    if ((int)t1 >= (int)((*(signed char *)0xC7F2990) - 1)) {
                        break;
                    }
                    FUN_0c0cc7fc(0x0);
                    t1 = (t1 + 0x1);
                }
            } else {
                FUN_0c0cc7fc(0x1);
                FUN_0c0cc7fc(0x2);
            }
            t0 = ((*(signed char *)0xC7F266C) + 0x1);
        }
        *(unsigned char *)0xC7F266C = t0;
        *(unsigned char *)0xC7F2978 = 0x1;
        t2 = 0x314;
    }
    return t2;
}

int item_director_phase2(int a4, int a5)
{
    register int t0;

    t0 = *(short *)0xC7F2750;
    *(unsigned short *)0xC7F2750 = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x12C) {
        (((struct o0_uchar *)0xC7F266C)->v) = ((*(signed char *)0xC7F266C) + 0x1);
        (((struct o1_uchar *)0xC7F266C)->v) = 0x0;
        *(unsigned char *)0xC7F2978 = 0x1;
        *(unsigned short *)0xC7F2750 = 0x0;
    }
    return 0xEC;
}

int item_director_phase3(int a4, int a5)
{
    register int t4;

    if ((*(signed char *)0xC7E40C8) != 10) {
        *(volatile signed char *)0xC7EB398;
    }
    t4 = *(short *)0xC7F2750;
    *(unsigned short *)0xC7F2750 = (t4 + 0x1);
    if ((int)(short)(t4 + 0x1) >= (int)0x12C) {
        (((struct o0_uchar *)0xC7F266C)->v) = ((*(signed char *)0xC7F266C) + 0x1);
        (((struct o1_uchar *)0xC7F266C)->v) = 0x0;
        *(unsigned char *)0xC7F2978 = 0x1;
        *(unsigned short *)0xC7F2750 = 0x0;
    }
    return 0xEC;
}

int item_director_phase4(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)0xC7F2977;
    t1 = *(signed char *)0xC7F266D;
    if (t1 != 0) {
        t2 = t1;
        if (t1 != 1) {
        } else {
            if ((signed char)t0 != 0) {
                t3 = *(short *)0xC7F2750;
                *(unsigned short *)0xC7F2750 = (t3 + 0x1);
                t4 = 0xEC;
                if ((int)(short)(t3 + 0x1) >= (int)0x12C) {
                    *(unsigned char *)0xC7F2978 = 0x1;
                    *(unsigned char *)0xC7F266D = 0x0;
                    t4 = 0x0;
                }
                t3 = t4;
            } else {
                *(unsigned char *)0xC7F266D = 0x0;
                t3 = 0x0;
            }
            t2 = t3;
        }
        t3 = t2;
    } else {
        t2 = t1;
        if ((signed char)t0 != 0) {
            *(unsigned char *)0xC7F266D = ((*(signed char *)0xC7F266D) + 0x1);
            *(unsigned short *)0xC7F2750 = 0x0;
            t2 = 0xEC;
        }
        t3 = t2;
    }
    return t3;
}


int FUN_0c0ccbfe(void)
{
    register int t0;
    register int t7;
    register int t4;
    register int t5;

    t0 = obj_create(0x5, 0x1, 0x2);
    t7 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        *(unsigned int *)((t0 + 0x10)) = 0xC0CCC98;
        t4 = 0x0;
        for (;;) {
            t5 = *(int *)((((t4 << 2) + (0x2E0 + t0)) + 0x0));
            FUN_0c06233a(t5, ((int)g_res_kyoutsuu), (t4 + 0x1));
            t4 = (t4 + 0x1);
            *(unsigned short *)((t5 + 0x2)) = 0x1;
            if ((int)t4 >= (int)0x2) {
                break;
            }
        }
        t7 = 0x1;
    }
    return t7;
}

/* the item kind to drop for a slot: the slot's group (two group tables, by the flag at 0x0C7F4764), then a random kind of the
   group's list (two sets of lists: one when a fighter is character 8). Group 3 draws from the first g_save_options + 1 entries,
   0 standing for one of the kinds 15..17. */
struct ItemPick { signed char *kinds; int count; };
#define ITEM_PICK_FLAG (*(signed char *)0x0C7F4764)
#define ITEM_GROUPS_A ((signed char *)0x0C33CF54)
#define ITEM_GROUPS_B ((signed char *)0x0C33CF5E)
#define ITEM_PICKS_C8 ((struct ItemPick *)0x0C33CF34)
#define ITEM_PICKS ((struct ItemPick *)0x0C33CF14)
extern int math_rand_next(void);
extern signed char g_save_options;

int item_director_pick_kind(int slot)
{
    signed char group;
    struct ItemPick *pick;
    int r;

    group = (ITEM_PICK_FLAG ? ITEM_GROUPS_A : ITEM_GROUPS_B)[(signed char)slot];
    if (*(signed char *)0x0C7E40C8 == 8 || *(signed char *)0x0C7EB398 == 8)
        pick = ITEM_PICKS_C8;
    else
        pick = ITEM_PICKS;
    pick = pick + group;
    if (group == 3) {
        r = math_rand_next() % (g_save_options + 1);
        if ((signed char)r != 0)
            return pick->kinds[(signed char)r - 1];
        return math_rand_next() % 3 + 15;
    }
    return pick->kinds[math_rand_next() % pick->count];
}
