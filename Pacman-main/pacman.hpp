#pragma once
#include "point.hpp"

class Pacman {
   Point _position;
   int _lives;
public:
   Pacman();
   Pacman(const Point& position, int lives);
   Point GetPosition() const;
   void Move(char direction);
   int GetLives() const;
   void LoseLife();
};
