/*
 * Copyright (C) 2009 Jens Georg <mail@jensge.org>.
 *
 * This file is part of Rygel.
 *
 * Rygel is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Rygel is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

using Rygel;
using Gee;

/**
 * This is an empty container used to satisfy Rygel if no mediadb could be
 * created, or for light-weight hierarchies where the intermediate levels
 * are not used.
 */
internal class Rygel.NullContainer : MediaContainer {
    public NullContainer (string          id,
                          MediaContainer? parent,
                          string          title) {
        Object (id : id,
                title : title,
                parent : parent,
                child_count : 0);
    }

    public NullContainer.root () {
        Object (id : "0",
                parent : null,
                title : "MediaExport",
                child_count : 0);
    }

    public override async MediaObjects? get_children (
                                                     uint         offset,
                                                     uint         max_count,
                                                     string       sort_criteria,
                                                     Cancellable? cancellable)
                                                     throws Error {
        return new MediaObjects ();
    }

    public override async MediaObject? find_object (string id,
                                                    Cancellable? cancellable)
                                                    throws Error {
        return null;
    }
}
