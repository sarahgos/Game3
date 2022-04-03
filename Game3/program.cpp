#include "splashkit.h"

int main()
{
    open_window("game3", 1000, 800);
    window_toggle_border("game3");

    while (not quit_requested() && (not key_down(ESCAPE_KEY)))
    {
        process_events();

        clear_screen();

        draw_text("This is Game 3", COLOR_BLACK, 50.0, 50.0);

        refresh_screen(60);
    }

    return 0;
}