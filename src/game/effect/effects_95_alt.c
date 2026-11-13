/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c042728-0c043384) */

struct V3 { int x, y, z; };
struct Sub { char pad[64]; float scale_0, scale_1, scale_2, scale_3; };
struct Eff { char pad0[736]; struct Sub *sub; char pad1[780 - 740]; float speed; };
void math_vec3_add(struct V3 *dst, struct V3 *src, int rot);
struct Eff *fx_spawn_burst_slot(int arg_a, int arg_b, int arg_c, struct V3 *pos, int eff, int arg_f);

void fx_spawn_periodic_trail(struct V3 *pos, int unused, unsigned short n, signed char idx)
{
    struct V3 local_pos;
    struct Eff *eff;
    float half_n;
    if ((unsigned short)n % *(signed char *)(0xC14A284 + *(signed char *)(0xC7E40C8 + (unsigned short)((unsigned short)(signed char)idx * (unsigned short)0x72D0))) != 0)
        return;
    local_pos = *pos;
    math_vec3_add(&local_pos, &local_pos, 0xC14A1C4 + (signed char)((*(int *)0xC7F3014 >> 1 & 7) * 12));
    eff = fx_spawn_burst_slot(2, 1, 1, &local_pos, 0xC149DD0, 0xC14A224 + (signed char)((*(char *)0xC7F3014 & 3) * 12));
    if (eff == 0)
        return;
    if (n == 0) {
        eff->speed = 3.0f;
    } else {
        half_n = (float)(int)n / 2.0f;
        eff->speed = half_n;
        if (half_n > 2.0f)
            eff->speed = 2.0f;
    }
    eff->sub->scale_0 = 1.0f;
    eff->sub->scale_1 = 1.0f;
    eff->sub->scale_2 = 1.0f;
    eff->sub->scale_3 = 1.0f;
}
