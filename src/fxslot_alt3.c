/* 8 record slots (144 bytes) at 0xc7f3238: clear, start by priority level, HUD/effect sprite helpers (0c05eea0-0c05f6d8) */

struct Vec12 { int x, y, z; };
extern char *fxslot_start(signed char slot_kind, int score, signed char aux, int z, int arg_w, int v);

static int test(unsigned char *entry, int score)
{
    return entry[0] != 0 && (unsigned char)score < entry[1];
}

void FUN_0c05f59c(int score, char aux, int arg_w, struct Vec12 *blk, short half_val)
{
    struct Vec12 const_blk;
    signed char *slot_kind = (signed char *)0xC383808;
    unsigned char *limits = (unsigned char *)0xC7F3238;
    char *rec;
    const_blk = *(struct Vec12 *)0xC14D94C;
    if (*slot_kind == 3) {
        *slot_kind = 4;
        if (test(limits + 576, score)) {
            *slot_kind = 3;
            if (test(limits + 432, score)) return;
        }
    } else {
        *slot_kind = 3;
        if (test(limits + 432, score)) {
            *slot_kind = 4;
            if (test(limits + 576, score)) return;
        }
    }
    rec = fxslot_start(*slot_kind, score, aux, 0, arg_w, 0);
    *(struct Vec12 *)(rec + 20) = *blk;
    *(short *)(rec + 16) = half_val;
    *(struct Vec12 *)(rec + 32) = const_blk;
    *(struct Vec12 *)(rec + 44) = const_blk;
    *(struct Vec12 *)(rec + 56) = const_blk;
}
