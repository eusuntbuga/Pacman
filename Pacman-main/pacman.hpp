/**
 * @file pacman.hpp
 * @brief Header file for Pacman class.
 * 
 * @project PacMan Game
 * @author Mihai
 * @year 2024
 * 
 * @description
 * This file contains the definition of the Pacman class, which manages
 * the movement and state of Pacman in the game.
 */

#pragma once
#include "point.hpp"

class Pacman {
   Point _position; ///< Current position of Pacman on the board.
   int _lives; ///< Number of lives remaining for Pacman.

public:
   /**
    * @brief Construct a new Pacman object.
    * Initializes the position of Pacman and sets the number of lives to 3.
    */
   Pacman();

   /**
    * @brief Move Pacman in the specified direction.
    * @param direction Direction for movement ('w', 'a', 's', 'd').
    */
   void Move(char direction);

   /**
    * @brief Get the current position of Pacman.
    * @return Point Current position of Pacman.
    */
   Point GetPosition() const;

   /**
    * @brief Decrease Pacman's lives by 1.
    */
   void LoseLife();

   /**
    * @brief Overload of the output stream operator to display Pacman's state.
    * @param os Output stream.
    * @param pacman Pacman object to be displayed.
    * @return std::ostream& Output stream with Pacman's information.
    */
   friend std::ostream& operator<<(std::ostream& os, const Pacman& pacman);
};
