#include "board.hpp"

Board::Board(int width, int height) : _width(width), _height(height), _cells(height, std::vector<char>(width, ' ')) {}

void Board::ResetBoard() {
    for (auto& row : _cells) {
        std::fill(row.begin(), row.end(), ' ');
    }
}

void Board::PlaceCharacter(int x, int y, char c) {
    if (x >= 0 && x < _width && y >= 0 && y < _height) {
        _cells[y][x] = c;
    }
}

std::ostream& operator<<(std::ostream& os, const Board& board) {
    for (const auto& row : board._cells) {
        for (char cell : row) {
            os << cell;
        }
        os << '\n';
    }
    return os;

}
