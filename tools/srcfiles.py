"""srcfiles.py: where the C files are. src/ is a tree (src/game/<subsystem>/..., src/lib/<library>/...); a file is known by its
stem (the name without folder and .c), which is unique across the tree and names its case folder tests/<stem>/.

    files(pattern='*', root='.')   every src/**/<pattern>.c, sorted by path
    path(stem, root='.')           the file of that stem: where it is in the tree, else src/<stem>.c (a new file starts at the top)
    stem(path)                     the stem of a path

Tools that write a new file write it to path(stem), at the top of src/; tools/srctree.py files it into its folder."""
import fnmatch
import glob
import os

_INDEX = {}


def files(pattern='*', root='.'):
    found = glob.glob(os.path.join(root, 'src', '**', pattern + '.c'), recursive=True)
    out = []
    for f in found:
        f = os.path.relpath(f, root) if root != '.' else os.path.normpath(f)
        out.append(f.replace(os.sep, '/'))
    return sorted(out)


def _index(root):
    idx = {}
    for f in files('*', root):
        idx.setdefault(stem(f), f)
    _INDEX[root] = idx
    return idx


def path(stem_, root='.'):
    idx = _INDEX.get(root)
    if idx is None or stem_ not in idx or not os.path.exists(os.path.join(root, idx[stem_])):
        idx = _index(root)
    return idx.get(stem_, 'src/%s.c' % stem_)


def stem(p):
    return os.path.splitext(os.path.basename(p))[0]


def matches(p, pattern):
    return fnmatch.fnmatch(stem(p), pattern)
