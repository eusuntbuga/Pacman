#pragma once
#include "point.hpp"

class Ghost {
   Point _position;
   char _color;
public:
   // Constructor implicit
   Ghost(const Point& position = {0, 0}, char color = 'W');

   // Constructor de copiere
   Ghost(const Ghost& other);

   // Operator de copiere
   Ghost& operator=(const Ghost& other);

   // Operator de comparație
   bool operator==(const Ghost& other) const;

   Point GetPosition() const;
   void Move();
   char GetColor() const;

   // Operator de afișare
   friend std::ostream& operator<<(std::ostream& os, const Ghost& ghost);
};
