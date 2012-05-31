/*
 * Copyright (C) 2005 Ross Burton <ross@burtonini.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#include <libwnck/libwnck.h>

/* Global state */


/**
 * The list of s-expressions to execute.
 */
extern GList *sexps;

/**
 * If we are in debug mode.
 */
extern gboolean debug;

typedef struct {
  WnckWindow *window;
} Context;

/**
 * Matching context
 */
extern Context context;

/**
 * The main loop.
 */
extern GMainLoop *loop;
