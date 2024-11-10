#pragma once
#include "pacman.hpp"
#include "ghost.hpp"
#include "board.hpp"
#include <memory>
#include <vector>

class GameEngine {
   std::unique_ptr<Pacman> _pacman;
   std::unique_ptr<Board> _board;
   std::vector<std::unique_ptr<Ghost>> _ghosts;

public:
   GameEngine();
   void Init();     // Inițializează jocul
   void Run();      // Pornește jocul și bucla principală
   bool CheckCollision();   // Verifică coliziunea dintre Pacman și fantome
   void Display();  // Afișează starea curentă a jocului
};
