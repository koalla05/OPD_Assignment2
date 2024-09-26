#include <cmath>

#include "Figure.h"

void Circle::draw(std::shared_ptr<Grid> &grid, const char &symbol) {
    for (int i = -height; i <= height; i++) {
        for (int j = -height; j <= height; j++) {

            if (std::abs(sqrt(pow(j, 2) + pow(i, 2)) - height) < 0.5) {

                int gridX = x + j;
                int gridY = y + i;

                if (gridX >= 0 && gridX < grid->BOARD_WIDTH && gridY >= 0 && gridY < grid->BOARD_HEIGHT) {
                    grid->grid[gridY][gridX] = symbol;
                }
            }
        }
    }
}

void Circle::getInfo(int &id) {
    std::cout << id << " " <<  "circle" << " " <<  x << " " << y << " " << height << std::endl;
}

bool Circle::isSameFigure(std::shared_ptr<Figure> &other) {
    Circle* ptr = dynamic_cast<Circle*>(other.get());
    if (ptr != nullptr) {
        return x == ptr->x && y == ptr->y && height == ptr->height;
    }
    return false;
}