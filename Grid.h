#pragma once
#include <fstream>
#include <iostream>
#include <vector>


class Grid {
public:
    const int BOARD_WIDTH = 80;
    const int BOARD_HEIGHT = 25;
    std::vector<std::vector<char>> grid;

    Grid(): grid(BOARD_HEIGHT, std::vector<char>(BOARD_WIDTH, ' ')) {}

    // void save(std::string& path) const {
    //     std::ofstream file(path);
    //     if (file.is_open()) {
    //         for (const auto& row : grid) {
    //             for (const auto& cell : row) {
    //                 file << cell;
    //             }
    //             file << '\n';
    //         }
    //         file.close();
    //     } else {
    //         std::cerr << "Failed to open file " << std::endl;
    //     }
    // }
    //
    // void load(std::string& path) {
    //     std::ifstream file(path);
    //     if (file.is_open()) {
    //         for (int y = 0; y < BOARD_HEIGHT; ++y) {
    //             std::string line;
    //             if (std::getline(file, line)) {
    //                 for (int x = 0; x < BOARD_WIDTH && x < line.size(); ++x) {
    //                     grid[y][x] = line[x];
    //                 }
    //             }
    //         }
    //         file.close();
    //     } else {
    //         std::cerr << "Failed to open file " << std::endl;
    //     }
    // }
};
