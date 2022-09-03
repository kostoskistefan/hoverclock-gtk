#include "x_utils.h"
#include <gdk/x11/gdkx.h>
#include <X11/Xlib.h>

void XUtils::set_window_position(Gtk::Window *window, int x, int y)
{
    Window xWindow = gdk_x11_surface_get_xid(window->get_surface()->gobj());
    Display *display = gdk_x11_display_get_xdisplay(window->get_display()->gobj());

    XMoveWindow(display, xWindow, x, y);
}

void set_net_wm_state(Gtk::Window *window, std::string atomName)
{
    Window xWindow = gdk_x11_surface_get_xid(window->get_surface()->gobj());
    Display *display = gdk_x11_display_get_xdisplay(window->get_display()->gobj());

    XClientMessageEvent xclient;
    
    xclient.type = ClientMessage;
    xclient.window = xWindow;
    xclient.message_type = XInternAtom(display, "_NET_WM_STATE", 1);
    xclient.format = 32;
    xclient.data.l[0] = 1;
    xclient.data.l[1] = XInternAtom(display, atomName.c_str(), 1);
    xclient.data.l[2] = 0;
    xclient.data.l[3] = 0;
    xclient.data.l[4] = 0;

    XSendEvent(display,
               XDefaultRootWindow(display),
               false,
               SubstructureRedirectMask | SubstructureNotifyMask,
               (XEvent *) &xclient);

    XFlush(display);
}

void set_override_redirect(Gtk::Window *window, bool value)
{
    Window xWindow = gdk_x11_surface_get_xid(window->get_surface()->gobj());
    Display *display = gdk_x11_display_get_xdisplay(window->get_display()->gobj());

    XSetWindowAttributes windowAttributes;
    windowAttributes.override_redirect = value;
    XChangeWindowAttributes(display, xWindow, CWOverrideRedirect, &windowAttributes);

    XUnmapWindow(display, xWindow);
    XMapWindow(display, xWindow);
}

void XUtils::set_always_on_top(Gtk::Window *window)
{
    set_net_wm_state(window, "_NET_WM_STATE_ABOVE");
    set_net_wm_state(window, "_NET_WM_STATE_STAYS_ON_TOP");
    set_override_redirect(window, true);
}

void XUtils::hide_window_in_taskbar_and_pager(Gtk::Window *window)
{
    set_net_wm_state(window, "_NET_WM_STATE_SKIP_TASKBAR");
    set_net_wm_state(window, "_NET_WM_STATE_SKIP_PAGER");
}

int XUtils::get_screen_width(Gtk::Window *window)
{
    Display *display = gdk_x11_display_get_xdisplay(window->get_display()->gobj());
    return DisplayWidth(display, DefaultScreen(display));
}

int XUtils::get_screen_height(Gtk::Window *window)
{
    Display *display = gdk_x11_display_get_xdisplay(window->get_display()->gobj());
    return DisplayHeight(display, DefaultScreen(display));
}
