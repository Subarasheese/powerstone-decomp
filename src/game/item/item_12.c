/* item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item (0c05d536-0c05d970) */

void FUN_0c05d594(int a4, float f4);
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o2F8_int { char p[0x2F8]; int v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
int snd_play_side_se(int, int);
int FUN_0c0ac5c4(int);
int math_rand_next(void);
int FUN_0c0e24f0(int);
extern int _modls();
int obj_destroy(int);

int FUN_0c05d536(int a4, int a5, int a6, int a7)
{
    register float u1;
    register float u2;
    register float u16;
    register int t3;
    register int t4;
    register int t5;

    u1 = (((struct o1C_float *)(((((struct o2F8_int *)(a4))->v))))->v);
    u2 = *(float *)0xC05D5E0;
    u16 = (u1 + u2);
    if (!(1.0f > (u1 + u2))) {
        t3 = (0x2E0 + a4);
        t4 = 0x0;
        for (;;) {
            t4 = (t4 + 0x1);
            t5 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            *(unsigned char *)((t5 + 0x0)) = 0x1;
            if ((int)t4 >= (int)0x6) {
                break;
            }
        }
        (((struct o106_uchar *)(a4))->v) = 0x0;
        *(unsigned char *)((((((struct o2F4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2F8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        u16 = 1.0f;
    }
    (((struct o1C_float *)(((((struct o2F8_int *)(a4))->v))))->v) = u16;
    (((struct o24_float *)(((((struct o2F8_int *)(a4))->v))))->v) = u16;
    return 0x24;
}


int thunk_FUN_0c059330(int a4)
{
    return obj_destroy(a4);
}

int FUN_0c05a96c(int, int);

/* an item breaking apart: phase 0 waits (300 frames, the flag at +0x30D or FUN_0c0ac5c4), phase 1 shakes it and throws
   parts 2..4 out in random directions, phase 2 lets the parts fall to the floor (-40), then FUN_0c05a96c; after that it
   blinks (+1) for 10 frames */
#define PART(o, i) (*(char **)((o) + 0x2E0 + (i) * 4))
#define PF(p, n) (*(float *)((p) + (n)))

void FUN_0c05d594(int a4, float f4)
{
    char *o = (char *)a4;
    char *part;
    int i;

    switch (o[9]) {
    case 0:
        if (++*(short *)(o + 0xEE) >= 300 || o[0x30D] != 0 || FUN_0c0ac5c4(a4) != 0) {
            o[9]++;
            *(short *)(o + 0xEC) = 0;
            o[0x106] = 1;
            o[0x107] = 1;
            **(char **)(o + 0x2F4) = 0;
        }
        return;
    case 1:
        if (*(short *)(o + 0xEC) % 4 == 0)
            PF(o, 0x20) = PF(o, 0x20) + 5.0f;
        else if (*(short *)(o + 0xEC) % 4 == 2)
            PF(o, 0x20) = PF(o, 0x20) - 5.0f;
        if (++*(short *)(o + 0xEC) < 6)
            return;
        o[9]++;
        *(short *)(o + 0xEC) = 0;
        for (i = 2; i < 5; i++) {
            PF(PART(o, i), 0x28) = (float)(math_rand_next() % 10 - 10);
            PF(PART(o, i), 0x2C) = (float)(math_rand_next() % 10 + 40);
            PF(PART(o, i), 0x30) = -(float)(math_rand_next() % 20);
            FUN_0c0e24f0((int)(PART(o, i) + 0x28));
            PF(PART(o, i), 0x28) = PF(PART(o, i), 0x28) * 10.0f;
            PF(PART(o, i), 0x2C) = PF(PART(o, i), 0x2C) * 10.0f;
            PF(PART(o, i), 0x30) = PF(PART(o, i), 0x30) * 10.0f;
        }
        snd_play_side_se(o[3], 45);
        return;
    case 2:
        *(int *)(PART(o, 0) + 0x10) = *(int *)(PART(o, 0) + 0x10) + 728;
        for (i = 2; i < 5; i++) {
            part = PART(o, i);
            PF(part, 0x2C) = PF(part, 0x2C) + -1.0f;
            PF(PART(o, i), 0x04) = PF(PART(o, i), 0x04) + PF(PART(o, i), 0x28);
            PF(PART(o, i), 0x08) = PF(PART(o, i), 0x08) + PF(PART(o, i), 0x2C);
            PF(PART(o, i), 0x0C) = PF(PART(o, i), 0x0C) + PF(PART(o, i), 0x30);
            if (!(PF(PART(o, i), 0x08) > -40.0f)) {
                PF(PART(o, i), 0x08) = -40.0f;
                PF(PART(o, i), 0x28) = 0.0f;
                PF(PART(o, i), 0x2C) = 0.0f;
                PF(PART(o, i), 0x30) = 0.0f;
            }
        }
        if (++*(short *)(o + 0xEC) >= 30) {
            o[9]++;
            *(short *)(o + 0xEC) = 0;
            FUN_0c05a96c(o[13], o[0x30C]);
        }
        return;
    default:
        o[1] = *(short *)(o + 0xEC) % 2;
        if (++*(short *)(o + 0xEC) >= 10)
            o[8]++;
        return;
    }
}
