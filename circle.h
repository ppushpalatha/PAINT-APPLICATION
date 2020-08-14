#pragma once
#include "shape.h"
class circle : public shape
{
    int radius, x_coordinate, y_coordinate;
public:
    circle(int r, int x, int y);
    void display() override;
    void move(int x, int y);
    void unmove(int x, int y);
    void scale(int n);
    void unscale(int n);
    void rotate();
    void unrotate();

};

