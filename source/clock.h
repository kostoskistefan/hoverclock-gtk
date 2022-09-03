#ifndef CLOCK_H
#define CLOCK_H

#include <gtkmm/window.h>

namespace Clock
{
    void initialize(Gtk::Window *window);
    std::string get_time(std::string format = "%H:%M");
    std::string get_date(std::string format = "%a %d %b");
}

#endif // CLOCK_H