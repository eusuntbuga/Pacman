#include "painter.hpp"

void Painter::DrawBoard(sf::RenderWindow& window, const Board& board) {
   for (int y = 0; y < board.GetHeight(); ++y) {
       for (int x = 0; x < board.GetWidth(); ++x) {
           if (board.GetCell(x, y) == 'P') {
               DrawPacman(window, pacman);
           } else if (board.GetCell(x, y) == 'G') {
               DrawGhosts(window, ghosts);
           }
           // Alte elemente grafice, cum ar fi punctele, pot fi adăugate aici
       }
   }
}

void Painter::DrawPacman(sf::RenderWindow& window, const Pacman& pacman) {
   sf::RectangleShape shape(sf::Vector2f(20, 20));
   shape.setFillColor(sf::Color::Yellow);
   shape.setPosition(pacman.GetPosition().x * 20, pacman.GetPosition().y * 20);
   window.draw(shape);
}

void Painter::DrawGhosts(sf::RenderWindow& window, const std::vector<std::unique_ptr<Ghost>>& ghosts) {
   for (const auto& ghost : ghosts) {
       sf::RectangleShape shape(sf::Vector2f(20, 20));
       shape.setFillColor(sf::Color::Red); // culoare standard pentru fantome
       shape.setPosition(ghost->GetPosition().x * 20, ghost->GetPosition().y * 20);
       window.draw(shape);
   }
}
