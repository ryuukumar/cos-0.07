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
 
// The following will be our kernel's entry point.
// If renaming _start() to something else, make sure to change the
// linker script accordingly.
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
    set_color(0xddeecc);

    printf("\t\tCOS 0.07\n\nHello, World!\n\n");
 
    // We're done, just hang...
    hcf();
}