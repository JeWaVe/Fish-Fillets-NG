/*
 * Copyright (C) 2004 Ivo Danihelka (ivo@danihelka.net)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */
#include "WiBox.h"

//-----------------------------------------------------------------
/**
 * Release all subwidgets.
 */
WiBox::~WiBox()
{
    t_widgets::iterator end = m_widgets.end();
    for (t_widgets::iterator i = m_widgets.begin(); i != end; ++i) {
        delete *i;
    }
}
//-----------------------------------------------------------------
/**
 * Draw all subwidgets.
 */
void
WiBox::drawOn(SDL_Surface *screen)
{
    t_widgets::iterator end = m_widgets.end();
    for (t_widgets::iterator i = m_widgets.begin(); i != end; ++i) {
        (*i)->drawOn(screen);
    }
}
//-----------------------------------------------------------------
/**
 * Let all subwidgets to react on button press.
 */
void
WiBox::own_mouseButton(const MouseStroke &stroke)
{
    t_widgets::iterator end = m_widgets.end();
    for (t_widgets::iterator i = m_widgets.begin(); i != end; ++i) {
        (*i)->mouseButton(stroke);
    }
}

