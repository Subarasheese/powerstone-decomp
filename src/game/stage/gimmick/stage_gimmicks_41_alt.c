/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b5420-0c0b5620) */

typedef struct { char pad[2]; unsigned short flags; float anim; float life; char pad1[52]; float fade; } Sprite;
extern void FUN_0c0b5420(char *);

void stage_gimmick_38_update(char *owner)
{
    int i;
    Sprite *sprite;

    for (i = 0; i < 10; i++) {
        sprite = *(Sprite **)(owner + 0x2E0 + i * 4);
        sprite->anim += 0.5f;
        sprite->life = sprite->life - ((float)(i % 2) + 1.0f);
        if (sprite->life < 0.0f) {
            FUN_0c0b5420((char *)sprite + 4);
            sprite->flags &= 0xFBFF;
            sprite->fade = 1.0f;
        }
        if (sprite->life < 50.0f) {
            sprite->flags |= 0x400;
            sprite->fade = sprite->life / 50.0f;
        }
    }
}
