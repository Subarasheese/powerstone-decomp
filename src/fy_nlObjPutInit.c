/* Fills a 32x128 float table at 0xC7F4780 (row i = ((2*(x+0.7071)^2 - 1)^2)^i with x = j*0.29289/127; rows 0 and 1 hold the base value) and initialises two globals. */
void nlObjPutInit(void)
{
    float *tbl = (float *)0x0C7F4780;
    int i, j, k;
    float x, y, p;

    *(float *)0x0C7FCC9C = *(float *)0x0C346878;
    *(int *)0x0C7F87C0 = 0;
    for (i = 0; i < 32; i++) {
        for (j = 0; j < 128; j++) {
            x = (float)j * 0.292893052f / 127.0f;
            y = x + 0.707106948f;
            y = y * y;
            y = y + y;
            y = y - 1.0f;
            y = y * y;
            if (i < 2) {
                tbl[i * 128 + j] = y;
            } else {
                p = 1.0f;
                for (k = 0; k < i; k++)
                    p = p * y;
                tbl[i * 128 + j] = p;
            }
        }
    }
}
