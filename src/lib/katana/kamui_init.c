/* Kamui (the Dreamcast's PowerVR library): the hardware set-up the game runs once at start, and the display mode.
   Hand-written; the native port replaces the three that touch the PowerVR with host versions (port/runtime/system.c). */

int kmiReadRegister(int reg);
int kmiWriteRegister(int reg, int value);
int thunk_FUN_0c10e184(int reg, int value);
int FUN_0c0fddbe(int dst, int src, int size);
int FUN_0c10bc80(int table, int key, int value);
int FUN_0c109020(void);
int FUN_0c10aa20(void);
int FUN_0c110320(int a4);
int FUN_0c1104c8(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c0fae0e(void);
int FUN_0c10cf60(void);
int FUN_0c10cc84(void);
int FUN_0c10ca40(void);
int FUN_0c10c280(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c0fb4e0(void);

#define W(a) (*(volatile unsigned int *)(a))

/* The PowerVR set-up: identify the chip (id 0x17FD11DB; revision 17 or later is the retail chip, Kamui's model 6, else
   5), the video output from the cable bits at 0xA05F689C, then the core registers (frame size, fog, clipping, the
   background). It stops on purpose on a chip that is not model 6, and ends by clearing the 8 MB of VRAM, 4 bytes at a
   time. */
int kmi_init_pvr_hw(void)
{
    int stk[2];
    unsigned int id, rev, out;
    int cfg = 0x0DD18957;
    int zero = 0;
    int enable;
    int i, p;

    W(0x0C8172CC) = 0;
    id = kmiReadRegister(0);
    rev = kmiReadRegister(4);
    W(0x0C816FC4) = 5;
    if (id != 0x17FD11DB) {
        W(0x0C816FC4) = 5;
    } else if (rev == 1) {
        W(0x0C816FC4) = 5;
    } else if (rev >= 17) {
        W(0x0C816FC4) = 6;
        W(0x0C8172CC) = 0x00800408;
        cfg = 0x15D1C951;
    }
    out = W(0xA05F689C);
    switch (out) {
    case 0:
        W(0x0C816FC8) = zero;
        enable = zero;
        break;
    case 1:
        W(0x0C816FC8) = 1;
        enable = zero;
        break;
    case 2:
        W(0x0C816FC8) = 3;
        enable = 0x101;
        break;
    case 4:
    case 5:
    case 6:
        W(0x0C816FC8) = 127;
        enable = 0x00010101;
        break;
    case 8:
        W(0x0C816FC8) = 31;
        enable = 0x101;
        break;
    default:
        W(0x0C816FC8) = 15;
        enable = 0x101;
        break;
    }
    kmiWriteRegister(0xA8, cfg);
    kmiWriteRegister(0xA0, 32);
    kmiWriteRegister(8, 0);
    kmiWriteRegister(0xE4, 3);
    kmiWriteRegister(72, 9);
    if (W(0x0C816FE0) & 1)
        thunk_FUN_0c10e184(68, 0x00800000);
    else
        thunk_FUN_0c10e184(68, 0);
    kmiWriteRegister(92, 0);
    kmiWriteRegister(104, 0x02800000);
    kmiWriteRegister(108, 0x01E00000);
    if (W(0x0C816FC4) == 6) {
        kmiWriteRegister(0x110, 0x00093F39);
        kmiWriteRegister(0x98, W(0x0C8172CC));
    } else {
        kmiWriteRegister(0x110, 0x00092039);
    }
    kmiWriteRegister(76, 0xA0);
    kmiWriteRegister(116, 0);
    kmiWriteRegister(120, 0x3F800000);
    kmiWriteRegister(0x84, 0);
    kmiWriteRegister(48, enable);
    kmiWriteRegister(0xB0, 0x007F7F7F);
    kmiWriteRegister(0xB4, 0x007F7F7F);
    kmiWriteRegister(0xC0, 0);
    kmiWriteRegister(0xBC, -1);
    kmiWriteRegister(128, 7);
    kmiWriteRegister(0x88, 0x3727C5A0);
    kmiWriteRegister(0x8C, 0x01203000);
    kmiWriteRegister(116, 1);
    if (W(0x0C816FC4) != 6)
        for (;;)
            ;
    if (W(0x0C816FC4) == 6)
        kmiWriteRegister(124, 0x0027DF77);
    else
        kmiWriteRegister(124, 0x0007DF77);
    stk[0] = 0;
    p = 0xA5000000;
    for (i = 0; i < 0x200000; i += 2) {
        FUN_0c0fddbe(p, (int)stk, 4);
        FUN_0c0fddbe(p + 4, (int)stk, 4);
        p += 8;
    }
    return 1;
}

/* the VRAM layout: 16 MB or 8 MB of VRAM (FUN_0c10bc80 on the table at 0x0C15B5E8), the frame buffers' sizes for the
   display mode in 0x0C347630, and their nodes on the free lists at 0x0C347648 (one, or two for mode 1's double buffer).
   Returns 0, or 3 when no node is free. */
int kmi_init_vram_layout(void)
{
    unsigned int *head = (unsigned int *)0x0C347648;
    unsigned int *node;

    if (W(0x0C347630) == 1) {
        if (FUN_0c10bc80(0x0C15B5E8, 0x0C15B5F4, 0) == 1) {
            W(0x0C816FD8) = 0x01000000;
            W(0x0C347634) = 0x01000000;
            W(0x0C347638) = 0;
            W(0x0C34763C) = 0x01000000;
            W(0x0C347640) = 0x01000000;
            W(0x0C347644) = 0;
        } else {
            W(0x0C816FD8) = 0x00800000;
            W(0x0C347634) = 0x00800000;
            W(0x0C347638) = 0;
            W(0x0C34763C) = 0x00800000;
            W(0x0C347640) = 0x00800000;
            W(0x0C347644) = 0;
        }
        kmiWriteRegister(0xE4, 0);
        FUN_0c109020();
        head[4] = W(0x0C34763C);
        head[9] = W(0x0C347644);
        node = (unsigned int *)FUN_0c10aa20();
        if (node == 0)
            return 3;
        node[3] = W(0x0C347638);
        node[4] = W(0x0C34763C);
    } else {
        if (FUN_0c10bc80(0x0C15B5E8, 0x0C15B5F4, 0) == 1) {
            W(0x0C816FD8) = 0x01000000;
            W(0x0C347634) = 0x00800000;
            W(0x0C347638) = 0;
            W(0x0C34763C) = 0x00800000;
            W(0x0C347640) = 0x00800000;
            W(0x0C347644) = 0x00800000;
        } else {
            W(0x0C816FD8) = 0x00800000;
            W(0x0C347634) = 0x00400000;
            W(0x0C347638) = 0;
            W(0x0C34763C) = 0x00400000;
            W(0x0C347640) = 0x00400000;
            W(0x0C347644) = 0x00400000;
        }
        kmiWriteRegister(0xE4, 0);
        FUN_0c109020();
        head[4] = W(0x0C34763C);
        head[9] = W(0x0C347644);
        node = (unsigned int *)FUN_0c10aa20();
        if (node == 0)
            return 3;
        node[3] = W(0x0C347638);
        node[4] = W(0x0C34763C);
        node[2] = head[2];
        head[2] = (unsigned int)node;
        node[1] = head[3];
        head[3] = (unsigned int)node;
        node = (unsigned int *)FUN_0c10aa20();
        if (node == 0)
            return 3;
        node[3] = W(0x0C347640);
        node[4] = W(0x0C347644);
        head += 5;
    }
    node[2] = head[2];
    head[2] = (unsigned int)node;
    node[1] = head[3];
    head[3] = (unsigned int)node;
    return 0;
}

/* the system configuration word (the first stack argument; the four register arguments are not used): its bit fields go
   to 0x0C817464..0x0C817478, then the two vertex buffers' areas (0x0C817424 + 32 * i) are laid out from the buffer sizes
   at 0x0C817410..0x0C81741C and the output mode at 0x0C816FC8, and both are registered (FUN_0c1104c8). */
int kmi_set_system_config(int a4, int a5, int a6, int a7, unsigned int cfg)
{
    int not_bit0, gap, i;
    unsigned int b;

    W(0x0C817028) = cfg;
    not_bit0 = (cfg & 1) ? 0 : 1;
    W(0x0C817464) = (cfg & 0x00010000) >> 16;
    W(0x0C817468) = (cfg & 0x00060000) >> 17;
    W(0x0C81746C) = (cfg & 0x00180000) >> 19;
    W(0x0C817470) = (cfg & 0x00600000) >> 21;
    W(0x0C817474) = (cfg & 0x01800000) >> 23;
    W(0x0C817478) = (cfg & 0x06000000) >> 25;
    W(0x0C817404) = (W(0x0C817410) >> 2) * 3;
    gap = FUN_0c110320((int)(W(0x0C817414) * W(0x0C817418)));
    for (i = 0; i < 2; i++) {
        b = 0x0C817424 + 32 * i;
        W(b + 4) = W(b) + W(0x0C817410);
        if (W(0x0C816FC8) & 32) {
            if (W(0x0C81741C) != 0) {
                W(b + 4) = W(b + 4) - 68;
                W(b + 4) = W(b + 4) - (unsigned int)((int)W(0x0C817418) * (int)W(0x0C817414)) * 96;
            } else {
                W(b + 4) = W(b + 4) - (unsigned int)((int)W(0x0C817418) * (int)W(0x0C817414)) * 48;
            }
        } else {
            W(b + 4) = W(b + 4) - (unsigned int)((int)W(0x0C817418) * (int)W(0x0C817414)) * 24;
        }
        if (W(0x0C817464) == 0) {
            W(b + 12) = (W(b) + W(0x0C817404)) & -32;
            W(b + 16) = (W(b + 4) - gap) & -128;
            W(b + 20) = W(b + 12) + gap;
        } else {
            W(b + 12) = (W(b + 4) - gap) & -128;
            W(b + 16) = (W(b) + W(0x0C817404)) & -32;
            W(b + 20) = W(b + 12);
        }
        W(b + 24) = W(b);
        W(b + 28) = W(b) + W(0x0C817404) - 256;
    }
    FUN_0c1104c8(W(0x0C817414), W(0x0C817418), 0, 1, 0, not_bit0);
    return FUN_0c1104c8(W(0x0C817414), W(0x0C817418), 0, 1, 1, not_bit0);
}

/* the display mode (gfx_init_display_mode): the mode's entry in Kamui's tables (FUN_0c10bc80 at 0x0C15AAA0: the mode
   word, the anti-aliasing and the dither flags), the pixel format (0..5 but 2; 1 otherwise, an error), the output size
   (640 x 480 for the VGA mode, else 320 or 640 by 240 or 480 from the mode bits) and the video standard's set-up (NTSC,
   PAL or VGA: FUN_0c10cc84 / FUN_0c10cf60 / FUN_0c10ca40). Returns 0, or 1 for a pixel format or standard it does not
   know. */
int kmi_set_display_mode(int mode, int format, int dither, int antialias)
{
    int err = 0;
    int m, aa, di, aa_on, di_on, inter, w, h;

    FUN_0c0fae0e();
    m = FUN_0c10bc80(0x0C15AAA0, 0x0C15AAB4, mode);
    aa = FUN_0c10bc80(0x0C15AAA0, 0x0C15AAC0, antialias);
    di = FUN_0c10bc80(0x0C15AAA0, 0x0C15AACC, dither);
    W(0x0C816FE0) = m & 3;
    if (!(format == 0 || format == 1 || format == 3 || format == 4 || format == 5))
        err = 1;
    aa_on = aa ? 1 : 0;
    di_on = di ? 1 : 0;
    if (err)
        return err;
    W(0x0C816FE4) = m;
    W(0x0C816FE8) = format;
    W(0x0C816FEC) = di_on;
    W(0x0C816FF0) = aa_on;
    if (W(0x0C816FE4) == 1) {
        w = 640;
        inter = 0;
        h = 480;
        W(0x0C8172D8) = 480;
    } else {
        if ((W(0x0C816FE4) & 1) == 1)
            inter = 0;
        else if ((W(0x0C816FE4) & 44) == 0)
            inter = 0;
        else
            inter = 1;
        w = (W(0x0C816FE4) & 16) ? 640 : 320;
        h = (W(0x0C816FE4) & 32) ? 480 : 240;
        W(0x0C8172D8) = 240;
    }
    switch (W(0x0C816FE0)) {
    case 1:
        err = 0;
        FUN_0c10cf60();
        break;
    case 0:
        err = 0;
        FUN_0c10cc84();
        break;
    case 2:
        err = 0;
        FUN_0c10ca40();
        break;
    default:
        err = 1;
        break;
    }
    FUN_0c10c280(w, h, format, inter, di_on, aa_on);
    FUN_0c0fb4e0();
    return err;
}
