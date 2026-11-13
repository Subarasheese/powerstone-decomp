/* character 3 (Jack) (0c0742fc-0c07438c) */

int pl_jack_mode11_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if ((unsigned int)t0 < (unsigned int)0x14) {
        switch ((t0 << 1)) {
            case 0:
            {
                return ((int (*)(int, int, int, int))(0xC073BD4))(a4, a5, a6, a7);
            }
            case 2:
            {
                return ((int (*)(int, int, int, int))(0xC073D0C))(a4, a5, a6, a7);
            }
            case 4:
            {
                return ((int (*)(int, int, int, int))(0xC073DA2))(a4, a5, a6, a7);
            }
            case 6:
            {
                return ((int (*)(int, int, int, int))(0xC073E54))(a4, a5, a6, a7);
            }
            case 8:
            {
                return ((int (*)(int, int, int, int))(0xC073EEA))(a4, a5, a6, a7);
            }
            case 10:
            {
                return ((int (*)(int, int, int, int))(0xC073F9C))(a4, a5, a6, a7);
            }
            case 12:
            {
                return ((int (*)(int, int, int, int))(0xC074032))(a4, a5, a6, a7);
            }
            case 14:
            {
                return ((int (*)(int, int, int, int))(0xC0740E4))(a4, a5, a6, a7);
            }
            case 16:
            {
                return ((int (*)(int, int, int, int))(0xC07417A))(a4, a5, a6, a7);
            }
            case 18:
            {
                return ((int (*)(int, int, int, int))(0xC073D0C))(a4, a5, a6, a7);
            }
            case 20:
            {
                return ((int (*)(int, int, int, int))(0xC073DA2))(a4, a5, a6, a7);
            }
            case 22:
            {
                return ((int (*)(int, int, int, int))(0xC073E54))(a4, a5, a6, a7);
            }
            case 24:
            {
                return ((int (*)(int, int, int, int))(0xC073EEA))(a4, a5, a6, a7);
            }
            case 26:
            {
                return ((int (*)(int, int, int, int))(0xC073F9C))(a4, a5, a6, a7);
            }
            case 28:
            {
                return ((int (*)(int, int, int, int))(0xC074032))(a4, a5, a6, a7);
            }
            case 30:
            {
                return ((int (*)(int, int, int, int))(0xC0740E4))(a4, a5, a6, a7);
            }
            case 32:
            {
                return ((int (*)(int, int, int, int))(0xC07417A))(a4, a5, a6, a7);
            }
            case 34:
            {
                return ((int (*)(int, int, int, int))(0xC07422C))(a4, a5, a6, a7);
            }
            case 36:
            {
                return ((int (*)(int, int, int, int))(0xC074266))(a4, a5, a6, a7);
            }
            default:
            {
                return ((int (*)(int, int, int, int))(0xC0742A4))(a4, a5, a6, a7);
            }
        }
    }
    return t0;
}
