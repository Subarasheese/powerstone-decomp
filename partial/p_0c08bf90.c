/* @unit 0c08bf90-0c08c074 -extra=a=400 */
typedef struct O { char p0[10]; char st; char sub; char p12[236-12]; short t; char p238[29096-238]; char f0; char f1; } O;
extern void pl_start_motion(O*,int,int);
extern void snd_play_char_voice(O*,int);
extern void pl_step_motion(O*);
void FUN_0c08bf90(O *o)
{
    switch (o->st) {
    case 0:
        switch (o->sub) {
        case 0: case 1:
            pl_start_motion(o, 3, 2);
            o->t = 40;
            break;
        case 2: case 3:
            pl_start_motion(o, 3, 1);
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
                snd_play_char_voice(o, 1);
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
                snd_play_char_voice(o, 1);
            }
            break;
        }
        break;
    case 3:
        break;
    default:
        return;
    }
    pl_step_motion(o);
}
