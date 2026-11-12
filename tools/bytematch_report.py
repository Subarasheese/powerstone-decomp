#!/usr/bin/env python3
"""bytematch_report.py: the decomp's progress as an objdiff report (version 2), for ByteMatch. Run in the repo. Stdlib only.

    python3 tools/bytematch_report.py <out folder>     writes <out>/report.json and <out>/functional.json

Why not objdiff-cli: it diffs objects built from the C against the original's objects, and this repository holds no
game code (setup.sh makes it from your own disc), so CI cannot build them. The report is written from what the
repository records instead, and says no more than that:

  units       the original source files of docs/sourcetree.csv (code rows only), named <category>/<file>, sized by
              their functions in functions.txt; source in src/ (matching units are named after their start address)
  matched     a function counts as matched (fuzzy_match_percent 100) when it lies inside a matching C unit
              (src/*.c with an @unit header). A unit is only committed while build.sh rebuilds the executable byte for
              byte with it, so this is the byte-identical tier, checked locally, not by CI
  complete    a source file all of whose functions are matched (they are linked from C)
  functional  functional.json lists the Equivalent functions (tests/equivalent.txt: C that tools/equiv.py proved to
              behave like the original, not byte-identical), rated by how much of the original their cases ran
              (docs/equivalent.md): high >= 90% of the instructions, medium >= 50%, low below
"""
import csv
import glob
import json
import os
import re
import sys

CATEGORIES = [('game', 'Game code'), ('sdk', 'Katana SDK'), ('adx', 'CRI ADX / Sofdec'),
              ('nl', 'NAOMI-style libraries'), ('runtime', 'C runtime')]


def category(layer):
    l = layer.lower()
    if l.startswith('game'): return 'game'
    if 'adx' in l or 'sofdec' in l or l.startswith('cri'): return 'adx'
    if 'naomi' in l or l.startswith('nl'): return 'nl'
    if 'runtime' in l: return 'runtime'
    if 'sdk' in l or 'katana' in l: return 'sdk'
    return None                                   # data rows are not code


def measures(total_code, matched_code, total_fn, matched_fn, complete_code, total_units, complete_units):
    pct = lambda a, b: round(100.0 * a / b, 4) if b else 0.0
    return {
        'fuzzy_match_percent': pct(matched_code, total_code),
        'total_code': total_code, 'matched_code': matched_code, 'matched_code_percent': pct(matched_code, total_code),
        'total_data': 0, 'matched_data': 0, 'matched_data_percent': 0.0,
        'total_functions': total_fn, 'matched_functions': matched_fn,
        'matched_functions_percent': pct(matched_fn, total_fn),
        'complete_code': complete_code, 'complete_code_percent': pct(complete_code, total_code),
        'complete_data': 0, 'complete_data_percent': 0.0,
        'total_units': total_units, 'complete_units': complete_units,
    }


def main(out):
    funcs = []
    for line in open('functions.txt'):
        p = line.split()
        if len(p) >= 4 and p[0] == 'F':
            funcs.append((int(p[1], 16), int(p[2]), p[3]))
    head = re.compile(r'\s*/\*\s*@unit\s+([0-9A-Fa-f]{8})-([0-9A-Fa-f]{8})')
    units_c = []
    for f in sorted(glob.glob('src/*.c')):
        m = head.match(open(f, errors='replace').readline())
        if m:
            units_c.append((int(m.group(1), 16), int(m.group(2), 16)))
    matched = lambda a: any(s <= a < e for s, e in units_c)

    units, totals = [], {c: [0] * 7 for c, _ in CATEGORIES}
    for r in csv.DictReader(open('docs/sourcetree.csv')):
        cat = category(r['layer'])
        if cat is None:
            continue
        start, end = int(r['start'], 16), int(r['end'], 16)
        fl = [f for f in funcs if start <= f[0] < end]
        if not fl:
            continue
        items, tc, mc, mf = [], 0, 0, 0
        for a, size, name in fl:
            ok = matched(a)
            items.append({'name': name, 'size': size, 'fuzzy_match_percent': 100.0 if ok else 0.0,
                          'metadata': {'virtual_address': a}, 'address': a})
            tc += size
            if ok:
                mc += size; mf += 1
        complete = mf == len(fl)
        stem = re.sub(r'\.c$', '', r['name'])
        units.append({'name': f'{cat}/{stem}', 'measures': measures(tc, mc, len(fl), mf, tc if complete else 0, 1, int(complete)),
                      'sections': [], 'functions': items,
                      'metadata': {'complete': complete, 'source_path': 'src', 'progress_categories': [cat]}})
        t = totals[cat]
        for i, v in enumerate((tc, mc, len(fl), mf, tc if complete else 0, 1, int(complete))):
            t[i] += v
    whole = [sum(t[i] for t in totals.values()) for i in range(7)]
    report = {'version': 2, 'measures': measures(*whole), 'units': units,
              'categories': [{'id': c, 'name': n, 'measures': measures(*totals[c])} for c, n in CATEGORIES]}

    # functional.json: Equivalent functions not already byte-matched, rated by instruction coverage
    cover = {}
    cur = None
    if os.path.exists('docs/equivalent.md'):
        for line in open('docs/equivalent.md'):
            m = re.match(r'### (\S+) ', line)
            if m:
                cur = m.group(1)
            m = re.search(r'the cases run (\d+) of (\d+) instructions', line)
            if m and cur:
                cover[cur] = int(m.group(1)) / max(1, int(m.group(2)))
    addr = {n: a for a, _, n in funcs}
    functional = []
    for name in (l.strip() for l in open('tests/equivalent.txt')):
        if not name or name not in addr or matched(addr[name]):
            continue
        c = cover.get(name)
        entry = {'name': name}
        if c is not None:
            entry['confidence'] = 'high' if c >= 0.9 else 'medium' if c >= 0.5 else 'low'
        functional.append(entry)

    os.makedirs(out, exist_ok=True)
    json.dump(report, open(os.path.join(out, 'report.json'), 'w'))
    json.dump({'functions': functional}, open(os.path.join(out, 'functional.json'), 'w'))
    m = report['measures']
    print(f"report: {len(units)} units, {m['matched_functions']}/{m['total_functions']} functions and "
          f"{m['matched_code_percent']:.2f}% of code byte-matched, {m['complete_units']} complete units; "
          f"functional: {len(functional)} Equivalent functions")


if __name__ == '__main__':
    if len(sys.argv) != 2:
        sys.exit(__doc__)
    main(sys.argv[1])
