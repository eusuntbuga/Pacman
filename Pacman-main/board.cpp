#include "board.hpp"

// Constructor: initializeaza tabla cu spatii goale
Board::Board(int width, int height) : _width(width), _height(height), _cells(height, std::vector<char>(width, ' ')) {}

// Constructor de copiere
Board::Board(const Board& other) : _width(other._width), _height(other._height), _cells(other._cells) {}

// Operator de copiere
Board& Board::operator=(const Board& other) {
    if (this != &other) {
        _width = other._width;
        _height = other._height;
        _cells = other._cells;
    }
    return *this;
}

// Operator de comparatie
bool Board::operator==(const Board& other) const {
    return _width == other._width && _height == other._height && _cells == other._cells;
}

// Getter pentru latime si inaltime
int Board::GetWidth() const { return _width; }
int Board::GetHeight() const { return _height; }

// Resetare a tablei la starea initiala
void Board::ResetBoard() {
    for (auto& row : _cells) {
        std::fill(row.begin(), row.end(), ' ');
    }
}

// Plaseaza un caracter la o anumita pozitie
void Board::PlaceCharacter(int x, int y, char c) {
    if (x >= 0 && x < _width && y >= 0 && y < _height) {
        _cells[y][x] = c;
    }
}

// Operator de afisare a tablei
std::ostream& operator<<(std::ostream& os, const Board& board) {
    os << "Board: Width = " << board._width << ", Height = " << board._height << "\n";
    for (const auto& row : board._cells) {
        for (char cell : row) {
            os << cell;
        }
        os << '\n';
    }
    return os;
}
