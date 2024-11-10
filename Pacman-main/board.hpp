#pragma once
#include <iostream>
#include <vector>
#include <string>

class Board {
   int _width;
   int _height;
   std::vector<std::vector<char>> _cells;

public:
   Board(int width = 28, int height = 31);
   Board(const Board& other);
   Board& operator=(const Board& other);
   bool operator==(const Board& other) const;

   int GetWidth() const;
   int GetHeight() const;

   friend std::ostream& operator<<(std::ostream& os, const Board& board);
};
