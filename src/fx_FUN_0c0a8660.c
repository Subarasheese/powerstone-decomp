/* Slider effect (arg): state 0 sets up the part record, state 1 waits for the frame counter, then phases 0-2 slide the part's angle word (+24) between 0x1000/0x7000 or 0xF000/0x9000 depending on the side byte 3; other states run FUN_0c059330. */
struct T12 { int a, b, c; };
extern void FUN_0c0623a6(char *p, int q, int n);
extern void FUN_0c059330(char *o);
void FUN_0c0a8660(char *o)
{
    char *p;
    int lim;
    switch (o[8]) {
    case 0:
        o[8]++;
        o[9] = 0;
        o[1] = 1;
        *(short *)(o + 6) = 31;
        o[5] = 25;
        FUN_0c0623a6(*(char **)(o + 736), 0xC664A48, o[3] + 16);
        **(char **)(o + 736) = 1;
        *(short *)(*(char **)(o + 736) + 2) = 31;
        *(struct T12 *)(o + 44) = *(struct T12 *)(*(char **)(o + 736) + 16);
        *(int *)(*(char **)(o + 736) + 16) = 0;
        *(int *)(*(char **)(o + 736) + 20) = 0;
        *(int *)(*(char **)(o + 736) + 24) = 0;
        *(struct T12 *)(o + 32) = *(struct T12 *)(*(char **)(o + 736) + 4);
        *(float *)(*(char **)(o + 736) + 4) = 0.0f;
        *(float *)(*(char **)(o + 736) + 8) = 0.0f;
        *(float *)(*(char **)(o + 736) + 12) = 0.0f;
        if (o[3] == 0)
            *(int *)(*(char **)(o + 736) + 24) = 4096;
        else
            *(int *)(*(char **)(o + 736) + 24) = 0xF000;
        o[4] = ((signed char *)0xC7F2E54)[(unsigned char)(o[3] * 120)];
        /* fall through */
    case 1:
        if (*(unsigned char *)0xC7F2EE4 >= 3)
            o[8]++;
        switch (o[9]) {
        case 0:
            if (o[4] != ((signed char *)0xC7F2DF0)[(unsigned char)(o[3] * 120) + 100]) {
                o[4] = ((signed char *)0xC7F2DF0)[(unsigned char)(o[3] * 120) + 100];
                o[9]++;
            }
            return;
        case 1:
            if (o[3] == 0) {
                lim = 0x7000;
                if (*(int *)(*(char **)(o + 736) + 24) >= lim) goto fin;
                *(int *)(*(char **)(o + 736) + 24) += 4096;
                if (*(int *)(*(char **)(o + 736) + 24) < lim) goto fin;
            } else {
                lim = 0x9000;
                if (!(*(int *)(*(char **)(o + 736) + 24) > lim)) goto fin;
                *(int *)(*(char **)(o + 736) + 24) -= 4096;
                if (*(int *)(*(char **)(o + 736) + 24) > lim) goto fin;
            }
            *(int *)(*(char **)(o + 736) + 24) = lim;
            o[9]++;
            goto fin;
        case 2:
            if (o[3] == 0) {
                if (!(*(int *)(*(char **)(o + 736) + 24) > 4096)) goto fin;
                *(int *)(*(char **)(o + 736) + 24) -= 4096;
                if (*(int *)(*(char **)(o + 736) + 24) > 4096) goto fin;
                *(int *)(*(char **)(o + 736) + 24) = 4096;
            } else {
                if (*(int *)(*(char **)(o + 736) + 24) >= 0xF000) goto fin;
                *(int *)(*(char **)(o + 736) + 24) += 4096;
                if (!(*(int *)(*(char **)(o + 736) + 24) >= 0xF000)) goto fin;
                *(int *)(*(char **)(o + 736) + 24) = 0xF000;
            }
            o[9] = 0;
            goto fin;
        default:
            o[9] = 0;
            return;
        }
    default:
        FUN_0c059330(o);
        return;
    }
fin:
    p = *(char **)(o + 736);
    *(int *)(p + 24) = *(int *)(p + 24) & 0xFFFF;
}
