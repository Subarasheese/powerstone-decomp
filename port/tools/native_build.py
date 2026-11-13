"""native_build.py [--jobs N] [--only PATTERN] [--keep-going]: builds the native (x86-64 Linux) game from the C in src/game.

Steps:
  compile  every src/game/**/*.c with the host compiler into build/native/obj/ (errors listed per file in build/native/errors.txt)
  census   what the objects define and need (nm)
  stubs    a stub for each function the game needs and no object defines (it reports itself once and returns 0);
           symbols.txt's data names become absolute symbols at their console addresses
  table    the dispatch table: console address -> host function, for calls through pointers and addresses
  link     build/native/powerstone, with port/runtime and the play math

The game's C runs unchanged. It is compiled for x32 (x86-64 instructions and register calling convention, 32-bit int, long
and pointers: the SH-4's sizes, so every record keeps its console layout), then converted to ELF64 and linked with the
x86-64 runtime. Its memory sits at the console's addresses (port/runtime/runner.c maps it) and a call to a console address
faults into the dispatch table. See port/README.md.
"""
import argparse, concurrent.futures as cf, os, re, subprocess, sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..'))
OUT = os.path.join(ROOT, 'build', 'native')
OBJ = os.path.join(OUT, 'obj')
CC = os.environ.get('CC', 'clang')
GAME_CC = [CC, '--target=x86_64-linux-gnux32']

GAME_FLAGS = ['-std=gnu89', '-O1', '-g', '-w', '-fno-pie', '-fno-pic', '-fwrapv', '-fno-strict-aliasing', '-fsigned-char',
              '-ffp-contract=off', '-fno-builtin', '-fcommon', '-fno-stack-protector', '-fno-omit-frame-pointer',
              '-ftrivial-auto-var-init=zero',
              '-Wno-error=incompatible-pointer-types', '-Wno-error=int-conversion', '-Wno-error=implicit-function-declaration',
              '-Wno-error=implicit-int', '-Wno-error=return-type', '-Wno-error=incompatible-function-pointer-types',
              '-I' + os.path.join(ROOT, 'src'), '-I' + os.path.join(ROOT, 'port', 'runtime'),
              '-include', os.path.join(ROOT, 'port', 'runtime', 'prelude.h')]
HOST_FLAGS = ['-std=gnu11', '-O2', '-g', '-Wall', '-fno-pie', '-fno-pic', '-I' + os.path.join(ROOT, 'port', 'runtime'),
              '-I' + os.path.join(ROOT, 'port', 'third_party', 'sa_numeric')]
RUNTIME = ['port/runtime/runner.c', 'port/runtime/shim.c']
NUMERIC = ['port/third_party/sa_numeric/math.c']


def game_sources(only):
    out = []
    for d, _, fs in os.walk(os.path.join(ROOT, 'src', 'game')):
        for f in fs:
            if f.endswith('.c') and (not only or re.search(only, os.path.join(d, f))):
                out.append(os.path.join(d, f))
    return sorted(out)


# host bodies for the game's SHC inline assembly (#pragma inline_asm), by function name. The rest of the source compiles as is.
ASM_BODIES = {
    'ia_getsr': 'return port_sr;', 'get_sr': 'return port_sr;',
    'ia_setsr': 'port_sr = v;', 'set_sr': 'port_sr = v;',
    'getfr15': 'return port_fr15;',             # the caller's leftover fr15, truncated: see port/README.md
    'mvn208': 'memcpy(d, s, 208);',
}
ASM_PROLOGUE = 'extern int port_sr, port_fr15;\nvoid *memcpy(void *, const void *, unsigned);\n'


def native_text(src):
    """the source as the native build compiles it: inline assembly bodies replaced by ASM_BODIES; None if unchanged"""
    t = open(src, errors='replace').read()
    if '#pragma inline_asm' not in t:
        return None
    def body(m):
        name = m.group(1)
        if name not in ASM_BODIES:
            raise SystemExit('%s: no host body for inline assembly %s (port/tools/native_build.py ASM_BODIES)' % (src, name))
        return '%s\n{ %s }' % (m.group(2).strip(), ASM_BODIES[name])
    t = re.sub(r'#pragma inline_asm\((\w+)\)\s*\n((?:static\s+)?[^\n{;]*\b\1\s*\([^)]*\))\s*\{.*?\n\}', body, t, flags=re.S)
    return ASM_PROLOGUE + t


def obj_of(src):
    return os.path.join(OBJ, os.path.splitext(os.path.basename(src))[0] + '.o')


def compile_one(src):
    o = obj_of(src)
    if os.path.exists(o) and os.path.getmtime(o) > max(os.path.getmtime(src), os.path.getmtime(PRELUDE)):
        return src, 0, ''
    text = native_text(src)
    if text is not None:
        src = os.path.join(OUT, 'src', os.path.basename(src))
        os.makedirs(os.path.dirname(src), exist_ok=True)
        open(src, 'w').write(text)
    # through LLVM IR, so that the game's memory behaves as on the console:
    #  - every load and store left after the locals become registers is volatile: the game spins on words its interrupts
    #    change and expects each access it wrote to happen, in order (SHC does no more than that); this also keeps clang
    #    from merging stores into wide moves
    #  - every alignment the code claims above 4 is capped there: the console's data guarantees no more (a global array
    #    sits wherever the image put it), where the x86-64 ABI would give large arrays 16
    base = o[:-2]
    r = subprocess.run(GAME_CC + GAME_FLAGS + ['-O0', '-Xclang', '-disable-O0-optnone', '-S', '-emit-llvm', src, '-o', base + '.0.ll'],
                       capture_output=True, text=True)
    if r.returncode == 0:
        r = subprocess.run(['opt', '-passes=sroa,mem2reg', '-S', base + '.0.ll', '-o', base + '.1.ll'], capture_output=True, text=True)
    if r.returncode == 0:
        ir = open(base + '.1.ll').read()
        ir = re.sub(r'= load (?!volatile)', '= load volatile ', ir)
        ir = re.sub(r'(?m)^(\s+)store (?!volatile)', r'\1store volatile ', ir)
        ir = re.sub(r'(call void @llvm\.mem(?:cpy|move|set)[^\n]*), i1 false\)', r'\1, i1 true)', ir)
        ir = re.sub(r'\balign (8|16|32|64)\b', 'align 4', ir)
        open(base + '.2.ll', 'w').write(ir)
        r = subprocess.run(GAME_CC + ['-O1', '-g', '-w', '-fno-pic', '-c', base + '.2.ll', '-o', o + '.x32'], capture_output=True, text=True)
    for ext in ('.0.ll', '.1.ll', '.2.ll'):
        if os.path.exists(base + ext):
            os.unlink(base + ext)
    if r.returncode == 0:
        c = subprocess.run(['objcopy', '-O', 'elf64-x86-64', o + '.x32', o], capture_output=True, text=True)
        os.unlink(o + '.x32')
        return src, c.returncode, r.stderr + c.stderr
    return src, r.returncode, r.stderr


def nm(path):
    r = subprocess.run(['nm', path], capture_output=True, text=True)
    defined, undefined = set(), set()
    for line in r.stdout.splitlines():
        parts = line.split()
        if len(parts) == 2 and parts[0] == 'U':
            undefined.add(parts[1])
        elif len(parts) == 3 and parts[1] in 'TDBCRVWtdbr' and parts[1].isupper():
            defined.add(parts[2])
    return defined, undefined


def read_functions():
    fns = {}
    for line in open(os.path.join(ROOT, 'functions.txt')):
        p = line.split()
        if len(p) == 4 and p[0] == 'F':
            fns[p[3]] = int(p[1], 16)
    return fns


def read_symbols():
    syms = {}
    for line in open(os.path.join(ROOT, 'symbols.txt')):
        p = line.split()
        if len(p) >= 2 and re.match(r'^[0-9a-fA-F]{8}$', p[0]):
            syms[p[1]] = int(p[0], 16)
    return syms


PRELUDE = os.path.join(ROOT, 'port', 'runtime', 'prelude.h')


def host_libc():
    """the names the host's C library and maths library export"""
    names = set()
    for lib in ('libc.so.6', 'libm.so.6'):
        path = subprocess.run([CC, '-print-file-name=' + lib], capture_output=True, text=True).stdout.strip()
        r = subprocess.run(['nm', '-D', '--defined-only', path], capture_output=True, text=True)
        names |= {l.split()[-1].split('@')[0] for l in r.stdout.splitlines() if l.strip()}
    return names


def host_compile(src, quiet=False):
    o = os.path.join(OUT, os.path.splitext(os.path.basename(src))[0] + '.host.o')
    r = subprocess.run([CC] + HOST_FLAGS + (['-w'] if quiet else []) + ['-c', os.path.join(ROOT, src), '-o', o],
                       capture_output=True, text=True)
    if r.returncode:
        sys.exit('host compile failed: %s\n%s' % (src, r.stderr))
    return o


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--jobs', type=int, default=os.cpu_count())
    ap.add_argument('--only')
    ap.add_argument('--compile-only', action='store_true')
    a = ap.parse_args()
    os.makedirs(OBJ, exist_ok=True)

    srcs = game_sources(a.only)
    failed = []
    with cf.ThreadPoolExecutor(a.jobs) as ex:
        for src, rc, err in ex.map(compile_one, srcs):
            if rc:
                failed.append((src, err))
    with open(os.path.join(OUT, 'errors.txt'), 'w') as f:
        for src, err in failed:
            f.write('### %s\n%s\n' % (os.path.relpath(src, ROOT), err))
    print('compile: %d of %d game files built, %d failed (build/native/errors.txt)' % (len(srcs) - len(failed), len(srcs), len(failed)))
    if a.compile_only or a.only:
        return 1 if failed else 0

    built = [s for s in srcs if os.path.exists(obj_of(s)) and s not in {f for f, _ in failed}]
    objs = [obj_of(s) for s in built]
    defined, undefined, definers = set(), set(), {}
    for s in built:
        d, u = nm(obj_of(s))
        defined |= d
        undefined |= u
        for n in d:
            definers.setdefault(n, []).append(s)
    # a function with two definitions (a matching unit and an older Equivalent copy): the unit's wins, the others go weak
    weaken = {}
    for n, ss in definers.items():
        if len(ss) > 1:
            win = next((s for s in ss if open(s).readline().startswith('/* @unit')), ss[0])
            for s in ss:
                if s != win:
                    weaken.setdefault(s, []).append(n)
    for s, names in weaken.items():
        subprocess.run(['objcopy'] + ['--weaken-symbol=' + n for n in names] + [obj_of(s)], check=True)
    if weaken:
        print('duplicates: %d names defined twice; the matching unit\'s or the first definition kept' % sum(map(len, weaken.values())))
    hobjs, runtime_defined = [], set()
    for src in RUNTIME + NUMERIC:
        o = host_compile(src)
        hobjs.append(o)
        runtime_defined |= nm(o)[0]
    fns, syms, libc_names = read_functions(), read_symbols(), host_libc()
    need = sorted(undefined - defined - runtime_defined)
    libc = [n for n in need if n in libc_names and not n.startswith('FUN_')]
    stub_fns = [n for n in need if n in fns and n not in libc]
    data = [n for n in need if n in syms and n not in fns and n not in libc]
    other = [n for n in need if n not in fns and n not in syms and n not in libc]

    gen = os.path.join(OUT, 'gen.c')
    with open(gen, 'w') as f:
        f.write('/* generated by port/tools/native_build.py: stubs for the functions no C defines yet, and the dispatch table */\n')
        f.write('#include "port.h"\n\n')
        for n in stub_fns + other:
            f.write('long port_stub_%s(void) __asm__("%s");\nlong port_stub_%s(void) { port_unimplemented("%s", 0x%08XU); return 0; }\n'
                    % (n, n, n, n, fns.get(n, 0)))
        f.write('\n')
        have = defined | runtime_defined | set(libc)
        table = sorted((addr, n) for n, addr in fns.items() if n in have or n in stub_fns)
        for i, (addr, n) in enumerate(table):
            f.write('extern char port_fn_%d[] __asm__("%s");\n' % (i, n))
        f.write('\nconst struct port_entry port_table[] = {\n')
        for i, (addr, n) in enumerate(table):
            f.write('    {0x%08XU, (void *)port_fn_%d, "%s"},\n' % (addr, i, n))
        f.write('};\nconst unsigned port_table_size = %d;\n' % len(table))
    with open(os.path.join(OUT, 'census.txt'), 'w') as f:
        f.write('stubbed console functions (%d):\n' % len(stub_fns))
        f.writelines('  %08x %s\n' % (fns[n], n) for n in stub_fns)
        f.write('\ndata from symbols.txt: %d\nhost libc (%d): %s\n' % (len(data), len(libc), ' '.join(libc)))
        f.write('\nother names, stubbed (%d):\n' % len(other))
        f.writelines('  %s\n' % n for n in other)
    print('census: %d objects; %d console functions stubbed, %d data symbols, %d from host libc, %d other names stubbed '
          '(build/native/census.txt)' % (len(objs), len(stub_fns), len(data), len(libc), len(other)))
    hobjs.append(host_compile(os.path.relpath(gen, ROOT), quiet=True))
    defsyms = ['-Wl,--defsym=%s=0x%08X' % (n, syms[n]) for n in data]
    rsp = os.path.join(OUT, 'link.rsp')
    with open(rsp, 'w') as f:
        f.write('\n'.join(objs + hobjs + defsyms))
    exe = os.path.join(OUT, 'powerstone')
    r = subprocess.run([CC, '-no-pie', '-g', '-o', exe, '@' + rsp, '-lm'], capture_output=True, text=True)
    if r.returncode:
        open(os.path.join(OUT, 'link_errors.txt'), 'w').write(r.stderr)
        sys.exit('link failed (build/native/link_errors.txt):\n' + '\n'.join(r.stderr.splitlines()[:20]))
    print('link: %s' % os.path.relpath(exe, ROOT))
    return 0


if __name__ == '__main__':
    sys.exit(main())
