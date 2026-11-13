/* Copies two bytes within an object (68,69 to 66,67) and two 12-byte vectors (164 to 152 and 96 to 84). */
struct V { int x, y, z; };

void FUN_0c0999e8(unsigned char *o)
{
    o[66] = o[68];
    o[67] = o[69];
    *(struct V *)(o + 152) = *(struct V *)(o + 164);
    *(struct V *)(o + 84) = *(struct V *)(o + 96);
}
