#ifndef HEADER_WIPICTURE_H
#define HEADER_WIPICTURE_H

class Path;

#include "IWidget.h"

/**
 * Picture widget.
 */
class WiPicture : public IWidget {
    private:
        SDL_Surface *m_surface;
    public:
        WiPicture(const Path &picture);
        virtual ~WiPicture();
        virtual int getW() const { return m_surface->w; }
        virtual int getH() const { return m_surface->h; }

        virtual void drawOn(SDL_Surface *screen);
};

#endif
