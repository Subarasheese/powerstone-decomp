/* Straight-line functions with calls and guards (batch gen_aq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10E8_int { char p[0x10E8]; int v; };
int FUN_0c0593e0(int);
int FUN_0c05948c(int);
int FUN_0c09a910(int);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09da1c(int);
int FUN_0c0a2080(int);
int FUN_0c0a41d4(void);
int FUN_0c0a4f28(void);
int FUN_0c0a5d68(void);
int FUN_0c0d54ac(void);
int FUN_0c0ddd70(int, int, int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0e2140(int);
int FUN_0c0ff02c(int, int, int, int);
int FUN_0c100260(void);
int mpdrv_set_getcond(void);
int mpdrv_set_dkill(void);
int mpdrv_set_dreset(void);
int mpdrv_set_allstatreq(void);
int mpdrv_set_getminfo(void);
int mpdrv_set_arctrl(void);
int mpdrv_set_ft4ctrl(void);
int mpdrv_set_setcond(void);
int FUN_0c06eade(int a4);
int FUN_0c0fe938(int a4, int a5, int a6, int a7);
int FUN_0c098a3c(int a4);
int FUN_0c099c08(int a4, int a5);
int FUN_0c0d4f06(void);
int FUN_0c0d4eba(void);
int FUN_0c0d4ee0(void);
int FUN_0c0dde00(int a4, int a5, int a6, int a7);
int kdSetAllStatusRequest(void);
int kdSetDeviceReset(void);
int kdSetGetCondition(void);
int kdSetDeviceKill(void);
int kdSetSetCondition(void);
int kdSetGetMediaInfo(void);
int kdSetARControl(void);
int kdSetFT4Control(void);

int FUN_0c06eade(int a4)
{
    register int t2;

    FUN_0c09d990(a4);
    FUN_0c09d9bc(a4);
    t2 = FUN_0c09a910(a4);
    if ((signed char)t2 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t2;
}

int FUN_0c0fe938(int a4, int a5, int a6, int a7)
{
    register int t1;

    FUN_0c0ff02c(a4, a5, a6, a7);
    *(unsigned int *)0xFF00001C = ((a4 & 0xFFFFF7FF) | 0x800);
    t1 = *(int *)0xFF00001C;
    *(unsigned int *)0xFF00001C = ((t1 & 0xFFFFFFF7) | 0x8);
    return ((t1 & 0xFFFFFFF7) | 0x8);
}

int FUN_0c098a3c(int a4)
{
    FUN_0c09a910(a4);
    FUN_0c09da1c(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return FUN_0c0a2080(a4);
    }
    return 0x71AA;
}

int FUN_0c099c08(int a4, int a5)
{
    FUN_0c0e2140(a5);
    nlRotateAZ((*(int *)((a4 + 0x8))));
    nlRotateAY((*(int *)((a4 + 0x4))));
    return nlRotateAX((*(int *)((a4 + 0x0))));
}

int FUN_0c0d4f06(void)
{
    FUN_0c0d54ac();
    FUN_0c0a5d68();
    FUN_0c05948c(0x5);
    FUN_0c0593e0(0x5);
    FUN_0c05948c(0x6);
    return FUN_0c0593e0(0x6);
}

int FUN_0c0d4eba(void)
{
    FUN_0c0d54ac();
    FUN_0c0a41d4();
    FUN_0c05948c(0x5);
    FUN_0c0593e0(0x5);
    FUN_0c05948c(0x6);
    return FUN_0c0593e0(0x6);
}

int FUN_0c0d4ee0(void)
{
    FUN_0c0d54ac();
    FUN_0c0a4f28();
    FUN_0c05948c(0x5);
    FUN_0c0593e0(0x5);
    FUN_0c05948c(0x6);
    return FUN_0c0593e0(0x6);
}

int FUN_0c0dde00(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)0xC7FC4F0;
    if ((*(int *)((((a4 * 0x3C) + t0) + 0x28))) == 0) {
        return FUN_0c0ddd70(((a4 * 0x3C) + t0), a5, a6, a7);
    }
    *(unsigned int *)((((a4 * 0x3C) + t0) + 0x30)) = (*(int *)0xC7F8800);
    return ((int (*)(int, int, int, int))(0xC0DDE26))(((a4 * 0x3C) + t0), 0xC7F87D0, a6, a7);
}

int kdSetAllStatusRequest(void)
{
    register int t0;

    t0 = mpdrv_set_allstatreq();
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

int kdSetDeviceReset(void)
{
    register int t0;

    t0 = mpdrv_set_dreset();
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

int kdSetGetCondition(void)
{
    register int t0;

    t0 = mpdrv_set_getcond();
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

int kdSetDeviceKill(void)
{
    register int t0;

    t0 = mpdrv_set_dkill();
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

int kdSetSetCondition(void)
{
    register int t0;

    t0 = mpdrv_set_setcond();
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

int kdSetGetMediaInfo(void)
{
    register int t0;

    t0 = mpdrv_set_getminfo();
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

int kdSetARControl(void)
{
    register int t0;

    t0 = mpdrv_set_arctrl();
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

int kdSetFT4Control(void)
{
    register int t0;

    t0 = mpdrv_set_ft4ctrl();
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}
