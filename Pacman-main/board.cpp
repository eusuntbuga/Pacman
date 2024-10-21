#include "board.hpp"
#include <iostream>

// Constructor implicit este deja definit

// Constructor de copiere
Board::Board(const Board& other) : _width(other._width), _height(other._height) {}

// Operator de copiere
Board& Board::operator=(const Board& other) {
    if (this != &other) {
        _width = other._width;
        _height = other._height;
    }
    return *this;
}

// Operator de comparație
bool Board::operator==(const Board& other) const {
    return _width == other._width && _height == other._height;
}

// Operator de afișare
std::ostream& operator<<(std::ostream& os, const Board& board) {
    os << "Board: Width = " << board._width << ", Height = " << board._height;
    return os;
}
