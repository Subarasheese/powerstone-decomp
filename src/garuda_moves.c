/* @unit 0c07ada4-0c07adf0 */
typedef struct { char pad[236]; short f; } O;
extern void pl_start_motion(O *, int, int);
void pl_garuda_move12_init(O *p){ pl_start_motion(p, 1, 22); p->f = 10; }
void pl_garuda_move13_init(O *p){ pl_start_motion(p, 1, 29); }
void pl_garuda_move14_init(O *p){ pl_start_motion(p, 1, 22); p->f = 10; }
