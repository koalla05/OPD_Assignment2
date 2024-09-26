#include "Board.h"
#include "Figure.h"

void Board::print() {
    for (const auto& row : grid->grid) {
        for (const auto& cell : row) {
            std::cout << cell;
        }
        std::cout << std::endl;
    }
}

void Board::add(std::string& shape, int x, int y, int height) {
    if (shape == "triangle") {
        std::shared_ptr<Triangle> figure = std::make_shared<Triangle>(x, y, height);
        figures.push_back(figure);
        figure->draw(grid);
    }
}


void Board::undo() {
    figures.back()->remove(grid);
    figures.pop_back();
    for (const auto& figure: figures) {
        figure->draw(grid);
    }
}