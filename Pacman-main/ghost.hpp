#pragma once
#include "point.hpp"
#include <string>
#include <iostream>

/**
 * @class Ghost
 * @brief Reprezintă un fantomă în joc.
 * 
 * Ghost controlează mișcarea fantomei și poziția acesteia pe tabla de joc.
 */
class Ghost {
   Point _position;
   std::string _color;

public:
   Ghost(const Point& position = {0, 0}, const std::string& color = "White");
   void Move();
   Point GetPosition() const;

   friend std::ostream& operator<<(std::ostream& os, const Ghost& ghost);
};
