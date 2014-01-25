/*
 * Copyright (C) 2014 Sébastien Helleu <flashcode@flashtux.org>
 *
 * This file is part of WeeChat, the extensible chat client.
 *
 * WeeChat is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * WeeChat is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with WeeChat.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __WEECHAT_TRIGGER_BUFFER_H
#define __WEECHAT_TRIGGER_BUFFER_H 1

#define TRIGGER_BUFFER_NAME "monitor"

struct t_gui_buffer *trigger_buffer;

extern void trigger_buffer_display_hashtable (const char *name,
                                              struct t_hashtable *hashtable);
extern void trigger_buffer_set_callbacks ();
extern void trigger_buffer_open (int switch_to_buffer);

#endif /* __WEECHAT_TRIGGER_BUFFER_H */
