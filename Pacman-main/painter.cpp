#include "painter.hpp"
#include <iostream>

void Painter::DrawImage(Point topLeft, Point bottomRight, const std::vector<std::string>& image) {
    for (const auto& line : image) {
        std::cout << line << std::endl;
    }
}

void Painter::WriteText(Point position, const std::string& text) {
    std::cout << "Text: " << text << " at Position " << position << std::endl;
}

