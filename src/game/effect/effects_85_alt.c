/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c040550-0c040a84) */

int FUN_0c0408d0(int);
int FUN_0c040938(int);
int obj_destroy(int);

int fx_tick_040550(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c0408d0(a4);
    t1 = FUN_0c040938(a4);
    if ((signed char)(t0 + t1) == 0) {
        return obj_destroy(a4);
    }
    return t1;
}
