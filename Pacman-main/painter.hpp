#pragma once
#include "point.hpp"
#include <vector>
#include <string>
#include <SFML/Graphics.hpp>  // Adăugăm biblioteca SFML pentru grafică

class Painter {
public:
    // Functie pentru desenarea unei imagini pe baza unui topLeft și bottomRight.
    // Folosește SFML pentru a desena imaginea pe ecran.
    void DrawImage(Point topLeft, Point bottomRight, const std::vector<std::string>& image);

    // Functie pentru a scrie text pe ecran folosind SFML.
    void WriteText(Point position, const std::string& text);
};
