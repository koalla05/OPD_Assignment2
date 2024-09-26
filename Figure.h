#pragma once

#include <memory>

#include "Grid.h"


class Figure {
public:
    Figure(){}
    virtual ~Figure() {}
    virtual void draw(std::shared_ptr<Grid>& grid, const char& symbol) = 0;
    // virtual void remove(std::shared_ptr<Grid>& grid) = 0;
    virtual void getInfo(int& id) = 0;
};

class Triangle: public Figure {
    int x;
    int y;
    int height;
public:
    Triangle(int x, int y, int height): x(x), y(y), height(height){}
    void draw(std::shared_ptr<Grid>& grid, const char& symbol) override;
    // void remove(std::shared_ptr<Grid>& grid) override;
    void getInfo(int& id) override;
};

class Circle: public Figure {
public:
    void draw(std::shared_ptr<Grid>& grid, const char& symbol) override;
};


class Square: public Figure {
    int x;
    int y;
    int height;
public:
    Square(int x, int y, int height): x(x), y(y), height(height){}
    void draw(std::shared_ptr<Grid>& grid, const char& symbol) override;
    // void remove(std::shared_ptr<Grid>& grid) override;
    void getInfo(int& id) override;
};


class Line: public Figure {
    int x0;
    int y0;
    int x1;
    int y1;
public:
    Line(int x, int y, int v, int w): x0(x), y0(y), x1(v), y1(w){}
    void draw(std::shared_ptr<Grid>& grid, const char& symbol) override;
    // void remove(std::shared_ptr<Grid>& grid) override;
    void getInfo(int& id) override;
};