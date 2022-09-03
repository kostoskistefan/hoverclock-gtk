#include "hoverclock_window.h"
#include <gtkmm/cssprovider.h>
#include <glibmm/main.h>
#include "clock.h"

HoverclockWindow::HoverclockWindow(
	BaseObjectType *cobject,
	const std::shared_ptr<Gtk::Builder> &builder)
	: Gtk::ApplicationWindow(cobject), builder(builder)
{
	this->window = Glib::wrap(&cobject->parent_instance);

	this->timeLabel = this->builder->get_widget<Gtk::Label>("timeLabel");
	this->dateLabel = this->builder->get_widget<Gtk::Label>("dateLabel");

	load_style_sheet();
	update_clock();

	signal_realize().connect(sigc::bind(&Clock::initialize, this->window));
    Glib::signal_timeout().connect_seconds(sigc::mem_fun(*this, &HoverclockWindow::update_clock), 1);
}

bool HoverclockWindow::update_clock()
{
	this->timeLabel->set_label(Clock::get_time());
	this->dateLabel->set_label(Clock::get_date());
	
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