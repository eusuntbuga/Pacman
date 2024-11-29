#pragma once
#include "point.hpp"
#include <string>
#include <iostream>

class Ghost {
   Point _position;
   std::string _color;

public:
   Ghost(const Point& position = {0, 0}, const std::string& color = "White");
   void Move();
   Point GetPosition() const;

   friend std::ostream& operator<<(std::ostream& os, const Ghost& ghost);
};
