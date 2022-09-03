#ifndef CLOCK_H
#define CLOCK_H

#include <string>

namespace Clock
{
    std::string get_time(std::string format);
    std::string get_date(std::string format);
}

#endif // CLOCK_H