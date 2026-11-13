/* Sets an object's three direction floats (+32..+40) to the 12-byte vector chosen by its type (signed byte +0x314, 10-byte records at 0xC33BFD8, byte 8 picks a 12-byte vector at 0xC339EE8) scaled by the owner's factor (float at +0x7298 of the object at +28), and copies the vector chosen from 0xC339F3C into +44. */
struct V3 { int a, b, c; };
struct Own { char pad[0x7298]; float scale; };
struct Obj {
    char pad0[28];
    struct Own *owner;
    float d[3];
    struct V3 w;
    char pad1[0x314 - 56];
    signed char kind;
};
void FUN_0c0ad36c(struct Obj *o)
{
    struct Own *own = o->owner;
    signed char *rec = (signed char *)(0xC33BFD8 + o->kind * 10);
    float *t = (float *)(0xC339EE8 + (signed char)(rec[8] * 12));
    signed char *rec2;
    o->d[0] = t[0] * own->scale;
    o->d[1] = t[1] * own->scale;
    o->d[2] = t[2] * own->scale;
    rec2 = (signed char *)(0xC33BFD8 + o->kind * 10);
    o->w = *(struct V3 *)(0xC339F3C + (signed char)(rec2[8] * 12));
}
