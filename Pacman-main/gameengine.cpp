#include "gameengine.hpp"
#include <iostream>
#include <algorithm>

GameEngine::GameEngine()
    : _pacman(std::make_unique<Pacman>()), _board(std::make_unique<Board>()) {
    for (int i = 0; i < 4; ++i) {
        _ghosts.push_back(std::make_unique<Ghost>());
    }
}

void GameEngine::Display() {
    std::for_each(_ghosts.begin(), _ghosts.end(), [](const std::unique_ptr<Ghost>& ghost) {
        std::cout << *ghost << std::endl;
    });
    std::cout << *_board << std::endl;
}
