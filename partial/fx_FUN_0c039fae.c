/* Draft: proven in a copy without the runtime-helper renames, but the call arguments differ from the original once
   _divls/_modls/_quick_*mvn/_slow_mvn run for real. Cases: partial/cases/fx_FUN_0c039fae.json (synthetic). */
/* Per-frame check: keeps the object alive while its timer is under the limit and the owner's two bytes match its values, else releases it. */
int FUN_0c059330(int);

struct Obj {
    char p0[0x1C];
    char *owner;            /* 0x1C */
    char p20[0xEC - 0x20];
    short t;                /* 0xEC */
    short limit;            /* 0xEE */
    short a;                /* 0xF0 */
    short b;                /* 0xF2 */
};

void FUN_0c039fae(struct Obj *o)
{
    o->t = o->t + 1;
    if (o->t < o->limit && o->a == (signed char)o->owner[0x71A4] && o->b == (unsigned char)o->owner[0x71A5]) {
        return;
    }
    FUN_0c059330((int)o);
}
