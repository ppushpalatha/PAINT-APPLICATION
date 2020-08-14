#pragma once
#include "shape.h"
class square : public shape
{
    int length, x_coordinate, y_coordinate;

public:
    square(int, int, int);

    void display() override;

    void move(int x, int y);

    void unmove(int x, int y);

    void scale(int n);

    void unscale(int n);

    void rotate();

    void unrotate();

};



