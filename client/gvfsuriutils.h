/* GIO - GLib Input, Output and Streaming Library
 * 
 * Copyright (C) 2006-2007 Red Hat, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * Author: Alexander Larsson <alexl@redhat.com>
 */

#ifndef __G_VFS_URI_UTILS_H__
#define __G_VFS_URI_UTILS_H__

#include <glib.h>

G_BEGIN_DECLS

typedef struct {
  char *scheme;
  char *userinfo;
  char *host;
  int port; /* -1 => not in uri */
  char *path;
  char *query;
  char *fragment;
} GDecodedUri;

char *       g_vfs_encode_uri                (GDecodedUri *decoded,
					      gboolean     allow_utf8);
void         g_vfs_decoded_uri_free          (GDecodedUri *decoded);
GDecodedUri *g_vfs_decode_uri                (const char  *uri);
GDecodedUri *g_vfs_decoded_uri_new           (void);


G_END_DECLS

#endif /* __G_VFS_URI_UTILS_H__ */
