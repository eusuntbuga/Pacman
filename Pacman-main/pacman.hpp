#pragma once
#include "point.hpp"

class Pacman {
   Point _position;
   int _lives;

public:
   Pacman();
   void Move(char direction);
   Point GetPosition() const;
   void LoseLife();

   friend std::ostream& operator<<(std::ostream& os, const Pacman& pacman);
};
