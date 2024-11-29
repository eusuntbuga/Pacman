#include "gameengine.hpp"

GameEngine::GameEngine()
    : _pacman(std::make_unique<Pacman>()),
      _board(std::make_unique<Board>()),
      _window(sf::VideoMode(800, 600), "PacMan Game") {
    for (int i = 0; i < 4; ++i) {
        _ghosts.push_back(std::make_unique<Ghost>(Point{i, i}, "Red"));
    }
}

void GameEngine::Init() {
    _board->ResetBoard();
    _board->PlaceCharacter(_pacman->GetPosition().x, _pacman->GetPosition().y, 'P');
    for (const auto& ghost : _ghosts) {
        _board->PlaceCharacter(ghost->GetPosition().x, ghost->GetPosition().y, 'G');
    }
}

void GameEngine::Run() {
    while (_window.isOpen()) {
        sf::Event event;
        while (_window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                _window.close();
        }
        Display();
    }
}

void GameEngine::Display() {
    _window.clear();
    sf::RectangleShape pacman(sf::Vector2f(20, 20));
    pacman.setFillColor(sf::Color::Yellow);
    pacman.setPosition(_pacman->GetPosition().x * 20, _pacman->GetPosition().y * 20);
    _window.draw(pacman);

    _window.display();
}

bool GameEngine::CheckCollision() {
    auto pacmanPos = _pacman->GetPosition();
    return std::any_of(_ghosts.begin(), _ghosts.end(), [&](const std::unique_ptr<Ghost>& ghost) {
        return ghost->GetPosition() == pacmanPos;
    });
}
