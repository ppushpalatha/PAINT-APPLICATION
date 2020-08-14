#include "rotatecmd.h"
#include "shape.h"
rotatecmd::rotatecmd(shape* a)
{
	this->obj= a;
}

void rotatecmd::execute()
{
	obj->rotate();
}

void rotatecmd::unexecute()
{
	obj->unrotate();
}