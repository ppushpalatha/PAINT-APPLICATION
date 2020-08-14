#include "movecmd.h"
#include "shape.h"
movecmd::movecmd(shape* s, int x, int y)
{
   this->obj = s;
	this->x = x;
	this->y = y;
}

void movecmd::execute()
{
	obj->move(x, y);
}

void movecmd::unexecute()
{
	obj->unmove(x, y);
}


