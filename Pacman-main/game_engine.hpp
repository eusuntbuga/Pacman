#pragma once
#include "pacman.hpp"
#include "ghost.hpp"
#include "board.hpp"

class GameEngine {
   Pacman _pacman;
   Ghost _ghosts[4];  // 4 fantome
   Board _board;
public:
   GameEngine();
   void Init();
   void Run();
   bool CheckCollision();
   void Display();
};
