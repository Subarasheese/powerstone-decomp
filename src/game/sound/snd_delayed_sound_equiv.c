/* delayed sound trigger object (spawn+tick) (0c04571c-0c0457d0) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int);

int snd_spawn_delayed_sound(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t4;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a6;
    t0 = obj_create(0x6, 0x1, 0x1);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0x21;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC045774;
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 8)));
        (((struct oEC_ushort *)(t0))->v) = (*(signed char *)(((int)stk + 0)));
        t4 = *(signed char *)(((int)stk + 4));
        *(unsigned char *)((t0 + 0xF)) = t4;
    }
    return t4;
}
