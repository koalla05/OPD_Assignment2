#include <iostream>
#include <vector>
#include "Board.h"

int main() {
    Board board;
    std::string shape = "triangle";
    board.add(shape, 10, 1, 10);
    board.add(shape, 25, 10, 3);
    board.add(shape, 19, 5, 10);
    board.print();
    std::cout << "--------------------------------------------------" << std::endl;

    std::string path = "test.txt";
    board.save(path);
    board.undo();
    board.print();
    std::cout << "--------------------------------------------------" << std::endl;

    board.list();
    std::cout << "--------------------------------------------------" << std::endl;


    board.clear();
    board.print();
    std::cout << "--------------------------------------------------" << std::endl;

    board.load(path);
    board.print();
    std::cout << "--------------------------------------------------" << std::endl;
    return 0;
}
