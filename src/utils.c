#include <utils.h>

#include <gtk/gtk.h>
#include <stdlib.h>

void xapp_error(const char *when, int code)
{
    g_printerr("Something went wrong when: '%s'. Please report errors like this.\n", when);

    if (code == -1)
        return;

    exit(code);
}

void set_window_icon(GtkWindow *window)
{
    GdkPixbuf* pixbuf = gdk_pixbuf_new_from_resource("/res/icon.png", NULL);

	gtk_window_set_icon(window, pixbuf);
}
