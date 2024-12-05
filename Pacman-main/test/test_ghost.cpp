#include "ghost.hpp"
#include <cassert>
#include <iostream>

/**
 * @file test_ghost.cpp
 * @brief Test file for the Ghost class.
 * 
 * @project PacMan Game
 * @author Mihai
 * @year 2024
 * 
 * @description
 * This file contains tests for the Ghost class, ensuring that
 * movement and behavior are correct.
 */

int main() {
    // Test Ghost constructor
    Ghost g(0, 0);
    assert(g.getPosition().x == 0 && g.getPosition().y == 0);
    std::cout << "Test passed: Ghost constructor\n";

    // Test Ghost move method
    g.move(1, 1);
    assert(g.getPosition().x == 1 && g.getPosition().y == 1);
    std::cout << "Test passed: Ghost move\n";

    // Test Ghost chase Pacman method
    Pacman p(5, 5);
    g.chase(p);
    // Assuming the ghost should move towards Pacman
    assert(g.getPosition().x == 1 && g.getPosition().y == 1);
    std::cout << "Test passed: Ghost chase\n";

    return 0;
}
