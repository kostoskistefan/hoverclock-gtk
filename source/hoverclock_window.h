#ifndef HOVERCLOCK_WINDOW_H
#define HOVERCLOCK_WINDOW_H

#include <gtkmm/applicationwindow.h>
#include <gtkmm/builder.h>
#include <gtkmm/label.h>
#include "settings.h"

class HoverclockWindow : public Gtk::ApplicationWindow
{
public:
	HoverclockWindow(
		BaseObjectType *cobject,
		const std::shared_ptr<Gtk::Builder> &builder);

	static std::unique_ptr<HoverclockWindow> create();

protected:
    bool update_clock();

private:
	Settings *settings;
	Gtk::Window *window;
    std::shared_ptr<Gtk::Builder> builder;
	Gtk::Label *timeLabel;
	Gtk::Label *dateLabel;

	void initialize();
	void load_style_sheet();
};

#endif // HOVERCLOCK_WINDOW_H