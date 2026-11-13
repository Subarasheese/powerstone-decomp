/* Resets an actor's animation channels for a mode code 0..9 by calling the clear/set helpers in the pattern that mode needs. */
int FUN_0c04b6b8(int, int, int, int);
int FUN_0c04b840(int, int, int, int, int);
int FUN_0c04baa6(int, int, int, int);
int FUN_0c04bc94(int, int, int, int);

void FUN_0c04be14(int o, int mode)
{
    signed char m = mode;

    if (m >= 10) {
        return;
    }
    switch (m) {
    case 0:
    case 1:
    case 6:
    case 9:
        FUN_0c04b6b8(o, 0, 0, 0);
        break;
    case 2:
    case 5:
    case 7:
        FUN_0c04b6b8(o, 0, 0, 0);
        FUN_0c04b840(o, 0, 0, 0, 0);
        break;
    case 3:
    case 8:
        FUN_0c04b6b8(o, 0, 0, 0);
        FUN_0c04baa6(o, 0, 0, 0);
        break;
    case 4:
        FUN_0c04b6b8(o, 0, 0, 0);
        FUN_0c04b840(o, 0, 0, 0, 1);
        FUN_0c04b840(o, 0, 0, 0, 1);
        FUN_0c04bc94(o, 0, 0, 0);
        break;
    }
}
