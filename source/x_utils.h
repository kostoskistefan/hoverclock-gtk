#ifndef X_UTILS_H
#define X_UTILS_H

#include <gtkmm/window.h>

namespace XUtils
{
    void set_window_position(Gtk::Window *window, int x, int y);
    void set_always_on_top(Gtk::Window *window);
    void hide_window_in_taskbar_and_pager(Gtk::Window *window);
    void enable_click_through(Gtk::Window *window);

    int get_screen_width(Gtk::Window *window);
    int get_screen_height(Gtk::Window *window);
}

#endif // X_UTILS_H