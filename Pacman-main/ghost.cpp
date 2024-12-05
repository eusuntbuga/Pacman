#include "ghost.hpp"
#include <cstdlib>

Ghost::Ghost(const Point& position, const std::string& color) : _position(position), _color(color) {}

void Ghost::Move() {
    int direction = std::rand() % 4;
    switch (direction) {
        case 0: _position.x += 1; break;
        case 1: _position.x -= 1; break;
        case 2: _position.y += 1; break;
        case 3: _position.y -= 1; break;
    }
}

Point Ghost::GetPosition() const {
    return _position;
}

std::ostream& operator<<(std::ostream& os, const Ghost& ghost) {
    os << "Ghost: Position = (" << ghost._position.x << ", " << ghost._position.y << "), Color = " << ghost._color;
    return os;

}
