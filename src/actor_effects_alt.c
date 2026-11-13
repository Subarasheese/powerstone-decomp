/* actor objects: reset/update routines sharing the entity header (counter byte 8, rotation 44..52, velocity 56..64); exact class not identified (0c05d970-0c05dd00) */

struct o71CC_uint { char p[0x71CC]; unsigned int v; };
int FUN_0c05db76(int);
int FUN_0c05dbf4(void);
int obj_set_mode_owner(int, int, int);

int FUN_0c05db2c(int a4)
{
    register int t0;
    register int t4;

    t0 = *(int *)((a4 + 0x1C));
    if ((*(signed char *)((t0 + 0x7236))) == 0) {
        return obj_set_mode_owner(a4, 0x4, (*(signed char *)((a4 + 0x3))));
    }
    t4 = *(signed char *)((a4 + 0x8));
    if (t4 != 0) {
        if (t4 != 1) {
        } else {
            FUN_0c05dbf4();
        }
    } else {
        FUN_0c05db76(a4);
    }
    (((struct o71CC_uint *)(t0))->v) = a4;
    return 0x71CC;
}
