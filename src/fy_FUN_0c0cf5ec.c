/* Camera setup: steps a camera preset counter (byte at 0xC33F578, 0..4, advanced when bit 0 of the pad word at 0xC361BFC is set), builds the eye and target positions for that preset on the stack, calls nlLookAt with them and copies the target to 0xC7F2AB4 and the eye to 0xC7F2AE4 (block at 0xC7F29F8 +188 / +236). */
struct V3 { float x, y, z; };
extern int FUN_0c0e1550(int);
extern void nlUnitMatrix(void);
extern void nlLookAt(float *, float *, int);
struct Pad { char pad[12]; unsigned short flags; };
void FUN_0c0cf5ec(void)
{
    struct V3 a;
    struct V3 b;
    signed char *preset = (signed char *)0xC33F578;
    if (((struct Pad *)0xC361BF0)->flags & 1) {
        *preset = *preset + 1;
        if (*preset > 4)
            *preset = 0;
    }
    switch (*preset) {
    case 0:
        a.x = 0.0f;
        a.y = 100.0f;
        a.z = 0.0f;
        b.x = a.x;
        b.y = a.y;
        b.z = a.z + 400.0f;
        break;
    case 1:
        a.x = 0.0f;
        a.y = 100.0f;
        a.z = 0.0f;
        b.x = a.x;
        b.y = a.y;
        b.z = a.z + 1600.0f;
        break;
    case 2:
        a.x = 0.0f;
        a.y = 0.0f;
        a.z = 0.0f;
        b.x = a.x;
        b.y = a.y + 500.0f;
        b.z = a.z + 1.0f;
        break;
    case 3:
        a.x = 0.0f;
        a.y = 100.0f;
        a.z = 0.0f;
        b.x = a.x;
        b.y = a.y + 200.0f;
        b.z = a.z + 400.0f;
        break;
    case 4:
        a.x = 0.0f;
        a.y = 100.0f;
        a.z = 0.0f;
        b.x = a.x;
        b.y = a.y + -200.0f;
        b.z = a.z + 400.0f;
        break;
    default:
        break;
    }
    FUN_0c0e1550(2);
    nlUnitMatrix();
    nlLookAt((float *)&b, (float *)&a, 0);
    FUN_0c0e1550(1);
    *(struct V3 *)(0xC7F29F8 + 188) = b;
    *(struct V3 *)(0xC7F29F8 + 236) = a;
}
