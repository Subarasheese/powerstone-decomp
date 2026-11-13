/* platform.c: the host's window, controller, sound output and vsync (SDL3), standing in for the Dreamcast's video
   output, Maple bus and interrupts.

   - vsync: a 60 Hz timer signal advances the frame counter the game registers (FUN_0c0e4ac0), as the console's vsync
     interrupt does; the game spins on that word (the file loader, the frame pacing).
   - the frame: gfx_flip_frame_buffer ends a frame. The renderer (render.c) draws what the frame recorded, the window
     shows it, the controller is read, and the flip waits for the next vsync.
   - the controller: SDL's gamepad API (XInput and other pads), or the keyboard, as a Dreamcast standard controller in
     port 0 (pdGetPeripheral, FUN_0c0f263a).
   - sound: an SDL audio stream that pulls 44.1 kHz stereo from the mixer (sound.c). */
#define _GNU_SOURCE
#include <SDL3/SDL.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <xmmintrin.h>
#include <stdlib.h>
#include <GL/gl.h>

#include "port.h"

int port_headless;
static SDL_Window *window;
static SDL_GLContext gl;
static SDL_Gamepad *pad;
static SDL_AudioStream *audio;

/* --- vsync ------------------------------------------------------------------------------------------------------------ */

static volatile unsigned long vsyncs;
static volatile uint32_t interrupt_handler[12];
static volatile int in_vsync;

/* the vsync interrupt: the game's handler for it runs here, on the signal stack, as the console's interrupt runs it
   wherever the game was (the file loader's handler, FUN_0c061694, advances the frame counter it waits on) */
static void on_vsync(int sig)
{
    (void)sig;
    vsyncs++;
    if (interrupt_handler[1] && !in_vsync && !port_masked()) {
        in_vsync = 1;
        unsigned host = _mm_getcsr();
        _mm_setcsr((host & ~0x6000u) | 0x6000u | 0x8040u);
        ((void (*)(void))(uintptr_t)interrupt_handler[1])();
        _mm_setcsr(host);
        in_vsync = 0;
    }
}

/* FUN_0c0e48b0(kind, handler): the library's interrupt handler table (0x0C346AD8 holds a setter per kind). Kind 1 is
   the vsync: the game puts its handler there while it waits on the frame counter, and takes it off (0) after */
int32_t set_interrupt_handler(int32_t kind, uint32_t fn) __asm__("FUN_0c0e48b0");
int32_t set_interrupt_handler(int32_t kind, uint32_t fn)
{
    if (kind >= 0 && kind < 12)
        interrupt_handler[kind] = fn;
    return 0;
}

/* FUN_0c0e4ac0(p): records an address for the library's exception code; nothing on the host reads it */
void exception_area(uint32_t addr) __asm__("FUN_0c0e4ac0");
void exception_area(uint32_t addr) { (void)addr; }

static void start_vsync(void)
{
    struct sigaction sa;
    memset(&sa, 0, sizeof sa);
    sa.sa_handler = on_vsync;
    sa.sa_flags = SA_RESTART | SA_ONSTACK;
    sigaction(SIGRTMIN, &sa, 0);
    struct sigevent ev;
    memset(&ev, 0, sizeof ev);
    ev.sigev_notify = SIGEV_SIGNAL;
    ev.sigev_signo = SIGRTMIN;
    timer_t t;
    timer_create(CLOCK_MONOTONIC, &ev, &t);
    struct itimerspec its = {{0, 16683333}, {0, 16683333}}; /* 59.94 Hz */
    timer_settime(t, 0, &its, 0);
}

/* the host's own float rules while host code runs (SDL, OpenGL, the mixer); the game's are restored after */
unsigned port_host_fp_enter(void)
{
    unsigned game = _mm_getcsr();
    _mm_setcsr(0x1F80);
    return game;
}
void port_host_fp_leave(unsigned game) { _mm_setcsr(game); }

/* --- the controller --------------------------------------------------------------------------------------------------- */

/* Katana's PDS_PERIPHERAL; the game reads support, on, r, l, x1 and y1 */
struct pds_peripheral {
    uint32_t id, support, on, off, press, release;
    uint16_t r, l;
    int16_t x1, y1, x2, y2;
    uint32_t name, extend, old, info;
};
static struct pds_peripheral peripheral[4];

/* the standard controller's buttons as Katana numbers them (on: set while held) */
#define PDD_DGT_TB (1u << 1)
#define PDD_DGT_TA (1u << 2)
#define PDD_DGT_ST (1u << 3)
#define PDD_DGT_KU (1u << 4)
#define PDD_DGT_KD (1u << 5)
#define PDD_DGT_KL (1u << 6)
#define PDD_DGT_KR (1u << 7)
#define PDD_DGT_TY (1u << 9)
#define PDD_DGT_TX (1u << 10)
#define PAD_SUPPORT 0x000F06FEu

static void read_controller(void)
{
    struct pds_peripheral *p = &peripheral[0];
    uint32_t on = 0;
    int x = 0, y = 0, l = 0, r = 0;
    if (!pad) {
        int n;
        SDL_JoystickID *ids = SDL_GetGamepads(&n);
        if (ids && n > 0)
            pad = SDL_OpenGamepad(ids[0]);
        SDL_free(ids);
    }
    if (pad) {
        static const struct { SDL_GamepadButton b; uint32_t dc; } map[] = {
            {SDL_GAMEPAD_BUTTON_SOUTH, PDD_DGT_TA}, {SDL_GAMEPAD_BUTTON_EAST, PDD_DGT_TB},
            {SDL_GAMEPAD_BUTTON_WEST, PDD_DGT_TX}, {SDL_GAMEPAD_BUTTON_NORTH, PDD_DGT_TY},
            {SDL_GAMEPAD_BUTTON_START, PDD_DGT_ST}, {SDL_GAMEPAD_BUTTON_DPAD_UP, PDD_DGT_KU},
            {SDL_GAMEPAD_BUTTON_DPAD_DOWN, PDD_DGT_KD}, {SDL_GAMEPAD_BUTTON_DPAD_LEFT, PDD_DGT_KL},
            {SDL_GAMEPAD_BUTTON_DPAD_RIGHT, PDD_DGT_KR},
        };
        for (unsigned i = 0; i < sizeof map / sizeof map[0]; i++)
            if (SDL_GetGamepadButton(pad, map[i].b))
                on |= map[i].dc;
        x = SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_LEFTX) / 256;
        y = SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_LEFTY) / 256;
        l = SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_LEFT_TRIGGER) / 128;
        r = SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_RIGHT_TRIGGER) / 128;
        if (SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_LEFT_SHOULDER))
            l = 255;
        if (SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER))
            r = 255;
    }
    /* the keyboard: arrows, Z X C V for A B X Y, Enter for Start, A and S for the triggers */
    const bool *k = SDL_GetKeyboardState(0);
    if (k[SDL_SCANCODE_UP]) on |= PDD_DGT_KU;
    if (k[SDL_SCANCODE_DOWN]) on |= PDD_DGT_KD;
    if (k[SDL_SCANCODE_LEFT]) on |= PDD_DGT_KL;
    if (k[SDL_SCANCODE_RIGHT]) on |= PDD_DGT_KR;
    if (k[SDL_SCANCODE_Z]) on |= PDD_DGT_TA;
    if (k[SDL_SCANCODE_X]) on |= PDD_DGT_TB;
    if (k[SDL_SCANCODE_C]) on |= PDD_DGT_TX;
    if (k[SDL_SCANCODE_V]) on |= PDD_DGT_TY;
    if (k[SDL_SCANCODE_RETURN]) on |= PDD_DGT_ST;
    if (k[SDL_SCANCODE_A]) l = 255;
    if (k[SDL_SCANCODE_S]) r = 255;
    if (x == 0 && y == 0) {
        if (on & PDD_DGT_KL) x = -128;
        if (on & PDD_DGT_KR) x = 127;
        if (on & PDD_DGT_KU) y = -128;
        if (on & PDD_DGT_KD) y = 127;
    }
    /* --press N: Start held for 10 frames from frame N (and A from N + 120), to test the input path unattended */
    extern unsigned long port_press_frame, port_frames;
    if (port_press_frame) {
        if (port_frames >= port_press_frame && port_frames < port_press_frame + 10)
            on |= PDD_DGT_ST;
        if (port_frames >= port_press_frame + 120 && port_frames < port_press_frame + 130)
            on |= PDD_DGT_TA;
    }
    x = x < -128 ? -128 : x > 127 ? 127 : x;
    y = y < -128 ? -128 : y > 127 ? 127 : y;
    p->support = PAD_SUPPORT;
    p->press = on & ~p->on;
    p->release = p->on & ~on;
    p->on = on;
    p->off = ~on;
    p->x1 = (int16_t)x;
    p->y1 = (int16_t)y;
    p->l = (uint16_t)(l > 255 ? 255 : l);
    p->r = (uint16_t)(r > 255 ? 255 : r);
}

/* pdGetPeripheral(port): FUN_0c0f263a. Port A (0) holds the controller; the others are empty */
struct pds_peripheral *pdGetPeripheral(uint32_t port) __asm__("FUN_0c0f263a");
struct pds_peripheral *pdGetPeripheral(uint32_t port)
{
    struct pds_peripheral *p = &peripheral[(port / 6) & 3];
    if (p == &peripheral[0])
        p->support = PAD_SUPPORT;
    return p;
}

/* --- sound output ----------------------------------------------------------------------------------------------------- */

void port_mix(int16_t *out, int frames); /* sound.c */

/* the sound thread: the mix (with the AICA's ARM7 and channels) is made in real time, 256 frames at a time, and goes
   to the audio device when there is one; without one the AICA still runs, at the same pace */
static int SDLCALL sound_thread(void *arg)
{
    (void)arg;
    static int16_t buf[256 * 2];
    uint64_t start = SDL_GetTicksNS(), made = 0;
    for (;;) {
        port_mix(buf, 256);
        made += 256;
        if (getenv("PORT_DEBUG_AUDIO")) {
            static double energy;
            static unsigned long n;
            for (int i = 0; i < 512; i++)
                energy += (double)buf[i] * buf[i];
            n += 512;
            if (made % 44032 == 0) {
                fprintf(stderr, "audio %.1fs rms %.0f\n", made / 44100.0, n ? sqrt(energy / n) : 0.0);
                energy = 0;
                n = 0;
            }
        }
        if (audio)
            SDL_PutAudioStreamData(audio, buf, sizeof buf);
        /* stay about 50 ms ahead of real time */
        uint64_t due = start + made * 1000000000ull / 44100;
        uint64_t now = SDL_GetTicksNS();
        if (due > now + 50000000ull)
            SDL_DelayNS(due - now - 50000000ull);
    }
    return 0;
}

/* --- the window ------------------------------------------------------------------------------------------------------- */

void port_render_init(void);           /* render.c */
void port_render_frame(int w, int h);  /* render.c: draws the frame's records, then clears them */

int port_platform_init(void)
{
    if (!SDL_Init(SDL_INIT_GAMEPAD | SDL_INIT_AUDIO | (port_headless ? 0 : SDL_INIT_VIDEO))) {
        fprintf(stderr, "powerstone: SDL: %s\n", SDL_GetError());
        return 0;
    }
    if (!port_headless) {
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
        SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
        window = SDL_CreateWindow("Power Stone", 1280, 960, SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);
        if (!window || !(gl = SDL_GL_CreateContext(window))) {
            fprintf(stderr, "powerstone: window: %s\n", SDL_GetError());
            return 0;
        }
        SDL_GL_SetSwapInterval(0);
        port_render_init();
    }
    SDL_AudioSpec spec = {SDL_AUDIO_S16, 2, 44100};
    audio = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, 0, 0);
    if (audio)
        SDL_ResumeAudioStreamDevice(audio);
    else
        fprintf(stderr, "powerstone: no sound output: %s\n", SDL_GetError());
    SDL_CreateThread(sound_thread, "sound", 0);
    start_vsync();
    return 1;
}

unsigned long port_frames, port_press_frame;
unsigned long port_shot_frame;
const char *port_shot_file;

/* the window's picture as a PPM file (--screenshot) */
unsigned long port_shot_every;

static void screenshot(int w, int h)
{
    char name[1024];
    if (port_shot_every)
        snprintf(name, sizeof name, "%s%06lu.ppm", port_shot_file, port_frames);
    else
        snprintf(name, sizeof name, "%s", port_shot_file);
    unsigned char *px = malloc((size_t)w * h * 3);
    FILE *f = fopen(name, "wb");
    if (!px || !f)
        return;
    glPixelStorei(GL_PACK_ALIGNMENT, 1);
    glReadPixels(0, 0, w, h, GL_RGB, GL_UNSIGNED_BYTE, px);
    fprintf(f, "P6\n%d %d\n255\n", w, h);
    for (int y = h - 1; y >= 0; y--)
        fwrite(px + (size_t)y * w * 3, 1, (size_t)w * 3, f);
    fclose(f);
    free(px);
    fprintf(stderr, "powerstone: frame %lu saved to %s\n", port_frames, name);
}

/* the end of a frame: gfx_flip_frame_buffer. Draw, show, read the controller, then wait for the next vsync */
void port_frame_end(void)
{
    unsigned game = port_host_fp_enter();
    SDL_Event e;
    while (SDL_PollEvent(&e))
        if (e.type == SDL_EVENT_QUIT) {
            fprintf(stderr, "powerstone: window closed after %lu frames\n", port_frames);
            exit(0);
        }
    if (window) {
        int w, h;
        SDL_GetWindowSizeInPixels(window, &w, &h);
        port_render_frame(w, h);
        if (port_shot_file && port_shot_every && port_frames % port_shot_every == 0)
            screenshot(w, h);
        else if (port_shot_file && !port_shot_every && port_frames == port_shot_frame) {
            screenshot(w, h);
            exit(0);
        }
        SDL_GL_SwapWindow(window);
    }
    read_controller();
    port_frames++;
    port_host_fp_leave(game);
    unsigned long seen = vsyncs;
    while (vsyncs == seen) {
        struct timespec ts = {0, 500000};
        nanosleep(&ts, 0);
    }
}

int32_t gfx_flip(void) __asm__("gfx_flip_frame_buffer");
int32_t gfx_flip(void)
{
    port_frame_end();
    return 0;
}
