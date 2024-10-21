#pragma once
#include "point.hpp"

class Pacman {
   Point _position;
   int _lives;
public:
   // Constructor implicit
   Pacman();

   // Constructor cu parametri
   Pacman(const Point& position, int lives);

   // Constructor de copiere
   Pacman(const Pacman& other);

   // Operator de copiere
   Pacman& operator=(const Pacman& other);

   // Operator de comparație
   bool operator==(const Pacman& other) const;

   Point GetPosition() const;
   void Move(char direction);
   int GetLives() const;
   void LoseLife();

   // Operator de afișare
   friend std::ostream& operator<<(std::ostream& os, const Pacman& pacman);
};
