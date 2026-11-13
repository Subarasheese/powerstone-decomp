/* Builds a 56-byte parameter block on the stack from record idx (16 bytes each) of the table at 0xC11B9D8 (position = x + scale*step, y, 7.1, 1.0 or 0.5 depending on whether idx is the object's current index at +4) and passes it to FUN_0c027fa4. */
extern void FUN_0c027fa4(void *, int, int, int, int, int);
void FUN_0c019988(char *o, char idx, char step)
{
    float rec[14];
    float *ent = (float *)(0xC11B9D8 + idx * 16);
    float one = 1.0f;
    rec[1] = ent[0] + ent[2] * (float)step;
    rec[2] = ent[1];
    rec[3] = 7.1f;
    *(int *)&rec[10] = 0;
    *(int *)&rec[13] = 5;
    if (o[4] == idx)
        rec[11] = one;
    else
        rec[11] = 0.5f;
    rec[4] = ent[3];
    rec[5] = one;
    FUN_0c027fa4(rec, 0xC17FEA4, 1, 24, 0, 0);
}
