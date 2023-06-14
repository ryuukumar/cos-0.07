#include <stdint.h>
#include <stddef.h>
#include <graphics.h>

static struct limine_framebuffer * framebuffer;
static size_t frmw, frmh;
uint32_t *fb_ptr;

void __init_graphics__ (struct limine_framebuffer * buf) {
	framebuffer = buf;
	frmw = framebuffer->width;
	frmh = framebuffer->height;
	fb_ptr = framebuffer->address;
}

struct posn itopos (int idx) {
	struct posn ret;
	ret.x = idx%framebuffer->width;
	ret.y = idx/framebuffer->width;
	return ret;
}

inline size_t postoi (int x, int y) {
	return x + y * frmw;
}

void putPixel (uint32_t color, int x, int y) {
	fb_ptr[postoi(x, y)] = color;
}


void renderGlyph(unsigned char* glyph, int gh, int gw, size_t posx, size_t posy) {
	for (int i=0; i<gh; i++)
		for (int j=0; j<gw; j++)
			putPixel(0xffffff*glyph[i*gw+j], posx+j, posy+i);
}

void drawBorder (int padding) {
	for (int i=0; i<frmw*frmh; i++) {
		if (i%frmw == padding || i%frmw == frmw-padding) fb_ptr[i] = 0xffffff;
		else if (i/frmw == padding || i/frmw == frmh-padding) fb_ptr[i] = 0xffffff;
	}
}