/* @unit 0c07ac0c-0c07ac20 */
extern void pl_garuda_play_motion_sounds(void);
int pl_garuda_frame_hook(void){ pl_garuda_play_motion_sounds(); return 0; }
