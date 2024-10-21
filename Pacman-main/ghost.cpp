#include "ghost.hpp"
#include <iostream>

// Constructor de copiere
Ghost::Ghost(const Ghost& other) : _position(other._position), _color(other._color) {}

// Operator de copiere
Ghost& Ghost::operator=(const Ghost& other) {
    if (this != &other) {
        _position = other._position;
        _color = other._color;
    }
    return *this;
}

// Operator de comparație
bool Ghost::operator==(const Ghost& other) const {
    return _position.x == other._position.x && _position.y == other._position.y && _color == other._color;
}

// Operator de afișare
std::ostream& operator<<(std::ostream& os, const Ghost& ghost) {
    os << "Ghost: Position = (" << ghost._position.x << ", " << ghost._position.y << "), Color = " << ghost._color;
    return os;
}
