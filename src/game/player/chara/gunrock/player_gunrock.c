/* @unit 0c077428-0c07746c */
struct S { char p[0x71ba]; char k; char q[0x10b]; };
struct T { char p[13]; char f; };
struct S;
void pl_gunrock_play_motion_sounds(int);
void snd_play_char_voice(struct S *, int);
int pl_gunrock_frame_hook(int a);
void FUN_0c07743e(struct S *s);
int pl_gunrock_frame_hook(int a)
{
    pl_gunrock_play_motion_sounds(a);
    FUN_0c07743e((struct S *)a);
    return 0;
}
void FUN_0c07743e(struct S *s)
{
    struct T *t;
    t = (struct T *)((char *)s + 0x72bc);
    if (t->f) {
        if (s->k != 11) {
            t->f = 0;
            snd_play_char_voice(s, 49);
        }
    }
}
