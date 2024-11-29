#pragma once
#include "pacman.hpp"
#include "ghost.hpp"
#include "board.hpp"
#include <memory>
#include <vector>
#include <SFML/Graphics.hpp>

class GameEngine {
   std::unique_ptr<Pacman> _pacman;
   std::unique_ptr<Board> _board;
   std::vector<std::unique_ptr<Ghost>> _ghosts;
   sf::RenderWindow _window;

public:
   GameEngine();
   void Init();
   void Run();
   void Display();
   bool CheckCollision();
};
