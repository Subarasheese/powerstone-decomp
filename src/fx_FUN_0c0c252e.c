/* Per-object state machine (states 0..2): moves a position by a velocity for a time, spawns an effect every 8 ticks, then waits and advances. */
void FUN_0c059330(int);
void FUN_0c0c2342(int);
void FUN_0c03cf50(int, int);
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);

void FUN_0c0c252e(char *o)
{
#define F(off) (*(float *)(o + (off)))
#define S(off) (*(short *)(o + (off)))
    if (*(int *)(o + 0x1C) == 0)
        { FUN_0c059330((int)o); return; }
    switch (o[8]) {
    case 0:
        o[8]++;
        S(0xEC) = 60;
        F(0x38) = FUN_0c0dfa50(*(int *)(o + 0x30)) * 20.0f;
        F(0x40) = FUN_0c0df4d0(*(int *)(o + 0x30)) * 20.0f;
        /* fall through */
    case 1:
        F(0x20) = F(0x20) + F(0x38);
        F(0x24) = F(0x24) + F(0x3C);
        F(0x28) = F(0x28) + F(0x40);
        if ((S(0xEC) % 8) == 0) {
            FUN_0c0c2342((int)o);
            FUN_0c03cf50((int)o, 0);
        }
        S(0xEC) = S(0xEC) - 1;
        if (S(0xEC) != 0 && o[0x108] == 0 && o[0x2D8] == 0)
            return;
        S(0xEC) = 10;
        o[8]++;
        return;
    case 2:
        S(0xEC) = S(0xEC) - 1;
        if (S(0xEC) == 0)
            o[8]++;
        return;
    default:
        { FUN_0c059330((int)o); return; }
    }
}
