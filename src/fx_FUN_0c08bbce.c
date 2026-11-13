/* Set the linked object's local offset to (70.0f, 0, 0), copy this object's position into it, advance its angle by half a turn, and tail-call the transform setup. */
struct V3 { int x, y, z; };
int FUN_0c062210(char *, char *);

int FUN_0c08bbce(char *p)
{
    *(float *)(*(char **)(p + 0x1C) + 32) = 70.0f;
    *(float *)(*(char **)(p + 0x1C) + 36) = 0.0f;
    *(float *)(*(char **)(p + 0x1C) + 40) = 0.0f;
    *(struct V3 *)(*(char **)(p + 0x1C) + 44) = *(struct V3 *)(p + 44);
    *(unsigned int *)(*(char **)(p + 0x1C) + 48) = (unsigned short)(*(int *)(p + 48) + 0x8000);
    return FUN_0c062210(*(char **)(p + 0x1C) + 32, p + 0xB40);
}
