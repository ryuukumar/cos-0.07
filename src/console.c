#include <stddef.h>
#include <stdint.h>

#include <memory.h>
#include <console.h>

#include <console.h>

unsigned char bufferstr [40*40];		//TODO: replace this with malloc when implemented
unsigned char* buffer = bufferstr;
size_t x, y, xs, ys, xc, yc, fs;
size_t idx = 0;

uint32_t color = 0xeeeeee;

// starts a console with the classic font
void __init_console__ (size_t x_screen, size_t y_screen, size_t x_pad, size_t y_pad, size_t font_size) {
	x = x_screen - 2 * x_pad;
	y = y_screen - 2 * y_pad;

	xc = (x/(5*font_size)>40) ? 40 : x/(5*font_size);
	yc = (y/(8*font_size)>40) ? 40 : y/(8*font_size);

	xs = x_pad;
	ys = y_pad;

	fs = font_size;

	for (int i=0; i<xc*yc; i++) buffer[i] = 0;
}

void set_color(uint32_t c) {
	color = c;
}

void update() {
	for (int i=0; i<yc; i++) {
		for (int j=0; j<xc; j++) {
			renderGlyph(glyph(buffer[i*8+j]), 
                    8, 5, xs+(fs*j*6), 
                    ys+(i*8), fs, color);
		}
	}
}

void registerChar(unsigned char rc, int index) {
	buffer[index] = rc;
}

void putchar(unsigned char rc) {
	registerChar(rc, idx);
	idx++; update();
}
