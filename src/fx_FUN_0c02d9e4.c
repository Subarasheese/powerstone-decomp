/* Draws a string of font sprites (mode a5: 0 and 1/2 map letters through tables, 4 digits only) by filling a sprite record and calling FUN_0c027fa4 per character. */
extern void FUN_0c027fa4(float *, int, int, int, int, int);

void FUN_0c02d9e4(signed char *s, int mode, float x0, float y, float f6, float f7, float f8)
{
    float rec[14];
    signed char *t;
    int i, c, r, k, ch;

    rec[2] = y;
    rec[3] = f8;
    ((int *)rec)[10] = 0;
    rec[11] = 1.0f;
    ((int *)rec)[13] = 5;
    rec[4] = f6;
    rec[5] = f7;
    i = 0;
    switch ((signed char)mode) {
    case 0:
        while ((c = s[i]) != 0) {
            if (c != 32 && c != -1) {
                r = c;
                t = (signed char *)0xC14935C;
                for (k = 0; k < 4; k++) {
                    if (c == t[k]) {
                        r = k + 124;
                        break;
                    }
                }
                rec[1] = x0 + 16.0f * ((float)i * f6);
                FUN_0c027fa4(rec, 0xC17FDBC, 0, (signed char)r - 32, 0, 0);
            }
            i++;
        }
        break;
    case 1:
        while ((c = s[i]) != 0) {
            if (c != 32 && c != -1) {
                ch = (signed char)c;
                if (ch >= 0x30 && ch <= 0x39) {
                    r = c - 48;
                } else if (ch >= 0x41 && ch <= 0x5A) {
                    r = c - 55;
                } else if (ch >= 0x61 && ch <= 0x7A) {
                    r = c - 61;
                } else {
                    r = 0;
                    t = (signed char *)0xC149360;
                    for (k = 0; k < 18; k++)
                        if (s[i] == t[k])
                            r = k + 62;
                }
                if ((signed char)r != 0 || (ch >= 0x30 && ch <= 0x39) || (ch >= 0x41 && ch <= 0x5A) || (ch >= 0x61 && ch <= 0x7A)) {
                    rec[1] = x0 + 16.0f * ((float)i * f6);
                    FUN_0c027fa4(rec, 0xC17FDBC, 1, (signed char)r, 0, 0);
                }
            }
            i++;
        }
        break;
    case 2:
        while ((c = s[i]) != 0) {
            if (c != 32 && c != -1) {
                ch = (signed char)c;
                if (ch >= 0x30 && ch <= 0x39) {
                    r = c - 48;
                } else if (ch >= 0x41 && ch <= 0x5A) {
                    r = c - 55;
                } else if (ch >= 0x61 && ch <= 0x7A) {
                    r = c - 61;
                } else {
                    r = 0;
                    t = (signed char *)0xC149372;
                    for (k = 0; k < 21; k++)
                        if (s[i] == t[k])
                            r = k + 36;
                }
                if ((signed char)r != 0 || (ch >= 0x30 && ch <= 0x39) || (ch >= 0x41 && ch <= 0x5A) || (ch >= 0x61 && ch <= 0x7A)) {
                    rec[1] = x0 + 32.0f * ((float)i * f6);
                    FUN_0c027fa4(rec, 0xC17FDBC, 2, (signed char)r, 0, 0);
                }
            }
            i++;
        }
        break;
    case 4:
        while ((c = s[i]) != 0) {
            if (c >= 0x30 && c <= 0x39) {
                rec[1] = x0 + 32.0f * ((float)i * f6);
                FUN_0c027fa4(rec, 0xC17FDB0, 0, (signed char)(c - 48), 0, 0);
            }
            i++;
        }
        break;
    default:
        break;
    }
}
