#include <iostream>
#include <vector>
#include "Board.h"

int main() {
    Board board;
    std::string triangle = "triangle";
    std::string line = "line";
    std::string square = "square";
    std::string circle = "circle";
    board.add(circle, 10, 10, 5);
    board.add(square, 0, 0, 5);
    board.add(triangle, 10, 1, 7);
    board.add(line, 5, 10, 30, 80);
    board.add(triangle, 25, 10, 3);
    board.add(square, 15, 15, 30);
    board.add(triangle, 19, 5, 10);
    board.add(line, 0, 1, 9, 4);
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
