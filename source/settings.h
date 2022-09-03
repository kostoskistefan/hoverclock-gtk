#ifndef SETTINGS_H
#define SETTINGS_H

#include <glibmm.h>
#include <string>

class Settings
{
public:
    Settings();

    void load();
    void save();

    int get_integer(std::string setting);
    bool get_boolean(std::string setting);
    double get_double(std::string setting);
    std::string get_string(std::string setting);

private:
    std::shared_ptr<Glib::KeyFile> configFile;
    std::string get_config_file();
    std::string get_config_path();
};

#endif // SETTINGS_H