#ifndef COMMUNICATIONS_H
#define COMMUNICATIONS_H

class Communications
{
public:
    Communications();
    virtual void notify(Satellite *, string);
};

#endif