/* @unit 0c072818-0c07282c */
extern void pl_jack_motion_sfx(void);
int pl_jack_frame_hook(void){ pl_jack_motion_sfx(); return 0; }
