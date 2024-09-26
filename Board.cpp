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

void Board::add(std::string& shape, int x0, int y0, int x1, int y1) {
    if (shape == "line") {
        std::shared_ptr<Line> figure = std::make_shared<Line>(x0, y0, x1, y1);
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

void Board::clear() {
    while (!figures.empty()) {
        figures.back()->remove(grid);
        figures.pop_back();
    }
}

void Board::list() {
    for (int i = 0 ; i < figures.size(); ++i) {
        figures[i] -> getInfo(i);
    }
}

void Board::save(std::string &path) {
    grid -> save(path);
}


void Board::load(std::string &path) {
    grid -> load(path);
}
