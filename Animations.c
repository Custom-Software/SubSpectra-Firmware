░██████╗██╗░░░██╗██████╗░░██████╗██████╗░███████╗░█████╗░████████╗██████╗░░█████╗░
██╔════╝██║░░░██║██╔══██╗██╔════╝██╔══██╗██╔════╝██╔══██╗╚══██╔══╝██╔══██╗██╔══██╗
╚█████╗░██║░░░██║██████╦╝╚█████╗░██████╔╝█████╗░░██║░░╚═╝░░░██║░░░██████╔╝███████║
░╚═══██╗██║░░░██║██╔══██╗░╚═══██╗██╔═══╝░██╔══╝░░██║░░██╗░░░██║░░░██╔══██╗██╔══██║
██████╔╝╚██████╔╝██████╦╝██████╔╝██║░░░░░███████╗╚█████╔╝░░░██║░░░██║░░██║██║░░██║
╚═════╝░░╚═════╝░╚═════╝░╚═════╝░╚═╝░░░░░╚══════╝░╚════╝░░░░╚═╝░░░╚═╝░░╚═╝╚═╝░░╚═╝

#include <furi.h>
#include <gui/gui.h>
#include <math.h>

void funny_animation_draw(Canvas* canvas, uint32_t frame) {
    // Simple bouncing smiley for demo
    int x = (frame % 64);
    int y = 32 + (int)(10 * sinf(frame * 0.1f));
    canvas_draw_circle(canvas, x, y, 8);
    canvas_draw_dot(canvas, x-3, y-3);
    canvas_draw_dot(canvas, x+3, y-3);
    canvas_draw_line(canvas, x-3, y+3, x+3, y+3);

void funny_animation_draw(Canvas* canvas, uint32_t frame) {
    // Simple bouncing smiley for demo
    int x = (frame % 64);
    int y = 32 + (int)(10 * sinf(frame * 0.1f));
    canvas_draw_circle(canvas, x, y, 8);
    canvas_draw_dot(canvas, x-3, y-3);
    canvas_draw_dot(canvas, x+3, y-3);
    canvas_draw_line(canvas, x-3, y+3, x+3, y+3);
}

int32_t funny_animation_app(void* p) {
    FuriMessageQueue* event_queue = furi_message_queue_alloc(8, sizeof(uint32_t));
    Gui* gui = furi_record_open("gui");
    ViewPort* viewport = viewport_alloc();
    uint32_t frame = 0;

    viewport_set_callback(viewport, (ViewportCallback)funny_animation_draw, &frame);
    gui_add_viewport(gui, viewport, GuiLayerFullscreen);

    while(1) {
        frame++;
        furi_delay_ms(80);
        gui_request_redraw(gui);
    }

    // Cleanup omitted for brevity
    return 0;
}
