#include "gameengine.hpp"
#include "painter.hpp"

// Constructorul clasei GameEngine
GameEngine::GameEngine() {
    // Inițializăm resursele, precum fereastra și obiectele de joc
    _window.create(sf::VideoMode(800, 600), "Pacman Game");
    _board = std::make_unique<Board>();
    _pacman = std::make_unique<Pacman>();
    // Aici adăugăm câteva fantome ca exemplu
    _ghosts.push_back(std::make_unique<Ghost>(3, 3));
    _ghosts.push_back(std::make_unique<Ghost>(4, 4));
    _ghosts.push_back(std::make_unique<Ghost>(5, 5));
}

// Metoda de inițializare
void GameEngine::Init() {
    // Poți adăuga orice setări de inițializare suplimentare aici
}

// Metoda principală care rulează jocul
void GameEngine::Run() {
    while (_window.isOpen()) {
        ProcessEvents();
        Update();
        Display();
    }
}

// Tratarea evenimentelor (de exemplu, apăsarea tastelor)
void GameEngine::ProcessEvents() {
    sf::Event event;
    while (_window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            _window.close();
        else if (event.type == sf::Event::KeyPressed) {
            if (event.key.code == sf::Keyboard::W) {
                _pacman->Move('W');
            } else if (event.key.code == sf::Keyboard::S) {
                _pacman->Move('S');
            } else if (event.key.code == sf::Keyboard::A) {
                _pacman->Move('A');
            } else if (event.key.code == sf::Keyboard::D) {
                _pacman->Move('D');
            }
        }
    }
}

// Actualizarea stării jocului (mișcarea fantomelor, etc.)
void GameEngine::Update() {
    // Poți adăuga logica pentru fantome, verificarea coliziunilor, etc.
}

// Afișarea graficii pe fereastra de joc
void GameEngine::Display() {
    _window.clear();

    // Desenează tabla, Pacman și fantomele
    _painter.DrawBoard(_window, *_board);      // Desenează tabla de joc
    _painter.DrawPacman(_window, *_pacman);    // Desenează Pacman
    _painter.DrawGhosts(_window, _ghosts);     // Desenează fantomele

    _window.display();
}
