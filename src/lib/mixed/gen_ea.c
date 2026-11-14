/* Straight-line functions with calls and guards (batch gen_ea): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o24_float { char p[0x24]; float v; };
struct o719E_short { char p[0x719E]; short v; };
int FUN_0c0a3d5c(int, int);
int fx_spawn_double_ring(int, int, Stk3);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_apply_velocity(int);
int pl_landed(int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int pl_valgas_special_id5(int a4);
void cache_scan_pop_frame_invalidate(void);
void cache_scan_pop_frame_writeback(void);
void cache_scan_pop_frame_purge(void);

int pl_valgas_special_id5(int a4)
{
    int stk[3];
    register int t12;
    register int t28;

    if ((int)(unsigned short)((((struct o719E_short *)(a4))->v)) < (int)0x3C) {
        pl_step_motion(a4);
        pl_apply_motion_translation(a4);
    }
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v) = ((((struct o24_float *)(a4))->v));
    t12 = pl_landed(a4);
    t28 = (signed char)t12;
    if ((signed char)t12 != 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        pl_step_motion(a4);
        pl_step_motion_owner((*(int *)((a4 + 0x1C))));
        obj_set_owner_hit_record(a4, 0x32);
        obj_force_owner_state27(a4, 0x32);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(((*(int *)((a4 + 0x1C))) + 0x20)); }
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + (*(float *)0xC08A058));
        fx_spawn_double_ring((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3))), ((int)stk + 0), *(Stk3 *)(((int)stk + 0)));
        t28 = (FUN_0c0a3d5c(((-(*(signed char *)((a4 + 0x3)))) + 0x1), (*(signed char *)((a4 + 0x27C)))));
    }
    return t28;
}

void cache_scan_pop_frame_invalidate(void)
{
    
}

void cache_scan_pop_frame_writeback(void)
{
    
}

void cache_scan_pop_frame_purge(void)
{
    
}
