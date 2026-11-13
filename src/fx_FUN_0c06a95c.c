/* Fighter state timer: when the frame counter hits the table's threshold for this stage, start the matching effect(s), then run the common per-frame updates. */
int FUN_0c046830(int, int, int, int, int, int, int, int);
int FUN_0c09a910(void *);
int FUN_0c09d990(void *);
int FUN_0c09d9bc(void *);
int FUN_0c09da1c(void *);
void FUN_0c0a2080(void *);

void FUN_0c06a95c(char *p)
{
    signed char kind[13] = {0, 0, 0, 0, 0, 0, 2, 2, -1, -1, 4, -1, 5};
    signed char when[13] = {4, 6, 10, 15, 6, 2, 5, 6, -1, -1, 10, -1, 10};
    signed char arg[13] = {12, 16, 13, 18, 8, 35, 12, 21, -1, -1, 16, -1, 27};
    int idx;
    short t;

    idx = *(signed char *)(p + 0x7238);
    if (when[idx] > 0) {
        t = *(short *)(p + 0xF0) + 1;
        *(short *)(p + 0xF0) = t;
        if (t == when[idx]) {
            switch (kind[idx]) {
            case 0:
                if (*(signed char *)(p + 0x71F1) == 0)
                    FUN_0c046830(p[3], 1, 5, 1, arg[idx], 0x52, 0xC14EEC0, 0xC14EECC);
                else
                    FUN_0c046830(p[3], 1, 5, 1, arg[idx], 0x52, 0xC14EED8, 0xC14EEE4);
                break;
            case 1:
                if (*(signed char *)(p + 0x71F1) == 0)
                    FUN_0c046830(p[3], 1, 7, 1, arg[idx], 0x42, 0xC14EF20, 0xC14EF2C);
                else
                    FUN_0c046830(p[3], 1, 7, 1, arg[idx], 0x42, 0xC14EF38, 0xC14EF44);
                break;
            case 2:
                if (*(signed char *)(p + 0x71F1) == 0)
                    FUN_0c046830(p[3], 0, 14, 5, arg[idx], 0x53, 0xC14EF80, 0xC14EF8C);
                else
                    FUN_0c046830(p[3], 0, 14, 6, arg[idx], 0x53, 0xC14EF80, 0xC14EF8C);
                break;
            case 3:
                if (*(signed char *)(p + 0x71F1) == 0)
                    FUN_0c046830(p[3], 0, 17, 5, arg[idx], 0x53, 0xC14EF80, 0xC14EF8C);
                else
                    FUN_0c046830(p[3], 0, 17, 6, arg[idx], 0x53, 0xC14EF80, 0xC14EF8C);
                break;
            case 4:
                if (*(signed char *)(p + 0x71F1) == 0) {
                    FUN_0c046830(p[3], 1, 5, 1, arg[idx], 0x43, 0xC14EEC0, 0xC14EECC);
                    FUN_0c046830(p[3], 1, 5, 1, arg[idx], 0x43, 0xC14EEF0, 0xC14EEFC);
                    FUN_0c046830(p[3], 1, 5, 1, arg[idx], 0x43, 0xC14EF08, 0xC14EF14);
                } else {
                    FUN_0c046830(p[3], 1, 5, 1, arg[idx], 0x43, 0xC14EED8, 0xC14EEE4);
                }
                break;
            default:
                if (*(signed char *)(p + 0x71F1) == 0)
                    FUN_0c046830(p[3], 1, 5, 1, arg[idx], 0x52, 0xC14EEC0, 0xC14EECC);
                else
                    FUN_0c046830(p[3], 1, 5, 1, arg[idx], 0x52, 0xC14EED8, 0xC14EEE4);
                if (*(signed char *)(p + 0x71F1) == 0)
                    FUN_0c046830(p[3], 1, 7, 1, arg[idx], 0x42, 0xC14EF20, 0xC14EF2C);
                else
                    FUN_0c046830(p[3], 1, 7, 1, arg[idx], 0x42, 0xC14EF38, 0xC14EF44);
                break;
            }
        }
    }
    FUN_0c09a910(p);
    FUN_0c09d990(p);
    FUN_0c09d9bc(p);
    FUN_0c09da1c(p);
    if (*(signed char *)(p + 0x71AA) != 0)
        FUN_0c0a2080(p);
}
