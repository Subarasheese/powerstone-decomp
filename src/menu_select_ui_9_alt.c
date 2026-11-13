/* UI task objects (spawn/update pairs) of the player-select and stage-select screens (0c0a9d9c-0c0aba84) */

int obj_destroy(int);
int FUN_0c0623a6(int, int, int);
struct V3 { float x, y, z; };
struct Child {
    char on;                /* 0x00 */
    char pad1;
    unsigned short flags;   /* 0x02 */
    struct V3 pos;          /* 0x04 */
    int field_10;                  /* 0x10 */
    char pad14[0x20 - 0x14];
    float scale;            /* 0x20 */
};
struct Obj {
    char pad0[1];
    char field_1;                /* 0x01 */
    char pad2[3];
    char field_5;                /* 0x05 */
    unsigned short flags;   /* 0x06 */
    signed char state;      /* 0x08 */
    char field_9;                /* 0x09 */
    char pad_a[0x1C - 0xA];
    struct Obj *owner;      /* 0x1C */
    char pad20[4];
    float field_24;              /* 0x24 */
    char pad28[4];
    int field_2c;                /* 0x2C */
    char pad30[0x2E0 - 0x30];
    struct Child *kid;        /* 0x2E0 */
};
struct hud_part {
    char flag;
    char pad0;
    short code;
    float offset_x, offset_y;
    char pad1[20 - 12];
    int facing;
    char pad2[28 - 24];
    float scale_x, scale_y, scale_z;
};
struct hud_obj {
    char pad0[3];
    char side;
    signed char mode;
    char pad1[40 - 5];
    float scale;
    char pad2[736 - 44];
    struct hud_part *parts[2];
};
void FUN_0c06233a(struct hud_part *part, int model_table, int n);

void menu_ui_task_27(struct Obj *obj)
{
    unsigned char *ctl;

    if (obj->owner == 0) {
        obj_destroy((int)obj);
        return;
    }
    switch (obj->state) {
    case 0:
        obj->state = obj->state + 1;
        obj->field_9 = 0;
        obj->field_1 = 1;
        obj->flags = 0x1F;
        obj->field_5 = 25;
        FUN_0c0623a6((int)obj->kid, 0xC664A60, 0x22);
        obj->kid->on = 1;
        obj->kid->flags = 0x1F;
        obj->kid->scale = 0.0f;
        obj->field_24 = 90.0f;
        obj->field_2c = 0x5B0;
        obj->kid->field_10 = 0;
        break;
    case 1:
        if (obj->owner->state == 2) {
            obj->kid->on = 1;
            obj->kid->scale = obj->kid->scale + 0.399999976f;
            if (obj->kid->scale > 2.0f) {
                obj->kid->scale = 2.0f;
            }
        } else {
            obj->kid->on = 0;
            obj->kid->scale = 0.0f;
        }
        obj->kid->pos = obj->owner->kid->pos;
        ctl = (unsigned char *)0xC7F2EE4;
        if (ctl[2] == 2 && ctl[3] == 3) {
            obj->state = obj->state + 1;
        }
        break;
    default:
        obj_destroy((int)obj);
        break;
    }
}

void menu_ui_task_32_layout(struct hud_obj *hud)
{
    signed char *model_table = (signed char *)0xC1525B4;
    int i;
    int model;
    struct hud_part *part;
    for (i = 0; i < 2; i++) {
        if (i == 0) {
            if (hud->mode == 10)
                model = 71;
            else
                model = model_table[hud->mode] + 15;
            FUN_0c06233a(hud->parts[i], 0xC664A78, model);
            hud->parts[i]->facing = hud->side == 0 ? 0x8000 : 0;
            hud->parts[i]->offset_x = (float)(hud->side == 0 ? 50 : -50);
            hud->parts[i]->offset_y = 50.0f;
            part = hud->parts[i];
            part->offset_x = -(hud->scale * part->offset_x * 1.0f) / 640.0f;
            part = hud->parts[i];
            part->offset_y = -(hud->scale * part->offset_y * 1.0f) / 480.0f;
            hud->parts[i]->scale_x = -(hud->scale * 0.849999964f) / 640.0f;
            hud->parts[i]->scale_y = -(hud->scale * 0.699999988f) / 480.0f;
        } else {
            if (*(char *)0xC7F2F08 != 0 && hud->mode == 0) {
                FUN_0c06233a(hud->parts[i], 0xC664A78, 3);
            } else {
                if (hud->mode == 10)
                    model = 70;
                else
                    model = model_table[hud->mode] + 25;
                FUN_0c06233a(hud->parts[i], 0xC664A78, model);
            }
            hud->parts[i]->offset_x = (float)(hud->side == 0 ? 50 : -50);
            hud->parts[i]->offset_y = -80.0f;
            part = hud->parts[i];
            part->offset_x = -(hud->scale * part->offset_x * 1.0f) / 640.0f;
            part = hud->parts[i];
            part->offset_y = -(hud->scale * part->offset_y * 1.0f) / 480.0f;
            hud->parts[i]->scale_x = -(hud->scale * 1.0f) / 640.0f;
            hud->parts[i]->scale_y = -(hud->scale * 1.0f) / 480.0f;
        }
        hud->parts[i]->flag = 1;
        hud->parts[i]->code = 287;
        hud->parts[i]->scale_z = 1.0f;
    }
}
