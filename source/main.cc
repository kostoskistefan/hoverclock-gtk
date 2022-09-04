#include <gtkmm/window.h>
#include <gtkmm/application.h>
#include "hoverclock_window.h"
#include "run_guard.h"

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
    if (Guard::is_instance_running())
    {
        fprintf(stderr, "\033[1;31m[-]\033[0m Another instance is already running!\n");
        exit(2);
    }

    auto app = Gtk::Application::create("com.github.kostoskistefan.hoverclock-gtk");

    app->signal_activate().connect(sigc::bind(&on_activate, app));

    return app->run(argc, argv);
}
