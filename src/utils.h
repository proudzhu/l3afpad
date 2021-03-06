/*
 *  L3afpad - GTK+ based simple text editor
 *  Copyright (C) 2004-2005 Tarot Osuji
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef _UTILS_H
#define _UTILS_H

#ifdef HAVE_CONFIG_H
#	include "config.h"
#endif

gchar *gedit_utils_get_stdin(void);
GtkWidget *create_button_with_stock_image(const gchar *text, const gchar *stock_id);
void update_combo_data(GtkWidget *entry, GList **history);
GtkWidget *create_combo_with_history(GList **history);

#endif /* _UTILS_H */
