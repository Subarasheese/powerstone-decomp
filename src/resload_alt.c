/* resource loader: file load/unpack, texture and model register/release, per-scene sets, per-player model load (0c05fc50-0c061094) */

int res_load_pl_effect(int, int);
int res_load_pl_models(int);
int res_load_pl_motion_data(int, int);
int FUN_0c062cf4(int, int);
struct draw_rec { short field_00; short count; int field_04; int list_ptr; int data_base; int field_16; int field_20; };
extern int res_load_file_raw_d(int model_id);
extern void res_load_file_unpack(int model_id);
extern void res_textures_register(struct draw_rec *o, int src);
extern void *memcpy(void *d, const void *s, unsigned size);

int res_player_load(int a4)
{
    res_load_pl_models(a4);
    res_load_pl_effect(a4, (*(signed char *)((((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4))));
    res_load_pl_motion_data(a4, (*(signed char *)((((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4))));
    return FUN_0c062cf4(a4, (*(signed char *)((((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4))));
}

void res_stage_load(char model_id)
{
    int *ptr_table = (int *)0xC618620;
    int base = 0xC618940;
    int *model_rec;
    int *src;
    int *unused_list2;
    int *list3;
    int i, j, k;
    struct draw_rec *rec_a = (struct draw_rec *)0xC664940;
    struct draw_rec *rec_b = (struct draw_rec *)0xC664958;
    struct draw_rec *rec_c = (struct draw_rec *)0xC664970;
    int size = res_load_file_raw_d(((int *)0xC14DDD8)[model_id]);
    memcpy((void *)0xC618940, (void *)0xCC00000, size);
    rec_a->list_ptr = (int)ptr_table;
    model_rec = (int *)(0xC350B60 + model_id * 52);
    src = (int *)model_rec[0];
    i = 0;
    do {
        ptr_table[i] = *src++ + base;
        i++;
    } while (i < 10);
    rec_b->list_ptr = (int)&ptr_table[i];
    for (j = 0; j < model_rec[8]; j++) {
        ptr_table[i] = ((int *)model_rec[1])[j] + base;
        i++;
    }
    rec_c->list_ptr = (int)&ptr_table[i];
    list3 = &ptr_table[i];
    for (k = 0; k < model_rec[9]; k++) {
        list3[k] = ((int *)model_rec[2])[k] + base;
    }
    res_load_file_unpack(((int *)0xC14DD9C)[model_id]);
    rec_a->count = 10;
    rec_b->count = model_rec[8];
    rec_c->count = model_rec[9];
    rec_a->data_base = base + model_rec[10];
    rec_b->data_base = rec_a->data_base;
    rec_c->data_base = rec_a->data_base;
    rec_a->field_04 = 100;
    rec_b->field_04 = 100;
    rec_c->field_04 = 100;
    rec_a->field_16 = 0;
    rec_b->field_16 = model_rec[6];
    rec_c->field_16 = 0;
    rec_a->field_20 = 0;
    rec_b->field_20 = model_rec[7];
    rec_c->field_20 = 0;
    res_textures_register(rec_a, 0xC14DE14);
    res_textures_register(rec_b, 0xC14DE1C);
    res_textures_register(rec_c, 0xC14DE20);
}
