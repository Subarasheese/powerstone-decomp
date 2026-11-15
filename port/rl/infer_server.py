"""Run the policy for many agents at once on the GPU (agent.py with PS_INFER_SOCK).

    python3 port/rl/infer_server.py MODEL.pt SOCKET

Each agent sends one request per decision on a Unix socket: its inputs packed as request_dtype() (sizes from the model);
the server answers the action logits (72 float32) and the value (float32). Requests that arrive together are run as one
batch. The model is loaded again when its file changes (ppo.py writes it after every update)."""
import os
import selectors
import socket
import struct
import sys
import time
import numpy as np
import torch

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import features as F
from bc_train import Policy


def request_dtype(n_obs):
    """one request: the inputs of one decision, packed without gaps"""
    return np.dtype([('obs', '<f4', (n_obs,)), ('extra', '<f4', (4,)), ('cats', '<i2', (6,)),
                     ('ofeat', '<f4', (F.K_OBJ, F.N_OBJ_FEAT)), ('ocats', '<i2', (F.K_OBJ, 4)), ('omask', 'u1', (F.K_OBJ,))])


def pack(n_obs, **parts):
    r = np.zeros(1, request_dtype(n_obs))
    for k in r.dtype.names:
        r[k][0] = parts[k]
    return r.tobytes()


def load(path, dev):
    ck = torch.load(path, map_location='cpu', weights_only=False)
    m = Policy(ck['n_obs'], len(ck['kinds'])).to(dev)
    m.load_state_dict(ck['state'])
    m.eval()
    return m, ck


def main():
    model_path, sock_path = sys.argv[1], sys.argv[2]
    dev = 'cuda' if torch.cuda.is_available() else 'cpu'
    model, ck = load(model_path, dev)
    n_obs = ck['n_obs']
    rdt = request_dtype(n_obs)
    size = rdt.itemsize
    mtime, checked = os.path.getmtime(model_path), time.time()
    if os.path.exists(sock_path):
        os.remove(sock_path)
    srv = socket.socket(socket.AF_UNIX, socket.SOCK_STREAM)
    srv.bind(sock_path)
    srv.listen(64)
    sel = selectors.DefaultSelector()
    sel.register(srv, selectors.EVENT_READ)
    bufs = {}
    while True:
        ready = []
        for key, _ in sel.select(timeout=1.0):
            if key.fileobj is srv:
                c, _ = srv.accept()
                c.setblocking(False)
                sel.register(c, selectors.EVENT_READ)
                bufs[c] = b''
                continue
            c = key.fileobj
            try:
                data = c.recv(1 << 20)
            except BlockingIOError:
                continue
            except OSError:         # an agent that went away (its game stopped): drop the connection
                data = b''
            if not data:
                sel.unregister(c)
                bufs.pop(c, None)
                c.close()
                continue
            bufs[c] += data
        for c, b in bufs.items():
            while len(b) >= size:
                ready.append((c, b[:size]))
                b = b[size:]
            bufs[c] = b
        if ready:
            batch = np.frombuffer(b''.join(r for _, r in ready), rdt)
            T = lambda x, t: torch.as_tensor(np.array(x)).to(dev, t)
            with torch.no_grad():
                logits, value = model(T(batch['obs'], torch.float32), T(batch['extra'], torch.float32),
                                      T(batch['cats'], torch.long), T(batch['ofeat'], torch.float32),
                                      T(batch['ocats'], torch.long), T(batch['omask'], torch.bool))
            out = torch.cat([logits, value[:, None]], 1).float().cpu().numpy()
            for i, (c, _) in enumerate(ready):
                try:
                    c.setblocking(True)
                    c.sendall(out[i].tobytes())
                    c.setblocking(False)
                except OSError:
                    pass
        if time.time() - checked > 5:
            checked = time.time()
            try:
                if os.path.getmtime(model_path) != mtime:
                    model, ck = load(model_path, dev)
                    mtime = os.path.getmtime(model_path)
            except Exception:
                pass


if __name__ == '__main__':
    main()
