/* CPU fighter AI: slot helpers, debug overlay, script runner/selector, ai_think, first opcode handlers (0c04bfd0-0c04e94c) */

/* named globals (symbols.txt) */
extern char g_ai_script_group[];
extern char g_obj_class_head[];
extern char g_tab_ai_ops[];
extern char g_tab_char_radius[];
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
int math_atan_angle16(float);
float math_signed_sqrt(float);
struct o50_float { char p[0x50]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o0_uint { unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_short { char p[0x70]; short v; };
struct o70_ushort { char p[0x70]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o0_int { int v; };
struct o4_short { char p[0x4]; short v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct actor {
    signed char active;     /* 0x00 */
    char pad1[2];
    signed char owner;      /* 0x03 */
    signed char kind;       /* 0x04 */
    char pad5[0x18 - 5];
    struct actor *next;       /* 0x18 */
    char pad1c[0x30D - 0x1C];
    signed char mode;       /* 0x30D */
};
struct actor_table {
    char p0[8];
    struct actor *list1;      /* 0x08 */
    struct actor *list2;      /* 0x0C */
};
int hit_find_contact_direction(int);
struct o6C_int { char p[0x6C]; int v; };
extern float math_rand_float(void);
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };

int ai_clear_op_state(void);
int ai_script_branch(int a4, int a5);

int ai_calc_angle_to_target(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = *(int *)((a4 + 0x1C));
    u0 = (((struct o20_float *)(t0))->v);
    u1 = (((struct o20_float *)(a4))->v);
    u2 = (((struct o28_float *)(t0))->v);
    u3 = (((struct o28_float *)(a4))->v);
    u4 = (u0 - u1);
    if ((u0 - u1) == 0.0f) {
        u4 = (*(float *)0xC04C108);
    }
    u0 = (u2 - u3);
    u0 = -u0;
    t0 = math_atan_angle16((u0 / u4));
    t1 = t0;
    if (0.0f > u4) {
        t1 = (t0 + 0x8000);
    }
    return (unsigned short)(((t1 + 0x5000) - (*(int *)((a4 + 0x30)))) + 0x1000);
}

int ai_calc_gap_to_target(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    u0 = (((struct o20_float *)(a4))->v);
    u1 = (((struct o28_float *)(a4))->v);
    t0 = *(int *)((a4 + 0x1C));
    u2 = (((struct o20_float *)(t0))->v);
    u3 = (((struct o28_float *)(t0))->v);
    u4 = ((u1 - u3) * (u1 - u3));
    u4 = u4 + ((u0 - u2)) * ((u0 - u2));
    u0 = math_signed_sqrt(u4);
    t1 = (int)u0;
    if ((*(signed char *)((t0 + 0x2))) == 0) {
        t1 = ((int)u0 - (*(short *)((((int)g_tab_char_radius) + ((*(signed char *)((t0 + 0x4))) << 1)))));
    }
    return t1;
}

int ai_calc_dist_to_saved_pos(int a4)
{
    register float u0;
    register float u1;
    register int t2;
    register float u3;
    register float u4;
    register float u7;

    u0 = (((struct o20_float *)(a4))->v);
    u1 = (((struct o28_float *)(a4))->v);
    t2 = *(signed char *)0xC3673EE;
    u3 = (((struct o50_float *)(((short)((short)(unsigned char)t2 * (short)0x254) + 0xC366F40)))->v);
    u4 = (((struct o58_float *)(((short)((short)(unsigned char)t2 * (short)0x254) + 0xC366F40)))->v);
    u7 = ((u1 - u4) * (u1 - u4));
    u7 = u7 + ((u0 - u3)) * ((u0 - u3));
    return (int)(math_signed_sqrt(u7));
}

int FUN_0c04c0ea(void)
{
    *(unsigned char *)0xC3673EE = 0x0;
    return ((int (*)(int, int, int, int))(0xC04C222))(0xC3673EE, 0xC366F40, 0x0, 0x1);
}

int ai_run_script(int a4, int a5, int a6, int a7)
{
    register int t7;
    register int t2;
    register int t4;
    register int t5;

    (((struct o0_uint *)0xC3673E8)->v) = (*(int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)));
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    for (;;) {
        if ((((((struct o4_short *)0xC3673E8)->v)) == 0) || (t4 = (((struct o0_int *)0xC3673E8)->v), t5 = *(short *)((t4 + 0x0)), (unsigned short)t5 == 0xFFFF)) {
            break;
        }
        t7 = *(int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC));
        (((struct o0_uint *)0xC3673E8)->v) = t7;
        if ((unsigned short)(*(short *)((t7 + 0x0))) != 0xFFFF) {
            t2 = ((((struct o0_int *)0xC3673E8)->v));
            t2 = (t2 + 0x2);
            (((struct o0_uint *)0xC3673E8)->v) = t2;
            t2 = (t2 - 2);
            t2 = (*(short *)((t2 + 0x0)));
            t2 = (unsigned short)t2;
            t2 = (t2 << 2);
            t2 = (((int (*)(int, int, int, int))((*(int *)((((int)g_tab_ai_ops) + t2)))))(a4, a5, a6, a7));
            continue;
        }
        break;
    }
    return t2;
}

int ai_get_linked_obj_if_kind2(int a4)
{
    int t1;
    register int t2;

    if ((((((struct o71C8_int *)(a4))->v)) != 0) && (t1 = (((struct o71C8_int *)(a4))->v), t2 = *(signed char *)((t1 + 0x2)), t2 == 2)) {
        return ((((struct o71C8_int *)(a4))->v));
    }
    return 0x0;
}

int FUN_0c04ca6e(int a4)
{
    register int t1;
    register int t2;
    int t3;
    register int t4;

    if ((((((struct o71C8_int *)(a4))->v)) != 0) && ((t1 = (((struct o71C8_int *)(a4))->v), t2 = *(signed char *)((t1 + 0x2)), t2 == 3) && (t3 = (((struct o71C8_int *)(a4))->v), t4 = *(signed char *)((t3 + 0x4)), t4 == 6))) {
        return ((((struct o71C8_int *)(a4))->v));
    }
    return 0x0;
}

int FUN_0c04ca94(int a4, int a5, int a6, int a7)
{
    return ((int (*)(int, int, int, int))(0xC04CAEE))(a4, a5, 0x0, a7);
}

int FUN_0c04cafe(int a4)
{
    register int t0;
    register int t8;
    register int t9;
    register int t10;
    register int t11;

    t0 = 0x0;
    for (;;) {
        if ((int)(signed char)t0 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            return 0x0;
        }
        if (((*(int *)((((0x294 + a4) + ((signed char)t0 << 2)) + 0x0))) != 0) && ((t8 = *(int *)((((signed char)t0 << 2) + (0x294 + a4))), t9 = *(signed char *)((t8 + 0x2)), t9 == 2) && ((t10 = *(int *)((((0x294 + a4) + ((signed char)t0 << 2)) + 0x0)), t11 = *(signed char *)((t10 + 0x4)), t11 == 8) || (t11 == 16)))) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return (*(int *)((((signed char)t0 << 2) + (0x294 + a4))));
}

int FUN_0c04cb50(int a4)
{
    register int t0;
    register int t8;
    register int t9;
    int t10;
    register int t11;

    t0 = 0x0;
    for (;;) {
        if ((int)(signed char)t0 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            return 0x0;
        }
        if (((*(int *)((((0x294 + a4) + ((signed char)t0 << 2)) + 0x0))) != 0) && ((t8 = *(int *)((((signed char)t0 << 2) + (0x294 + a4))), t9 = *(signed char *)((t8 + 0x2)), t9 == 2) && (t10 = *(int *)((((signed char)t0 << 2) + (0x294 + a4))), t11 = *(signed char *)((t10 + 0x4)), t11 == 12))) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return (*(int *)((((signed char)t0 << 2) + (0x294 + a4))));
}

struct actor *ai_find_incoming_threat(void)
{
    struct actor_table *table = (struct actor_table *)g_obj_class_head;
    unsigned char player_id = *(unsigned char *)0xC3673EE;
    struct actor *cur;
    struct actor *next;

    for (cur = table->list1; cur != 0; cur = next) {
        next = cur->next;
        if (cur->active != 0 && cur->owner != player_id && (cur->kind == 1 || cur->kind == 18) &&
            (cur->mode == 6 || cur->mode == 7 || cur->mode == 8 || cur->mode == 9 || cur->mode == 10 || cur->mode == 11 || cur->mode == 12)) {
            return cur;
        }
    }
    for (cur = table->list2; cur != 0; cur = next) {
        next = cur->next;
        if (cur->active != 0 && cur->owner != player_id && cur->kind == 6 && (cur->mode == 13 || cur->mode == 14 || cur->mode == 15)) {
            return cur;
        }
    }
    return 0;
}

int FUN_0c04cc5c(int a4)
{
    register int t0;
    register int t1;
    register float u2;
    register float u3;
    register int t4;
    register float u5;
    register float u6;
    register int t7;
    register float u8;
    register float u9;
    register int t10;
    register float u11;
    register float u12;

    t0 = hit_find_contact_direction(a4);
    if (((signed char)t0 != 2) && (((signed char)t0 != 3) && ((((signed char)t0 != 4) || (t1 = *(int *)((a4 + 0x1C)), u2 = (((struct o28_float *)(a4))->v), u3 = (((struct o28_float *)(t1))->v), !(u3 > u2))) && ((((signed char)t0 != 6) || (t4 = *(int *)((a4 + 0x1C)), u5 = (((struct o28_float *)(a4))->v), u6 = (((struct o28_float *)(t4))->v), !(u5 > u6))) && ((((signed char)t0 != 5) || (t7 = *(int *)((a4 + 0x1C)), u8 = (((struct o20_float *)(a4))->v), u9 = (((struct o20_float *)(t7))->v), !(u9 > u8))) && (((signed char)t0 != 7) || (t10 = *(int *)((a4 + 0x1C)), u11 = (((struct o20_float *)(a4))->v), u12 = (((struct o20_float *)(t10))->v), !(u11 > u12)))))))) {
        return (signed char)t0;
    }
    return 0x0;
}

int ai_push_state(void)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)0xC3673EE;
    *(unsigned int *)(((((unsigned short)((((struct o70_short *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v)) << 2) + (0x1B4 + ((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40))) + 0x0)) = (*(int *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0xC)));
    t0 = *(signed char *)0xC3673EE;
    *(unsigned int *)(((((unsigned short)((((struct o70_short *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v)) << 2) + (0x164 + ((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40))) + 0x0)) = ((((struct o6C_int *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v));
    t0 = *(signed char *)0xC3673EE;
    t1 = *(signed char *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x70));
    u0 = (((struct o60_float *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v);
    *(float *)((((unsigned char)(((t1 << 1) + t1) << 2) + (((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x74)) + 0x0)) = u0;
    t0 = *(signed char *)0xC3673EE;
    t1 = *(signed char *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x70));
    u0 = (((struct o64_float *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v);
    (((struct o4_float *)(((unsigned char)(((t1 << 1) + t1) << 2) + (((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x74))))->v) = u0;
    t0 = *(signed char *)0xC3673EE;
    t1 = *(signed char *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x70));
    u0 = (((struct o68_float *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v);
    (((struct o8_float *)(((unsigned char)(((t1 << 1) + t1) << 2) + (((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x74))))->v) = u0;
    t0 = *(signed char *)0xC3673EE;
    *(unsigned short *)(((((unsigned short)((((struct o70_short *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v)) << 1) + (0x22C + ((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40))) + 0x0)) = (*(short *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x8)));
    t0 = *(signed char *)0xC3673EE;
    *(unsigned short *)(((((unsigned short)((((struct o70_short *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v)) << 1) + (0x204 + ((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40))) + 0x0)) = (*(short *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x6)));
    t0 = *(signed char *)0xC3673EE;
    (((struct o70_ushort *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v) = (((((struct o70_short *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v)) + 0x1);
    return 0x70;
}

void ai_nop(void)
{
    
}

int ai_clear_op_state(void)
{
    *(unsigned char *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0x0)) = 0x0;
    *(unsigned char *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0x1)) = 0x0;
    *(unsigned char *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0x2)) = 0x0;
    *(unsigned char *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0x3)) = 0x0;
    return 0x0;
}

void ai_select_script(char *player, unsigned char group, unsigned char entry)
{
    unsigned char *unused_t;
    unsigned char *rec;
    unsigned char **tbl_row;
    unsigned char ***tbl3;
    int level_idx;
    int count, i, j, skip;
    unsigned char len;
    unsigned char pick;
    int **tbl_b;

    level_idx = *(unsigned char *)g_ai_script_group;
    if (player[0x71F3] == 0) {
        if ((*(char **)(player + 28))[0x71F3] != 0) {
            tbl3 = *(unsigned char ****)(0xC32D6A4 + level_idx * 4);
        } else {
            tbl3 = *(unsigned char ****)(0xC32D64C + level_idx * 4);
        }
    } else {
        tbl3 = *(unsigned char ****)(0xC32D678 + level_idx * 4);
    }
    tbl_row = (unsigned char **)tbl3[group];
    rec = tbl_row[entry];
    count = *(signed char *)rec;
    rec++;
    for (i = 0; i < (unsigned char)count; i++) {
        if (rec[i] > *(unsigned char *)(0xC7F302C + 48)) {
            rec += (unsigned char)count;
            break;
        }
    }
    skip = (unsigned char)i;
    if (skip > 0) {
        j = 0;
        do {
            j++;
            len = *rec++;
            rec += len;
        } while ((unsigned char)j < skip);
    }
    len = *rec++;
    pick = rec[(short)((unsigned int)(math_rand_float() * 255.0f) % len)];
    *(unsigned short *)(0xC366F6C + (short)(*(unsigned char *)0xC3673EE * 596)) = pick;
    if (player[0x71F3] == 0) {
        if ((*(char **)(player + 28))[0x71F3] != 0) {
            tbl_b = *(int ***)(0xC32D620 + level_idx * 4);
        } else {
            tbl_b = *(int ***)(0xC32D5C8 + level_idx * 4);
        }
    } else {
        tbl_b = *(int ***)(0xC32D5F4 + level_idx * 4);
    }
    *(int *)(0xC366F4C + (short)(*(unsigned char *)0xC3673EE * 596)) = tbl_b[group][pick];
}

int ai_script_branch(int a4, int a5)
{
    register int t1;

    t1 = *(short *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0x16));
    return ((int (*)(int, int, int, int))(0xC04E0A0))((t1 + 0x1), a5, 0xC3673E8, 0xC3673EE);
}

int ai_op_end_frame(void)
{
    register int t3;

    (((struct o38_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = 0x0;
    *(unsigned short *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0x6)) = 0x1;
    *(unsigned short *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0x8)) = 0x1;
    t3 = ai_clear_op_state();
    *(unsigned short *)0xC3673EC = 0x0;
    return t3;
}

int ai_op9_goto_script(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct o2C_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = (*(short *)((((((struct o0_int *)0xC3673E8)->v)) + 0x0)));
    t0 = *(signed char *)g_ai_script_group;
    if ((*(signed char *)((a4 + 0x71F3))) == 0) {
        t1 = 0xC32D620;
        if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F3))) == 0) {
            t1 = 0xC32D5C8;
        }
        t2 = (*(int *)((((unsigned char)t0 << 2) + t1)));
    } else {
        t2 = (*(int *)((((unsigned char)t0 << 2) + 0xC32D5F4)));
    }
    t0 = *(signed char *)0xC3673EE;
    t1 = (((struct o0_int *)0xC3673E8)->v);
    t3 = *(int *)((t2 + 0x0));
    (((struct o0_uint *)0xC3673E8)->v) = (t1 + 0x2);
    *(unsigned int *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0xC)) = (*(int *)((t3 + ((unsigned short)(*(short *)((((t1 + 0x2) - 2) + 0x0))) << 2))));
    (((struct o0_uint *)0xC3673E8)->v) = (*(int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t0;
}

int ai_op10_call_script(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    (((struct o2C_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = (*(short *)((((((struct o0_int *)0xC3673E8)->v)) + 0x0)));
    t0 = *(signed char *)g_ai_script_group;
    if ((*(signed char *)((a4 + 0x71F3))) == 0) {
        t1 = 0xC32D620;
        if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F3))) == 0) {
            t1 = 0xC32D5C8;
        }
        t2 = (*(int *)((((unsigned char)t0 << 2) + t1)));
    } else {
        t2 = (*(int *)((((unsigned char)t0 << 2) + 0xC32D5F4)));
    }
    t0 = (((struct o0_int *)0xC3673E8)->v);
    t1 = *(signed char *)0xC3673EE;
    t3 = *(int *)((t2 + 0x0));
    (((struct o0_uint *)0xC3673E8)->v) = (t0 + 0x2);
    *(unsigned int *)((((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40) + 0xC)) = (*(int *)((t3 + ((unsigned short)(*(short *)((((t0 + 0x2) - 2) + 0x0))) << 2))));
    t0 = *(signed char *)0xC3673EE;
    *(unsigned int *)(((((unsigned short)((((struct o70_short *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v)) << 2) + (0x1B4 + ((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40))) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
    t0 = *(signed char *)0xC3673EE;
    *(unsigned int *)(((((unsigned short)((((struct o70_short *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v)) << 2) + (0x164 + ((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40))) + 0x0)) = ((((struct o6C_int *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v));
    t0 = *(signed char *)0xC3673EE;
    t1 = *(signed char *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x70));
    u0 = (((struct o60_float *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v);
    *(float *)((((unsigned char)(((t1 << 1) + t1) << 2) + (((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x74)) + 0x0)) = u0;
    t0 = *(signed char *)0xC3673EE;
    t1 = *(signed char *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x70));
    u0 = (((struct o64_float *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v);
    (((struct o4_float *)(((unsigned char)(((t1 << 1) + t1) << 2) + (((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x74))))->v) = u0;
    t0 = *(signed char *)0xC3673EE;
    t1 = *(signed char *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x70));
    u0 = (((struct o68_float *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v);
    (((struct o8_float *)(((unsigned char)(((t1 << 1) + t1) << 2) + (((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x74))))->v) = u0;
    t0 = *(signed char *)0xC3673EE;
    *(unsigned short *)(((((unsigned short)((((struct o70_short *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v)) << 1) + (0x22C + ((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40))) + 0x0)) = (*(short *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x8)));
    t0 = *(signed char *)0xC3673EE;
    *(unsigned short *)(((((unsigned short)((((struct o70_short *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v)) << 1) + (0x204 + ((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40))) + 0x0)) = (*(short *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x6)));
    t0 = *(signed char *)0xC3673EE;
    (((struct o70_ushort *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v) = (((((struct o70_short *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v)) + 0x1);
    (((struct o0_uint *)0xC3673E8)->v) = (*(int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t0;
}

int ai_op11_return(void)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)0xC3673EE;
    t1 = 0x70;
    if (((((struct o70_short *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v)) == 0) {
    } else {
        (((struct o70_ushort *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v) = (((((struct o70_short *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v)) - 1);
        t0 = *(signed char *)0xC3673EE;
        *(unsigned short *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x6)) = (*(short *)(((0x204 + ((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)) + ((unsigned short)((((struct o70_short *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v)) << 1))));
        t0 = *(signed char *)0xC3673EE;
        *(unsigned short *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x8)) = (*(short *)(((0x22C + ((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)) + ((unsigned short)((((struct o70_short *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v)) << 1))));
        t0 = *(signed char *)0xC3673EE;
        t2 = *(signed char *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x70));
        u0 = *(float *)((((unsigned char)(((t2 << 1) + t2) << 2) + (((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x74)) + 0x0));
        (((struct o60_float *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v) = u0;
        t0 = *(signed char *)0xC3673EE;
        t2 = *(signed char *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x70));
        u0 = (((struct o4_float *)(((unsigned char)(((t2 << 1) + t2) << 2) + (((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x74))))->v);
        (((struct o64_float *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v) = u0;
        t0 = *(signed char *)0xC3673EE;
        t2 = *(signed char *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x70));
        u0 = (((struct o8_float *)(((unsigned char)(((t2 << 1) + t2) << 2) + (((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x74))))->v);
        (((struct o68_float *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v) = u0;
        t0 = *(signed char *)0xC3673EE;
        (((struct o6C_uint *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v) = (*(int *)(((((unsigned short)((((struct o70_short *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v)) << 2) + (0x164 + ((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40))) + 0x0)));
        t0 = *(signed char *)0xC3673EE;
        t2 = *(int *)(((((unsigned short)((((struct o70_short *)(((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40)))->v)) << 2) + (0x1B4 + ((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40))) + 0x0));
        (((struct o0_uint *)0xC3673E8)->v) = t2;
        *(unsigned int *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0xC)) = t2;
        t0 = ai_clear_op_state();
        (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
        t1 = t0;
    }
    return t1;
}

int ai_op29_jump_if_reg_le(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = *(short *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F66));
    t1 = (((struct o0_int *)0xC3673E8)->v);
    (((struct o0_uint *)0xC3673E8)->v) = (t1 + 0x2);
    if ((int)t0 <= (int)(*(short *)((((t1 + 0x2) - 2) + 0x0)))) {
        ai_script_branch(a4, a5);
    }
    *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t0;
}

int ai_op30_jump_if_reg_ge(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = *(short *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F66));
    t1 = (((struct o0_int *)0xC3673E8)->v);
    (((struct o0_uint *)0xC3673E8)->v) = (t1 + 0x2);
    if ((int)t0 >= (int)(*(short *)((((t1 + 0x2) - 2) + 0x0)))) {
        ai_script_branch(a4, a5);
    }
    *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t0;
}

int ai_op31_jump_if_reg_ne(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = *(short *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F66));
    t1 = (((struct o0_int *)0xC3673E8)->v);
    (((struct o0_uint *)0xC3673E8)->v) = (t1 + 0x2);
    if (t0 != (*(short *)((((t1 + 0x2) - 2) + 0x0)))) {
        ai_script_branch(a4, a5);
    }
    *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t0;
}

int ai_op59_jump_if_reg_eq(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = *(short *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F66));
    t1 = (((struct o0_int *)0xC3673E8)->v);
    (((struct o0_uint *)0xC3673E8)->v) = (t1 + 0x2);
    if (t0 == (*(short *)((((t1 + 0x2) - 2) + 0x0)))) {
        ai_script_branch(a4, a5);
    }
    *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t0;
}

int ai_op32_jump_if_reg_zero(int a4, int a5)
{
    register int t10;

    if ((*(short *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F66))) == 0) {
        ai_script_branch(a4, a5);
    }
    *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
    t10 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t10;
}

int ai_op33_jump_if_reg_nonzero(int a4, int a5)
{
    register int t10;

    if ((*(short *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F66))) != 0) {
        ai_script_branch(a4, a5);
    }
    *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
    t10 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t10;
}

int ai_op38_jump_if_flag24_clear(int a4, int a5)
{
    register int t10;

    if ((*(signed char *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F64))) == 0) {
        ai_script_branch(a4, a5);
    }
    *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
    t10 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t10;
}

int ai_op39_jump_if_flag24_set(int a4, int a5)
{
    register int t10;

    if ((*(signed char *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F64))) != 0) {
        ai_script_branch(a4, a5);
    }
    *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
    t10 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t10;
}

int ai_op40_jump_if_flag25_clear(int a4, int a5)
{
    register int t10;

    if ((*(signed char *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F65))) == 0) {
        ai_script_branch(a4, a5);
    }
    *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
    t10 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t10;
}

int ai_op41_jump_if_flag25_set(int a4, int a5)
{
    register int t10;

    if ((*(signed char *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F65))) != 0) {
        ai_script_branch(a4, a5);
    }
    *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
    t10 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t10;
}

int ai_op7_nop(void)
{
    register int t2;

    *(unsigned int *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F4C)) = ((((struct o0_int *)0xC3673E8)->v));
    t2 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t2;
}

int ai_op63_set_cmd_bits(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC3673EE;
    t1 = (((struct o0_int *)0xC3673E8)->v);
    (((struct o0_uint *)0xC3673E8)->v) = (t1 + 0x2);
    *(unsigned short *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x8)) = ((*(short *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x8))) | (*(short *)((((t1 + 0x2) - 2) + 0x0))));
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t0;
}

int ai_op64_clear_cmd_bits(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC3673EE;
    t1 = (((struct o0_int *)0xC3673E8)->v);
    (((struct o0_uint *)0xC3673E8)->v) = (t1 + 0x2);
    *(unsigned short *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x8)) = ((*(short *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x8))) & (~(*(short *)((((t1 + 0x2) - 2) + 0x0)))));
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t0;
}
