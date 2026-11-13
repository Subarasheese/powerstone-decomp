/* Spawns a task object (FUN_0c059132 with 5, 1, 1, 2) and fills it from three 12-byte constant records (0xC152A88, 0xC152A94, 0xC152AA0): flags and a short 128, record A copied to +32, +68 and +56, shorts +0xEC/+0xEE cleared, record B copied into the object at +0x2E0 (+16), record C to +80 and into that object at +28. Returns the task, or 0. */
struct R12 { int a, b, c; };
struct Task {
    char live;
    char b1;
    char pad0;
    char b3;
    char pad1[2];
    short w6;
    char b8, b9, b10, b11;
    char pad2[20];
    struct R12 r32;
    char pad3[56 - 44];
    struct R12 r56;
    struct R12 r68;
    struct R12 r80;
    char pad4[0xEC - 92];
    short s236;
    short s238;
    char pad5[0x2E0 - 0xF0];
    char *peer;
};
struct Task *FUN_0c059132(int a, int b, int c, int d);
struct Task *FUN_0c0a5df8(void)
{
    struct R12 c;
    struct R12 b;
    struct R12 a;
    struct Task *t;
    a = *(struct R12 *)0xC152A88;
    b = *(struct R12 *)0xC152A94;
    c = *(struct R12 *)0xC152AA0;
    t = FUN_0c059132(5, 1, 1, 2);
    if (t != 0) {
        t->live = 1;
        t->b3 = 0;
        t->b1 = 0;
        t->w6 = 128;
        t->b11 = 0;
        t->b10 = 0;
        t->b9 = 0;
        t->b8 = 0;
        t->r32 = a;
        t->r68 = a;
        t->r56 = a;
        t->s236 = 0;
        t->s238 = 0;
        *(struct R12 *)(t->peer + 16) = b;
        t->r80 = c;
        *(struct R12 *)(t->peer + 28) = c;
    }
    return t;
}
