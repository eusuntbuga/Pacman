#pragma once
#include "point.hpp"
#include <vector>
#include <string>

class Painter {
public:
   void DrawImage(Point topLeft, Point bottomRight, const std::vector<std::string>& image);
   void WriteText(Point position, const std::string& text);
};
