/* Picks a random entry of a variable-length table record chosen by (a5, a6) and the object's mode/level: skips the records below the level in g_302c[48], draws FUN_0c0df940 * 255 mod the entry's modulus, stores the pick in E_366f6c and the entry the pick selects in a second table in g8_x6f4c for the active 596-byte slot. */
extern float FUN_0c0df940(void);

void FUN_0c04ce3c(char *o, unsigned char a5, unsigned char a6)
{
    unsigned char *t;
    unsigned char *r;
    unsigned char **p1;
    unsigned char ***p2;
    int idx;
    int n, i, j, m;
    unsigned char k;
    unsigned char pick;
    int **q2;

    idx = *(unsigned char *)0xC3673EF;
    if (o[0x71F3] == 0) {
        if ((*(char **)(o + 28))[0x71F3] != 0) {
            p2 = *(unsigned char ****)(0xC32D6A4 + idx * 4);
        } else {
            p2 = *(unsigned char ****)(0xC32D64C + idx * 4);
        }
    } else {
        p2 = *(unsigned char ****)(0xC32D678 + idx * 4);
    }
    p1 = (unsigned char **)p2[a5];
    r = p1[a6];
    n = *(signed char *)r;
    r++;
    for (i = 0; i < (unsigned char)n; i++) {
        if (r[i] > *(unsigned char *)(0xC7F302C + 48)) {
            r += (unsigned char)n;
            break;
        }
    }
    m = (unsigned char)i;
    if (m > 0) {
        j = 0;
        do {
            j++;
            k = *r++;
            r += k;
        } while ((unsigned char)j < m);
    }
    k = *r++;
    pick = r[(short)((unsigned int)(FUN_0c0df940() * 255.0f) % k)];
    *(unsigned short *)(0xC366F6C + (short)(*(unsigned char *)0xC3673EE * 596)) = pick;
    if (o[0x71F3] == 0) {
        if ((*(char **)(o + 28))[0x71F3] != 0) {
            q2 = *(int ***)(0xC32D620 + idx * 4);
        } else {
            q2 = *(int ***)(0xC32D5C8 + idx * 4);
        }
    } else {
        q2 = *(int ***)(0xC32D5F4 + idx * 4);
    }
    *(int *)(0xC366F4C + (short)(*(unsigned char *)0xC3673EE * 596)) = q2[a5][pick];
}
