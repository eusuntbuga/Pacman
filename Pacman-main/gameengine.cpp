#include "gameengine.hpp"
#include <iostream>
#include <algorithm>

// Constructorul initializeaza pacmanul si fantomele
GameEngine::GameEngine() : _pacman(std::make_unique<Pacman>()), _board(std::make_unique<Board>()) {
    for (int i = 0; i < 4; ++i) {
        _ghosts.push_back(std::make_unique<Ghost>(Point{i, i}, "Red"));  // Initializare exemplu pentru fantome
    }
}

// Functia Init
void GameEngine::Init() {
    _board->ResetBoard();
    _board->PlaceCharacter(_pacman->GetPosition().x, _pacman->GetPosition().y, 'P');
    for (const auto& ghost : _ghosts) {
        _board->PlaceCharacter(ghost->GetPosition().x, ghost->GetPosition().y, 'G');
    }
}

// Functia Run - bucla principala de joc
void GameEngine::Run() {
    char command;
    while (true) {
        Display();
        std::cout << "Move (w/a/s/d): ";
        std::cin >> command;
        _pacman->Move(command);
        if (CheckCollision()) {
            std::cout << "Pacman caught by a ghost!\n";
            break;
        }
        // Miscarea fantomelor
        for (auto& ghost : _ghosts) {
            ghost->Move();  // Miscare fantome
        }
    }
}

// Functia de afisare a starii jocului
void GameEngine::Display() {
    _board->ResetBoard();
    _board->PlaceCharacter(_pacman->GetPosition().x, _pacman->GetPosition().y, 'P');
    for (const auto& ghost : _ghosts) {
        _board->PlaceCharacter(ghost->GetPosition().x, ghost->GetPosition().y, 'G');
    }
    std::cout << *_board << std::endl;
}

// Functia CheckCollision
bool GameEngine::CheckCollision() {
    auto pacmanPos = _pacman->GetPosition();
    return std::any_of(_ghosts.begin(), _ghosts.end(), [&](const std::unique_ptr<Ghost>& ghost) {
        return ghost->GetPosition() == pacmanPos;
    });
}
