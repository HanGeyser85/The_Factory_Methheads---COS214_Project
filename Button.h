#ifndef BUTTON_H
#define BUTTON_H
#include "Command.h"
using namespace std;

class Button
{
    private:
        Command* command;

    public:
        Button(Command*);
        void hit();
};
#endif