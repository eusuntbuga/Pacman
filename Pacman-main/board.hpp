#pragma once
#include <vector>
#include <string>
#include <iostream>

class Board {
   int _width;
   int _height;
   std::vector<std::vector<char>> _cells;

public:
   Board(int width = 28, int height = 31);
   void ResetBoard();
   void PlaceCharacter(int x, int y, char c);

   // Getter
   int GetWidth() const;
   int GetHeight() const;

   friend std::ostream& operator<<(std::ostream& os, const Board& board);
};
