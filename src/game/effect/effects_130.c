/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c04b054-0c04b1f0) */

/* named globals (symbols.txt) */
void fx_tick_04b054(char *o);
extern char g_res_kyoutsuu[];
struct o118_uint { char p[0x118]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o5C_float { char p[0x5C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(int);
struct oEC_short { char p[0xEC]; short v; };
int FUN_0c0e6e5c(int);

int fx_spawn_04b054(int a4)
{
    int stk[1];
    register int t0;
    register int t11;
    register int t8;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = obj_create(0x5, 0x1, 0x1);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        *(unsigned char *)((t0 + 0x4)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0x41F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC04B114;
        *(unsigned int *)((t0 + 0x1C)) = ((unsigned short)((unsigned short)(*(signed char *)(((int)stk + 0))) * (unsigned short)0x72D0) + 0xC7E40C4);
        (((struct o5C_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x2C)) = 0x4000;
        FUN_0c0e6fe8(0x0);
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((int)g_res_kyoutsuu), 0x31);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t8 = *(signed char *)((t0 + 0x3));
        (((struct o118_uint *)(t0))->v) = ((short)((short)(*(signed char *)((((unsigned short)((unsigned short)t8 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0) + (0x300 + ((unsigned short)((unsigned short)t8 * (unsigned short)0x72D0) + 0xC7E40C4)));
        (((struct o24_float *)(t0))->v) = (*(float *)0xC04B170);
        t11 = 0x24;
    }
    return t11;
}


/* a pulsing effect: 15 frames in, then 15 frames fading out (+0x5C), then gone; its scale (+0x50, +0x54) steps 0.5 .. 1.25
   with the timer (+0xEC) */
extern int obj_destroy(int obj);

void fx_tick_04b054(char *o)
{
    switch (o[8]) {
    case 0:
        if (++*(short *)(o + 0xEC) >= 15) {
            o[8]++;
            *(short *)(o + 0xEC) = 0;
        }
        break;
    case 1:
        if (++*(short *)(o + 0xEC) >= 15)
            o[8]++;
        *(float *)(o + 0x5C) = *(float *)(o + 0x5C) - 0.0714285672f;
        break;
    default:
        obj_destroy((int)o);
        return;
    }
    *(float *)(o + 0x50) = 0.5f + 0.25f * (float)(*(short *)(o + 0xEC) % 4);
    *(float *)(o + 0x54) = 0.5f + 0.25f * (float)(*(short *)(o + 0xEC) % 4);
}
