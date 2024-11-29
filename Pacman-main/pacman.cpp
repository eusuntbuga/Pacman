#include "pacman.hpp"

Pacman::Pacman() : _position{0, 0}, _lives(3) {}

void Pacman::Move(char direction) {
    switch (direction) {
        case 'w': _position.y -= 1; break;
        case 's': _position.y += 1; break;
        case 'a': _position.x -= 1; break;
        case 'd': _position.x += 1; break;
    }
}

Point Pacman::GetPosition() const {
    return _position;
}

void Pacman::LoseLife() {
    if (_lives > 0) --_lives;
}

std::ostream& operator<<(std::ostream& os, const Pacman& pacman) {
    os << "Pacman: Position = (" << pacman._position.x << ", " << pacman._position.y << "), Lives = " << pacman._lives;
    return os;
}
