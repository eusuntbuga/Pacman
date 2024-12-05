#include "pacman.hpp"
#include <cassert>
#include <iostream>

/**
 * @file test_pacman.cpp
 * @brief Test file for the Pacman class.
 * 
 * @project PacMan Game
 * @author Mihai
 * @year 2024
 * 
 * @description
 * This file contains tests for the Pacman class, ensuring that the
 * constructor and movement methods work correctly.
 */

int main() {
    // Test Pacman constructor
    Pacman p(0, 0);
    assert(p.getPosition().x == 0 && p.getPosition().y == 0);
    std::cout << "Test passed: Pacman constructor\n";

    // Test Pacman move method
    p.move(1, 1);
    assert(p.getPosition().x == 1 && p.getPosition().y == 1);
    std::cout << "Test passed: Pacman move\n";

    // Test Pacman eat method
    p.eat();
    assert(p.getScore() == 10); // Assuming eating gives 10 points
    std::cout << "Test passed: Pacman eat\n";

    return 0;
}
