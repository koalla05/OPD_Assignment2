#include "Figure.h"

void Line::draw(std::shared_ptr<Grid>& grid) {
    if ( x0 < x1 && y0 < y1) {
        int dx = x1 - x0;
        int dy = y1 - y0;
        int d = 2 * dy - dx;
        int y = y0;
        for (int i = x0; i < x1; ++i) {
            if (i < grid -> BOARD_WIDTH && y < grid -> BOARD_HEIGHT){
                grid->grid[y][i] = '*';
                if (d > 0) {
                    y++;
                    d -= 2 * dx;
                }
                d += 2 * dy;
            }
        }
    }
}

void Line::remove(std::shared_ptr<Grid>& grid) {
    int dx = x1 - x0;
    int dy = y1 - y0;
    int d = 2 * dy - dx;
    int y = y0;
    for (int i = x0; i < x1; ++i) {
         if (i < grid -> BOARD_WIDTH && y < grid -> BOARD_HEIGHT) {
            grid->grid[y][i] = ' ';
            if (d > 0) {
                y++;
                d -= 2 * dx;
            }
            d += 2 * dy;
        }
    }
}

void Line::getInfo(int& id) {
    std::cout << id << " line " << x0 << " " << y0 << " " << x1 << " " << y1 << std::endl;
}