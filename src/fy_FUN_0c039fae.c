/* Steps a counter (short at +236) and, while it is below the limit at +238 and the two shorts at +240/+242 match the two bytes at +0x71A4/+0x71A5 of the object at +28, returns; otherwise tail-calls FUN_0c059330. */
struct Q { char pad[0x71A4]; unsigned char b0; unsigned char b1; };
struct P {
    char pad0[28];
    struct Q *q;
    char pad1[236 - 32];
    short count;
    short limit;
    short v0;
    short v1;
};
void FUN_0c059330(struct P *p);
void FUN_0c039fae(struct P *p)
{
    struct Q *q;
    p->count++;
    if (p->count < p->limit) {
        q = p->q;
        if (p->v0 == (signed char)q->b0 && p->v1 == q->b1)
            return;
    }
    FUN_0c059330(p);
}
