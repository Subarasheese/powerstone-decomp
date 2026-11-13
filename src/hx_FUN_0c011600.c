/* VMU access step for port `port` (called every frame until it returns something other than -1): state 0 starts
   (busy flag 0x0C361BA0, FUN_0c0101a8, FUN_0c0101f0), 1 unmounts the previously mounted unit (buUnmount; its status
   becomes 18), 2 mounts the new one (buMountDisk with the work area 0x0C352640 sized from its block count), 3 waits for
   the mount (FUN_0c0115a4; "no card" style errors -255 / -253 / -251 move on), 4 reads it (FUN_0c011554, then
   FUN_0c011328 or FUN_0c010b84) and finishes, returning the result or the unit's status. Unit table 0x0C361A60, 40
   bytes per port: drive, status, loaded flag, block count. */
int FUN_0c0101a8(void);
void FUN_0c0101f0(int port);
int buUnmount(int drive);
int buMountDisk(int drive, void *work, int size);
int FUN_0c0115a4(int drive);
int FUN_0c011554(void);
void FUN_0c011328(void);
void FUN_0c010b84(void);
void FUN_0c010160(void);

#define STATE (*(signed char *)0x0C361BC0)
#define ACTIVE (*(int *)0x0C361BA0)
#define WAIT (*(int *)0x0C361BA4)
#define CUR (*(int *)0x0C361BA8)
#define PORT (*(int *)0x0C361BAC)
#define UNIT(p) ((int *)((char *)0x0C361A60 + (short)((p) * 40)))

int FUN_0c011600(int port)
{
    int old, r, c;
    int *u;

    old = PORT;
    switch (STATE) {
    case 0:
        ACTIVE = 1;
        PORT = port;
        FUN_0c0101a8();
        FUN_0c0101f0(PORT);
        STATE = 1;
    case 1:
        if (CUR == PORT) {
            STATE = 3;
            return -1;
        }
        if (CUR != -1) {
            if (WAIT != 0)
                return -1;
            if (buUnmount(UNIT(CUR)[0]) != 0)
                return -1;
            UNIT(CUR)[1] = 18;
            CUR = -1;
        }
        STATE = 2;
        return -1;
    case 2:
        if (WAIT != 0)
            return -1;
        u = UNIT(old);
        if (buMountDisk(u[0], (void *)0x0C352640, (u[3] << 9) + 32) != 0)
            return -1;
        WAIT = 1;
        STATE = 3;
        return -1;
    case 3:
        if (WAIT != 0)
            return -1;
        c = CUR;
        if (c == old) {
            r = FUN_0c0115a4(UNIT(c)[0]);
            if (r == -255 || r == -253 || r == -251) {
                STATE = 4;
                return -1;
            }
            if (r != 0)
                return -1;
            WAIT = 1;
        }
        STATE = 4;
        return -1;
    case 4:
        if (WAIT != 0)
            return -1;
        if (UNIT(old)[2] == 0) {
            r = FUN_0c011554();
            if (r == 0)
                FUN_0c011328();
            else
                FUN_0c010b84();
            FUN_0c010160();
            FUN_0c0101f0(PORT);
            STATE = 0;
            ACTIVE = 0;
            return r;
        }
        FUN_0c010b84();
        FUN_0c010160();
        FUN_0c0101f0(PORT);
        STATE = 0;
        ACTIVE = 0;
        return UNIT(PORT)[2];
    }
    return -1;
}
