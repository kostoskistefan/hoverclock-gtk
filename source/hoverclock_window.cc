#include "hoverclock_window.h"
#include <gtkmm/cssprovider.h>
#include <glibmm/main.h>
#include "clock.h"
#include "ui.h"

HoverclockWindow::HoverclockWindow(
	BaseObjectType *cobject,
	const std::shared_ptr<Gtk::Builder> &builder)
	: Gtk::ApplicationWindow(cobject), builder(builder)
{
	this->window = Glib::wrap(&cobject->parent_instance);

	this->timeLabel = this->builder->get_widget<Gtk::Label>("timeLabel");
	this->dateLabel = this->builder->get_widget<Gtk::Label>("dateLabel");

	settings = new Settings();

	load_style_sheet();
	update_clock();

	signal_realize().connect(sigc::bind(&UI::initialize, this->window));
    Glib::signal_timeout().connect_seconds(sigc::mem_fun(*this, &HoverclockWindow::update_clock), 1);

	// TODO: Not sure if this is a right approach of calling the update_position function,
	// because all other methods don't let me get the width and height of the window inside
	// the update_position function.
	Glib::signal_idle().connect_once(sigc::bind(&UI::update_position, this->window, this->settings));

	this->set_opacity(settings->get_double("opacity"));
	this->timeLabel->set_visible(settings->get_boolean("show_time"));
	this->dateLabel->set_visible(settings->get_boolean("show_date"));
}

bool HoverclockWindow::update_clock()
{
	this->timeLabel->set_label(Clock::get_time(settings->get_string("time_format")));
	this->dateLabel->set_label(Clock::get_date(settings->get_string("date_format")));
	
	return true;
}

void HoverclockWindow::load_style_sheet()
{
	auto provider = Gtk::CssProvider::create();
	provider->load_from_resource("/com/github/kostoskistefan/hoverclock-gtk/hoverclock.css");

	this->get_style_context()->add_provider_for_display(
		this->get_display(), provider, GTK_STYLE_PROVIDER_PRIORITY_USER);
}


std::unique_ptr<HoverclockWindow> HoverclockWindow::create()
{
	auto builder = Gtk::Builder::create_from_resource("/com/github/kostoskistefan/hoverclock-gtk/hoverclock.ui");

	HoverclockWindow *window = Gtk::Builder::get_widget_derived<HoverclockWindow>(builder, "window");

	if (!window)
		throw std::runtime_error("Failed to acquire the main window from hoverclock.ui");

	return std::unique_ptr<HoverclockWindow>(window);
}