/* PSTONE LOGO bank objects and logo screens (0c02b884-0c02ca74) */

struct sub_view { char pad0[68]; float phase; char pad1[156 - 72]; int field_156; };
struct glob_view { char pad[96]; int field_96; };
struct owner_view { char pad[740]; struct sub_view *sub; };
void mdl_vtx_iter_begin(int a, int b);
int mdl_vtx_iter_next(void);
void mdl_vtx_get_uv(float *a, float *b);
void mdl_vtx_set_uv(float *a, float *b);

void fx_scroll_model_uv(struct owner_view *obj)
{
    float pair[2];
    obj->sub->phase = obj->sub->phase + 0.00199999986f;
    if (!(1.0f > obj->sub->phase))
        obj->sub->phase = obj->sub->phase - 1.0f;
    mdl_vtx_iter_begin((*(struct glob_view **)0xC664A08)->field_96, obj->sub->field_156);
    while (mdl_vtx_iter_next() == 0) {
        mdl_vtx_get_uv(&pair[1], &pair[0]);
        pair[0] = pair[0] - obj->sub->phase;
        mdl_vtx_set_uv(&pair[1], &pair[0]);
    }
}
