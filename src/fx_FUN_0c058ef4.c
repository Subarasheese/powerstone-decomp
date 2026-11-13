/* Initialises two 29392-byte linked blocks at 0x0C7E40C4: zeroes both, then links them to each other (fields 20, 24, 28) and flags the second. */
typedef struct E { char pad0[3]; char b3; char pad4[16]; struct E *w20; struct E *w24; struct E *w28; } E;
extern void *memset(void *, int, unsigned int);
void FUN_0c058ef4(void)
{
    E *e = (E *)0x0C7E40C4;
    E *d;
    memset(e, 0, 29392);
    d = (E *)((char *)e + 29392);
    memset(d, 0, 29392);
    e->w20 = 0;
    e->w24 = d;
    d->w20 = e;
    d->w24 = 0;
    e->b3 = 0;
    d->b3 = 1;
    e->w28 = d;
    d->w28 = e;
}
