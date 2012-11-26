/*
 * Copyright (C) 2011 Red Hat, Inc.
 * Copyright (C) 2010 Nokia Corporation.
 *
 * Author: Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
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

using Soup;
using GUPnP;

internal errordomain Rygel.ClientHacksError {
    NA
}

internal abstract class Rygel.ClientHacks : GLib.Object {
    private const string CORRECT_OBJECT_ID = "ObjectID";

    public unowned string object_id { get;
                                      protected set;
                                      default = CORRECT_OBJECT_ID; }
    protected Regex agent_regex;

    protected ClientHacks (string   agent,
                           Message? message)
                           throws ClientHacksError {
        try {
            this.agent_regex = new Regex (agent,
                                          RegexCompileFlags.CASELESS |
                                          RegexCompileFlags.RAW,
                                          0);
        } catch (RegexError error) {
            // This means subclasses did not provide a proper regular expression
            assert_not_reached ();
        }

        if (message != null) {
            this.check_headers (message.request_headers);
        }
    }

    public static ClientHacks create (Message? message)
                                      throws ClientHacksError {
        try {
            return new PanasonicHacks (message);
        } catch (Error error) { }

        try {
            return new XBoxHacks (message);
        } catch (Error error) { }

        try {
            return new WMPHacks (message);
        } catch (Error error) { }

        return new XBMCHacks (message);
    }

    public virtual void translate_container_id (MediaQueryAction action,
                                                ref string       container_id) {}

    public virtual void apply (MediaItem item) {}

    public virtual void filter_sort_criteria (ref string sort_criteria) {}

    public virtual async MediaObjects? search
                                        (SearchableContainer container,
                                         SearchExpression?   expression,
                                         uint                offset,
                                         uint                max_count,
                                         out uint            total_matches,
                                         string              sort_criteria,
                                         Cancellable?        cancellable)
                                         throws Error {
        return yield container.search (expression,
                                       offset,
                                       max_count,
                                       out total_matches,
                                       sort_criteria,
                                       cancellable);
    }

    private void check_headers (MessageHeaders headers)
                                          throws ClientHacksError {
        var agent = headers.get_one ("User-Agent");
        if (agent == null || !(this.agent_regex.match (agent))) {
            throw new ClientHacksError.NA (_("Not Applicable"));
        }
    }
}
