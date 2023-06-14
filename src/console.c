#include <stddef.h>
#include <stdint.h>

#include <hardfonts/classic.h>
#include <memory.h>
#include <console.h>

unsigned char bufferstr [60*40];		//TODO: replace this with malloc when implemented
unsigned char* buffer = bufferstr;
size_t x, y, xs, ys, xsp, ysp, xc, yc, fs;
size_t idx = 0;

uint32_t color = 0xeeeeee;

// starts a console with the classic font
void __init_console__ (size_t x_screen, size_t y_screen, size_t x_pad, size_t y_pad, size_t x_spc, size_t y_spc, size_t font_size) {
	x = x_screen - 2 * x_pad;
	y = y_screen - 2 * y_pad;

	xc = (x/((5+x_spc)*font_size)>60) ? 60 : x/((5+x_spc)*font_size);
	yc = (y/((8+y_spc)*font_size)>40) ? 40 : y/((8+y_spc)*font_size);

	xsp = x_spc;
	ysp = y_spc;

	xs = x_pad;
	ys = y_pad;

	fs = font_size;

	for (int i=0; i<xc*yc; i++) buffer[i] = 32;
}

void set_color(uint32_t c) {
	color = c;
}

void update() {
	for (int i=0; i<yc; i++) {
		for (int j=0; j<xc; j++) {
			renderGlyph(glyph(buffer[i*xc+j]), 
                    8, 5, xs+(fs*j*(5+xsp)), 
                    ys+(fs*i*(8+ysp)), fs, color);
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
