#include "board.hpp"
#include <cassert>
#include <iostream>

/**
 * @file test_board.cpp
 * @brief Test file for the Board class.
 * 
 * @project PacMan Game
 * @author Mihai
 * @year 2024
 * 
 * @description
 * This file contains tests for the Board class, ensuring that the
 * board setup and functionality work as expected.
 */

int main() {
    // Test Board constructor
    Board b;
    assert(b.getWidth() == 10); // Assuming the board width is 10
    assert(b.getHeight() == 10); // Assuming the board height is 10
    std::cout << "Test passed: Board constructor\n";

    // Test placing Pacman on the board
    b.placePacman(5, 5);
    assert(b.getPacmanPosition().x == 5 && b.getPacmanPosition().y == 5);
    std::cout << "Test passed: Place Pacman\n";

    // Test placing Ghosts on the board
    b.placeGhost(3, 3);
    assert(b.getGhosts().size() == 1);
    std::cout << "Test passed: Place Ghosts\n";

    return 0;
}
