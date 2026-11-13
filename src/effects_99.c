/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c043bdc-0c044094) */

struct Vec12 { int a, b, c; };
struct Rec { float f0; char b4, b5, b6, b7; int w8; };
struct Sub {
    char b0;
    char pad0;
    short s2;
    char pad1[28 - 4];
    float f28, f32, f36;
    char pad2[52 - 40];
    struct Rec rec;
};
struct Task {
    char live;
    char b1;
    char pad0;
    char b3;
    char b4;
    char b5;
    short s6;
    char pad1[16 - 8];
    void (*handler)(void);
    char pad2[28 - 20];
    char *owner;
    struct Vec12 v32;
    struct Vec12 v44;
    char pad3[80 - 56];
    struct Vec12 v80;
    char pad4[236 - 92];
    short s236, s238, s240, s242;
    char pad5[280 - 244];
    int w280;
    char pad6[736 - 284];
    struct Sub *sub[8];
};
struct Task *obj_create(int a, int b, int c, int d);
void fx_tick_043bdc(void);
void *memset(void *p, int c, unsigned n);
void FUN_0c06233a(struct Sub *s, int tbl, int n);
float math_rand_float(void);

void fx_spawn_043bdc(char *src)
{
    struct Task *task;
    struct Sub *part;
    struct Rec *rec;
    int idx;
    task = obj_create(5, 1, 8, 0);
    if (task == 0)
        return;
    task->live = 1;
    task->b1 = 1;
    task->b3 = src[3];
    task->s6 = 15;
    task->b5 = 1;
    task->handler = fx_tick_043bdc;
    task->v32 = *(struct Vec12 *)0xC14A5D8;
    task->w280 = 0;
    task->v44 = *(struct Vec12 *)0xC14A5F0;
    task->v80 = *(struct Vec12 *)0xC14A5E4;
    for (idx = 0; idx < 8; idx++) {
        part = task->sub[idx];
        rec = &part->rec;
        memset(rec, 0, 12);
        FUN_0c06233a(part, 0xC4CFA68, rec->b6 + 117);
        part->b0 = 1;
        part->s2 = 49;
        part->f36 = (float)((unsigned int)(math_rand_float() * 255.0f) % 10u + 1) / 10.0f + 1.0f;
        part->f32 = part->f36;
        part->f28 = part->f36;
        rec->f0 = part->f36 / 8.0f;
        rec->b4 = 1;
        rec->b5 = (unsigned int)(math_rand_float() * 255.0f) % 3u + 1;
        rec->b6 = (unsigned int)(math_rand_float() * 255.0f) % 4u;
        rec->b7 = (unsigned int)(math_rand_float() * 255.0f) % 8u + 1;
    }
    task->s236 = 120;
    task->s238 = 0;
    task->s240 = 8;
    task->s242 = 0;
    task->owner = src;
}
