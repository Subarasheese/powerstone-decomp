/* motion length, key stream readers, angle deltas (part 1 of 2 of the same module) (0c09b068-0c09b0f8) */

struct o7198_short { char p[0x7198]; short v; };

int pl_motion_length(int a4)
{
    register int t0;
    register int t1;
    register int t7;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t7 = *(signed char *)(((((((unsigned short)((((struct o7198_short *)(a4))->v)) + t0) << 2) << 1) + (*(int *)(((((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2) + (0xA1234 + (((*(signed char *)((a4 + 0x3))) * 0xB5EC8) + 0xC664B50))) + 0x0)))) + 0x5));
        t0 = (t0 + 0x1);
        t1 = (t1 + (unsigned char)t7);
        if (((unsigned char)(*(signed char *)((((((((unsigned short)((((struct o7198_short *)(a4))->v)) + t0) - 1) << 2) << 1) + (*(int *)(((((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2) + (0xA1234 + (((*(signed char *)((a4 + 0x3))) * 0xB5EC8) + 0xC664B50))) + 0x0)))) + 0x4))) & 0x40) != 0) {
            break;
        }
    }
    return t1;
}
