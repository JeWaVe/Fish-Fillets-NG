/*
 * Copyright (C) 2004 Ivo Danihelka (ivo@danihelka.net)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */
#include "IDrawer.h"

#include "VideoAgent.h"

//-----------------------------------------------------------------
/**
 * Register to drawers list.
 */
IDrawer::IDrawer()
{
    VideoAgent::agent()->acceptDrawer(this);
}
//-----------------------------------------------------------------
/**
 * Remove oneself from drawes list.
 */
IDrawer::~IDrawer()
{
    VideoAgent::agent()->removeDrawer(this);
}

