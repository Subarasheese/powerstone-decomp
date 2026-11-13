/* OMAKE menu screens and unlock query (0c01b9f4-0c01d254) */

/* named globals (symbols.txt) */
extern char g_res_omake[];
struct at_1c_float { char pad[0x1C]; float field_1c; };
struct at_20_float { char pad[0x20]; float field_20; };
struct at_24_float { char pad[0x24]; float field_24; };
struct at_28_float { char pad[0x28]; float field_28; };
struct at_2e0_int { char pad[0x2E0]; int field_2e0; };
struct at_2e4_int { char pad[0x2E4]; int field_2e4; };
struct at_2e8_int { char pad[0x2E8]; int field_2e8; };
struct at_2ec_int { char pad[0x2EC]; int field_2ec; };
struct at_2f0_int { char pad[0x2F0]; int field_2f0; };
struct at_40_float { char pad[0x40]; float field_40; };
struct at_9c_int { char pad[0x9C]; int field_9c; };
struct at_dc_int { char pad[0xDC]; int field_dc; };
struct at_e0_int { char pad[0xE0]; int field_e0; };
struct at_ec_short { char pad[0xEC]; short field_ec; };
struct at_ec_ushort { char pad[0xEC]; unsigned short field_ec; };
int omake_vtx_lerp_keyed_rows(int, int, int, int, int);
int obj_destroy(int);
int mdl_vtx_iter_begin(int, int);
extern char *obj_create(int, int, int, int);
extern char omake_is_item_unlocked(int);
extern void FUN_0c06233a(char *, char *, int);

int omake_tick_vtx_morph(int obj)
{
    int frame[5];

    register int reg1;
    register int reg2;
    register int reg3;
    register int reg5;
    register int reg6;
    register int reg7;
    register int reg9;
    register int reg10;
    register int reg11;
    register int reg12;
    register int reg13;
    register float freg2;
    register float freg3;
    register int tflag;
    register int fpul;
    register int self;
    register int cur;
    register int scratch;
    register int state;
    register float flip;
    scratch = obj;
    state = *(signed char *)((scratch + 0x8));
    cur = (state);
    self = (scratch);
    scratch = (0x0);
    if ((state == 0)) goto st0_init;
    if ((cur == 1)) goto st1_entry;
    return obj_destroy(self);
    st1_entry:;
    state = *(signed char *)((self + 0x9));
    cur = (state);
    flip = (-1.0f);
    if ((state == 0)) goto sub0_start;
    if ((cur == 1)) goto sub1_entry;
    if (!((cur == 2))) goto update_parts;
    cur = (((struct at_2e0_int *)(self))->field_2e0);
    (((struct at_40_float *)(cur))->field_40) = (((((struct at_40_float *)(cur))->field_40)) + 0.0666666627f);
    fpul = (0x3D888888);
    goto update_parts;
    update_parts:;
    mdl_vtx_iter_begin((*(int *)(((*(int *)0xC664AB0) + 0x14))), ((((struct at_9c_int *)(((((struct at_2e4_int *)(self))->field_2e4))))->field_9c)));
    *(unsigned int *)(((int)frame + 16)) = 0xC11C270;
    *(int *)((int)frame + 12) = 0xC11C270;
    omake_vtx_lerp_keyed_rows(self, (*(signed char *)((self + 0x4))), ((((struct at_ec_short *)(self))->field_ec)), 0x34, 0xC11C270);
    mdl_vtx_iter_begin(((((struct at_dc_int *)((*(int *)0xC664AB0)))->field_dc)), ((((struct at_9c_int *)(((((struct at_2e8_int *)(self))->field_2e8))))->field_9c)));
    cur = (*(int *)(((int)frame + 16)));
    *(int *)((int)frame + 8) = cur;
    omake_vtx_lerp_keyed_rows(self, (*(signed char *)((self + 0x4))), ((((struct at_ec_short *)(self))->field_ec)), 0x34, cur);
    mdl_vtx_iter_begin(((((struct at_e0_int *)((*(int *)0xC664AB0)))->field_e0)), ((((struct at_9c_int *)(((((struct at_2ec_int *)(self))->field_2ec))))->field_9c)));
    *(unsigned int *)(((int)frame + 16)) = 0xC11C2A4;
    *(int *)((int)frame + 4) = 0xC11C2A4;
    omake_vtx_lerp_keyed_rows(self, (*(signed char *)((self + 0x4))), ((((struct at_ec_short *)(self))->field_ec)), 0x12, 0xC11C2A4);
    mdl_vtx_iter_begin((*(int *)((((*(signed char *)((self + 0xF))) << 2) + (*(int *)0xC664AB0)))), ((((struct at_9c_int *)(((((struct at_2f0_int *)(self))->field_2f0))))->field_9c)));
    cur = (*(int *)(((int)frame + 16)));
    *(int *)((int)frame + 0) = cur;
    omake_vtx_lerp_keyed_rows(self, (*(signed char *)((self + 0x4))), ((((struct at_ec_short *)(self))->field_ec)), 0x12, cur);
    if (((unsigned char)(*(signed char *)0xC362361) != (*(signed char *)((self + 0x4))))) goto next_state;
    scratch = (((struct at_ec_short *)(self))->field_ec);
    (((struct at_ec_ushort *)(self))->field_ec) = (scratch + 0x1);
    cur = (0xEC);
    if (((int)(short)((scratch + 0x1) - 1) < (int)0x1E)) goto finish;
    next_state:;
    cur = *(signed char *)((self + 0x8));
    *(unsigned char *)((self + 0x8)) = (cur + 0x1);
    cur = ((cur + 0x1));
    finish:;
    return cur;
    sub1_entry:;
    cur = (((struct at_2e0_int *)(self))->field_2e0);
    (((struct at_40_float *)(cur))->field_40) = (((((struct at_40_float *)(cur))->field_40)) + -0.0666666627f);
    fpul = (0xBD888888);
    if (((int)((((struct at_ec_short *)(self))->field_ec)) < (int)0xF)) goto update_parts;
    cur = (((struct at_2e0_int *)(self))->field_2e0);
    (((struct at_1c_float *)(cur))->field_1c) = (((((struct at_1c_float *)(cur))->field_1c)) * flip);
    *(unsigned char *)((self + 0x9)) = ((*(signed char *)((self + 0x9))) + 0x1);
    goto update_parts;
    sub0_start:;
    (((struct at_ec_ushort *)(self))->field_ec) = scratch;
    if (((*(signed char *)((self + 0x4))) == 2)) goto sub0_skip;
    (((struct at_1c_float *)(((((struct at_2e0_int *)(self))->field_2e0))))->field_1c) = flip;
    sub0_skip:;
    *(unsigned char *)((self + 0x9)) = ((*(signed char *)((self + 0x9))) + 0x1);
    goto sub1_entry;
    st0_init:;
    (((struct at_20_float *)(self))->field_20) = -295.0f;
    (((struct at_24_float *)(self))->field_24) = 0.0f;
    (((struct at_28_float *)(self))->field_28) = -600.0f;
    *(unsigned int *)((self + 0x2C)) = 0xFFFFF556;
    *(unsigned int *)((self + 0x30)) = scratch;
    *(unsigned char *)((self + 0x8)) = ((*(signed char *)((self + 0x8))) + 0x1);
    goto st1_entry;
}

void FUN_0c01c99e(char arg_byte, int variant)
{
    char *obj;
    signed char *tbl_a;
    signed char *tbl_b;
    int i;

    obj = obj_create(5, 1, 5, 0);
    if (obj == 0)
        return;
    obj[0] = 1;
    obj[3] = 2;
    obj[4] = arg_byte;
    obj[1] = 1;
    *(short *)(obj + 6) = 15;
    obj[5] = 1;
    *(int *)(obj + 16) = ((int *)0x0C1804FC)[obj[3]];
    obj[15] = ((char *)0x0C180546)[(unsigned char)variant];
    *(int *)(obj + 52) = 0;
    *(int *)(obj + 48) = 0;
    *(int *)(obj + 44) = 0;
    tbl_a = (signed char *)0x0C180555;
    tbl_b = (signed char *)0x0C180546 + (unsigned char)variant;
    for (i = 0; i < 5; i++) {
        **(char **)(obj + 0x2E0 + 4 * i) = 1;
        *(short *)(*(char **)(obj + 0x2E0 + 4 * i) + 2) = 0x41F;
        *(float *)(*(char **)(obj + 0x2E0 + 4 * i) + 64) = 1.0f;
        if (i < 4) {
            FUN_0c06233a(*(char **)(obj + 0x2E0 + 4 * i), (char *)g_res_omake, ((signed char *)0x0C180542)[i]);
        } else {
            if (omake_is_item_unlocked(variant) != 0)
                FUN_0c06233a(*(char **)(obj + 0x2E0 + 4 * i), (char *)g_res_omake, *tbl_b);
            else
                FUN_0c06233a(*(char **)(obj + 0x2E0 + 4 * i), (char *)g_res_omake, *tbl_a);
        }
    }
}
