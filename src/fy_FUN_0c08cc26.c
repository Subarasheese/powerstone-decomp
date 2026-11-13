/* Picks a variant for an object: asks FUN_0c08cb8c for its group (byte at 9), takes a random-looking 0..15 offset from FUN_0c0df940 scaled by 255 into the group's 16-byte row (row = byte at 8), stores that entry at 7 and the table value it selects at 16. */
struct Obj {
    char p0[7];
    signed char entry;      /* 7 */
    signed char row;        /* 8 */
    signed char group;      /* 9 */
    char p10[6];
    int value;              /* 16 */
};
int FUN_0c08cb8c(int);
float FUN_0c0df940(void);
void FUN_0c08cc26(struct Obj *o, int idx)
{
    char *ent;
    unsigned int u;

    o->group = FUN_0c08cb8c(idx);
    ent = ((char **)0xC338A80)[o->group] + o->row * 16;
    u = (unsigned int)(FUN_0c0df940() * 255.0f);
    o->entry = ent[u % 16];
    o->value = ((int **)0xC338A68)[o->group][o->entry];
}
