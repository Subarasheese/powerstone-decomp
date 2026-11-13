/* @unit 0c0ac7f0-0c0ac8dc */
struct R { char t; char pad[12]; };
struct T { struct R *p; int n; };
struct G { char pad[37]; char idx; };
extern struct G g_game_state;
extern struct T g_stage_layout_tbl[];
extern void stage_spawn_type01(struct R *r);
extern void stage_spawn_type02(struct R *r);
extern void stage_spawn_type03(struct R *r);
extern void stage_spawn_type04(struct R *r);
extern void stage_spawn_type11(struct R *r);
extern void stage_spawn_type12(struct R *r);
extern void stage_spawn_type08(struct R *r);
extern void stage_spawn_gimmick_by_kind(struct R *r);
void stage_spawn_layout_objects(void)
{
    register struct R *r;
    char i;
    r = g_stage_layout_tbl[g_game_state.idx].p;
    for (i = 0; i < g_stage_layout_tbl[g_game_state.idx].n; r++, i++) {
        switch (r->t) {
        case 1: stage_spawn_type01(r); break;
        case 2: stage_spawn_type02(r); break;
        case 3: stage_spawn_type03(r); break;
        case 4: stage_spawn_type04(r); break;
        case 11: stage_spawn_type11(r); break;
        case 12: stage_spawn_type12(r); break;
        case 8: stage_spawn_type08(r); break;
        case 13: stage_spawn_gimmick_by_kind(r); break;
        case 15: stage_spawn_gimmick_by_kind(r); break;
        }
    }
}
