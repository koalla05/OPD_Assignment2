#pragma once

#include <memory>

#include "Grid.h"


class Figure {
public:
    virtual ~Figure() = default;
    virtual void draw(std::shared_ptr<Grid>& grid, const char& symbol) = 0;
    virtual std::string getInfo(int& id) = 0;
    virtual bool isSameFigure(std::shared_ptr<Figure>& other) = 0;
};

class Triangle: public Figure {
public:
    int x;
    int y;
    int height;
    Triangle(int x, int y, int height): x(x), y(y), height(height){}
    void draw(std::shared_ptr<Grid>& grid, const char& symbol) override;
    std::string getInfo(int& id) override;
    bool isSameFigure(std::shared_ptr<Figure>& other) override;
};

class Circle: public Figure {
public:
    int x;
    int y;
    int height;
    Circle(int x, int y, int height): x(x), y(y), height(height){}
    void draw(std::shared_ptr<Grid>& grid, const char& symbol) override;
    std::string getInfo(int& id) override;
    bool isSameFigure(std::shared_ptr<Figure>& other) override;
};


class Square: public Figure {
public:
    int x;
    int y;
    int height;
    Square(int x, int y, int height): x(x), y(y), height(height){}
    void draw(std::shared_ptr<Grid>& grid, const char& symbol) override;
    std::string getInfo(int& id) override;
    bool isSameFigure(std::shared_ptr<Figure>& other) override;
};


class Line: public Figure {
public:
    int x0;
    int y0;
    int x1;
    int y1;
    Line(int x, int y, int v, int w): x0(x), y0(y), x1(v), y1(w){}
    void draw(std::shared_ptr<Grid>& grid, const char& symbol) override;
    std::string getInfo(int& id) override;
    bool isSameFigure(std::shared_ptr<Figure>& other) override;
};