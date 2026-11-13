# Native port (Linux x86-64)

This branch builds Power Stone's game code as a native Linux program. The game's C from `src/game` runs unchanged; the
port supplies what the Dreamcast gave it: memory at the console's addresses, the libraries (Katana, the NAOMI renderer,
CRI ADX), the disc, interrupts, input, sound and video.

It follows the native runner of the Sonic Adventure decompilation by reshaped
(<https://github.com/reshaped/sonic-adventure>, `ENGINE.md` and `engine/native`), used with the author's permission:
the game keeps its own scheduler and records, fixed addresses live in a mapped domain, the game runs on a low stack, and
play math comes from that project's SH-4 numeric library (`third_party/sa_numeric`, see its `NOTICE.md`).

```
python3 port/tools/native_build.py          # build/native/powerstone (about 20 s; needs clang, llvm (opt), objcopy)
cd build/native && ./powerstone --seconds 5 ../../1ST_READ.BIN
```

`--strict` stops at the first function without C, `--trace-calls` prints every call that went through a console
address, `--seconds N` ends the run after N seconds with the list of library functions the game called.

## How the game's C runs on the host

| The console | The port |
|---|---|
| 32-bit `int`, `long` and pointers; the C moves addresses through `int` | The game's C is compiled for **x32** (`clang --target=x86_64-linux-gnux32`): x86-64 code and calling convention with 32-bit `int`, `long` and pointers, so every record keeps its console layout. `objcopy` turns the objects into ELF64 for the x86-64 link |
| Integer and float arguments in separate registers (r4-r7, fr4-fr11) | Same split on x86-64 (rdi.. / xmm0..), so loosely matched prototypes behave alike |
| 16 MB of RAM at 0x0C000000, mirrored at 0x8C000000 and 0xAC000000 | One memfd mapped at all three addresses (`runtime/runner.c`); the hardware windows (registers, video and sound memory) are plain memory for now |
| 1ST_READ.BIN at 0x0C010000 | Loaded there: the game's tables, strings and initial data at their addresses. The code bytes are data to the host, never run |
| Globals named in `symbols.txt` | Absolute symbols at their console addresses (`--defsym`) |
| A call through a pointer or to a fixed address (`jsr @r2`) | Console memory is not executable: the call faults, and the handler sends it to the host function the dispatch table (`build/native/gen.c`, from `functions.txt`) gives for that address, arguments untouched in their registers. Host functions stored in game records are called directly (the host binary lies below 4 GB) |
| The stack | An 8 MB stack at 0x20000000 (the game keeps addresses of locals in 32-bit words) |
| FPSCR: single precision, round toward zero, denormals zero | MXCSR set the same way while the game runs; FSCA, FSRRA, FIPR and FTRV will come from `sa_numeric` |
| Memory accesses happen as written; interrupts change words the code spins on | The build goes through LLVM IR: locals become registers, then every remaining load and store is volatile (no hoisting out of spin loops, no merged stores), and every alignment above 4 is capped at 4 (a global array sits wherever the image put it; the x86-64 ABI's 16-byte promise for large arrays would give faulting `movaps`) |
| Registers read before the C sets them hold leftovers | `-ftrivial-auto-var-init=zero`: such a read is undefined behaviour in C, and LLVM deletes code that depends on it |
| SHC intrinsics, `#pragma inline_asm` | `runtime/prelude.h` and host bodies in `tools/native_build.py` (`ASM_BODIES`) |
| A function defined twice (matching unit and an older Equivalent copy) | The unit's definition wins, the copy is weakened |

Every library function the game calls but no C defines gets a stub that reports itself and returns 0
(`build/native/census.txt` lists them). `runtime/shim.c` replaces stubs one by one with host code.

## Where it stands

- All 956 game C files compile and link; the game reaches 171 library functions without C (Katana `sy`/`gd`/`bu`/`pd`,
  the NAOMI `nl` renderer and math, CRI ADXF, and unnamed library code in 0c0dd000-0c0ff000).
- The run clears the bss, goes through the whole start-up (hardware, display, GD-ROM, clock, config, sound and renderer
  init, the controller poll) and reaches the first file load, where `ADXF_Open` finds no file and the loader retries.
- Host code so far: the controller record (`pdGetPeripheral`, pdGetPeripheral) and SHC's intrinsics.

## Next steps, in order

1. **Interrupts.** The game waits on words the vsync interrupt advances (the frame counter at 0x0C386828 in the file
   loader). A 60 Hz timer signal on the game thread will run the game's vsync handlers as the console's interrupt does;
   the handlers come from the registration calls the game makes to the library.
2. **The disc.** ADXF (open a file by its id, read sectors, poll the status) and `gdFs*` over an extracted disc
   directory (`--disc DIR`). The ids index the table at 0x0C180BD0.
3. **Block copies by register convention.** 789 call sites in 272 files call the compiler's copy helpers
   (`_quick_odd_mvn`, `_quick_evn_mvn`, `_slow_mvn`: FUN_0c0e6fe8, FUN_0c0e6fdc, FUN_0c0e7140) by name. Their operands
   are in r0-r2, which C cannot express: the generated C passed its proofs because SHC left the right values there. On
   the host those copies do not happen. Each site becomes a struct copy or `memcpy`, written from the disassembly (a
   tool can find r0's constant and the r1/r2 expressions); this fixes the C on `main` too.
4. **Video.** The NAOMI library (`nl*`: matrix stack, `nlObjPut` models, sprites, textures) over SDL3 and a GPU
   renderer, the way the Sonic Adventure engine records each draw for its Vulkan backend. Its matrix and vector
   functions can be C with play math.
5. **Input** (SDL3 into `pdGetPeripheral`), **saves** (`bu*` into files), **sound** (the commands the game sends the
   AICA driver, `AICADRV.BIN`, and ADX streams).

Known hazards: integer division by zero traps on x86 (SH-4 returns a value); shifts by 32 or more are undefined in C
and differ from SH-4's `shad`; `getfr15` (hit records) reads a register the caller left, which the host stands in for
with 0.
