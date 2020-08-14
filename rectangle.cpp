#include "rectangle.h"
#include "shape.h"
#include<iostream>
using namespace std;
rectangle::rectangle(int len, int bre, int x, int y)
{
	length = len;
	breadth = bre;
	x_coordinate = x;
	y_coordinate = y;
}

void rectangle::move(int x, int y)
{
	x_coordinate = x_coordinate +x;
	y_coordinate =y_coordinate + y;
}

void rectangle::unmove(int x, int y)
{
	x_coordinate = x_coordinate -x;
	y_coordinate = y_coordinate -y;
}

void rectangle::scale(int n)
{
	length = length+n;
	breadth = breadth + n;
}

void rectangle::unscale(int n)
{
	length = length - n;
	breadth = breadth - n;
}

void rectangle::rotate()
{
	x_coordinate = x_coordinate + y_coordinate;
	y_coordinate = x_coordinate - y_coordinate;
	x_coordinate = x_coordinate - y_coordinate;
}

void rectangle::unrotate()
{
	x_coordinate = x_coordinate + y_coordinate;
	y_coordinate = x_coordinate - y_coordinate;
	x_coordinate = x_coordinate - y_coordinate;
}

void rectangle::display()
{
	cout << " length=" << length << ", breadth=" << breadth << ", X-coordinate :" << x_coordinate << ", Y-coordinate :" << y_coordinate << endl;
}

