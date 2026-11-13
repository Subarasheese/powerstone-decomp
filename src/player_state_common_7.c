/* shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states (0c0658b8-0c065cb4) */

int pl_get_held_item_class(char *obj);
int pl_start_motion(char *obj, int mode, int val);
int FUN_0c063468(char *obj);
int FUN_0c09bc3a(char *obj, int tbl);
int obj_set_record_char(char *obj, int n);
int math_atan_angle16(float f);
extern float g_fighter_distance;
#define B(obj, offset) (*(signed char *)((obj) + (offset)))
#define S(obj, offset) (*(short *)((obj) + (offset)))
#define F(obj, offset) (*(float *)((obj) + (offset)))

void pl_mode15_enter(char *obj)
{
    signed char kind;
    float dist_limit;
    float dist_y;

    kind = pl_get_held_item_class(obj);
    B(obj, 10) = kind;
    switch (kind) {
    case 2:
        if (B(obj, 0x71BC) != 2) {
            pl_start_motion(obj, 2, 243);
            S(obj, 236) = 10;
            S(obj, 240) = 9;
            F(obj, 56) = -4.0f;
            F(obj, 68) = 4.0f / (float)S(obj, 240);
            F(obj, 72) = 0.0f;
            F(obj, 60) = 0.0f;
            B(obj, 11) = 0;
        } else {
            pl_start_motion(obj, 2, 244);
            S(obj, 236) = 10;
            S(obj, 240) = 20;
            F(obj, 56) = -4.0f;
            F(obj, 68) = 4.0f / (float)S(obj, 240);
            F(obj, 60) = 10.0f;
            B(obj, 11) = 1;
        }
        break;
    case 3:
        if (B(obj, 0x71BC) != 2) {
            pl_start_motion(obj, 2, 245);
            FUN_0c063468(obj);
            S(obj, 236) = 10;
            S(obj, 238) = 0;
            S(obj, 242) = 30;
            B(obj, 11) = 0;
        } else {
            pl_start_motion(obj, 2, 246);
            FUN_0c063468(obj);
            F(obj, 76) = 0.0f;
            F(obj, 68) = 0.0f;
            F(obj, 64) = 0.0f;
            F(obj, 56) = 0.0f;
            F(obj, 60) = F(obj, 60) / 8.0f;
            F(obj, 29324) = F(obj, 72);
            F(obj, 72) = F(obj, 72) / 16.0f;
            S(obj, 236) = 7;
            S(obj, 238) = 0;
            S(obj, 240) = 50;
            S(obj, 242) = 30;
            B(obj, 11) = 1;
        }
        break;
    case 4:
    case 16:
        if (B(obj, 0x71BC) != 2) {
            pl_start_motion(obj, 2, 86);
            FUN_0c09bc3a(obj, 0xC14EB10);
            S(obj, 236) = 10;
            S(obj, 238) = 0;
            B(obj, 11) = 0;
        } else {
            pl_start_motion(obj, 2, 88);
            FUN_0c09bc3a(obj, 0xC14EB10);
            S(obj, 236) = 10;
            S(obj, 238) = 0;
            B(obj, 11) = 1;
        }
        break;
    case 5:
    case 6:
    case 7:
        if (B(obj, 0x71BC) != 2) {
            pl_start_motion(obj, 2, 197);
            S(obj, 236) = 13;
            S(obj, 238) = 13;
            B(obj, 11) = 0;
            B(obj, 12) = 0;
            if (B(obj, 10) == 6) {
                obj_set_record_char(obj, 98);
            }
            if (B(obj, 10) == 7) {
                obj_set_record_char(obj, 100);
            }
        } else {
            pl_start_motion(obj, 2, 201);
            S(obj, 236) = 13;
            S(obj, 238) = 13;
            B(obj, 11) = 1;
            B(obj, 12) = 0;
            if (B(obj, 10) == 6) {
                obj_set_record_char(obj, 99);
            }
            if (B(obj, 10) == 7) {
                obj_set_record_char(obj, 101);
            }
        }
        break;
    case 8:
        if (B(obj, 0x71BC) != 2) {
            pl_start_motion(obj, 2, 253);
            S(obj, 236) = 20;
            B(obj, 11) = 0;
        } else {
            pl_start_motion(obj, 2, 254);
            S(obj, 236) = 20;
            B(obj, 11) = 1;
        }
        B(obj, 12) = 0;
        break;
    case 9:
    case 10:
    case 12:
        if (B(obj, 0x71BC) != 2) {
            pl_start_motion(obj, 2, 235);
            S(obj, 236) = 8;
            S(obj, 238) = 10;
            B(obj, 11) = 0;
        } else {
            pl_start_motion(obj, 2, 236);
            S(obj, 236) = 8;
            S(obj, 238) = 10;
            B(obj, 11) = 1;
        }
        B(obj, 12) = 0;
        break;
    case 11:
        if (B(obj, 0x71BC) != 2) {
            pl_start_motion(obj, 1, 60);
            S(obj, 236) = 8;
            B(obj, 11) = 0;
        } else {
            pl_start_motion(obj, 2, 225);
            S(obj, 236) = 8;
            B(obj, 11) = 1;
        }
        break;
    case 14:
        if (B(obj, 0x71BC) != 2) {
            pl_start_motion(obj, 2, 74);
            S(obj, 236) = 10;
            S(obj, 238) = 13;
            B(obj, 11) = 0;
            B(obj, 12) = 0;
        } else {
            pl_start_motion(obj, 2, 101);
            S(obj, 236) = 10;
            S(obj, 238) = 13;
            B(obj, 11) = 1;
            B(obj, 12) = 0;
            dist_limit = g_fighter_distance;
            if (200.0f > dist_limit) {
                dist_limit = 200.0f;
            }
            if (dist_limit == 0.0f) {
                dist_limit = 1.0e-4f;
            }
            dist_y = F(obj, 36) - F(*(char **)(obj + 28), 36) + -50.0f;
            F(obj, 29268) = dist_y;
            *(int *)(obj + 44) = math_atan_angle16(F(obj, 29268) / dist_limit);
        }
        break;
    case 15:
        if (B(obj, 0x71BC) != 2) {
            pl_start_motion(obj, 2, 119);
            S(obj, 236) = 10;
            S(obj, 238) = 0;
            S(obj, 240) = 30;
            B(obj, 11) = 0;
        } else {
            pl_start_motion(obj, 2, 121);
            S(obj, 236) = 10;
            S(obj, 238) = 0;
            S(obj, 240) = 30;
            F(obj, 76) = 0.0f;
            F(obj, 68) = 0.0f;
            F(obj, 64) = 0.0f;
            F(obj, 56) = 0.0f;
            F(obj, 60) = F(obj, 60) / 8.0f;
            F(obj, 29324) = F(obj, 72);
            F(obj, 72) = F(obj, 72) / 16.0f;
            B(obj, 11) = 1;
        }
        break;
    default:
        break;
    }
}
