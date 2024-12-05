#include "gameengine.hpp"
#include <cassert>
#include <iostream>

/**
 * @file test_gameengine.cpp
 * @brief Test file for the GameEngine class.
 * 
 * @project PacMan Game
 * @author Mihai
 * @year 2024
 * 
 * @description
 * This file contains tests for the GameEngine class, ensuring that
 * the game logic works as expected.
 */

int main() {
    // Test GameEngine constructor
    GameEngine engine;
    assert(engine.getLevel() == 1); // Assuming the initial level is 1
    std::cout << "Test passed: GameEngine constructor\n";

    // Test GameEngine start method
    engine.start();
    assert(engine.isRunning() == true);
    std::cout << "Test passed: GameEngine start\n";

    // Test GameEngine game over condition
    engine.gameOver();
    assert(engine.isRunning() == false);
    std::cout << "Test passed: GameEngine game over\n";

    return 0;
}
