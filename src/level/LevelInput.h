#ifndef HEADER_LEVELINPUT_H
#define HEADER_LEVELINPUT_H

class Level;
class Keymap;
class KeyStroke;

#include "GameInput.h"

/**
 * Handle input for level.
 */
class LevelInput : public GameInput {
    private:
        static const int KEY_SWITCH = 101;
        static const int KEY_SAVE = 102;
        static const int KEY_LOAD = 103;
        static const int KEY_RESTART = 104;
        static const int KEY_SHOW_STEPS = 105;
        static const int KEY_HELP = 106;
    private:
        Level *getLevel();
        void toggleShowSteps();
    protected:
        virtual void specKey(int keyIndex);
        virtual void specStroke(const KeyStroke &stroke);
    public:
        LevelInput(Level *level);
        virtual void mouseEvent(const MouseStroke &buttons);
};

#endif
