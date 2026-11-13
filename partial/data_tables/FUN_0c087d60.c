/* Draft: proven, but its cases embedded slices of the game data tables, so it is withdrawn until synthetic cases exist. */
int FUN_0c087d60(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721F));
    if ((unsigned int)t0 < (unsigned int)0x10) {
        switch ((t0 << 1)) {
            case 0:
            case 4:
            {
                (((struct oF0_ushort *)(a4))->v) = 0x0;
                t0 = ((int (*)(int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x7238))) << 2) + 0xC337FF8)))))(a4, a5, a6, a7);
            }
                break;
            case 2:
            case 6:
            {
                FUN_0c063812(a4);
            }
                break;
            case 8:
            {
                FUN_0c087fba(a4);
            }
                break;
            case 10:
            {
                FUN_0c063cb2(a4);
            }
                break;
            case 12:
            {
                FUN_0c063eac(a4);
            }
                break;
            case 14:
            {
                FUN_0c064152(a4);
            }
                break;
            case 16:
            {
                FUN_0c064d74(a4);
            }
                break;
            case 18:
            {
                FUN_0c0652c4(a4);
            }
                break;
            case 20:
            {
                FUN_0c064744(a4);
            }
                break;
            case 22:
            {
                FUN_0c065310(a4);
            }
                break;
            case 24:
            {
                FUN_0c065468(a4);
            }
                break;
            case 26:
            {
                FUN_0c065694(a4);
            }
                break;
            case 28:
            {
                FUN_0c06585e(a4);
            }
                break;
            default:
            {
                FUN_0c0658b8(a4, a5, a6);
            }
                break;
        }
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    return 0x71A8;
}
