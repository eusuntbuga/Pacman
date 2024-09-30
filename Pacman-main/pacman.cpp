#include "pacman.hpp"

Pacman::Pacman() : _lives(3), _position({0, 0}) {}

Pacman::Pacman(const Point& position, int lives) : _position(position), _lives(lives) {}

Point Pacman::GetPosition() const {
    return _position;
}

void Pacman::Move(char direction) {
    // Implementați mișcarea Pac-Man
}

int Pacman::GetLives() const {
    return _lives;
}

void Pacman::LoseLife() {
    if (_lives > 0) _lives--;
}
