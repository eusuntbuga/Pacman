#include "ghost.hpp"
#include <iostream>

Ghost::Ghost(const Point& position, const std::string& color) : _position(position), _color(color) {}

std::ostream& operator<<(std::ostream& os, const Ghost& ghost) {
    os << "Ghost: Position = (" << ghost._position.x << ", " << ghost._position.y << "), Color = " << ghost._color;
    return os;
}
