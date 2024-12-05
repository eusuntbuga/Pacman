#include "game.hpp"
#include <cassert>
#include <iostream>

/**
 * @file test_game.cpp
 * @brief Test file for the Game class.
 * 
 * @project PacMan Game
 * @author Mihai
 * @year 2024
 * 
 * @description
 * This file contains tests for the Game class, ensuring that the
 * overall game logic functions correctly.
 */

int main() {
    // Test Game constructor
    Game g;
    assert(g.isInitialized() == true);
    std::cout << "Test passed: Game constructor\n";

    // Test Game start method
    g.start();
    assert(g.isRunning() == true);
    std::cout << "Test passed: Game start\n";

    // Test Game end method
    g.end();
    assert(g.isRunning() == false);
    std::cout << "Test passed: Game end\n";

    return 0;
}
