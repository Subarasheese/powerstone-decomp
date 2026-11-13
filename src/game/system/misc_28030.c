/* not identified yet (keep old name) (0c028030-0c028524) */

struct vec3f { float x, y, z; };
struct draw_req { int word_0; struct vec3f pos; float f16, f20; char pad[24]; int kind_48; int word_52; };
int nlSelectMatrixStack(int);
int nlPushMatrix(int);
int nl_sprite_draw(struct draw_req *);
int nlCalcPoint(struct vec3f *, struct vec3f *);
int nlCalcPoint44(struct vec3f *, float *);
int nlPopMatrix(int);

int draw_project_point_sprite(struct draw_req *req_in)
{
    float stack_args[18];
    struct draw_req req;
    float scale;

    nlPushMatrix(0);
    req = *req_in;
    *(struct vec3f *)&stack_args[15] = req.pos;
    nlSelectMatrixStack(2);
    nlCalcPoint((struct vec3f *)&stack_args[15], (struct vec3f *)&stack_args[12]);
    *(struct vec3f *)&stack_args[9] = *(struct vec3f *)&stack_args[12];
    stack_args[9] = stack_args[9] + 1.0f;
    nlSelectMatrixStack(3);
    nlCalcPoint44((struct vec3f *)&stack_args[12], &stack_args[5]);
    nlCalcPoint44((struct vec3f *)&stack_args[9], &stack_args[1]);
    nlSelectMatrixStack(1);
    nlPopMatrix(1);
    stack_args[15] = (((stack_args[5] / stack_args[8]) + 1.0f) / 2.0f) * 640.0f;
    stack_args[16] = -((((stack_args[6] / stack_args[8]) + 1.0f) / 2.0f) * 480.0f) + 480.0f;
    stack_args[17] = -(stack_args[14] * 1.0f);
    scale = ((((stack_args[1] / stack_args[4]) + 1.0f) / 2.0f) * 640.0f) - stack_args[15];
    req.pos = *(struct vec3f *)&stack_args[15];
    req.f16 = req.f16 * scale;
    req.f20 = req.f20 * scale;
    req.kind_48 = 2;
    return nl_sprite_draw(&req);
}

void FUN_0c02828e(void)
{
    *(unsigned int *)0xC363A68 = 0x0;
}

void FUN_0c0283c4(int a4, int a5)
{
    *(unsigned short *)((a4 + 0x0)) = (*(short *)((a5 + 0x0)));
    *(unsigned int *)((a4 + 0xC)) = (*(int *)((a5 + 0x4)));
    *(unsigned int *)((a4 + 0x10)) = a5;
}
