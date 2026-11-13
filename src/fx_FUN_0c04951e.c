/* Drives a ring of 10 particle children (pointers at +0x2E0): state 0 spawns them, state 1 animates them, state 2 releases the object. */
int FUN_0c049408(int);
int FUN_0c059330(int);
int FUN_0c06231c(int, int, int);

void FUN_0c04951e(char *o)
{
    char **list;
    char *c;
    signed char *s;
    int i;

    switch (o[8]) {
    case 0:
        o[8] = o[8] + 1;
        for (i = 0; i < 10; i++) {
            c = ((char **)(o + 0x2E0))[i];
            c[0x10 + 4] = o[4];
            c[0x10 + 3] = i;
            c[0x10 + 1] = (i / 5) << 3;
            FUN_0c049408((int)c);
        }
        /* fall through */
    case 1:
        list = (char **)(o + 0x2E0);
        for (i = 10; i != 0; i--) {
            c = *list++;
            s = (signed char *)(c + 0x10);
            if (s[2] != 0) {
                c[0] = 0;
                s[2] = s[2] - 1;
                if (s[2] == 0) {
                    c[0] = 1;
                }
                continue;
            }
            *(float *)(c + 0x1C) = *(float *)(c + 0x1C) + 0.00199999986f;
            *(float *)(c + 0x20) = *(float *)(c + 0x20) + 0.00199999986f;
            *(float *)(c + 0x24) = *(float *)(c + 0x24) + 0.00199999986f;
            *(float *)(c + 8) = *(float *)(c + 8) + 0.399999976f;
            s[0] = s[0] - 1;
            if (s[0] == 0) {
                s[0] = 3;
                s[1] = s[1] + 1;
                if (s[1] >= 16) {
                    s[1] = 0;
                    FUN_0c049408((int)c);
                } else {
                    FUN_0c06231c((int)c, 0xC4CFA68, s[1] + 0x21);
                }
            }
            if (c[0] != 0 && s[1] >= 12) {
                *(float *)(c + 0x40) = ((float)s[0] + 3.0f * (-(float)s[1] + 15.0f)) / 12.0f;
            }
        }
        break;
    case 2:
        FUN_0c059330((int)o);
        break;
    }
}
