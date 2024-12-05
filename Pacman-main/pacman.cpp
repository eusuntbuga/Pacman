#include "pacman.hpp"

Pacman::Pacman(int x, int y) : _position(x, y), _lives(3) {}

void Pacman::Move(char direction) {
   switch (direction) {
       case 'W': _position.y -= 1; break;  // Muta în sus
       case 'S': _position.y += 1; break;  // Muta în jos
       case 'A': _position.x -= 1; break;  // Muta la stânga
       case 'D': _position.x += 1; break;  // Muta la dreapta
   }
}

void Pacman::LoseLife() {
   if (_lives > 0) {
       --_lives;
   }
}

Point Pacman::GetPosition() const {
   return _position;
}

int Pacman::GetLives() const {
   return _lives;
}

void Pacman::SetPosition(int x, int y) {
   _position = Point{x, y};
}
