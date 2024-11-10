#pragma once
#include "point.hpp"
#include <string>

class Ghost {
   Point _position;
   std::string _color;

public:
   Ghost(const Point& position = {0, 0}, const std::string& color = "White");
   Ghost(const Ghost& other);
   Ghost& operator=(const Ghost& other);
   bool operator==(const Ghost& other) const;

   Point GetPosition() const;
   void Move();
   std::string GetColor() const;

   friend std::ostream& operator<<(std::ostream& os, const Ghost& ghost);
};
