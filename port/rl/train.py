"""Run a learning phase: game instances without a window, the policy's server on the GPU, and the learner.

    python3 port/rl/train.py imitate RUN [--envs 28]
    python3 port/rl/train.py ppo RUN --ref MODEL [--envs 28] [--levels 31] [--init MODEL]

Run in the repo. RUN is a folder name under $PS_TRAIN_DIR (or a path); it holds model.pt, chunks/, the logs and the
checkpoints. Every instance runs --headless --fast --fast-fpu --no-draw with a drawn stage and fighters each match
(--boot-random), the match level held at 11 (both sides' damage unscaled) and the opponent's AI at a level from
--levels (spread over the instances).

imitate: the game's AI (level 31) on both sides, both teaching (--teach): the learner copies it (learn.py imitate).
ppo: the policy plays side 1 (--agent unix:SOCKET) against the game's AI; the learner improves it (learn.py ppo), held
near --ref (the imitation model) early on. --init: the model to start from (default: RUN's own, else --ref).

Stop it with Ctrl-C or by removing RUN/run. Instances that stop are started again."""
import argparse
import os
import shutil
import signal
import subprocess
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.normpath(os.path.join(HERE, '..', '..'))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('phase', choices=('imitate', 'ppo'))
    ap.add_argument('run')
    ap.add_argument('--envs', type=int, default=28)
    ap.add_argument('--servers', type=int, default=3, help='server processes, the instances spread over them')
    ap.add_argument('--levels', default='31', help='the opponent AI levels, spread over the instances (e.g. 11,21,31)')
    ap.add_argument('--ref')
    ap.add_argument('--init')
    ap.add_argument('--data', default=os.path.join(REPO, '..', 'powerstone_extracted'))
    a = ap.parse_args()
    base = os.environ.get('PS_TRAIN_DIR')
    run = a.run if os.path.isabs(a.run) or not base else os.path.join(base, a.run)
    run = os.path.abspath(run)
    os.makedirs(os.path.join(run, 'chunks'), exist_ok=True)
    if a.phase == 'ppo' and not a.ref:
        sys.exit('ppo needs --ref (the imitation model)')
    model = os.path.join(run, 'model.pt')
    if not os.path.exists(model) and (a.init or a.ref):
        shutil.copy(a.init or a.ref, model)
    open(os.path.join(run, 'run'), 'w').close()
    socks = [os.path.join(run, 'serve%d.sock' % i) for i in range(a.servers)]
    if len(socks[0]) > 100:     # a Unix socket path has to be short
        socks = ['/tmp/ps_train_%d_%d.sock' % (os.getpid(), i) for i in range(a.servers)]
    logs = lambda name: open(os.path.join(run, name), 'a')

    learner = subprocess.Popen([sys.executable, os.path.join(HERE, 'learn.py'), run, 'imitate' if a.phase == 'imitate' else 'ppo']
                               + (['--ref', os.path.abspath(a.ref)] if a.phase == 'ppo' else []),
                               stdout=logs('learn.out'), stderr=subprocess.STDOUT, cwd=HERE)
    while not os.path.exists(model):
        time.sleep(1)
    # with two GPUs, the server answers on the second and the learner trains on the first
    import torch
    serve_env = dict(os.environ)
    if torch.cuda.device_count() > 1 and 'CUDA_VISIBLE_DEVICES' not in os.environ:
        serve_env['CUDA_VISIBLE_DEVICES'] = '1'
    servers = [subprocess.Popen([sys.executable, os.path.join(HERE, 'serve.py'), model, sk, '--out', os.path.join(run, 'chunks'),
                                 '--max-backlog', str(10 * a.servers)],
                                stdout=logs('serve%d.out' % i), stderr=subprocess.STDOUT, cwd=HERE, env=serve_env)
               for i, sk in enumerate(socks)]
    while not all(os.path.exists(sk) for sk in socks):
        time.sleep(1)
    levels = [int(x) for x in a.levels.split(',')]
    procs = {}

    def start(k):
        level = levels[k % len(levels)]
        sock = socks[k % len(socks)]
        cmd = [os.path.join(REPO, 'build', 'native', 'powerstone'), '--data', a.data, '--headless', '--fast', '--fast-fpu',
               '--no-draw', '--boot-fight', '0', '0', '1', '--boot-random', '--difficulty', '0', '--match-level', '11']
        if a.phase == 'imitate':
            cmd += ['--cpu-vs-cpu', '--cpu-level', '1', '31', '--cpu-level', '2', '31', '--teach', '1', sock, '--teach', '2', sock]
        else:
            cmd += ['--cpu-level', '2', str(level), '--agent', '1', 'unix:' + sock]
        return subprocess.Popen(cmd, cwd=REPO, stdout=subprocess.DEVNULL, stderr=logs('game_%02d.err' % k),
                                start_new_session=True)

    def stop_all():
        signal.signal(signal.SIGTERM, signal.SIG_IGN)       # a second signal must not cut the cleanup short
        signal.signal(signal.SIGINT, signal.SIG_IGN)
        for sig in (signal.SIGTERM, signal.SIGKILL):
            for p in procs.values():
                try:
                    os.killpg(p.pid, sig)
                except ProcessLookupError:
                    pass
            time.sleep(1)
        procs.clear()

    def on_term(sig, frame):
        raise KeyboardInterrupt
    signal.signal(signal.SIGTERM, on_term)
    try:
        while os.path.exists(os.path.join(run, 'run')):
            for k in range(a.envs):
                if k not in procs or procs[k].poll() is not None:
                    procs[k] = start(k)
            if learner.poll() is not None:
                print('the learner stopped; see learn.out', flush=True)
                break
            if any(sv.poll() is not None for sv in servers):
                print('a server stopped; see serve*.out', flush=True)
                break
            time.sleep(10)
    except KeyboardInterrupt:
        pass
    finally:
        stop_all()
        learner.terminate()
        for sv in servers:
            sv.terminate()


if __name__ == '__main__':
    main()
