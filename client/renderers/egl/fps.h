/*
Looking Glass - KVM FrameRelay (KVMFR) Client
Copyright (C) 2017 Geoffrey McRae <geoff@hostfission.com>
https://looking-glass.hostfission.com

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA
*/

#pragma once

#include <stdbool.h>

#include "lg-fonts.h"

typedef struct EGL_FPS EGL_FPS;

bool egl_fps_init(EGL_FPS ** fps, const LG_Font * font, LG_FontObj fontObj);
void egl_fps_free(EGL_FPS ** fps);

void egl_fps_update(EGL_FPS * fps, const float avgUPS, const float avgFPS);
void egl_fps_render(EGL_FPS * fps, const float screenWidth, const float screenHeight);