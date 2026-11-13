/* @unit 0c04571c-0c0457d0 -extra=a=400 */
typedef struct O { char c0; char c1; char p2; char c3; char p4; char c5; short s6; char st8; char p9[6]; char c15; void (*fn)(); char p20[0xec-20]; short s236; char p238[0x118-0xee]; int i280; } O;
extern O *obj_create(int a,int b,int c,int d);
extern void snd_play_side_se(int a,int b);
extern void obj_destroy(O*);
void snd_tick_delayed_sound(O*);
void snd_spawn_delayed_sound(char a,char b,char c)
{
    O *o;
    if ((o = obj_create(6,1,1,0))) {
        o->c0 = 1;
        o->c1 = 0;
        o->s6 = 33;
        o->c5 = 1;
        o->fn = snd_tick_delayed_sound;
        o->i280 = 0;
        o->c3 = a;
        o->s236 = c;
        o->c15 = b;
    }
}
void snd_tick_delayed_sound(O *o)
{
    switch (o->st8) {
    case 0:
        if (!o->s236) {
            snd_play_side_se(o->c3, o->c15);
            o->st8 = o->st8 + 1;
        }
        o->s236 = o->s236 - 1;
        break;
    case 1:
        obj_destroy(o);
        break;
    }
}
