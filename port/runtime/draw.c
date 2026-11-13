/* draw.c: the frame's triangle records drawn with OpenGL 3.3 core.

   The PowerVR takes screen-space vertices: x and y in pixels of the 640x480 frame, and 1/w for depth (larger is nearer).
   Its colour is texture x base colour + offset colour. Opaque and punch-through polygons are drawn first, translucent
   ones after, in the order the game submitted them (the PowerVR sorts translucent polygons itself; submission order
   is the first approximation). */
#define GL_GLEXT_PROTOTYPES
#include <GL/gl.h>
#include <GL/glext.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "render.h"

#define MAX_VERTS (1 << 20)
#define MAX_DRAWS (1 << 15)

static struct rvert *verts;
static struct rdraw *draws;
static unsigned nverts, ndraws;
static GLuint program, vao, vbo, white;
static GLint u_screen, u_tex, u_alpha_test;

static const char *vs_src =
    "#version 330 core\n"
    "layout(location=0) in vec3 pos;\n"
    "layout(location=1) in vec2 uv;\n"
    "layout(location=2) in vec4 col;\n"
    "layout(location=3) in vec4 ofs;\n"
    "uniform vec2 screen;\n"
    "out vec2 v_uv; out vec4 v_col; out vec4 v_ofs;\n"
    "void main() {\n"
    /* pos.z is W: depth = 0.1 / W (1/W, as the PowerVR compares it), written as clip-space z = 0.2 - W so that GL
       interpolates and clips it (behind the eye, or nearer than W = 0.1) */
    "  float w = pos.z;\n"
    "  vec2 ndc = vec2(pos.x / screen.x * 2.0 - 1.0, 1.0 - pos.y / screen.y * 2.0);\n"
    "  gl_Position = vec4(ndc * w, 0.2 - w, w);\n"
    "  v_uv = uv; v_col = col; v_ofs = ofs;\n"
    "}\n";

static const char *fs_src =
    "#version 330 core\n"
    "in vec2 v_uv; in vec4 v_col; in vec4 v_ofs;\n"
    "uniform sampler2D tex;\n"
    "uniform int alpha_test;\n"
    "out vec4 o;\n"
    "void main() {\n"
    "  vec4 t = texture(tex, v_uv);\n"
    "  vec4 c = t * v_col;\n"
    "  c.rgb += v_ofs.rgb;\n"
    "  if (alpha_test != 0 && c.a < 0.5) discard;\n"
    "  o = c;\n"
    "}\n";

static GLuint shader(GLenum kind, const char *src)
{
    GLuint s = glCreateShader(kind);
    GLint ok;
    glShaderSource(s, 1, &src, 0);
    glCompileShader(s);
    glGetShaderiv(s, GL_COMPILE_STATUS, &ok);
    if (!ok) {
        char log[1024];
        glGetShaderInfoLog(s, sizeof log, 0, log);
        fprintf(stderr, "powerstone: shader: %s\n", log);
        exit(2);
    }
    return s;
}

void render_setup(void)
{
    verts = malloc(sizeof *verts * MAX_VERTS);
    draws = malloc(sizeof *draws * MAX_DRAWS);
    program = glCreateProgram();
    glAttachShader(program, shader(GL_VERTEX_SHADER, vs_src));
    glAttachShader(program, shader(GL_FRAGMENT_SHADER, fs_src));
    glLinkProgram(program);
    u_screen = glGetUniformLocation(program, "screen");
    u_tex = glGetUniformLocation(program, "tex");
    u_alpha_test = glGetUniformLocation(program, "alpha_test");
    glGenVertexArrays(1, &vao);
    glGenBuffers(1, &vbo);
    glBindVertexArray(vao);
    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(struct rvert), (void *)0);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, sizeof(struct rvert), (void *)12);
    glVertexAttribPointer(2, 4, GL_UNSIGNED_BYTE, GL_TRUE, sizeof(struct rvert), (void *)20);
    glVertexAttribPointer(3, 4, GL_UNSIGNED_BYTE, GL_TRUE, sizeof(struct rvert), (void *)24);
    for (int i = 0; i < 4; i++)
        glEnableVertexAttribArray(i);
    uint32_t px = 0xFFFFFFFF;
    glGenTextures(1, &white);
    glBindTexture(GL_TEXTURE_2D, white);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, 1, 1, 0, GL_RGBA, GL_UNSIGNED_BYTE, &px);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
}

static uint32_t argb_to_rgba(uint32_t c)
{
    /* the attribute reads bytes r g b a */
    return ((c >> 16) & 255) | (((c >> 8) & 255) << 8) | ((c & 255) << 16) | ((c >> 24) << 24);
}

void render_tris(const struct rvert *v, unsigned n, const struct rdraw *mode)
{
    if (!verts || nverts + n > MAX_VERTS || ndraws >= MAX_DRAWS || n == 0)
        return;
    struct rdraw *last = ndraws ? &draws[ndraws - 1] : 0;
    if (last && last->first + last->count == nverts && !memcmp((const char *)last + 8, (const char *)mode + 8, sizeof *mode - 8)) {
        last->count += n;
    } else {
        draws[ndraws] = *mode;
        draws[ndraws].first = nverts;
        draws[ndraws].count = n;
        ndraws++;
    }
    for (unsigned i = 0; i < n; i++) {
        verts[nverts] = v[i];
        verts[nverts].argb = argb_to_rgba(v[i].argb);
        verts[nverts].offset = argb_to_rgba(v[i].offset);
        nverts++;
    }
}

static const GLenum blend_factor[8] = {GL_ZERO, GL_ONE, GL_DST_COLOR, GL_ONE_MINUS_DST_COLOR,
                                       GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA, GL_DST_ALPHA, GL_ONE_MINUS_DST_ALPHA};

static void draw_pass(int translucent)
{
    for (unsigned i = 0; i < ndraws; i++) {
        struct rdraw *d = &draws[i];
        if ((d->blend == 2) != translucent)
            continue;
        glBindTexture(GL_TEXTURE_2D, d->texture ? d->texture : white);
        GLint filter = d->filter ? GL_LINEAR : GL_NEAREST;
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, filter);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, filter);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, d->clamp_u ? GL_CLAMP_TO_EDGE : d->flip_u ? GL_MIRRORED_REPEAT : GL_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, d->clamp_v ? GL_CLAMP_TO_EDGE : d->flip_v ? GL_MIRRORED_REPEAT : GL_REPEAT);
        if (d->blend == 2) {
            glEnable(GL_BLEND);
            glBlendFunc(blend_factor[d->src & 7], blend_factor[d->dst & 7]);
        } else {
            glDisable(GL_BLEND);
        }
        glUniform1i(u_alpha_test, d->blend == 1);
        static const GLenum func[8] = {GL_NEVER, GL_LESS, GL_EQUAL, GL_LEQUAL, GL_GREATER, GL_NOTEQUAL, GL_GEQUAL, GL_ALWAYS};
        glEnable(GL_DEPTH_TEST);
        glDepthFunc(func[d->depth_func & 7]);
        glDepthMask(d->depth_write ? GL_TRUE : GL_FALSE);
        glDrawArrays(GL_TRIANGLES, d->first, d->count);
    }
}

void render_flush(int w, int h)
{
    if (getenv("PORT_DEBUG_DRAW")) {
        static unsigned long frame;
        if (++frame % 600 == 0)
            for (unsigned i = 0; i < ndraws; i++) {
                struct rdraw *d = &draws[i];
                float x0 = 1e9f, y0 = 1e9f, x1 = -1e9f, y1 = -1e9f;
                for (unsigned k = d->first; k < d->first + d->count; k++) {
                    if (verts[k].x < x0) x0 = verts[k].x;
                    if (verts[k].x > x1) x1 = verts[k].x;
                    if (verts[k].y < y0) y0 = verts[k].y;
                    if (verts[k].y > y1) y1 = verts[k].y;
                }
                fprintf(stderr, "draw %lu: tex %u blend %d n %u box %.0f,%.0f-%.0f,%.0f col %08X z %g\n", frame, d->texture, d->blend,
                        d->count, x0, y0, x1, y1, verts[d->first].argb, verts[d->first].z);
            }
    }
    /* the console's 4:3 picture, centred in the window */
    int vw = w, vh = h;
    if (w * 3 > h * 4)
        vw = h * 4 / 3;
    else
        vh = w * 3 / 4;
    glViewport((w - vw) / 2, (h - vh) / 2, vw, vh);
    if (ndraws) {
        glUseProgram(program);
        glUniform2f(u_screen, 640.0f, 480.0f);
        glUniform1i(u_tex, 0);
        glActiveTexture(GL_TEXTURE0);
        glBindVertexArray(vao);
        glBindBuffer(GL_ARRAY_BUFFER, vbo);
        glBufferData(GL_ARRAY_BUFFER, sizeof(struct rvert) * nverts, verts, GL_STREAM_DRAW);
        draw_pass(0);
        draw_pass(1);
        glDepthMask(GL_TRUE);
        glDisable(GL_BLEND);
    }
    nverts = ndraws = 0;
}
