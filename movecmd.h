#pragma once
#include "shape.h"
#include "cmd.h"
class movecmd : public cmd
{
    int x, y;
public:
    shape* obj;
    movecmd(shape* s, int x, int y);
    void execute();
    void unexecute();

};