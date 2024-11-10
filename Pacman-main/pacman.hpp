#pragma once
#include "point.hpp"

class Pacman {
   Point _position;
   int _lives;

public:
   Pacman();
   Pacman(const Point& position, int lives);
   Pacman(const Pacman& other);
   Pacman& operator=(const Pacman& other);
   bool operator==(const Pacman& other) const;

   Point GetPosition() const;
   void Move(char direction);
   int GetLives() const;
   void LoseLife();

   friend std::ostream& operator<<(std::ostream& os, const Pacman& pacman);
};
