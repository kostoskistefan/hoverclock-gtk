#ifndef UI_H
#define UI_H

#include <gtkmm/window.h>
#include "settings.h"

namespace UI
{
    enum Position {
        TOP_LEFT,
        TOP_RIGHT,
        BOTTOM_LEFT,
        BOTTOM_RIGHT
    };

    void initialize(Gtk::Window *window);
    void update_position(Gtk::Window *window, Settings *settings);
}

#endif // UI_H