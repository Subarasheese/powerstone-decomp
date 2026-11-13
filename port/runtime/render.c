/* render.c: the game's pictures with OpenGL 3.3. The NAOMI library's drawing calls (nl*, the sprite and polygon
   submission) record what a frame draws; port_render_frame draws the records and clears them. */
#define GL_GLEXT_PROTOTYPES
#include <GL/gl.h>
#include <GL/glext.h>
#include <stdint.h>
#include <stdio.h>

#include "port.h"
#include "render.h"

static float background[3];

/* gfx_set_background_color(rgb): the colour the frame is cleared to (0x00RRGGBB) */
int32_t gfx_set_background(uint32_t rgb) __asm__("gfx_set_background_color");
int32_t gfx_set_background(uint32_t rgb)
{
    background[0] = ((rgb >> 16) & 255) / 255.0f;
    background[1] = ((rgb >> 8) & 255) / 255.0f;
    background[2] = (rgb & 255) / 255.0f;
    return 0;
}

void port_render_init(void)
{
    fprintf(stderr, "powerstone: OpenGL %s, %s\n", (const char *)glGetString(GL_VERSION), (const char *)glGetString(GL_RENDERER));
    render_setup();
}

void port_render_frame(int w, int h)
{
    glViewport(0, 0, w, h);
    glClearColor(background[0], background[1], background[2], 1.0f);
    glClearDepth(0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    render_flush(w, h);
}
