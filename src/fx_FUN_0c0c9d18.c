/* Adjusts the length (byte at +0xE) of a linked list of 0x34-byte-spaced entries toward a target derived from a float at +0xF0, then advances every entry's position by its index. */
float FUN_0c0df9d0(float);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0ca124(int);
void FUN_0c059330(int);

struct v3 { int a, b, c; };

int FUN_0c0c9d18(char *o)
{
    float t;
    int old, cur, n, d, i, k, r;
    char *node;
    float f;
    float s;

    t = *(float *)(o + 0xF0);
    if (o[0xD] != 0 && o[0xC] == 0)
        t = t + 100.0f;
    old = o[0xE];
    if (t > 4000.0f)
        t = 4000.0f;
    n = (int)FUN_0c0df9d0(t / 60.0f);
    cur = o[0xE];
    if (n > cur) {
        d = n - old;
        if (d > 0) {
            i = 0;
            do {
                r = FUN_0c0ca124((int)o);
                i++;
                if (r != 0)
                    o[0xE] = o[0xE] + 1;
            } while (i < d);
        }
    } else if (n < cur) {
        node = *(char **)(o + 0x18);
        k = 0;
        if (n > 0) {
            do {
                k++;
                node = *(char **)(node + 0x18);
            } while (k < n);
        }
        while (k < old) {
            if (*(int *)(node + 0x10) == 0xC0CA198) {
                FUN_0c059330((int)node);
                o[0xE] = o[0xE] - 1;
            }
            k++;
            node = *(char **)(node + 0x18);
        }
    }
    n = o[0xE];
    if (n > 0) {
        node = *(char **)(o + 0x18);
        for (i = 0; i < n; i++) {
            *(struct v3 *)(node + 44) = *(struct v3 *)(o + 44);
            *(struct v3 *)(node + 32) = *(struct v3 *)(o + 32);
            f = FUN_0c0df4d0(0x14000 - *(int *)(node + 44));
            f = f * (float)i;
            *(float *)(node + 36) = *(float *)(node + 36) + (-(f * 60.0f));
            f = FUN_0c0df4d0(0x14000 - *(int *)(node + 48));
            s = (f * (float)i) * 60.0f;
            *(float *)(node + 32) = *(float *)(node + 32) + FUN_0c0dfa50(0x14000 - *(int *)(node + 44)) * s;
            f = FUN_0c0dfa50(0x14000 - *(int *)(node + 48));
            s = (f * (float)i) * 60.0f;
            *(float *)(node + 40) = *(float *)(node + 40) + FUN_0c0dfa50(0x14000 - *(int *)(node + 44)) * s;
            node = *(char **)(node + 0x18);
        }
    }
    o[0xE] = n;
    return n;
}
