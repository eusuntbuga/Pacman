#pragma once
#include "point.hpp"

/**
 * @class Pacman
 * @brief Reprezintă personajul principal, Pac-Man.
 * 
 * Pacman controlează poziția și mișcarea acestuia pe tabla de joc.
 */
class Pacman {
   Point _position;
   int _lives;

public:
   Pacman(int x = 1, int y = 1);
   void Move(char direction);
   void LoseLife();
   Point GetPosition() const;
   int GetLives() const;
   void SetPosition(int x, int y);
};
