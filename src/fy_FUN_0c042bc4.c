/* Spawns a burst of 2 x 8 particles around the point a5 for effect type a4: each of 8 positions starts as a copy of the point, is displaced in X/Z by a ring computed from sine/cosine of the table angle (+48 of the type record at 0xC7E40C4 + 0x72D0 * a4) and the pair table at 0xC14A090, lifted 16 in Y, and the batch is handed to FUN_0c042f48; the object it returns gets its scale float (+792, 1.19999993 for types 4, 5, 8, 9 else 1.0) and a timer byte copied from the record. */
struct V { float x, y, z; };
struct Obj { char pad[236]; short timer; char pad2[554]; float scale; };
extern float FUN_0c0dfa50(int);
extern float FUN_0c0df4d0(int);
extern struct Obj *FUN_0c042f48(int, int, int, struct V *, int, int);

void FUN_0c042bc4(char a4, struct V *a5)
{
    struct V e[8];
    unsigned char *B = (unsigned char *)0xC7E40C4 + (unsigned short)(a4 * 0x72D0);
    int A = *(int *)(B + 48) + 0x4000;
    float f15 = ((float *)0xC14A064)[(signed char)B[4]];
    float *p = (float *)0xC14A090;
    float s1, c1, c2, s2, k, k2;
    struct Obj *o;
    int n;
    int i;

    for (n = 2; n != 0; n--) {
        for (i = 0; i < 8; i++, p += 2) {
            e[i] = *a5;
            s1 = FUN_0c0dfa50(A);
            k = p[1] * f15 * 5.0f / 8.0f;
            c1 = FUN_0c0df4d0(A);
            e[i].x = e[i].x + (s1 * k - c1 * p[0] * f15);
            c2 = FUN_0c0df4d0(A);
            k2 = p[1] * f15 * 5.0f / 8.0f;
            s2 = FUN_0c0dfa50(A);
            e[i].z = e[i].z + (s2 * p[0] * f15 + k2 * c2);
            e[i].y = e[i].y + 16.0f;
        }
        o = FUN_0c042f48(a4, 8, 2, e, 0xC149EB4, 0xC14A110);
        if (o) {
            if ((signed char)B[4] == 4 || (signed char)B[4] == 5 || (signed char)B[4] == 8 || (signed char)B[4] == 9)
                o->scale = 1.19999993f;
            else
                o->scale = 1.0f;
            o->timer = (signed char)B[0x27C];
        }
    }
}
