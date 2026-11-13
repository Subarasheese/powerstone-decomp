/* Object state machine: state 0 swings the x offset back and forth for 20 frames, state 1 coasts (or ends when its flag is set), other states defer. */
void FUN_0c0a3ebc(int, int, int);
int FUN_0c0ace56(char *);
void FUN_0c0b6a9c(char *, int);
void FUN_0c059330(char *);

#define F(o) (*(float *)(p + (o)))

void FUN_0c0af016(char *p)
{
    int s;
    int n;
    signed char c;

    s = p[8];
    if (s == 0) {
        n = *(short *)(p + 0xEC);
        if ((n / 2) % 2 != 0)
            F(32) = F(32) + 5.0f;
        else
            F(32) = F(32) - 5.0f;
        *(short *)(p + 0xEC) = *(short *)(p + 0xEC) + 1;
        if (*(short *)(p + 0xEC) >= 20) {
            p[8] = p[8] + 1;
            *(short *)(p + 0xEC) = 0;
            F(60) = 0.0f;
            F(72) = -1.0f;
            p[3] = (*(char **)(p + 0x1C))[3];
            p[0x105] = 0;
            c = *(signed char *)0xC7F3051;
            if (p[0x30E] == 1 || p[0x30E] == 4)
                FUN_0c0a3ebc(c, p[3], 2);
        }
    } else if (s == 1) {
        if (p[0x2D8] != 0) {
            FUN_0c0ace56(p);
            if (p[0x30E] == 2)
                FUN_0c0b6a9c(p + 32, 1);
            p[8] = p[8] + 1;
        } else {
            F(36) = F(36) + F(60);
            F(60) = F(60) + F(72);
        }
    } else {
        FUN_0c059330(p);
    }
}
