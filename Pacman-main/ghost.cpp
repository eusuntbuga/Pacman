#include "ghost.hpp"

Ghost::Ghost(const Point& position, char color) : _position(position), _color(color) {}

Point Ghost::GetPosition() const {
    return _position;
}

void Ghost::Move() {
    // Implementați mișcarea fantomei
}

char Ghost::GetColor() const {
    return _color;
}

