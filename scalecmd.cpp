#include "scalecmd.h"
#include "scalecmd.h"
#include"shape.h"
scalecmd::scalecmd(shape* a, int z)
{
	this->obj = a;
	this->z = z;
}

void scalecmd::execute()
{
	obj->scale(z);
}

void scalecmd::unexecute()
{
  obj->unscale(z);

}