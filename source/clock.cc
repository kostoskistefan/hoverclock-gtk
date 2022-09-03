#include "clock.h"
#include "x_utils.h"
#include <chrono>
#include <iomanip>

void Clock::initialize(Gtk::Window *window)
{
    XUtils::set_always_on_top(window);
	XUtils::set_window_position(window, 1252, 694);
	XUtils::hide_window_in_taskbar_and_pager(window);
}

std::string get_raw_time_date(std::string format)
{
    time_t systemTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

	tm *localTime = std::localtime(&systemTime);
    
    std::ostringstream os;
    os << std::put_time(localTime, format.c_str());
    
    return os.str();
}

std::string Clock::get_time(std::string format)
{
    return get_raw_time_date(format);
}

std::string Clock::get_date(std::string format)
{
    return get_raw_time_date(format);
}
