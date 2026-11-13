/* Copies the 12-byte vector at +32 of the object to a local, replaces its middle float with FUN_0c02649a(obj, 1), passes it to FUN_0c0427bc with the object's +56 data, the short at +236 and the byte at +3, then bumps the short at +236. */
typedef struct { int a; float b; int c; } V12;
extern float FUN_0c02649a(char *, int);
extern void FUN_0c0427bc(V12 *, char *, int, int);

void FUN_0c0ad1b8(char *o)
{
    V12 v;

    v = *(V12 *)(o + 32);
    v.b = FUN_0c02649a(o, 1);
    FUN_0c0427bc(&v, o + 56, *(short *)(o + 236), o[3]);
    *(short *)(o + 236) += 1;
}
