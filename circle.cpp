#include "circle.h"
#include "shape.h"
#include<iostream>
using namespace std;
circle::circle(int r, int x, int y)
{
	radius = r;
	x_coordinate = x;
	y_coordinate = y;
}

void circle::move(int x, int y)
{
	x_coordinate =x_coordinate+ x;
	y_coordinate =y_coordinate+y;
}

void circle::unmove(int x, int y)
{
	x_coordinate = x_coordinate-x;
	y_coordinate = y_coordinate-y;
}

void circle::scale(int n)
{
	radius = radius +n;
}

void circle::unscale(int n)
{
	radius = radius -n;
}

void circle::rotate()
{
	x_coordinate = x_coordinate + y_coordinate;
	y_coordinate = x_coordinate - y_coordinate;
	x_coordinate = x_coordinate - y_coordinate;
}

void circle::unrotate()
{
	x_coordinate = x_coordinate + y_coordinate;
	y_coordinate = x_coordinate - y_coordinate;
	x_coordinate = x_coordinate - y_coordinate;
}

void circle::display() {

	cout << " Radius=" << radius << ", X-coordinate :" << x_coordinate << ", Y-coordinate :" << y_coordinate << endl;

}