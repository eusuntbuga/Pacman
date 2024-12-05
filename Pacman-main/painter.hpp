#pragma once
#include <SFML/Graphics.hpp>
#include "board.hpp"
#include "pacman.hpp"
#include "ghost.hpp"

/**
 * @class Painter
 * @brief Clasă responsabilă pentru desenarea jocului pe ecran.
 * 
 * Painter va folosi SFML pentru a desena obiectele jocului pe fereastra de joc.
 */
class Painter {
public:
   void DrawBoard(sf::RenderWindow& window, const Board& board);
   void DrawPacman(sf::RenderWindow& window, const Pacman& pacman);
   void DrawGhosts(sf::RenderWindow& window, const std::vector<std::unique_ptr<Ghost>>& ghosts);
};
