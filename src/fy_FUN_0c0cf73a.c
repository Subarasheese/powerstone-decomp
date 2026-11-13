/* Looks up two 12-byte vectors in tables at 0xC494958 and 0xC494970 by (signed char)(12 * o[3]) and copies them to offsets 32 and 44 of the object. */
struct V { int x, y, z; };

void FUN_0c0cf73a(signed char *o)
{
    *(struct V *)(o + 32) = *(struct V *)(0xC494958 + (signed char)(o[3] * 12));
    *(struct V *)(o + 44) = *(struct V *)(0xC494970 + (signed char)(o[3] * 12));
}
