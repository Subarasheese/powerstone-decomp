#!/usr/bin/env python3
"""srctree.py: files every C file of src/ into its folder (src/ is a tree; tools/srcfiles.py finds a file by its stem).

    python3 tools/srctree.py            the plan: files that would move, and the count per folder
    python3 tools/srctree.py --apply    move them (git mv when tracked); a new file a tool wrote at the top of src/ goes the same way

No path of the original sources survives in the executable, so the tree follows the next best evidence, the original link
order: the linker placed each source file's code where the makefile listed it, and that order runs subsystem by subsystem.
- game code (below GAME_END): src/game/<subsystem>/, by the file's name (RULES, first match); a file with a generic name
  (gen_*, fy_*, m_*, hx_*...) goes with the named file nearest to it in the link order.
- the rest: src/lib/<library>/ by the library whose code its first function sits in (LIB_RANGES: the address runs of each
  library's named functions); a generated file whose functions come from several libraries goes to src/lib/mixed/.
"""
import bisect
import os
import re
import subprocess
import sys

import toolpath  # noqa: F401
import srcfiles

GAME_END = 0x0C0DCA60          # first NAOMI library object (nl_layer) after the game's last file (camera)

# (stem prefix, folder under src/game/): the first that matches the stem with its _alt/_equiv/_unit/_asm/_<n> suffixes taken off
RULES = [
    ('vmu_save', 'save'),
    ('menu_vmu', 'menu'),
    ('pad_input', 'system'), ('fs_dir', 'system'), ('misc', 'system'), ('system_', 'system'),
    ('ending_', 'demo'), ('staff_roll', 'demo'), ('demo_attract', 'demo'), ('logo_screens', 'demo'), ('boot_screens', 'demo'),
    ('attract_ranking', 'demo'),
    ('menu_select', 'menu/select'), ('menu_option', 'menu/option'), ('menu_keycfg', 'menu/option'), ('menu_game_options', 'menu/option'),
    ('menu_', 'menu'), ('testmode', 'menu'), ('result_screens', 'menu'),
    ('hit_', 'hit'), ('damage_calc', 'hit'),
    ('ui_', 'ui'),
    ('draw_frame', 'draw'), ('lighting', 'draw'), ('mdl_util', 'draw'), ('gfx_view', 'draw'),
    ('math_', 'math'),
    ('resload', 'resource'),
    ('effects_player', 'effect/player'), ('effects_impact', 'effect/impact'),
    ('effects_shells', 'effect/special'), ('effects_homing_shell', 'effect/special'), ('effects_burst', 'effect/special'),
    ('effects_thrown_object', 'effect/special'), ('effects_follow_owner', 'effect/special'), ('effects_swirl', 'effect/special'),
    ('effects', 'effect'), ('fxslot', 'effect'), ('actor_effects', 'effect'),
    ('snd_', 'sound'), ('sound', 'sound'),
    ('item', 'item'),
    ('ai_', 'ai'),
    ('flow_', 'flow'), ('round_flow', 'flow'), ('difficulty_level', 'flow'), ('screen_mode', 'flow'),
    ('scene_obj', 'object'), ('object_pool', 'object'), ('actor_objects', 'object'), ('actor_motion_sounds', 'object'),
    ('player_falcon', 'player/chara/falcon'), ('player_ryoma', 'player/chara/ryoma'), ('player_wangtang', 'player/chara/wangtang'),
    ('player_jack', 'player/chara/jack'), ('player_gunrock', 'player/chara/gunrock'), ('gunrock_', 'player/chara/gunrock'),
    ('garuda_', 'player/chara/garuda'), ('ayame_', 'player/chara/ayame'), ('rouge_', 'player/chara/rouge'),
    ('kraken_', 'player/chara/kraken'), ('valgas_', 'player/chara/valgas'),
    ('player_state', 'player/state'),
    ('player_', 'player'), ('fighter_update', 'player'), ('weapon_pose', 'player'), ('vibration', 'player'),
    ('stage_gimmicks', 'stage/gimmick'), ('stage_', 'stage'),
    ('camera', 'camera'), ('cam_', 'camera'),
    ('dbg', 'debug'),
]
GENERIC = re.compile(r'(gen|fy|fx|m|hand|hx)_')

# (first address, library) in link order: each library's run of named functions; unnamed code between runs belongs to the run before
LIB_RANGES = [
    (0x0C0DCA60, 'naomi'),     # nl_layer, nl_objput, nl_texture, screen math, debug text, matrices
    (0x0C0E4AF0, 'katana'),    # syRtc*, libsnd
    (0x0C0E7178, 'libc'),      # memcpy, memset, strcpy, strlen
    (0x0C0E7242, 'naomi'),     # nl_objasm_* renderer, texture slots
    (0x0C0EB0F0, 'katana'),    # AICA RTC internals
    (0x0C0EB758, 'libc'),      # printf core, vsprintf
    (0x0C0EC180, 'naomi'),     # nl_objasm vertex-colour and bump renderers
    (0x0C0ED750, 'libc'),      # compiler runtime and math (strncpy, umemcmp, acosf, its/sub/in_coss...)
    (0x0C0F0158, 'naomi'),     # ovMdl*
    (0x0C0F0260, 'katana'),    # gdFs*, syHw*, pdVms*, pdVib*, bu*
    (0x0C0F4FEA, 'cri'),       # ADXF
    (0x0C0F59C6, 'katana'),    # km*, kd*, vmsfs*
    (0x0C105B18, 'cri'),       # ADXCRS .. SJRBF
    (0x0C10E180, 'katana'),    # kmi*, fmMng*
    (0x0C114346, 'cri'),       # ADXB .. ADXPD
]
_LIB_STARTS = [a for a, _ in LIB_RANGES]


# docs/sourcetree.csv: the original's source files (start, end, layer) from the kickoff's analysis of pools and units; its library
# layers win (the SDK's crt0 at the very start of the link is Katana, not game). Its "Game" rows past GAME_END are the NAOMI
# renderer and the runtime pieces AGENTS.md counts as library code: LIB_RANGES places those.
LAYER_DIR = {'SDK/Katana': 'katana', 'NAOMI/nl': 'naomi', 'C runtime': 'libc', 'CRI ADX/Sofdec': 'cri'}
_ROWS = []


def _rows():
    if not _ROWS and os.path.exists('docs/sourcetree.csv'):
        import csv
        for r in csv.DictReader(open('docs/sourcetree.csv')):
            _ROWS.append((int(r['start'], 16), int(r['end'], 16), r['layer']))
        _ROWS.sort()
    return _ROWS


def lib_of(addr):
    """The library folder of code at addr, or None for game code."""
    rows = _rows()
    i = bisect.bisect_right([r[0] for r in rows], addr) - 1
    if i >= 0 and addr < rows[i][1] and rows[i][2] in LAYER_DIR:
        return LAYER_DIR[rows[i][2]]
    if addr < GAME_END:
        return None
    i = bisect.bisect_right(_LIB_STARTS, addr) - 1
    return LIB_RANGES[max(i, 0)][1]


def family(stem):
    s = re.sub(r'_(alt\d*|equiv|unit\d+|asm)\b', '', stem)
    return re.sub(r'(_\d+)+$', '', s)


def rule_of(stem):
    f = family(stem)
    return next((d for p, d in RULES if f.startswith(p)), None)


def functions():
    fa = {}
    for line in open('functions.txt'):
        p = line.split()
        if len(p) == 4 and p[0] == 'F':
            fa[p[3]] = int(p[1], 16)
    return fa


DEF = re.compile(r'^[A-Za-z_][\w \*]*?\b(\w+)\s*\([^;]*\)\s*\{?\s*$', re.M)


def addresses(path, fa):
    """The original addresses of the functions a file defines (its @unit start first), in order."""
    t = open(path, errors='replace').read()
    m = re.match(r'/\* @unit ([0-9a-fA-F]+)-', t)
    plain = re.sub(r'/\*.*?\*/', '', t, flags=re.S)
    own = re.sub(r'^(gen|fy|fx|m|hand|hx)_', '', srcfiles.stem(path))         # fy_<function>.c, hand_<function>.c: named after it
    names = [n for n in [own] + re.findall(r'inline_asm\((\w+)\)', t) + [m_.group(1) for m_ in DEF.finditer(plain)] if n in fa]
    out = sorted(set(fa[n] for n in names))
    if m:
        out = [int(m.group(1), 16)] + out
    if not out:
        h = re.search(r'0(c0[0-9a-f]{5})(?![0-9a-f])', srcfiles.stem(path) + ' ' + t, re.I)      # the address in its name or header
        out = [int(h.group(1), 16)] if h else []
    return out


def plan():
    fa = functions()
    info = {}
    for p in srcfiles.files():
        a = addresses(p, fa)
        info[p] = a
    dest = {}
    named = []                           # (address, folder) of the game files placed by their name
    for p, a in info.items():
        st = srcfiles.stem(p)
        if not a:
            dest[p] = None
            continue
        libs = {lib_of(x) for x in a}
        if libs == {None}:
            d = None if GENERIC.match(st) else rule_of(st)
            if d:
                dest[p] = 'game/' + d
                named.append((a[0], 'game/' + d))
        else:
            dest[p] = 'lib/' + (libs.pop() if len(libs) == 1 else 'mixed')
    named.sort()
    starts = [x for x, _ in named]
    for p, a in info.items():
        if p in dest:
            continue
        i = bisect.bisect_right(starts, a[0]) - 1        # the named file before it in the link order (the one after when none)
        dest[p] = named[i][1] if i >= 0 else named[0][1]
    return dest


def main(argv):
    apply = '--apply' in argv
    dest = plan()
    moves, unplaced, per = [], [], {}
    for p, d in sorted(dest.items()):
        if d is None:
            unplaced.append(p)
            continue
        per[d] = per.get(d, 0) + 1
        target = 'src/%s/%s' % (d, os.path.basename(p))
        if p != target:
            moves.append((p, target))
    for d in sorted(per):
        print('%-28s %4d' % ('src/' + d, per[d]))
    print('%d files to move%s' % (len(moves), '' if apply else ' (--apply moves them)'))
    if unplaced:
        print('no address found, left where they are: ' + ', '.join(unplaced))
    if not apply:
        return
    tracked = set(subprocess.run(['git', 'ls-files', 'src'], capture_output=True, text=True).stdout.split())
    for src, dst in moves:
        os.makedirs(os.path.dirname(dst), exist_ok=True)
        if src in tracked:
            subprocess.run(['git', 'mv', src, dst], check=True)
        else:
            os.rename(src, dst)
    for root, dirs, files in os.walk('src', topdown=False):        # folders a move emptied
        if root != 'src' and not os.listdir(root):
            os.rmdir(root)


if __name__ == '__main__':
    main(sys.argv)
