#include <stdint.h>
#include <stddef.h>
#include <limine.h>

#include <graphics.h>
#include <console.h>
#include <hardfonts/classic.h>
#include <gdt.h>
#include <stack.h>

#define FONT_SIZE   2
 
// The Limine requests can be placed anywhere, but it is important that
// the compiler does not optimise them away, so, usually, they should
// be made volatile or equivalent.

static volatile struct limine_framebuffer_request framebuffer_request = {
    .id = LIMINE_FRAMEBUFFER_REQUEST,
    .revision = 0
};
 
// Halt and catch fire function.
static void hcf(void) {
    asm ("cli");
    for (;;) {
        asm ("hlt");
    }
}
 
/*!
Entry point of kernel. Everything is set up here.
*/
void _start(void) {
    // Ensure we got a framebuffer.
    if (framebuffer_request.response == NULL
     || framebuffer_request.response->framebuffer_count < 1) {
        hcf();
    }
 
    // Fetch the first framebuffer.
    // Note: we assume the framebuffer model is RGB with 32-bit pixels.
    struct limine_framebuffer *framebuffer = framebuffer_request.response->framebuffers[0];

    gdt_init();
    //tss_init();

    __init_graphics__(framebuffer);
    drawBorder(20);

    __init_console__(framebuffer->width, framebuffer->height,
                        40, 40, 1, 1, 2);

    set_color(0x44eeaa);

    printf("COS 0.0%d", 7);

    set_color(0xddeecc);

    printf("\n\nHello, World!");
 
    // We're done, just hang...
    hcf();
}