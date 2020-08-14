#pragma once
#include "cmd.h"
#include "shape.h"
class rotatecmd : public cmd
{
public:
    shape* obj;
    int l, b;
    rotatecmd(shape* a);
    void execute();
    void unexecute();

};

