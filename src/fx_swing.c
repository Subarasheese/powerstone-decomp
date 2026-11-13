/* Four object steps that swing a child object on a sine, bump its angle by 182, sometimes fire an effect, then run a countdown (limit 240/300 frames, 360 abort) and chain the two position updates. */
int FUN_0c047df4(char *);
void FUN_0c0abe44(char *, int, int);
float FUN_0c0dfa50(int);
int FUN_0c0df920(void);
void FUN_0c0e21b0(char *, char *);

#define F(o) (*(float *)(p + (o)))

void FUN_0c05af40(char *p)
{
    char *q;
    int n;
    int m;

    *(short *)(p + 0xEC) = *(short *)(p + 0xEC) + 1;
    q = *(char **)(p + 0x2E0);
    n = *(short *)(p + 0xEC);
    *(float *)(q + 8) = FUN_0c0dfa50((int)((float)(6 * n) * 65536.0f / 360.0f + 0.5f) & 0xFFFF) * 10.0f;
    q = *(char **)(p + 0x2E0);
    *(int *)(q + 20) = *(int *)(q + 20) + 0xB6;
    m = *(short *)(p + 0xEC) % 30;
    if (m == FUN_0c0df920() % 30)
        FUN_0c047df4(p + 32);
    if (*(float *)(p + 0x274) > 0.0f)
        F(60) = 0.0f;
    if (p[0x310] == 0 && p[0x311] == 0) {
        *(short *)(p + 0xEE) = *(short *)(p + 0xEE) + 1;
        if (*(short *)(p + 0xEE) >= 240) {
            if (*(short *)(p + 0xEE) >= 360) {
                *(char *)0xC7F2979 = p[13];
                *(char *)0xC7F297A = 1;
                FUN_0c0abe44(p, 3, 2);
                return;
            }
            p[1] = *(short *)(p + 0xEC) % 2;
        }
    } else {
        p[1] = 1;
        *(short *)(p + 0xEE) = 0;
    }
    FUN_0c0e21b0(p + 32, p + 56);
    FUN_0c0e21b0(p + 56, p + 68);
}

void FUN_0c05c220(char *p)
{
    char *q;
    int n;
    int m;

    *(short *)(p + 0xEC) = *(short *)(p + 0xEC) + 1;
    q = *(char **)(p + 0x2E0);
    n = *(short *)(p + 0xEC);
    *(float *)(q + 8) = FUN_0c0dfa50((int)((float)(6 * n) * 65536.0f / 360.0f + 0.5f) & 0xFFFF) * 10.0f;
    q = *(char **)(p + 0x2E0);
    *(int *)(q + 20) = *(int *)(q + 20) + 0xB6;
    m = *(short *)(p + 0xEC) % 30;
    if (m == FUN_0c0df920() % 30)
        FUN_0c047df4(p + 32);
    if (*(float *)(p + 0x274) > 0.0f)
        F(60) = 0.0f;
    if (p[0x310] == 0 && p[0x311] == 0) {
        *(short *)(p + 0xEE) = *(short *)(p + 0xEE) + 1;
        if (*(short *)(p + 0xEE) >= 300) {
            if (*(short *)(p + 0xEE) >= 360) {
                *(char *)0xC7F2979 = p[13];
                *(char *)0xC7F297A = 1;
                FUN_0c0abe44(p, 3, 2);
                return;
            }
            p[1] = *(short *)(p + 0xEC) % 2;
        }
    } else {
        p[1] = 1;
        *(short *)(p + 0xEE) = 0;
    }
    FUN_0c0e21b0(p + 32, p + 56);
    FUN_0c0e21b0(p + 56, p + 68);
}

void FUN_0c05ec88(char *p)
{
    char *q;
    int n;
    int m;

    *(short *)(p + 0xEC) = *(short *)(p + 0xEC) + 1;
    q = *(char **)(p + 0x2E0);
    n = *(short *)(p + 0xEC);
    *(float *)(q + 8) = FUN_0c0dfa50((int)((float)(6 * n) * 65536.0f / 360.0f + 0.5f) & 0xFFFF) * 10.0f;
    q = *(char **)(p + 0x2E0);
    *(int *)(q + 20) = *(int *)(q + 20) + 0xB6;
    m = *(short *)(p + 0xEC) % 30;
    if (m == FUN_0c0df920() % 30)
        FUN_0c047df4(p + 32);
    if (*(float *)(p + 0x274) > 0.0f)
        F(60) = 0.0f;
    if (p[0x310] == 0 && p[0x311] == 0) {
        *(short *)(p + 0xEE) = *(short *)(p + 0xEE) + 1;
        if (*(short *)(p + 0xEE) >= 300) {
            if (*(short *)(p + 0xEE) >= 360) {
                *(char *)0xC7F2979 = p[13];
                *(char *)0xC7F297A = 1;
                FUN_0c0abe44(p, 3, 2);
                return;
            }
            p[1] = *(short *)(p + 0xEC) % 2;
        }
    } else {
        p[1] = 1;
        *(short *)(p + 0xEE) = 0;
    }
    FUN_0c0e21b0(p + 32, p + 56);
    FUN_0c0e21b0(p + 56, p + 68);
}

void FUN_0c05d9d4(char *p)
{
    char *q;
    int n;
    int m;

    *(short *)(p + 0xEC) = *(short *)(p + 0xEC) + 1;
    q = *(char **)(p + 0x2E0);
    n = *(short *)(p + 0xEC);
    *(float *)(q + 8) = FUN_0c0dfa50((int)((float)(6 * n) * 65536.0f / 360.0f + 0.5f) & 0xFFFF) * 10.0f + 50.0f;
    q = *(char **)(p + 0x2E0);
    *(int *)(q + 20) = *(int *)(q + 20) + 0xB6;
    m = *(short *)(p + 0xEC) % 30;
    if (m == FUN_0c0df920() % 30)
        FUN_0c047df4(p + 32);
    if (*(float *)(p + 0x274) > 0.0f)
        F(60) = 0.0f;
    if (p[0x310] == 0 && p[0x311] == 0) {
        *(short *)(p + 0xEE) = *(short *)(p + 0xEE) + 1;
        if (*(short *)(p + 0xEE) >= 300) {
            if (*(short *)(p + 0xEE) >= 360) {
                *(char *)0xC7F2979 = p[13];
                *(char *)0xC7F297A = 1;
                FUN_0c0abe44(p, 3, 2);
                return;
            }
            p[1] = *(short *)(p + 0xEC) % 2;
        }
    } else {
        p[1] = 1;
        *(short *)(p + 0xEE) = 0;
    }
    FUN_0c0e21b0(p + 32, p + 56);
    FUN_0c0e21b0(p + 56, p + 68);
}

