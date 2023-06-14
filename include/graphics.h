#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <limine.h>

struct posn {
	size_t x;
	size_t y;
};

extern void __init_graphics__ (struct limine_framebuffer *);
struct posn itopos(int);

void drawBorder(int);

#endif