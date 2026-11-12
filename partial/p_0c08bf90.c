/* @unit 0c08bf90-0c08c074 -extra=a=400 */
typedef struct O { char p0[10]; char st; char sub; char p12[236-12]; short t; char p238[29096-238]; char f0; char f1; } O;
extern void FUN_0c09a808(O*,int,int);
extern void FUN_0c0a3914(O*,int);
extern void FUN_0c09a910(O*);
void FUN_0c08bf90(O *o)
{
    switch (o->st) {
    case 0:
        switch (o->sub) {
        case 0: case 1:
            FUN_0c09a808(o, 3, 2);
            o->t = 40;
            break;
        case 2: case 3:
            FUN_0c09a808(o, 3, 1);
            break;
        }
        o->f1 = 1;
        o->f0 = 1;
        o->st = o->st + 1;
        return;
    case 1:
        switch (o->sub) {
        case 0: case 1:
            if (!(short)--o->t) {
                o->st = o->st + 1;
                FUN_0c0a3914(o, 1);
                o->t = 118;
            }
            break;
        }
        break;
    case 2:
        switch (o->sub) {
        case 0: case 1:
            if (!(short)--o->t) {
                o->st = o->st + 1;
                FUN_0c0a3914(o, 1);
            }
            break;
        }
        break;
    case 3:
        break;
    default:
        return;
    }
    FUN_0c09a910(o);
}
