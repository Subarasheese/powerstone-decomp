/* not identified yet (keep old name) (0c028030-0c028524) */

struct vec3 { float x, y, z; };
struct screen_req { int field_00; struct vec3 pos; float size_x, size_y; char pad_1c[24]; int mode; int field_52; };
int FUN_0c0e1550(int);
int FUN_0c0e19b0(int);
int FUN_0c0e3c54(struct screen_req *);
int nlCalcPoint(struct vec3 *, struct vec3 *);
int nlCalcPoint44(struct vec3 *, float *);
int nlPopMatrix(int);
int FUN_0c0283c4(int, int);

int draw_project_point_sprite_z01(struct screen_req *req)
{
    float stk[18];
    struct screen_req local_req;
    float scale;

    FUN_0c0e19b0(0);
    local_req = *req;
    *(struct vec3 *)&stk[15] = local_req.pos;
    FUN_0c0e1550(2);
    nlCalcPoint((struct vec3 *)&stk[15], (struct vec3 *)&stk[12]);
    *(struct vec3 *)&stk[9] = *(struct vec3 *)&stk[12];
    stk[9] = stk[9] + 1.0f;
    FUN_0c0e1550(3);
    nlCalcPoint44((struct vec3 *)&stk[12], &stk[5]);
    nlCalcPoint44((struct vec3 *)&stk[9], &stk[1]);
    FUN_0c0e1550(1);
    nlPopMatrix(1);
    stk[15] = (((stk[5] / stk[8]) + 1.0f) / 2.0f) * 640.0f;
    stk[16] = -((((stk[6] / stk[8]) + 1.0f) / 2.0f) * 480.0f) + 480.0f;
    stk[17] = -(stk[14] * 1.0f);
    scale = ((((stk[1] / stk[4]) + 1.0f) / 2.0f) * 640.0f) - stk[15];
    local_req.pos.x = stk[15];
    local_req.pos.y = stk[16];
    local_req.pos.z = 0.099999994f;
    local_req.size_x = local_req.size_x * scale;
    local_req.size_y = local_req.size_y * scale;
    local_req.mode = 2;
    return FUN_0c0e3c54(&local_req);
}

int FUN_0c0283f0(int a4)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = *(short *)((a4 + 0x0));
    *(unsigned short *)((a4 + 0x0)) = (t0 - 1);
    t1 = 0x0;
    if ((int)(short)(t0 - 1) < 0) {
        t0 = *(int *)((a4 + 0x10));
        t1 = 0x0;
        t3 = (t0 + 0x10);
        if (((unsigned short)(*(short *)((t0 + 0xA))) & 0xFF00) == 0xFF00) {
            t1 = 0x1;
            t3 = (*(int *)((t0 + 0xC)));
        }
        FUN_0c0283c4(a4, t3);
    }
    return t1;
}
