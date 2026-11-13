/* INLINE-ASM: the original copies 208 bytes through the library routine at 0xC0E7080 (r0 = byte count, r1 = destination, r2 = source), a register convention C cannot express and a call the checker must see as a call */
/* Camera follow step for an object: builds the view matrix, aims at the target with yaw/pitch limited by a per-type table, then applies the rotations. */
struct vec3 { float x, y, z; };
struct cam_frame {
    unsigned char *mat_ptr;
    unsigned char *target;
    float tgt_x, tgt_z, aim_x, aim_z, look_x, look_z;
    int limit_tbl[52];
    int tgt_ang[2];
    int pad_248;
    int cam_ang[2];
    int pad_260;
    unsigned char mat_a[64];
    unsigned char mat_b[64];
    struct vec3 tmp_vec;
    struct vec3 aim_vec;
    struct vec3 tgt_vec;
};
#pragma inline_asm(mvn208)
static void mvn208(void *d, void *s)
{
    MOV.L L1,R3
    MOV.W L2,R0
    MOV R4,R1
    JSR @R3
    MOV R5,R2
    BRA L3
    NOP
    .ALIGN 4
L1: .DATA.L H'0C0E7080
L2: .DATA.W H'00D0
L3: NOP
}
extern void _quick_mvn(void);
extern void FUN_0c0e1240(unsigned char *);
extern void FUN_0c0e0ae0(unsigned char *);
extern void FUN_0c0e2140(unsigned char *);
extern void FUN_0c0e2050(unsigned char *);
extern void nlRotateAX(int);
extern void nlRotateAY(int);
extern void nlCalcPoint(struct vec3 *, struct vec3 *);
extern void nlInvertMatrix(int);
extern void math_vec3_sub(struct vec3 *, struct vec3 *, struct vec3 *);
extern void math_mat_transform_point(struct vec3 *, unsigned char *);
extern void math_vec3_normalize(struct vec3 *);
extern void math_mat_get_translate(unsigned char *, struct vec3 *);
extern float math_signed_sqrt(float);
extern int math_atan2_angle16(float, float);

void pl_aim_joint_at_target(unsigned char *obj)
{
    struct cam_frame frame;
    unsigned char *rec;
    unsigned char *cam;
    unsigned char *target_obj;
    int *limits;
    float sq;
    int angle;

    frame.target = *(unsigned char **)(obj + 28);
    frame.tgt_vec = *(struct vec3 *)0xC150B74;
    frame.aim_vec = *(struct vec3 *)0xC150B80;
    rec = obj + 768 + (short)((signed char)obj[0x71F1] * 3520);
    frame.mat_ptr = rec + 528;
    cam = rec + 704;
    mvn208(frame.limit_tbl, (void *)0xC150B8C);
    *(struct vec3 *)(0xC439EA8 + (signed char)(obj[3] * 12)) = *(struct vec3 *)(cam + 84);
    FUN_0c0e1240(frame.mat_ptr);
    frame.tmp_vec.x = 0;
    frame.tmp_vec.y = 0;
    frame.tmp_vec.z = 0;
    nlCalcPoint(&frame.tmp_vec, &frame.tgt_vec);
    frame.tmp_vec.x = 0;
    frame.tmp_vec.y = 0;
    frame.tmp_vec.z = 100.0f;
    nlCalcPoint(&frame.tmp_vec, &frame.aim_vec);
    math_vec3_sub(&frame.tmp_vec, &frame.aim_vec, &frame.tgt_vec);
    frame.look_x = frame.tmp_vec.x;
    frame.look_z = frame.tmp_vec.z;
    sq = frame.tmp_vec.z * frame.tmp_vec.z + frame.tmp_vec.x * frame.look_x;
    frame.cam_ang[0] = math_atan2_angle16(frame.tmp_vec.y, math_signed_sqrt(sq));
    FUN_0c0e1240(frame.mat_ptr);
    FUN_0c0e2140(cam + 152);
    nlRotateAX(frame.cam_ang[0]);
    FUN_0c0e2050(cam + 108);
    FUN_0c0e0ae0(frame.mat_a);
    if (obj[0x7232] == 0 && *(signed char *)0xC7F300B == 0 && *(signed char *)0xC7F300E == 0 && *(signed char *)0xC7F3078 == 0) {
        nlInvertMatrix(0);
        FUN_0c0e0ae0(frame.mat_b);
        frame.aim_vec.y = 0;
        frame.aim_vec.x = 0;
        frame.aim_vec.z = 100.0f;
        math_mat_transform_point(&frame.aim_vec, cam);
        math_mat_transform_point(&frame.aim_vec, frame.mat_b);
        math_vec3_normalize(&frame.aim_vec);
        frame.cam_ang[1] = -math_atan2_angle16(-frame.aim_vec.x, frame.aim_vec.z) + 0x10000;
        frame.aim_x = frame.aim_vec.x;
        frame.aim_z = frame.aim_vec.z;
        sq = frame.aim_vec.z * frame.aim_vec.z + frame.aim_vec.x * frame.aim_x;
        frame.cam_ang[0] = math_atan2_angle16(-frame.aim_vec.y, math_signed_sqrt(sq));
        if (frame.cam_ang[0] & 0x8000)
            frame.cam_ang[0] |= 0xFFFF0000;
        else
            frame.cam_ang[0] &= 0x7FFF;
        if (frame.cam_ang[1] & 0x8000)
            frame.cam_ang[1] |= 0xFFFF0000;
        else
            frame.cam_ang[1] &= 0x7FFF;
        target_obj = frame.target;
        math_mat_get_translate(target_obj + 768 + (short)((signed char)target_obj[0x71F2] * 3520) + 528, &frame.tgt_vec);
        frame.tgt_vec.y = frame.tgt_vec.y - 20.0f;
        math_mat_transform_point(&frame.tgt_vec, frame.mat_b);
        math_vec3_normalize(&frame.tgt_vec);
        frame.tgt_ang[1] = -math_atan2_angle16(-frame.tgt_vec.x, frame.tgt_vec.z) + 0x10000;
        frame.tgt_x = frame.tgt_vec.x;
        frame.tgt_z = frame.tgt_vec.z;
        sq = frame.tgt_vec.z * frame.tgt_vec.z + frame.tgt_vec.x * frame.tgt_x;
        frame.tgt_ang[0] = math_atan2_angle16(-frame.tgt_vec.y, math_signed_sqrt(sq));
        if (frame.tgt_ang[0] & 0x8000)
            frame.tgt_ang[0] |= 0xFFFF0000;
        else
            frame.tgt_ang[0] &= 0x7FFF;
        if (frame.tgt_ang[1] & 0x8000)
            frame.tgt_ang[1] |= 0xFFFF0000;
        else
            frame.tgt_ang[1] &= 0x7FFF;
        frame.tgt_ang[0] = frame.tgt_ang[0] - frame.cam_ang[0];
        frame.tgt_ang[1] = frame.tgt_ang[1] - frame.cam_ang[1];
        if (frame.tgt_ang[0] < -1092)
            frame.tgt_ang[0] = -1092;
        else if (frame.tgt_ang[0] > 1092)
            frame.tgt_ang[0] = 1092;
        if (frame.tgt_ang[1] < -1092)
            frame.tgt_ang[1] = -1092;
        else if (frame.tgt_ang[1] > 1092)
            frame.tgt_ang[1] = 1092;
        *(int *)(cam + 88) = (unsigned short)(frame.cam_ang[1] + frame.tgt_ang[1]);
        *(int *)(cam + 84) = (unsigned short)(frame.cam_ang[0] + frame.tgt_ang[0]);
        *(int *)(cam + 92) = 0;
        limits = (int *)((unsigned char *)frame.limit_tbl + ((signed char)obj[4] << 4));
        angle = *(int *)(cam + 88);
        if (angle > limits[0] && angle < 0x8000)
            *(int *)(cam + 88) = limits[0];
        else if (angle < limits[1] && angle > 0x8000)
            *(int *)(cam + 88) = limits[1];
        angle = *(int *)(cam + 84);
        if (angle > limits[2] && angle < 0x8000)
            *(int *)(cam + 84) = limits[2];
        else if (angle < limits[3] && angle > 0x8000)
            *(int *)(cam + 84) = limits[3];
    }
    FUN_0c0e1240(frame.mat_a);
    nlRotateAY(*(int *)(cam + 88));
    nlRotateAX(*(int *)(cam + 84));
    FUN_0c0e0ae0(cam);
}
