/* Per-frame dispatcher on the mode byte at +0x721F (0-15): modes 0 and 2 clear the short at +240 and call a handler from the table at 0xC337110 (indexed by the signed byte at +0x7238); the others call their own handler; then +0x71A8 and +0x71A9 are set to 1. */
extern void FUN_0c078220(char *o);
extern void FUN_0c07779c(char *o);
extern void FUN_0c063cb2(char *o);
extern void FUN_0c063eac(char *o);
extern void FUN_0c064152(char *o);
extern void FUN_0c064d74(char *o);
extern void FUN_0c0652c4(char *o);
extern void FUN_0c064744(char *o);
extern void FUN_0c065310(char *o);
extern void FUN_0c065468(char *o);
extern void FUN_0c065694(char *o);
extern void FUN_0c06585e(char *o);
extern void FUN_0c0658b8(char *o);
void FUN_0c07746c(char *o)
{
    switch ((unsigned char)o[0x721F]) {
    case 0:
    case 2:
        *(short *)(o + 240) = 0;
        (*(void (**)(char *))(0xC337110 + o[0x7238] * 4))(o);
        break;
    case 1:
    case 3:
        FUN_0c078220(o);
        break;
    case 4:
        FUN_0c07779c(o);
        break;
    case 5:
        FUN_0c063cb2(o);
        break;
    case 6:
        FUN_0c063eac(o);
        break;
    case 7:
        FUN_0c064152(o);
        break;
    case 8:
        FUN_0c064d74(o);
        break;
    case 9:
        FUN_0c0652c4(o);
        break;
    case 10:
        FUN_0c064744(o);
        break;
    case 11:
        FUN_0c065310(o);
        break;
    case 12:
        FUN_0c065468(o);
        break;
    case 13:
        FUN_0c065694(o);
        break;
    case 14:
        FUN_0c06585e(o);
        break;
    case 15:
        FUN_0c0658b8(o);
        break;
    }
    o[0x71A9] = 1;
    o[0x71A8] = 1;
}
