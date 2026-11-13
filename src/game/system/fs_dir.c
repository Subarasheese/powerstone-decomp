/* directory change helpers over gdFsChangeDir (0c027b90-0c027c74) */

int gdFsChangeDir(void);
int strcpy(int, int, int);
int strlen(int);

int fs_change_dir_ok(void);

int fs_change_dir_ok(void)
{
    register int t0;

    t0 = gdFsChangeDir();
    return (((t0 == 0)) ? 1 : 0);
}

int fs_change_dir_path(int a4, int a5, int a6)
{
    int stk[2];
    register int t1;
    register int t2;
    int t4;
    register int t5;
    register int t3;
    register int t6;

    *(unsigned int *)(((int)stk + 0)) = a4;
    strcpy(0xC363190, a4, a6);
    t1 = strlen(0xC363190);
    *(unsigned short *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x0;
    t2 = t1;
    t4 = t3;
    t5 = 0xC363190;
    for (;;) {
        if ((int)(*(short *)(((((int)stk + 0) + 0x4) + 0x0))) >= (int)(short)(t1 + 0x1)) {
            break;
        }
        t6 = (*(short *)(((((int)stk + 0) + 0x4) + 0x0)));
        t6 = (t6 + 0xC363190);
        t2 = (*(signed char *)((t6 + 0x0)));
        t4 = t2;
        if ((t2 != 47) && (t4 != 0)) {
            *(unsigned short *)(((((int)stk + 0) + 0x4) + 0x0)) = ((*(short *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x1);
            continue;
        }
        *(unsigned char *)((t6 + 0x0)) = 0x0;
        if (t6 != t5) {
            t4 = t5;
            t2 = (fs_change_dir_ok());
            t5 = t6;
            if (t2 != 0) {
                *(unsigned char *)0xC321048 = ((*(signed char *)0xC321048) + 0x1);
            }
            t5 = (t5 + 0x1);
            *(unsigned short *)(((((int)stk + 0) + 0x4) + 0x0)) = ((*(short *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x1);
            continue;
        }
        break;
    }
    return t2;
}

int fs_change_dir_up(void)
{
    int stk[1];
    register int t0;

    *(unsigned char *)((((int)stk + 0) + 0x0)) = 0x0;
    for (;;) {
        if ((int)(*(signed char *)((((int)stk + 0) + 0x0))) >= (int)(*(signed char *)0xC321048)) {
            break;
        }
        t0 = (fs_change_dir_ok());
        *(unsigned char *)((((int)stk + 0) + 0x0)) = ((*(signed char *)((((int)stk + 0) + 0x0))) + 0x1);
    }
    *(unsigned char *)0xC321048 = 0x0;
    return t0;
}
