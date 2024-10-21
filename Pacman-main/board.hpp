#pragma once

class Board {
   int _width;
   int _height;
public:
   // Constructor implicit
   Board(int width = 28, int height = 31);

   // Constructor de copiere
   Board(const Board& other);

   // Operator de copiere
   Board& operator=(const Board& other);

   // Operator de comparație
   bool operator==(const Board& other) const;

   int GetWidth() const;
   int GetHeight() const;

   // Operator de afișare
   friend std::ostream& operator<<(std::ostream& os, const Board& board);
};
