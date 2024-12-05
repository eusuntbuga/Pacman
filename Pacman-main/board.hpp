#pragma once
#include <vector>
#include <string>
#include <iostream>

/**
 * @class Board
 * @brief Reprezintă tabla de joc pentru Pac-Man.
 * 
 * Board gestionează dimensiunile și conținutul tablei, inclusiv plasarea caracterelor.
 */
class Board {
   int _width;
   int _height;
   std::vector<std::vector<char>> _cells;

public:
   /**
    * @brief Constructor care inițializează board-ul cu dimensiuni implicite sau date.
    * @param width Lățimea tablei.
    * @param height Înălțimea tablei.
    */
   Board(int width = 28, int height = 31);

   /**
    * @brief Resetează tabla, umplând-o cu spații goale.
    */
   void ResetBoard();

   /**
    * @brief Plasează un caracter pe tabla la poziția specificată.
    * @param x Coordonata x a poziției.
    * @param y Coordonata y a poziției.
    * @param c Caracterul de plasat.
    */
   void PlaceCharacter(int x, int y, char c);

   /**
    * @brief Obține lățimea tablei.
    * @return Lățimea tablei.
    */
   int GetWidth() const;

   /**
    * @brief Obține înălțimea tablei.
    * @return Înălțimea tablei.
    */
   int GetHeight() const;

   friend std::ostream& operator<<(std::ostream& os, const Board& board);
};
