/* State change of an object: calls FUN_0c09a808(o,4,3), sets flag bytes at 0x71A8/0x71A9, copies the 12-byte vector at +32 into the linked object (pointer at +28), nudges its +48 field by 0x8000 (16 bits), calls FUN_0c09a828(linked,4,57), sets more flag bytes on the linked object, loads the timers at +236/+238 with 12 and 10 and bumps byte 10. */
struct V { int x, y, z; };
extern int FUN_0c09a808(unsigned char *, int, int);
extern int FUN_0c09a828(unsigned char *, int, int);

void FUN_0c076978(unsigned char *o)
{
    unsigned char *l;

    FUN_0c09a808(o, 4, 3);
    o[0x71A9] = 1;
    o[0x71A8] = 1;
    *(struct V *)(*(unsigned char **)(o + 28) + 32) = *(struct V *)(o + 32);
    *(int *)(*(unsigned char **)(o + 28) + 48) = (unsigned short)(*(int *)(o + 48) + 0x8000);
    FUN_0c09a828(*(unsigned char **)(o + 28), 4, 57);
    (*(unsigned char **)(o + 28))[0x71A9] = 1;
    (*(unsigned char **)(o + 28))[0x71A8] = 1;
    (*(unsigned char **)(o + 28))[0x710B] = 1;
    (*(unsigned char **)(o + 28))[0x710C] = 1;
    (*(unsigned char **)(o + 28))[11] = 2;
    (*(unsigned char **)(o + 28))[12] = 0;
    *(short *)(o + 236) = 12;
    *(short *)(o + 238) = 10;
    o[10]++;
}
