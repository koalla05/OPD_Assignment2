#pragma once

#include <memory>

#include "Grid.h"


class Figure {
public:
    Figure(){}
    virtual ~Figure() {}
    virtual void draw(std::shared_ptr<Grid>& grid) = 0;
    //virtual void remove(std::shared_ptr<Grid>& grid, int x, int y, int height) = 0;
};

class Triangle: public Figure {
    int x;
    int y;
    int height;
public:
    Triangle(int x, int y, int height): x(x), y(y), height(height){}
    void draw(std::shared_ptr<Grid>& grid) override;
    //void remove(std::shared_ptr<Grid>& grid, int x, int y, int height) override;
};

class Circle: public Figure {
public:
    void draw(std::shared_ptr<Grid>& grid) override;
};


class Square: public Figure {
public:
    void draw(std::shared_ptr<Grid>& grid) override;
};


class Line: public Figure {
public:
    void draw(std::shared_ptr<Grid>& grid) override;
};