#include "square.h"
#include "shape.h"
#include<iostream>
using namespace std;
square::square(int l, int x, int y)
{
	length = l;
	x_coordinate = x;
	y_coordinate = y;
}

void square::move(int x, int y)
{
	x_coordinate = x_coordinate+x;
	y_coordinate=y_coordinate+ y;
}

void square::unmove(int x, int y)
{
	x_coordinate = x_coordinate-x;
	y_coordinate =y_coordinate-y;
}

void square::scale(int n)
{
	length = length+ n;
}

void square::unscale(int n)
{
	length = length -n;
}

void square::rotate()
{
	x_coordinate = x_coordinate + y_coordinate;
	y_coordinate = x_coordinate - y_coordinate;
	x_coordinate = x_coordinate - y_coordinate;
}

void square::unrotate()
{
	x_coordinate = x_coordinate + y_coordinate;
	y_coordinate = x_coordinate - y_coordinate;
	x_coordinate = x_coordinate - y_coordinate;

}

void square::display()
{

	cout << " length=" << length << ", X-coordinate:" << x_coordinate << ", Y-coordinate:" << y_coordinate << endl;

}
