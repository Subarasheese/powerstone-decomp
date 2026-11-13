/* player helper functions: lists, item class, combo, linked object placement (0c09c974-0c09d544) */

struct o71D4_short { char p[0x71D4]; short v; };
struct o71D4_ushort { char p[0x71D4]; unsigned short v; };
struct o71D6_ushort { char p[0x71D6]; unsigned short v; };
struct o71D8_short { char p[0x71D8]; short v; };
struct o71D8_ushort { char p[0x71D8]; unsigned short v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o7230_uchar { char p[0x7230]; unsigned char v; };
struct o7231_uchar { char p[0x7231]; unsigned char v; };
int item_spawn_pickup_popup(int, int);
int FUN_0c0555c4(void);
int FUN_0c09ca88(int, int);
int FUN_0c0a3f30(int);
struct Ent {
    char pad0[2];
    signed char kind;       /* 2 */
    char pad3;
    signed char mode;       /* 4 */
    char pad5[0x2d9 - 5];
    signed char flag;       /* 0x2d9 */
};
struct Obj {
    char pad0[0x280];
    int values[5];               /* 0x280 */
    struct Ent *ent[5];       /* 0x294 */
    signed char count;      /* 0x2a8 */
    signed char bytes[8];       /* 0x2a9 */
};
void hit_build_part_shape(struct Obj *, void *);
signed char FUN_0c026076(int, int, void *, int, struct Ent *);

int pl_check_item_pickup(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_1 = a4;
    v0_2 = (FUN_0c0555c4()) != 0;
    v0_0 = (v0_1);
    if (v0_2) goto L_C09CB36;
    L_C09CD26:;
    return 0x0;
    L_C09CB36:;
    if (!(((*(signed char *)((v0_0 + 0x4))) != 10))) goto L_C09CC70;
    if (((*(signed char *)((v0_0 + 0x71F1))) == 0)) goto L_C09CB4C;
    goto L_C09CC70;
    L_C09CC70:;
    v0_2 = FUN_0c09ca88(v0_0, 0x6);
    v0_1 = (v0_2);
    if (((signed char)v0_2 == 0)) goto L_C09CD26;
    v0_1 = *(int *)((((((signed char)v0_1 - 1) << 2) + (0x294 + v0_0)) + 0x0));
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C09CD26;
    if (((*(signed char *)((v0_2 + 0x30D))) != 0)) goto L_C09CD26;
    v0_3 = *(signed char *)((v0_2 + 0x30C));
    v0_1 = (v0_3);
    if ((v0_3 == 15)) goto L_C09CCB2;
    if ((v0_1 == 16)) goto L_C09CCB2;
    if ((v0_1 != 17)) goto L_C09CD26;
    L_C09CCB2:;
    v0_1 = *(signed char *)((v0_2 + 0x30C));
    v0_2 = (v0_1);
    if ((v0_1 == 15)) goto L_C09CCC6;
    if ((v0_2 == 16)) goto L_C09CCCA;
    if (!((v0_2 == 17))) goto L_C09CCD8;
    R12 = (0x17);
    goto L_C09CCD0;
    L_C09CCD8:;
    (((struct o71D4_ushort *)(v0_0))->v) = (((((struct o71D4_short *)(v0_0))->v)) + R12);
    v0_2 = (0x71D4);
    v0_1 = (0xF0);
    if (((int)((((struct o71D4_short *)(v0_0))->v)) <= (int)0xF0)) goto L_C09CCEA;
    *(unsigned short *)((v0_0 + v0_2)) = v0_1;
    L_C09CCEA:;
    if (((int)(*(short *)((v0_0 + v0_2))) <= (int)(*(short *)((v0_0 + (v0_2 + 0x2)))))) goto L_C09CCFC;
    (((struct o71D6_ushort *)(v0_0))->v) = ((((struct o71D4_short *)(v0_0))->v));
    L_C09CCFC:;
    if (((int)((((struct o71D4_short *)(v0_0))->v)) <= (int)((((struct o71D8_short *)(v0_0))->v)))) goto L_C09CD12;
    (((struct o71D8_ushort *)(v0_0))->v) = ((((struct o71D4_short *)(v0_0))->v));
    L_C09CD12:;
    goto L_C09CD26;
    L_C09CCD0:;
    item_spawn_pickup_popup(v0_0, 0x1);
    goto L_C09CCD8;
    L_C09CCCA:;
    R12 = (0x2F);
    goto L_C09CCD0;
    L_C09CCC6:;
    R12 = (0x5F);
    goto L_C09CCD0;
    L_C09CB4C:;
    if (((*(signed char *)((v0_0 + 0x71F3))) == 0)) goto L_C09CB58;
    goto L_C09CC70;
    L_C09CB58:;
    if ((((((struct o71F4_short *)(v0_0))->v)) == 0)) goto L_C09CB64;
    goto L_C09CC70;
    L_C09CB64:;
    if (((*(signed char *)((v0_0 + 0x71BA))) != 23)) goto L_C09CB70;
    goto L_C09CC70;
    L_C09CB70:;
    if (((int)(*(signed char *)((v0_0 + 0x7230))) < (int)0x3)) goto L_C09CB7E;
    goto L_C09CC70;
    L_C09CB7E:;
    v0_2 = FUN_0c09ca88(v0_0, 0x5);
    v0_1 = (v0_2);
    if (((signed char)v0_2 == 0)) goto L_C09CC70;
    if (((*(signed char *)(((*(int *)((((((signed char)v0_1 - 1) << 2) + (0x294 + v0_0)) + 0x0))) + 0xC))) == 0)) goto L_C09CC70;
    if (((*(signed char *)((((0x310 + (*(int *)(((0x294 + v0_0) + (((signed char)v0_1 - 1) << 2))))) + ((-(*(signed char *)((v0_0 + 0x3)))) + 0x1)) + 0x0))) != 0)) goto L_C09CC70;
    v0_2 = *(int *)((((0x294 + v0_0) + (((signed char)v0_1 - 1) << 2)) + 0x0));
    *(unsigned char *)((v0_2 + 0x8)) = ((*(signed char *)((v0_2 + 0x8))) + 0x1);
    *(unsigned char *)(((*(int *)((((0x294 + v0_0) + (((signed char)v0_1 - 1) << 2)) + 0x0))) + 0x9)) = 0x0;
    *(unsigned char *)(((0x310 + (*(int *)(((((signed char)v0_1 - 1) << 2) + (0x294 + v0_0))))) + (*(signed char *)((v0_0 + 0x3))))) = 0x1;
    (((struct o7230_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x7230))) + 0x1);
    (((struct o7231_uchar *)(v0_0))->v) = ((*(signed char *)(((0x7231 + v0_0) + 0x0))) | ((int)0x1 << (int)(*(signed char *)(((*(int *)((((((signed char)v0_1 - 1) << 2) + (0x294 + v0_0)) + 0x0))) + 0xE)))));
    if (((int)(*(signed char *)((v0_0 + 0x7230))) >= (int)0x3)) goto L_C09CC2C;
    if (((*(signed char *)((v0_0 + 0x3))) != 0)) goto L_C09CC24;
    v0_1 = (0x16);
    L_C09CC26:;
    FUN_0c0a3f30(v0_1);
    L_C09CC2C:;
    v0_1 = (FUN_0c0555c4()) == 0;
    if (v0_1) goto L_C09CC4E;
    if (((*(signed char *)((v0_0 + 0x71ED))) != 0)) goto L_C09CC4E;
    v0_0 = *(signed char *)((v0_0 + 0x4));
    *(unsigned int *)(((0xC7F2F8C + (v0_0 << 2)) + 0x0)) = ((*(int *)((0xC7F2F8C + (v0_0 << 2)))) + 0x1);
    L_C09CC4E:;
    v0_2 = (0x1);
    return v0_2;
    L_C09CC24:;
    v0_1 = (0x2C);
    goto L_C09CC26;
}

int FUN_0c09ce3a(struct Obj *obj)
{
    int buf[6];
    int idx;

    hit_build_part_shape(obj, buf);
    for (idx = 0; idx < obj->count; idx++) {
        struct Ent *ent = obj->ent[idx];
        if (ent->kind == 2 && ent->mode == 1 && ent->flag != 2) {
            if (FUN_0c026076(1, obj->bytes[idx], buf, obj->values[idx], obj->ent[idx]) == 2)
                return idx + 1;
        }
    }
    return 0;
}
