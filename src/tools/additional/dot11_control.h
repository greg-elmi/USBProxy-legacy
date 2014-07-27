/*
 * Copyright 2014 Dominic Spill
 *
 * This file is part of USBProcy.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#include "Dot11_Interface.h"
#include <libusb-1.0/libusb.h>

struct libusb_device_handle* find_dot11_device();

int cmd_set_timeout(struct libusb_device_handle* devh, int timeout);

int cmd_get_timeout(struct libusb_device_handle* devh);
