#ifndef CONSOLE_H
#define CONSOLE_H

#include <stddef.h>
#include <stdint.h>

void __init_console__ (size_t, size_t, size_t, size_t, size_t, size_t, size_t);
void set_color (uint32_t);
void update();
void putchar(unsigned char);

#endif