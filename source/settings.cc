#include "settings.h"
#include <giomm.h>

Settings::Settings()
{
    configFile = Glib::KeyFile::create();

    try
    {
        configFile->load_from_file(get_config_file());
    }

    catch (const Glib::FileError &e)
    {
        if (e.code() == Glib::FileError::NO_SUCH_ENTITY)
        {
            Gio::File::create_for_path(get_config_path())->make_directory_with_parents();
            save();
        }
    }
}

std::string Settings::get_config_path()
{
    return Glib::build_filename(g_get_user_config_dir(), "hoverclock-gtk");
}

std::string Settings::get_config_file()
{
    return Glib::build_filename(g_get_user_config_dir(), "hoverclock-gtk", "hoverclock.conf");
}

void Settings::load()
{
    configFile->load_from_file(get_config_path());
}

void Settings::save()
{
    configFile->set_integer("General", "position", 3);
    configFile->set_integer("General", "vertical_margin", 40);
    configFile->set_integer("General", "horizontal_margin", 40);

    configFile->set_double("General", "opacity", 0.75);

    configFile->set_boolean("General", "show_time", true);
    configFile->set_boolean("General", "show_date", true);

    configFile->set_string("General", "time_format", "%H:%M");
    configFile->set_string("General", "date_format", "%a %d %b");

    configFile->save_to_file(get_config_file());
}

std::string Settings::get_string(std::string setting)
{
    return configFile->get_string("General", setting);
}

bool Settings::get_boolean(std::string setting)
{
    return configFile->get_boolean("General", setting);
}

int Settings::get_integer(std::string setting)
{
    return configFile->get_integer("General", setting);
}

double Settings::get_double(std::string setting)
{
    return configFile->get_double("General", setting);
}
