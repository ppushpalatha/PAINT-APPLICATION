#pragma once
#include "shape.h"
class rectangle : public shape
{
    int length, breadth, x_coordinate, y_coordinate;
public:

    rectangle(int l, int b, int a, int c);
    void display();
    void move(int x, int y);
    void unmove(int x, int y);
    void scale(int n);
    void unscale(int n);
    void rotate();
    void unrotate();

};