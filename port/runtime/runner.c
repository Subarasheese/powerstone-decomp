/* runner.c: the native game's start. It gives the game's C the machine it was written for, as far as that C can see:

   - the console's 16 MB of main RAM at its own address, 0x0C000000, with the same memory at the cached and uncached
     mirrors 0x8C000000 and 0xAC000000 (one memfd mapped three times), and zeroed stand-ins for the hardware register
     and video/sound memory windows the game's C touches;
   - 1ST_READ.BIN loaded at 0x0C010000, which gives the game its tables, strings and initial data at their addresses
     (the code bytes there are data to the host: they are never run);
   - a stack inside the low 2 GB, since the game keeps addresses of its locals in 32-bit words;
   - the SH-4's float rounding for the basic operations (toward zero, denormals flushed), through MXCSR;
   - calls to console addresses: that memory is not executable, so such a call faults, and the handler sends it on to
     the host function the dispatch table gives for that address, with the arguments still in their registers.

   Then it runs what the console's start code runs: the bss clear, the overlay entry and sys_main_loop.
   The layout follows the native runner of the Sonic Adventure decompilation (github.com/reshaped/sonic-adventure,
   engine/native): the game's own scheduler, fixed addresses in a mapped domain, the game on a low stack. */
#define _GNU_SOURCE
#include <errno.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/personality.h>
#include <ucontext.h>
#include <unistd.h>
#include <pthread.h>
#include <xmmintrin.h>

#include "port.h"

int port_sr = 0x600000F0, port_fr15; /* privileged, register bank 1, interrupts masked (15); BL clear, as start-up leaves it */

#define GAME_STACK 0x20000000u
#define GAME_STACK_SIZE 0x00800000u

static const char *image_path;
extern const char *port_data_dir;
extern int port_headless;
int port_platform_init(void);
int port_data_path(const char *name, char *out, size_t size);
static int strict, trace_calls;
static unsigned max_seconds;

static void die(const char *what)
{
    fprintf(stderr, "powerstone: %s: %s\n", what, strerror(errno));
    exit(2);
}

static char **saved_argv;

static void map_fixed(uint64_t at, size_t size, int fd, const char *what)
{
    /* something of the host's (its heap, with address randomization) can sit where the console's memory goes: run
       again once without the randomization */
    if (!(personality(0xffffffff) & ADDR_NO_RANDOMIZE) && msync((void *)(uintptr_t)(at & ~0xFFFull), 4096, MS_ASYNC) == 0) {
        personality(personality(0xffffffff) | ADDR_NO_RANDOMIZE);
        execv("/proc/self/exe", saved_argv);
    }
    void *p = mmap((void *)at, size, PROT_READ | PROT_WRITE, MAP_FIXED_NOREPLACE | (fd < 0 ? MAP_PRIVATE | MAP_ANONYMOUS : MAP_SHARED),
                   fd, 0);
    /* the probe above sees only the range's first page: a mapping of the host's further in fails here instead */
    if (p != (void *)at && errno == EEXIST && !(personality(0xffffffff) & ADDR_NO_RANDOMIZE)) {
        personality(personality(0xffffffff) | ADDR_NO_RANDOMIZE);
        execv("/proc/self/exe", saved_argv);
    }
    if (p != (void *)at)
        die(what);
}

static void map_machine(void)
{
    int fd = memfd_create("dreamcast-ram", 0);
    if (fd < 0 || ftruncate(fd, PORT_RAM_SIZE) < 0)
        die("main RAM");
    map_fixed(PORT_RAM, PORT_RAM_SIZE, fd, "main RAM at 0x0C000000");
    map_fixed(0x8C000000u, PORT_RAM_SIZE, fd, "RAM mirror at 0x8C000000");
    map_fixed(0xAC000000u, PORT_RAM_SIZE, fd, "RAM mirror at 0xAC000000");
    /* hardware windows, as plain memory for now: system bus and video registers, sound, video memory, the SH-4's own registers */
    map_fixed(0xA05F0000u, 0x00010000u, -1, "system and video registers");
    map_fixed(0xA0700000u, 0x00010000u, -1, "sound registers");
    map_fixed(0xA0800000u, 0x00200000u, -1, "sound RAM");
    map_fixed(0xA4000000u, 0x00800000u, -1, "video RAM (64-bit path)");
    map_fixed(0xA5000000u, 0x00800000u, -1, "video RAM (32-bit path)");
    map_fixed(0xE0000000u, 0x00100000u, -1, "store queues");
    map_fixed(0xFF000000u, 0x01000000u, -1, "SH-4 control registers");
    map_fixed(GAME_STACK, GAME_STACK_SIZE, -1, "the game's stack");
}

static void load_image(void)
{
    static char path[1024];
    if (!image_path) {
        if (!port_data_path("1ST_READ.BIN", path, sizeof path)) {
            fprintf(stderr, "powerstone: no 1ST_READ.BIN in the data folder %s (give it with --data DIR: a folder holding the "
                            "files of your Power Stone disc)\n", port_data_dir);
            exit(2);
        }
        image_path = path;
    }
    FILE *f = fopen(image_path, "rb");
    if (!f)
        die(image_path);
    size_t n = fread((void *)(uintptr_t)PORT_IMAGE_BASE, 1, PORT_RAM_SIZE - (PORT_IMAGE_BASE - PORT_RAM), f);
    fclose(f);
    fprintf(stderr, "powerstone: %s, %zu bytes at 0x%08X\n", image_path, n, PORT_IMAGE_BASE);
}

static uint32_t word(uint32_t addr)
{
    return *(uint32_t *)(uintptr_t)addr;
}

/* what FUN_0c010038 does on the console: zero the two bss ranges whose bounds the image holds */
static void clear_bss(void)
{
    static const uint32_t bounds[2][2] = {{0x0C1161D0u, 0x0C1161DCu}, {0x0C15A0E0u, 0x0C15A0ECu}};
    for (int i = 0; i < 2; i++) {
        uint32_t from = word(bounds[i][0]), to = word(bounds[i][1]);
        if (from >= PORT_RAM && to <= PORT_RAM + PORT_RAM_SIZE && from <= to)
            memset((void *)(uintptr_t)from, 0, to - from);
        fprintf(stderr, "powerstone: bss 0x%08X-0x%08X cleared\n", from, to);
    }
}

/* --- dispatch -------------------------------------------------------------------------------------------------------- */

const struct port_entry *port_lookup(uint32_t addr)
{
    unsigned lo = 0, hi = port_table_size;
    while (lo < hi) {
        unsigned mid = (lo + hi) / 2;
        if (port_table[mid].addr < addr)
            lo = mid + 1;
        else
            hi = mid;
    }
    return lo < port_table_size && port_table[lo].addr == addr ? &port_table[lo] : 0;
}

const struct port_entry *port_nearest(uint32_t addr)
{
    const struct port_entry *best = 0;
    for (unsigned i = 0; i < port_table_size && port_table[i].addr <= addr; i++)
        best = &port_table[i];
    return best;
}

static void report_fault(const char *kind, uint64_t rip, uint64_t addr)
{
    char line[200];
    int n = snprintf(line, sizeof line, "powerstone: %s at rip=%#lx, address %#lx\n", kind, (unsigned long)rip, (unsigned long)addr);
    if (write(2, line, n) < 0)
        _exit(3);
}

static void on_fault(int sig, siginfo_t *si, void *ctx)
{
    ucontext_t *uc = ctx;
    uint64_t rip = uc->uc_mcontext.gregs[REG_RIP];
    uint32_t target = (uint32_t)rip;
    if (sig == SIGSEGV && rip == target && (target >> 24 == 0x0C || target >> 24 == 0x8C || target >> 24 == 0xAC)) {
        const struct port_entry *e = port_lookup(0x0C000000u | (target & 0x00FFFFFFu));
        if (e) {
            if (trace_calls) {
                char line[120];
                int n = snprintf(line, sizeof line, "call %08X %s\n", target, e->name);
                if (write(2, line, n) < 0)
                    _exit(3);
            }
            uc->uc_mcontext.gregs[REG_RIP] = (greg_t)(uintptr_t)e->fn;
            return;
        }
        /* a jump into the middle of library code (Kamui's hardware routines, reached by raw address): it returns 0 */
        static uint32_t warned[64];
        int seen = 0;
        for (int i = 0; i < 64 && warned[i]; i++)
            seen |= warned[i] == target;
        if (!seen) {
            for (int i = 0; i < 64; i++)
                if (!warned[i]) { warned[i] = target; break; }
            char line[120];
            int n = snprintf(line, sizeof line, "powerstone: call to 0x%08X (no function there) returns 0\n", target);
            if (write(2, line, n) < 0)
                _exit(3);
        }
        uint64_t *sp = (uint64_t *)(uintptr_t)uc->uc_mcontext.gregs[REG_RSP];
        uc->uc_mcontext.gregs[REG_RIP] = (greg_t)sp[0];
        uc->uc_mcontext.gregs[REG_RSP] += 8;
        uc->uc_mcontext.gregs[REG_RAX] = 0;
        return;
    }
    report_fault(sig == SIGSEGV ? "memory fault" : sig == SIGILL ? "illegal instruction" : sig == SIGFPE ? "arithmetic fault" : "bus error",
                 rip, (uint64_t)(uintptr_t)si->si_addr);
    _exit(4);
}

/* the watchdog: when no frame ends for 3 seconds, the game thread reports where it is (a spin on hardware the port
   doesn't give, most often) */
extern unsigned long port_frames;
static pthread_t game_thread;

static void on_watchdog(int sig, siginfo_t *si, void *ctx)
{
    (void)sig;
    (void)si;
    ucontext_t *uc = ctx;
    uint64_t rip = uc->uc_mcontext.gregs[REG_RIP], rbp = uc->uc_mcontext.gregs[REG_RBP];
    char line[200];
    int n = snprintf(line, sizeof line, "powerstone: no frame for 3 s; at rip=%#lx, callers", (unsigned long)rip);
    for (int i = 0; i < 6 && rbp > 0x1000 && rbp < 0x7fffffffffffull && !(rbp & 3); i++) {
        uint64_t ret = *(uint64_t *)(rbp + 8);
        n += snprintf(line + n, sizeof line - n, " %#lx", (unsigned long)ret);
        rbp = *(uint64_t *)rbp;
        if (n > 180)
            break;
    }
    line[n++] = '\n';
    if (write(2, line, n) < 0)
        _exit(3);
}

static void *watchdog(void *arg)
{
    (void)arg;
    unsigned long last = (unsigned long)-1;
    int still = 0;
    for (;;) {
        sleep(1);
        if (port_frames == last) {
            if (++still == 3)
                pthread_kill(game_thread, SIGUSR1);
        } else {
            still = 0;
            last = port_frames;
        }
    }
    return 0;
}

static void install_handlers(void)
{
    static char altstack[1 << 20]; /* below 4 GB with the host binary: the vsync runs the game's handler here */
    stack_t ss = {.ss_sp = altstack, .ss_size = sizeof altstack};
    sigaltstack(&ss, 0);
    struct sigaction sa;
    memset(&sa, 0, sizeof sa);
    sa.sa_sigaction = on_fault;
    sa.sa_flags = SA_SIGINFO | SA_ONSTACK | SA_NODEFER;
    sigaction(SIGSEGV, &sa, 0);
    sigaction(SIGBUS, &sa, 0);
    sigaction(SIGILL, &sa, 0);
    sigaction(SIGFPE, &sa, 0);
    sa.sa_sigaction = on_watchdog;
    sa.sa_flags = SA_SIGINFO | SA_ONSTACK | SA_RESTART;
    sigaction(SIGUSR1, &sa, 0);
    game_thread = pthread_self();
    pthread_t w;
    pthread_create(&w, 0, watchdog, 0);
}

/* --- the unimplemented ---------------------------------------------------------------------------------------------- */

#define SEEN_MAX 4096
static struct {
    const char *name;
    uint32_t addr;
    unsigned long count;
} seen[SEEN_MAX];
static unsigned seen_n;

void port_unimplemented(const char *name, uint32_t addr)
{
    for (unsigned i = 0; i < seen_n; i++)
        if (seen[i].name == name) {
            seen[i].count++;
            return;
        }
    if (seen_n < SEEN_MAX)
        seen[seen_n++] = (typeof(seen[0])){name, addr, 1};
    fprintf(stderr, "powerstone: no C yet for %s (0x%08X)\n", name, addr);
    if (strict)
        exit(5);
}

static void report_unimplemented(void)
{
    fprintf(stderr, "powerstone: %u functions without C were called:\n", seen_n);
    for (unsigned i = 0; i < seen_n; i++)
        fprintf(stderr, "  %08X %-40s %lu\n", seen[i].addr, seen[i].name, seen[i].count);
}

/* --- the game --------------------------------------------------------------------------------------------------------- */

static ucontext_t host_context, game_context;

static void call_console(uint32_t addr, uint32_t arg)
{
    const struct port_entry *e = port_lookup(addr);
    if (!e) {
        const struct port_entry *n = port_nearest(addr);
        fprintf(stderr, "powerstone: no C for the start-up call to 0x%08X (%s), skipped\n", addr, n ? n->name : "?");
        return;
    }
    ((void (*)(uint32_t))e->fn)(arg);
}

static void game_main(void)
{
    /* the SH-4's FPSCR as the game runs it: single precision, rounding toward zero, denormals as zero */
    _mm_setcsr((_mm_getcsr() & ~0x6000u) | 0x6000u | 0x8040u);
    clear_bss();
    call_console(0x0C0F0158u, word(0x0C15A0B4u)); /* ovMdlEntryTbl(*0x0C15A0B4): the overlay modules' entries */
    call_console(0x0C0615B0u, 0);                 /* sys_main_loop */
    fprintf(stderr, "powerstone: sys_main_loop returned\n");
}

static void on_alarm(int sig)
{
    (void)sig;
    report_unimplemented();
    _exit(0);
}

int main(int argc, char **argv)
{
    saved_argv = argv;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--strict"))
            strict = 1;
        else if (!strcmp(argv[i], "--trace-calls"))
            trace_calls = 1;
        else if (!strcmp(argv[i], "--seconds") && i + 1 < argc)
            max_seconds = (unsigned)atoi(argv[++i]);
        else if (!strcmp(argv[i], "--data") && i + 1 < argc)
            port_data_dir = argv[++i];
        else if (!strcmp(argv[i], "--screenshot") && i + 2 < argc) {
            extern unsigned long port_shot_frame;
            extern const char *port_shot_file;
            port_shot_frame = strtoul(argv[++i], 0, 10);
            port_shot_file = argv[++i];
        } else if (!strcmp(argv[i], "--screenshot-every") && i + 2 < argc) {
            extern unsigned long port_shot_every;
            extern const char *port_shot_file;
            port_shot_every = strtoul(argv[++i], 0, 10);
            port_shot_file = argv[++i];
        } else if (!strcmp(argv[i], "--press") && i + 1 < argc) {
            extern unsigned long port_press_frame;
            port_press_frame = strtoul(argv[++i], 0, 10);
        } else if (!strcmp(argv[i], "--vmu") && i + 1 < argc) {
            extern const char *port_vmu_dir;
            port_vmu_dir = argv[++i];
        } else if (!strcmp(argv[i], "--headless"))
            port_headless = 1;
        else if (!strcmp(argv[i], "--image") && i + 1 < argc)
            image_path = argv[++i];
        else {
            fprintf(stderr, "usage: powerstone [--data DIR] [--vmu DIR] [--headless] [--strict] [--trace-calls] [--seconds N] [--image FILE]\n"
                            "  DIR: a folder holding the files of your Power Stone disc (1ST_READ.BIN, COMMON.BIN, ...)\n");
            return 2;
        }
    }
    map_machine();
    load_image();
    install_handlers();
    if (!port_platform_init())
        return 2;
    atexit(report_unimplemented);
    if (max_seconds) {
        signal(SIGALRM, on_alarm);
        alarm(max_seconds);
    }
    getcontext(&game_context);
    game_context.uc_stack.ss_sp = (void *)(uintptr_t)GAME_STACK;
    game_context.uc_stack.ss_size = GAME_STACK_SIZE;
    game_context.uc_link = &host_context;
    makecontext(&game_context, game_main, 0);
    swapcontext(&host_context, &game_context);
    return 0;
}
