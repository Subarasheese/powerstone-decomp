/* Builds the orientation / position tables of a player's body segments for the current animation frame: from the frame counters (bytes +0x71A6 / +0x71A7 / +0x71A8 / +0x71A9) it derives the blend factors, interpolates the local vectors with the vector helpers (FUN_0c09b540 / 5d4 / 64c / 68a and the matrix helpers 0c0622c6, 0c062050, 0c06206e), scales the result by the tables at 0xC150CD8 / 0xC150C60 and then masks the angle words of the 19 segment records (0xC150D50 gives their order; 176-byte records at +768 + 3520*slot, angles at +84..+92) to 16 bits around the segment update. With the flag byte at 0xC494D2B set it only copies the vectors. */
#define SLOT ((signed char)o[0x71F1])
#define REC(b) (o + 768 + (short)(SLOT * 3520) + (short)((signed char)(b) * 176))
#define W(p) (*(int *)(p))
#define FL(p) (*(float *)(p))
void FUN_0c09b540(char *dst, char *src);
void FUN_0c09b5d4(char *dst, char *src);
void FUN_0c09b64c(char *dst, char *a, char *b, float f);
void FUN_0c09b68a(char *dst, char *src);
void FUN_0c0622c6(char *dst, char *a, char *b);
void FUN_0c062050(char *dst, char *a, char *b);
void FUN_0c06206e(char *dst, char *a, char *b);
void FUN_0c09b0f8(char *o)
{
    int bufw[117];
    char *buf = (char *)bufw;
    float a;
    float k;
    signed char *order;
    char *r;
    int i;
    if (*(char *)0xC494D2B != 0) {
        W(buf) = W(o + 0x718C) + 6;
        FUN_0c09b540(o + 0x7134, buf);
        FUN_0c09b5d4(o + 0x711C, buf);
        FL(o + 0x7120) = FL(o + 0x7120) * (FL(0xC150C60 + o[4] * 8 + SLOT * 4) * FL(o + 84));
        order = (signed char *)0xC150D50;
        for (i = 0; i < 19; i++) {
            FUN_0c09b540(REC(*order) + 84, buf);
            order++;
        }
        return;
    }
    a = (float)(unsigned char)o[0x71A7];
    if (!(a > 0.0f))
        a = 1.0f;
    k = (float)((unsigned char)o[0x71A7] - (unsigned char)o[0x71A6] + 1) / a;
    if ((unsigned char)o[0x71A7] == 1)
        k = 1.0f;
    W(buf) = W(o + 0x718C) + 6;
    W(buf + 4) = W(o + 0x7194) + 6;
    FUN_0c09b540(buf + 432, buf);
    FUN_0c09b540(buf + 420, buf + 4);
    FUN_0c09b64c(buf + 408, buf + 432, buf + 420, k);
    FUN_0c0622c6(buf + 408, buf + 408, buf + 420);
    FUN_0c09b5d4(buf + 456, buf);
    FUN_0c09b5d4(buf + 444, buf + 4);
    FL(buf + 460) = FL(buf + 460) * FL(0xC150CD8 + o[4] * 8 + SLOT * 4);
    FL(buf + 448) = FL(buf + 448) * FL(0xC150CD8 + o[4] * 8 + SLOT * 4);
    FUN_0c09b68a(buf + 396, buf + 444);
    FUN_0c062050(buf + 396, buf + 396, buf + 444);
    for (i = 0; i < 19; i++) {
        FUN_0c09b540(buf + 432, buf);
        FUN_0c09b540(buf + 420, buf + 4);
        FUN_0c09b64c(buf + 12 + i * 12, buf + 432, buf + 420, k);
        FUN_0c0622c6(buf + 12 + i * 12, buf + 12 + i * 12, buf + 420);
    }
    if (o[0x71A8] < o[0x71A9])
        o[0x71A8] = o[0x71A8] + 1;
    a = (float)(unsigned char)o[0x71A9];
    if (a == 0.0f)
        a = 1.0f;
    k = (float)o[0x71A8] / a;
    W(o + 0x7134) = W(o + 0x7134) & 0xFFFF;
    W(o + 0x7138) = W(o + 0x7138) & 0xFFFF;
    W(o + 0x713C) = W(o + 0x713C) & 0xFFFF;
    FUN_0c09b64c(buf + 408, buf + 408, o + 0x7134, k);
    FUN_0c0622c6(o + 0x7134, o + 0x7134, buf + 408);
    FUN_0c06206e(buf + 396, buf + 396, o + 0x711C);
    FL(buf + 396) = FL(buf + 396) * k;
    FL(buf + 400) = FL(buf + 400) * k;
    FL(buf + 404) = FL(buf + 404) * k;
    FUN_0c062050(o + 0x711C, o + 0x711C, buf + 396);
    order = (signed char *)0xC150D50;
    for (i = 0; i < 19; i++) {
        r = REC(*order);
        W(r + 84) = W(r + 84) & 0xFFFF;
        W(r + 88) = W(r + 88) & 0xFFFF;
        W(r + 92) = W(r + 92) & 0xFFFF;
        FUN_0c09b64c(buf + 12 + i * 12, buf + 12 + i * 12, REC(*order) + 84, k);
        FUN_0c0622c6(REC(*order) + 84, REC(*order) + 84, buf + 12 + i * 12);
        r = REC(*order);
        W(r + 84) = W(r + 84) & 0xFFFF;
        W(r + 88) = W(r + 88) & 0xFFFF;
        W(r + 92) = W(r + 92) & 0xFFFF;
        order++;
    }
}
