#pragma once
#include "cmd.h"
#include "shape.h"
class scalecmd : public cmd
{
public:
    shape* obj;
    int z;
    scalecmd(shape* a, int z);
    void execute();
    void unexecute();
};





