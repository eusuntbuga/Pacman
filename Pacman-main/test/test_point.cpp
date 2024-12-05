#include "point.hpp"
#include <cassert>
#include <iostream>

/**
 * @file test_point.cpp
 * @brief Test file for the Point class.
 * 
 * @project PacMan Game
 * @author Mihai
 * @year 2024
 * 
 * @description
 * This file contains tests for the Point class, ensuring that the constructors
 * and operators work as expected.
 */

int main() {
    // Test Point constructor
    Point p1(1, 2);
    assert(p1.x == 1 && p1.y == 2);
    std::cout << "Test passed: Point constructor\n";

    // Test equality operator
    Point p2(1, 2);
    assert(p1 == p2);
    std::cout << "Test passed: Point equality operator\n";

    // Test inequality operator
    Point p3(2, 3);
    assert(p1 != p3);
    std::cout << "Test passed: Point inequality operator\n";

    return 0;
}
