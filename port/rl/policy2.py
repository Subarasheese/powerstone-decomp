"""The policy for observation version 2 (obs.c): a transformer over the fighter and the objects around it.

Inputs (as obs.c makes them, unnormalised): obs [N, PSO_OBS], cats [N, 8] (states, characters, character x super,
motions: me and the opponent each), ofeat [N, K, OF], ocats [N, K, 4] (kind hash, class, type, state), omask [N, K].
Outputs: logits for the 72 actions, the value (in the units of the normaliser's returns), and the auxiliary predictions
used in imitation (none at play time).

The observation's normaliser (mean, std) lives in the model as buffers: set once from data (set_normaliser), saved with
the weights, so a model file is all a server needs."""
import torch
import torch.nn as nn
import obsc

N_STATE, N_CHAR, N_MOTION = 64, 16, 256
N_KIND = 509 + 1


class Policy2(nn.Module):
    def __init__(self, d=256, layers=3, heads=4):
        super().__init__()
        self.register_buffer('mean', torch.zeros(obsc.OBS))
        self.register_buffer('std', torch.ones(obsc.OBS))
        self.register_buffer('omean', torch.zeros(obsc.OF))
        self.register_buffer('ostd', torch.ones(obsc.OF))
        self.state_emb = nn.Embedding(N_STATE, 24)
        self.char_emb = nn.Embedding(N_CHAR, 16)
        self.char_super_emb = nn.Embedding(N_CHAR * 2, 24)
        self.motion_emb = nn.Embedding(N_MOTION, 24)
        cat_dim = 2 * (24 + 16 + 24 + 24)
        self.fighter = nn.Sequential(nn.Linear(obsc.OBS + cat_dim, 512), nn.GELU(), nn.LayerNorm(512),
                                     nn.Linear(512, d))
        self.kind_emb = nn.Embedding(N_KIND, 24)
        self.cls_emb = nn.Embedding(8, 4)
        self.type_emb = nn.Embedding(64, 8)
        self.ostate_emb = nn.Embedding(64, 8)
        self.obj = nn.Sequential(nn.Linear(obsc.OF + 44, 128), nn.GELU(), nn.Linear(128, d))
        layer = nn.TransformerEncoderLayer(d, heads, 4 * d, dropout=0.0, batch_first=True, norm_first=True)
        self.encoder = nn.TransformerEncoder(layer, layers, enable_nested_tensor=False)
        self.norm = nn.LayerNorm(d)
        self.head = nn.Sequential(nn.Linear(d, 256), nn.GELU(), nn.Linear(256, obsc.ACTIONS))
        self.value = nn.Sequential(nn.Linear(d, 256), nn.GELU(), nn.Linear(256, 1))

    @torch.no_grad()
    def set_normaliser(self, obs, ofeat, omask):
        self.mean.copy_(obs.mean(0))
        self.std.copy_(obs.std(0).clamp_min(1e-3))
        o = ofeat[omask.bool()]
        if len(o):
            self.omean.copy_(o.mean(0))
            self.ostd.copy_(o.std(0).clamp_min(1e-3))

    def forward(self, obs, cats, ofeat, ocats, omask):
        x = ((obs - self.mean) / self.std).clamp(-10, 10)
        c = cats.long()
        e = torch.cat([self.state_emb(c[:, 0] % N_STATE), self.state_emb(c[:, 1] % N_STATE),
                       self.char_emb(c[:, 2] % N_CHAR), self.char_emb(c[:, 3] % N_CHAR),
                       self.char_super_emb(c[:, 4] % (2 * N_CHAR)), self.char_super_emb(c[:, 5] % (2 * N_CHAR)),
                       self.motion_emb(c[:, 6] % N_MOTION), self.motion_emb(c[:, 7] % N_MOTION)], 1)
        me = self.fighter(torch.cat([x, e], 1))[:, None]
        oc = ocats.long()
        of = ((ofeat - self.omean) / self.ostd).clamp(-10, 10)
        oe = torch.cat([of, self.kind_emb(oc[..., 0] % N_KIND), self.cls_emb(oc[..., 1] % 8),
                        self.type_emb(oc[..., 2] % 64), self.ostate_emb(oc[..., 3] % 64)], -1)
        tokens = torch.cat([me, self.obj(oe)], 1)
        mask = omask.bool()
        pad = torch.cat([torch.zeros_like(mask[:, :1]), ~mask], 1)
        h = self.norm(self.encoder(tokens, src_key_padding_mask=pad)[:, 0])
        return self.head(h), self.value(h)[:, 0]


def save(model, path, **meta):
    import os
    tmp = path + '.tmp'
    meta = {k: v for k, v in meta.items() if k not in ('state', 'version')}     # a loaded model's own fields
    torch.save(dict(state={k: v.detach().cpu() for k, v in model.state_dict().items()}, version=2, **meta), tmp)
    os.replace(tmp, path)


def load(path, device='cpu'):
    ck = torch.load(path, map_location='cpu', weights_only=False)
    m = Policy2()
    m.load_state_dict(ck['state'])
    return m.to(device).eval(), ck
