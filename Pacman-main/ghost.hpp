#pragma once

#include "point.hpp"

class Ghost {
   Point _position;
   char _color; // Identifică fantomele prin culori ('R', 'P', 'B', 'O')
public:
   Ghost(const Point& position, char color);
   Point GetPosition() const;
   void Move();
   char GetColor() const;
};
