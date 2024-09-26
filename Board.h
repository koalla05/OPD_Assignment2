#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include "Figure.h"

class Board {
public:
    std::vector<std::shared_ptr<Figure>> figures;
    std::shared_ptr<Grid> grid;
    Board() {
        grid = std::make_shared<Grid>();
    }

    void print();

    void add(std::string& shape, int x, int y, int height);

    void remove();

    void undo();

    void list();
};
