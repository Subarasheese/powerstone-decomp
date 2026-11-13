/* Picks a random row of the table at 0xC152F84 (row index from a 2-byte pair chosen by byte +25 of the object) and a random angle, and sets o[4] and o[12] to the row's floats plus the row's float at +8 times the angle's cosine/sine. */
extern float FUN_0c0df940(void);
extern float FUN_0c0dfa50(int a);
extern float FUN_0c0df4d0(int a);
void FUN_0c0b15a0(int unused, char *o)
{
    signed char *pair = (signed char *)(0xC152F68 + o[25] * 2);
    int k = pair[(unsigned)(FUN_0c0df940() * 255.0f) % 2];
    float *row = (float *)(0xC152F84 + (signed char)(k * 12));
    float amp = row[2];
    int ang = ((unsigned)(FUN_0c0df940() * 255.0f) % 32) << 11;
    float c = FUN_0c0dfa50(ang);
    *(float *)(o + 4) = row[0] + amp * c;
    c = FUN_0c0df4d0(ang);
    *(float *)(o + 12) = row[1] + amp * c;
}
