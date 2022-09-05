#include "ui.h"
#include "x_utils.h"

void UI::initialize(Gtk::Window *window)
{
    XUtils::set_always_on_top(window);
    XUtils::hide_window_in_taskbar_and_pager(window);
    XUtils::enable_click_through(window);
}

void UI::update_position(Gtk::Window *window, Settings *settings)
{    
    int position = settings->get_integer("position");

    int verticalMargin = settings->get_integer("vertical_margin");
    int horizontalMargin = settings->get_integer("horizontal_margin");

    int screenWidth = XUtils::get_screen_width(window);
    int screenHeight = XUtils::get_screen_height(window);

    switch (position)
    {
    case UI::Position::TOP_LEFT:
        XUtils::set_window_position(
            window,
            horizontalMargin,
            verticalMargin);
        break;
    case UI::Position::TOP_RIGHT:
        XUtils::set_window_position(
            window,
            screenWidth - horizontalMargin - window->get_allocated_width(),
            verticalMargin);
        break;
    case UI::Position::BOTTOM_LEFT:
        XUtils::set_window_position(
            window,
            horizontalMargin,
            screenHeight - verticalMargin - window->get_allocated_height());
        break;
    case UI::Position::BOTTOM_RIGHT:
        XUtils::set_window_position(
            window,
            screenWidth - horizontalMargin - window->get_allocated_width(),
            screenHeight - verticalMargin - window->get_allocated_height());
        break;
    default:
        XUtils::set_window_position(
            window,
            screenWidth - horizontalMargin - window->get_allocated_width(),
            screenHeight - verticalMargin - window->get_allocated_height());
        break;
    }
}