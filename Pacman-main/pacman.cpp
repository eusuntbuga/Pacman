#include "pacman.hpp"
#include <iostream>

Pacman::Pacman() : _position{0, 0}, _lives(3) {}

std::ostream& operator<<(std::ostream& os, const Pacman& pacman) {
    os << "Pacman: Position = (" << pacman._position.x << ", " << pacman._position.y << "), Lives = " << pacman._lives;
    return os;
}
