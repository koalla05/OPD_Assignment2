#include <iostream>
#include <vector>
#include "Board.h"

int main() {
    Board board;
    std::string shape = "triangle";
    board.add(shape, 10, 1, 10);
    board.print();
    return 0;
}
