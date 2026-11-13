/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c042150-0c042514) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
typedef struct { int x, y, z; } vec3_int;
extern void FUN_0c042304(void);
extern void FUN_0c06233a(char *, char *, int);
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF2_short { char p[0xF2]; short v; };

int FUN_0c042256(int a4, int a5, int a6);

void fx_init_subblock_effect(char *obj, vec3_int *pos_ptr, char arg_byte, short angle_arg)
{
    int i;
    char *sub_blk;

    obj[0] = 1;
    obj[1] = 1;
    *(short *)(obj + 6) = 31;
    obj[5] = 1;
    obj[4] = arg_byte;
    *(short *)(obj + 0xEE) = angle_arg;
    *(int *)(obj + 52) = 0;
    *(int *)(obj + 44) = 0;
    *(int *)(obj + 48) = angle_arg << 12;
    *(void (**)(void))(obj + 16) = FUN_0c042304;
    *(vec3_int *)(obj + 32) = *pos_ptr;
    for (i = 0; i < 8; i++) {
        sub_blk = ((char **)(obj + 0x2E0))[i];
        *sub_blk = 0;
        sub_blk = ((char **)(obj + 0x2E0))[i];
        *(short *)(sub_blk + 2) = 31;
        FUN_0c06233a(((char **)(obj + 0x2E0))[i], (char *)g_res_kyoutsuu, i + 58);
    }
}

int FUN_0c042256(int a4, int a5, int a6)
{
    register int t2;
    register int t1;

    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        t1 = t2;
        t1 = (t1 << 2);
        t1 = (t1 + (0x2E0 + a4));
        t2 = (t2 + 0x1);
        *(unsigned char *)((((*(int *)((t1 + 0x0)))) + 0x0)) = 0x0;
    }
    (((struct oF2_ushort *)(a4))->v) = (*(signed char *)(((((short)a6 << 2) + a5) + 0x0)));
    *(unsigned char *)(((*(int *)(((0x2E0 + a4) + ((*(signed char *)(((((short)a6 << 2) + a5) + 0x1))) << 2)))) + 0x0)) = 0x1;
    (((struct oF0_ushort *)(a4))->v) = a6;
    return 0xF0;
}

int FUN_0c0422b8(int a4, int a5)
{
    register int t0;

    t0 = (((struct oF2_short *)(a4))->v);
    (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        if ((unsigned char)(*(signed char *)((((((((struct oF0_short *)(a4))->v)) << 2) + a5) + 0x2))) == 0xFF) {
            (((struct oF0_ushort *)(a4))->v) = (*(signed char *)((((((((struct oF0_short *)(a4))->v)) << 2) + a5) + 0x3)));
        } else {
            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
        }
        return FUN_0c042256(a4, a5, ((((struct oF0_short *)(a4))->v)));
    }
    return 0xF2;
}
