/* Grows or shrinks the chain of trail segments behind an object (count byte at +14, list through +24) to match the speed-derived length FUN_0c0df9d0 gives for the float at +240 (capped at 4000, +100 when only the flag at +13 is set), then spreads the segments out along the object's heading (cos / sin of the angles at +44 / +48). */
typedef struct { int a, b, c; } S12;
extern int FUN_0c0c964c(char *);
extern float FUN_0c0df9d0(float);
extern void FUN_0c0c9760(void);
extern void FUN_0c059330(char *);
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);

void FUN_0c0c91d2(char *o)
{
    float h, step, x, c;
    int n, old, cnt, i, k;
    char *node;

    h = *(float *)(o + 240);
    if (o[13] != 0 && o[12] == 0) {
        h += 100.0f;
    }
    old = o[14];
    if (h > 4000.0f) {
        h = 4000.0f;
    }
    if (*(short *)(o + 238) >= 3) {
        step = 90.0f;
    } else {
        step = 45.0f;
    }
    n = (int)FUN_0c0df9d0(h / step);
    if (n > o[14]) {
        cnt = n - old;
        if (cnt > 0) {
            i = 0;
            do {
                k = FUN_0c0c964c(o);
                i++;
                if (k != 0) {
                    o[14]++;
                }
            } while (i < cnt);
        }
        n = o[14];
    } else if (n < o[14]) {
        i = 0;
        node = *(char **)(o + 24);
        if (n > 0) {
            do {
                i++;
                node = *(char **)(node + 24);
            } while (i < n);
        }
        if (i < old) {
            do {
                if (*(void (**)(void))(node + 16) == FUN_0c0c9760) {
                    FUN_0c059330(node);
                    o[14]--;
                }
                i++;
                node = *(char **)(node + 24);
            } while (i < old);
        }
        n = o[14];
    }
    i = 0;
    node = *(char **)(o + 24);
    if (n > 0) {
        do {
            *(S12 *)(node + 44) = *(S12 *)(o + 44);
            *(S12 *)(node + 32) = *(S12 *)(o + 32);
            x = (float)(i + 1);
            c = FUN_0c0df4d0(0x14000 - *(int *)(node + 44)) * x * step;
            *(float *)(node + 36) = *(float *)(node + 36) + (-c);
            c = FUN_0c0df4d0(0x14000 - *(int *)(node + 48)) * x * step;
            *(float *)(node + 32) = *(float *)(node + 32) + FUN_0c0dfa50(0x14000 - *(int *)(node + 44)) * c;
            c = FUN_0c0dfa50(0x14000 - *(int *)(node + 48)) * x * step;
            *(float *)(node + 40) = *(float *)(node + 40) + FUN_0c0dfa50(0x14000 - *(int *)(node + 44)) * c;
            i++;
            node = *(char **)(node + 24);
        } while (i < n);
    }
    o[14] = n;
}
