#include "Button.h"
using namespace std;

Button::Button(Command* c) : command(c)
{

}

void Button::hit()
{
    command->execute();
}