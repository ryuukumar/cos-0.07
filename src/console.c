#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdarg.h>

#include <hardfonts/classic.h>
#include <memory.h>
#include <console.h>
#include <string.h>

#define 	CONSOLE_HEIGHT		40
#define		CONSOLE_WIDTH		60

bool		PUTCH_UPDATE = 		false;
size_t		TAB_WIDTH = 		4;

unsigned char bufferstr [CONSOLE_HEIGHT*CONSOLE_WIDTH];		//TODO: replace this with malloc when implemented
unsigned char* buffer = bufferstr;
size_t x, y, xs, ys, xsp, ysp, xc, yc, fs;
size_t idx = 0;

uint32_t color = 0xeeeeee;

// starts a console with the classic font
void __init_console__ (size_t x_screen, size_t y_screen, size_t x_pad, size_t y_pad, size_t x_spc, size_t y_spc, size_t font_size) {
	x = x_screen - 2 * x_pad;
	y = y_screen - 2 * y_pad;

	xc = (x/((5+x_spc)*font_size)>CONSOLE_WIDTH) ? CONSOLE_WIDTH : x/((5+x_spc)*font_size);
	yc = (y/((8+y_spc)*font_size)>CONSOLE_HEIGHT) ? CONSOLE_HEIGHT : y/((8+y_spc)*font_size);

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
	switch (rc) {
		case '\n':
			idx = xc*((idx/xc)+1);
			return;
	}
	registerChar(rc, idx);
	idx++;
	if (PUTCH_UPDATE) update();
}

void putstr(const char* str, size_t len) {
	for (size_t i=0; i<len; i++) putchar(str[i]);
	update();
}

void printf(const char* format, ...) {
	va_list args;
	va_start (args, format);

	bool buf = PUTCH_UPDATE;
	PUTCH_UPDATE = false;
	for (size_t i=0; i<strlen(format); i++) {
		switch(format[i]) {
			case '%':
				{
					switch (format[++i]) {
						case 's':
						{
							const char* str = va_arg(args, const char*);
							putstr(str, strlen(str));
						} break;
						case 'd':
						case 'i':
						{
							char buf [33] = {0};
							itos(va_arg(args, int32_t), buf, 10);
							putstr(buf, strlen(buf));
						} break;
						case 'x':
						{
							char buf [33] = {0};
							itos(va_arg(args, int32_t), buf, 16);
							putstr(buf, strlen(buf));
						} break;
						default:
						{
							putchar('%');
							putchar(format[i]);
						}
					}
				} break;
			case '\t':
				idx += (TAB_WIDTH - idx % TAB_WIDTH);
				break;
			default:
				putchar(format[i]);
		}
	}
	update();
	PUTCH_UPDATE = buf;
}