/* Loads an object's motion floats from the 152-byte row (by +4) / 76-byte entry (by +0x71F1) of the table at 0xC339540: mode 4 zeroes the speeds, other modes scale the row's speed by the cos / sin of the heading (0x14000 - angle at +48). */
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);

void FUN_0c09e26a(char *o)
{
    char *tbl;
    float *row;

    tbl = (char *)0xC339540;
    if (o[0x71EF] == 4) {
        *(float *)(o + 76) = 0.0f;
        *(float *)(o + 68) = 0.0f;
        *(float *)(o + 64) = 0.0f;
        *(float *)(o + 56) = 0.0f;
        row = (float *)(tbl + o[4] * 152 + (unsigned char)(*(signed char *)(o + 0x71F1) * 76));
        *(float *)(o + 60) = row[4];
        row = (float *)(tbl + o[4] * 152 + (unsigned char)(*(signed char *)(o + 0x71F1) * 76));
        *(float *)(o + 72) = row[6];
    } else {
        *(float *)(o + 76) = 0.0f;
        *(float *)(o + 68) = 0.0f;
        row = (float *)(tbl + o[4] * 152 + (unsigned char)(*(signed char *)(o + 0x71F1) * 76));
        *(float *)(o + 60) = row[4];
        row = (float *)(tbl + o[4] * 152 + (unsigned char)(*(signed char *)(o + 0x71F1) * 76));
        *(float *)(o + 72) = row[6];
        *(float *)(o + 56) = FUN_0c0df4d0(0x14000 - *(int *)(o + 48)) * ((float *)(tbl + o[4] * 152 + (unsigned char)(*(signed char *)(o + 0x71F1) * 76)))[14];
        *(float *)(o + 64) = FUN_0c0dfa50(0x14000 - *(int *)(o + 48)) * ((float *)(tbl + o[4] * 152 + (unsigned char)(*(signed char *)(o + 0x71F1) * 76)))[14];
    }
}
