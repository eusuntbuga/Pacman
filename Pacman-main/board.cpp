#include "board.hpp"

Board::Board(int width, int height) : _width(width), _height(height), _cells(height, std::vector<char>(width, ' ')) {}

std::ostream& operator<<(std::ostream& os, const Board& board) {
    os << "Board: Width = " << board._width << ", Height = " << board._height;
    for (const auto& row : board._cells) {
        for (char cell : row) {
            os << cell;
        }
        os << '\n';
    }
    return os;
}
