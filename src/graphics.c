#include <stdint.h>
#include <stddef.h>
#include <graphics.h>

static struct limine_framebuffer * framebuffer;
static size_t frmw, frmh;

void __init_graphics__ (struct limine_framebuffer * buf) {
	framebuffer = buf;
	frmw = framebuffer->width;
	frmh = framebuffer->height;
}

struct posn itopos (int idx) {
	struct posn ret;
	ret.x = idx%framebuffer->width;
	ret.y = idx/framebuffer->width;
	return ret;
}

void drawBorder (int padding) {
	uint32_t *fb_ptr = framebuffer->address;
	for (int i=0; i<frmw*frmh; i++) {
		if (i%frmw == padding || i%frmw == frmw-padding) fb_ptr[i] = 0xffffff;
		else if (i/frmw == padding || i/frmw == frmh-padding) fb_ptr[i] = 0xffffff;
	}
}