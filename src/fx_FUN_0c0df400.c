/* atan2-style angle (16-bit units, 0x10000 = full turn) of the vector (b, a), built from the arctangent helper FUN_0c0df360. */
int FUN_0c0df360(float);

int FUN_0c0df400(float a, float b)
{
    if (a > b) {
        if (!(-a > b)) {
            if (a == 0.0f) {
                return 0x4000;
            }
            return (0x4000 - FUN_0c0df360(b / a)) & 0xFFFF;
        }
        if (b == 0.0f) {
            return 0x8000;
        }
        return (0x8000 + FUN_0c0df360(a / b)) & 0xFFFF;
    }
    if (!(-a > b)) {
        if (b == 0.0f) {
            return 0;
        }
        return FUN_0c0df360(a / b);
    }
    if (a == 0.0f) {
        return 0xC000;
    }
    return (0xC000 - FUN_0c0df360(b / a)) & 0xFFFF;
}
