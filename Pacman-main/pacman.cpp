#include "pacman.hpp"
#include <iostream>

// Constructor de copiere
Pacman::Pacman(const Pacman& other) : _position(other._position), _lives(other._lives) {}

// Operator de copiere
Pacman& Pacman::operator=(const Pacman& other) {
    if (this != &other) {
        _position = other._position;
        _lives = other._lives;
    }
    return *this;
}

// Operator de comparație
bool Pacman::operator==(const Pacman& other) const {
    return _position.x == other._position.x && _position.y == other._position.y && _lives == other._lives;
}

// Operator de afișare
std::ostream& operator<<(std::ostream& os, const Pacman& pacman) {
    os << "Pacman: Position = (" << pacman._position.x << ", " << pacman._position.y << "), Lives = " << pacman._lives;
    return os;
}
