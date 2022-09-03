#include <gtkmm/window.h>
#include <gtkmm/application.h>
#include "hoverclock_window.h"

static void on_activate(std::shared_ptr<Gtk::Application> &app)
{
    static std::unique_ptr<Gtk::Window> window;

    if (!window)
    {
        window = HoverclockWindow::create();
        window->property_application() = app;
        app->add_window(*window);
    }

    window->show();
}

int main(int argc, char *argv[])
{
    auto app = Gtk::Application::create("com.github.kostoskistefan.hoverclock-gtk");

    app->signal_activate().connect(sigc::bind(&on_activate, app));

    return app->run(argc, argv);
}
