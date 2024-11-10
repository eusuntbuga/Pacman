#pragma once
#include <iostream>
#include <vector>
#include <string>

class Board {
   int _width;
   int _height;
   std::vector<std::vector<char>> _cells;

public:
   // Constructor care initializeaza dimensiunile tablei si matricea de caractere
   Board(int width = 28, int height = 31);

   // Constructor de copiere
   Board(const Board& other);

   // Operator de copiere
   Board& operator=(const Board& other);

   // Operator de comparatie pentru egalitate
   bool operator==(const Board& other) const;

   // Getter pentru latime si inaltime
   int GetWidth() const;
   int GetHeight() const;

   // Functie de resetare a tablei de joc
   void ResetBoard();

   // Metoda pentru plasarea unui caracter in matricea tablei
   void PlaceCharacter(int x, int y, char c);

   // Operator de afisare
   friend std::ostream& operator<<(std::ostream& os, const Board& board);
};
