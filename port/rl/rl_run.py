"""Run reinforcement learning: N game instances without a window, each with an agent playing side 1 and logging its
decisions, and the PPO learner (ppo.py) on the GPU.

    python3 port/rl/rl_run.py RUN_DIR --init MODEL.pt [--envs 20] [--stage 0] [--p1 0] [--p2 1] [--level 1]

Run in the repo. The policy runs for all instances at once in infer_server.py on the GPU. Each instance: build/native/powerstone --headless --fast --boot-fight STAGE P1 P2 --cpu-level 2 LEVEL
--agent 1 RUN_DIR/model.pt, with PS_RL_DIR=RUN_DIR/env_K and PS_REPEAT=2; its fights repeat on their own (boot.c). The
computer's level for side 2 can be changed while it runs: write the number to RUN_DIR/level (the instances are started
again on the next check). An instance that stops is started again. Stop it all with Ctrl-C or by removing RUN_DIR/run."""
import argparse
import os
import signal
import subprocess
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.normpath(os.path.join(HERE, '..', '..'))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('run')
    ap.add_argument('--init', required=True)
    ap.add_argument('--ref', help='the KL anchor, when it is not --init')
    ap.add_argument('--envs', type=int, default=20)
    ap.add_argument('--stage', type=int, default=0)
    ap.add_argument('--p1', type=int, default=0)
    ap.add_argument('--p2', type=int, default=1)
    ap.add_argument('--level', type=int, default=1)
    ap.add_argument('--difficulty', type=int, default=0, help='the game\'s difficulty option, 0..7')
    ap.add_argument('--match-level', type=int, default=-1, help='hold the match level (the damage scale) at N, 0..31')
    ap.add_argument('--random', action='store_true', help='each match draws its stage and both fighters (not the bosses)')
    ap.add_argument('--data', default=os.path.join(REPO, '..', 'powerstone_extracted'))
    a = ap.parse_args()
    run = os.path.abspath(a.run)
    os.makedirs(run, exist_ok=True)
    open(os.path.join(run, 'run'), 'w').close()
    level_file = os.path.join(run, 'level')
    if not os.path.exists(level_file):
        open(level_file, 'w').write(str(a.level))
    model = os.path.join(run, 'model.pt')
    learner = subprocess.Popen([sys.executable, os.path.join(HERE, 'ppo.py'), run, '--init', os.path.abspath(a.init)]
                               + (['--ref', os.path.abspath(a.ref)] if a.ref else []),
                               stdout=open(os.path.join(run, 'ppo.out'), 'a'), stderr=subprocess.STDOUT, cwd=HERE)
    while not os.path.exists(model):
        time.sleep(1)
    sock = os.path.join(run, 'infer.sock')
    server = subprocess.Popen([sys.executable, os.path.join(HERE, 'infer_server.py'), model, sock],
                              stdout=open(os.path.join(run, 'infer.out'), 'a'), stderr=subprocess.STDOUT, cwd=HERE)
    while not os.path.exists(sock):
        time.sleep(1)
    procs = {}

    def start(k, level):
        env = dict(os.environ, PS_RL_DIR=os.path.join(run, 'env_%02d' % k), PS_REPEAT='2', PS_INFER_SOCK=sock)
        cmd = [os.path.join(REPO, 'build', 'native', 'powerstone'), '--data', a.data, '--headless', '--fast',
               '--boot-fight', str(a.stage), str(a.p1), str(a.p2), '--difficulty', str(a.difficulty), '--cpu-level', '2', str(level),
               '--agent', '1', model] + (['--boot-random'] if a.random else []) + \
              (['--match-level', str(a.match_level)] if a.match_level >= 0 else [])
        return subprocess.Popen(cmd, cwd=REPO, env=env, stdout=subprocess.DEVNULL,
                                stderr=open(os.path.join(run, 'env_%02d.err' % k), 'a'), start_new_session=True)

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
        open(pid_file, 'w').close()

    # instances left by a launcher that did not stop cleanly
    pid_file = os.path.join(run, 'pids')
    if os.path.exists(pid_file):
        for line in open(pid_file):
            try:
                os.killpg(int(line), signal.SIGKILL)
            except (ValueError, ProcessLookupError, PermissionError):
                pass

    def on_term(sig, frame):
        raise KeyboardInterrupt
    signal.signal(signal.SIGTERM, on_term)
    level = None
    try:
        while os.path.exists(os.path.join(run, 'run')):
            want = int(open(level_file).read().strip() or a.level)
            if want != level:
                stop_all()
                level = want
                print('computer level %d' % level, flush=True)
            changed = False
            for k in range(a.envs):
                if k not in procs or procs[k].poll() is not None:
                    procs[k] = start(k, level)
                    changed = True
            if changed:
                open(pid_file, 'w').write(''.join('%d\n' % p.pid for p in procs.values()))
            if learner.poll() is not None:
                print('the learner stopped; see ppo.out', flush=True)
                break
            if server.poll() is not None:
                print('the inference server stopped; see infer.out', flush=True)
                break
            time.sleep(15)
    except KeyboardInterrupt:
        pass
    finally:
        stop_all()
        learner.terminate()
        server.terminate()


if __name__ == '__main__':
    main()
