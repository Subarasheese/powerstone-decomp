"""The league: the main agent learns against three kinds of opponent at once, and exploiters learn to beat it.

    python3 port/rl/league.py LEAGUE --init MODEL --ref MODEL [--mix 24,24,12,12] [--pool MODEL ...]

Run in the repo. LEAGUE is a folder name under $PS_TRAIN_DIR (or a path). It holds:
  main/       the main agent's run (model.pt, chunks, learn.log, checkpoints), learning with learn.py ppo
  exploit/    the current exploiter's run, learning with learn.py ppo
  pool/       frozen snapshots: the main agent's past selves and the exploiters that succeeded
  slots/      the models the opponent servers play (replaced by this manager; the servers reload them)
  league.log  what the manager did (snapshots, slot changes, exploiter resets)

The instances, by kind (--mix gives how many of each, in this order):
  ai         the main agent (side 1) against the strongest game AI: AI level 31 and the match level held at 31, the
             hardest setting's damage handicap (the computer deals x1.25 and takes /1.5)              tag 31
  past       the main agent against one of its past selves from the pool, damage equal (match level 11)  tag 101
  vs_exploit the main agent against the latest successful exploiter (the current one until there is one)  tag 102
  exploiter  the exploiter (side 1) against the current main agent                                     tag 103
The tags group the learners' reports (learn.log: "level 31", "level 101", ...). In the agent-against-agent kinds a
round ending on time costs the main agent --main-vs-timeout (default 300) and the exploiter --vs-timeout (default
150), against 60 elsewhere: the main agent has to finish an opponent who runs, and the exploiter keeps testing that.

The exploiter learns without the KL anchor and at --exploit-lr (3x the main agent's), so that it can change faster
than the main agent does.

The manager: every SNAP_EVERY it copies the main agent into the pool; every SLOT_EVERY it picks the past self to play
(half the time one of the last three, else any), refreshes the main agent the exploiter plays, and checks the exploiter.
An exploiter succeeds in a round when the main agent fails to knock it out: the exploiter wins, or the time runs out
(the main agent is meant to win every round by knock-out, so an opponent it cannot finish is a weakness too). One that
succeeds in at least WIN_RATE of RESET_ROUNDS rounds goes into the pool, becomes the vs_exploit opponent, and a new one
starts from the current main agent; one that has not managed it in EXPLOIT_MAX goes into the pool only if it succeeded
in at least KEEP_RATE, and is reset the same way.

Stop it with Ctrl-C or by removing LEAGUE/run. Instances that stop are started again. The processes it started are
stopped by their process group (never by name)."""
import argparse
import glob
import os
import random
import re
import shutil
import signal
import subprocess
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.normpath(os.path.join(HERE, '..', '..'))
SNAP_EVERY, SLOT_EVERY = 30 * 60, 3 * 60
RESET_ROUNDS, WIN_RATE, KEEP_RATE, EXPLOIT_MAX = 300, 0.6, 0.35, 4 * 3600
KINDS = ('ai', 'past', 'vs_exploit', 'exploiter')


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('league')
    ap.add_argument('--init', help='the main agent to start from (when LEAGUE/main has none)')
    ap.add_argument('--ref', required=True, help='the imitation model (the KL anchor of both learners)')
    ap.add_argument('--pool', nargs='*', default=[], help='models to put in the pool at the start')
    ap.add_argument('--mix', default='24,24,12,12', help='instances of each kind: ai, past, vs_exploit, exploiter')
    ap.add_argument('--servers', type=int, default=3, help="the main agent's servers")
    ap.add_argument('--exploit-lr', type=float, default=1.5e-4, help="the exploiters' learning rate (the main agent's: 5e-5)")
    ap.add_argument('--vs-timeout', type=float, default=150,
                    help="the exploiter's games: what a round ending on time costs it")
    ap.add_argument('--main-vs-timeout', type=float, default=300,
                    help="the main agent's games against agents: what a round ending on time costs it")
    ap.add_argument('--data', default=os.path.join(REPO, '..', 'powerstone_extracted'))
    a = ap.parse_args()
    base = os.environ.get('PS_TRAIN_DIR')
    L = os.path.abspath(a.league if os.path.isabs(a.league) or not base else os.path.join(base, a.league))
    d = {k: os.path.join(L, k) for k in ('main', 'exploit', 'pool', 'slots')}
    for k in d:
        os.makedirs(d[k], exist_ok=True)
    for k in ('main', 'exploit'):
        os.makedirs(os.path.join(d[k], 'chunks'), exist_ok=True)
    main_model, exp_model = os.path.join(d['main'], 'model.pt'), os.path.join(d['exploit'], 'model.pt')
    if not os.path.exists(main_model):
        if not a.init:
            sys.exit('LEAGUE/main has no model: give --init')
        shutil.copy(a.init, main_model)
    for i, p in enumerate(a.pool):
        dst = os.path.join(d['pool'], 'start_%d.pt' % i)
        if not os.path.exists(dst):
            shutil.copy(p, dst)
    log = open(os.path.join(L, 'league.log'), 'a')

    def say(msg):
        line = '%s %s' % (time.strftime('%Y-%m-%d %H:%M:%S'), msg)
        print(line, flush=True)
        log.write(line + '\n')
        log.flush()

    def put(src, slot):         # atomically: a server must never read half a file
        tmp = os.path.join(d['slots'], '.' + slot)
        shutil.copy(src, tmp)
        os.replace(tmp, os.path.join(d['slots'], slot))

    def snapshot(src, name):
        dst = os.path.join(d['pool'], name)
        shutil.copy(src, dst + '.tmp')
        os.replace(dst + '.tmp', dst)
        return dst

    def pool(prefix=''):
        return sorted(glob.glob(os.path.join(d['pool'], prefix + '*.pt')), key=os.path.getmtime)

    if not pool():
        snapshot(main_model, 'main_%s.pt' % time.strftime('%Y%m%d-%H%M'))
    if not os.path.exists(exp_model):
        shutil.copy(main_model, exp_model)
    put(random.choice(pool()), 'past.pt')
    put(main_model, 'main.pt')
    exploiters = pool('exploit_')
    put(exploiters[-1] if exploiters else exp_model, 'exploit.pt')
    open(os.path.join(L, 'run'), 'w').close()
    logs = lambda dd, name: open(os.path.join(dd, name), 'a')
    sock = lambda name: '/tmp/ps_league_%d_%s.sock' % (os.getpid(), name)

    import torch
    two = torch.cuda.device_count() > 1 and 'CUDA_VISIBLE_DEVICES' not in os.environ
    env = lambda gpu: dict(os.environ, **({'CUDA_VISIBLE_DEVICES': str(gpu)} if two else {}))
    # the main agent's servers answer on the second GPU; the learners and the opponents' servers use the first
    learners = {}

    def start_learner(k):
        # the main agent stays near the imitation model early on (the KL term); an exploiter has no anchor and a higher
        # learning rate: it has to change faster than the main agent does
        extra = ['--ref', os.path.abspath(a.ref)] if k == 'main' else ['--lr', str(a.exploit_lr)]
        learners[k] = subprocess.Popen([sys.executable, os.path.join(HERE, 'learn.py'), d[k], 'ppo'] + extra,
                                       stdout=logs(d[k], 'learn.out'), stderr=subprocess.STDOUT, cwd=HERE, env=env(0),
                                       start_new_session=True)
    start_learner('main')
    start_learner('exploit')
    servers = {}

    def serve(name, model, out, gpu, run_dir):
        servers[name] = subprocess.Popen([sys.executable, os.path.join(HERE, 'serve.py'), model, sock(name)]
                                         + (['--out', os.path.join(out, 'chunks'), '--max-backlog', '30'] if out else []),
                                         stdout=logs(run_dir, 'serve_%s.out' % name), stderr=subprocess.STDOUT, cwd=HERE,
                                         env=env(gpu), start_new_session=True)
    for i in range(a.servers):
        serve('main%d' % i, main_model, d['main'], 1, d['main'])
    serve('exploiter', exp_model, d['exploit'], 0, d['exploit'])
    for slot in ('past', 'exploit', 'main'):
        serve('slot_' + slot, os.path.join(d['slots'], slot + '.pt'), None, 0, L)
    while not all(os.path.exists(sock(n)) for n in servers):
        time.sleep(1)
        if any(p.poll() is not None for p in servers.values()):
            sys.exit('a server did not start; see the serve_*.out logs')

    mix = [int(x) for x in a.mix.split(',')]
    kinds = [k for k, n in zip(KINDS, mix) for _ in range(n)]
    procs = {}

    def start(i):
        kind = kinds[i]
        main_sock = 'unix:' + sock('main%d' % (i % a.servers))
        cmd = [os.path.join(REPO, 'build', 'native', 'powerstone'), '--data', a.data, '--headless', '--fast', '--fast-fpu',
               '--no-draw', '--boot-fight', '0', '0', '1', '--boot-random', '--difficulty', '0']
        # agent against agent: playing for the time out must not pay. The main agent pays more, so that finishing an
        # opponent who runs is worth the risk; the exploiter less, so that it keeps testing that
        if kind in ('past', 'vs_exploit'):
            cmd += ['--timeout-penalty', str(a.main_vs_timeout)]
        elif kind == 'exploiter':
            cmd += ['--timeout-penalty', str(a.vs_timeout)]
        if kind == 'ai':
            cmd += ['--match-level', '31', '--cpu-level', '2', '31', '--agent', '1', main_sock, '--tag', '31']
        elif kind == 'past':
            cmd += ['--match-level', '11', '--agent', '1', main_sock, '--agent', '2', 'unix:' + sock('slot_past'), '--tag', '101']
        elif kind == 'vs_exploit':
            cmd += ['--match-level', '11', '--agent', '1', main_sock, '--agent', '2', 'unix:' + sock('slot_exploit'), '--tag', '102']
        else:
            cmd += ['--match-level', '11', '--agent', '1', 'unix:' + sock('exploiter'), '--agent', '2', 'unix:' + sock('slot_main'),
                    '--tag', '103']
        return subprocess.Popen(cmd, cwd=REPO, stdout=subprocess.DEVNULL, stderr=logs(L, 'game_%02d_%s.err' % (i, kind)),
                                start_new_session=True)

    # the exploiter's results: read from its learn.log, since the current one started
    exp_log = os.path.join(d['exploit'], 'learn.log')
    state = {'offset': os.path.getsize(exp_log) if os.path.exists(exp_log) else 0, 'since': time.time(), 'gen': len(exploiters)}
    pat = re.compile(r'level 103: (\d+) rounds, .*? KO-lost (\d+)%')     # the exploiter knocked out: the main agent's success

    def exploiter_record():
        if not os.path.exists(exp_log):
            return 0, 0.0
        with open(exp_log) as f:
            f.seek(state['offset'])
            n = won = 0
            for line in f:
                for m in pat.finditer(line):
                    r = int(m.group(1))
                    n += r
                    won += r * (1 - int(m.group(2)) / 100)
        return n, (won / n if n else 0.0)

    def reset_exploiter(keep, n, rate):
        state['gen'] += 1
        if keep:
            p = snapshot(exp_model, 'exploit_%03d.pt' % state['gen'])
            put(p, 'exploit.pt')
            say('exploiter %d kept the main agent from a knock-out in %.0f%% of %d rounds: into the pool, now the vs_exploit opponent'
                % (state['gen'], 100 * rate, n))
        else:
            say('exploiter %d kept the main agent from a knock-out in only %.0f%% of %d rounds: dropped' % (state['gen'], 100 * rate, n))
        lp = learners['exploit']
        try:
            os.killpg(lp.pid, signal.SIGTERM)
        except ProcessLookupError:
            pass
        lp.wait()
        for c in glob.glob(os.path.join(d['exploit'], 'chunks', '*.npz')):   # its old self's games
            os.remove(c)
        shutil.copy(main_model, exp_model + '.tmp')
        os.replace(exp_model + '.tmp', exp_model)
        state['offset'] = os.path.getsize(exp_log) if os.path.exists(exp_log) else 0
        state['since'] = time.time()
        start_learner('exploit')
        if not pool('exploit_'):
            put(exp_model, 'exploit.pt')

    def stop_all():
        signal.signal(signal.SIGTERM, signal.SIG_IGN)       # a second signal must not cut the cleanup short
        signal.signal(signal.SIGINT, signal.SIG_IGN)
        everyone = list(procs.values()) + list(servers.values()) + list(learners.values())
        for sig in (signal.SIGTERM, signal.SIGKILL):
            for p in everyone:
                try:
                    os.killpg(p.pid, sig)
                except ProcessLookupError:
                    pass
            time.sleep(1)

    def on_term(sig, frame):
        raise KeyboardInterrupt
    signal.signal(signal.SIGTERM, on_term)
    say('league started: %s instances (%s), pool of %d' % (sum(mix), a.mix, len(pool())))
    last_snap = last_slot = time.time()
    try:
        while os.path.exists(os.path.join(L, 'run')):
            for i in range(len(kinds)):
                if i not in procs or procs[i].poll() is not None:
                    procs[i] = start(i)
            for k, p in learners.items():
                if p.poll() is not None:
                    raise SystemExit('the %s learner stopped; see %s/learn.out' % (k, k))
            for k, p in servers.items():
                if p.poll() is not None:
                    raise SystemExit('the server %s stopped; see its serve_%s.out' % (k, k))
            now = time.time()
            if now - last_snap > SNAP_EVERY:
                last_snap = now
                p = snapshot(main_model, 'main_%s.pt' % time.strftime('%Y%m%d-%H%M'))
                say('main agent into the pool: %s (pool of %d)' % (os.path.basename(p), len(pool())))
            if now - last_slot > SLOT_EVERY:
                last_slot = now
                mains = pool('main_') + pool('start_')
                pick = random.choice(mains[-3:] if random.random() < 0.5 else mains)
                put(pick, 'past.pt')
                put(main_model, 'main.pt')
                if not pool('exploit_'):
                    put(exp_model, 'exploit.pt')
                n, rate = exploiter_record()
                say('past self now %s; exploiter %d: %d rounds, the main agent held off in %.0f%%' % (os.path.basename(pick), state['gen'] + 1, n, 100 * rate))
                if n >= RESET_ROUNDS and rate >= WIN_RATE:
                    reset_exploiter(True, n, rate)
                elif now - state['since'] > EXPLOIT_MAX:
                    reset_exploiter(rate >= KEEP_RATE, n, rate)
            time.sleep(10)
    except KeyboardInterrupt:
        pass
    finally:
        stop_all()
        say('league stopped')


if __name__ == '__main__':
    main()
