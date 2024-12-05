#include "gameengine.hpp"
#include "pacman.hpp"
#include "ghost.hpp"
#include "painter.hpp"

// Variabile pentru scor și vieți
int score = 0;
int lives = 3;

void GameEngine::update() {
    // Actualizează poziția PacMan-ului și fantomelor
    pacman.update();
    for (auto& ghost : ghosts) {
        ghost.update();
    }
    
    // Verifică coliziunile
    checkCollisions();
    
    // Verifică dacă PacMan a mâncat un punct
    if (pacman.hasEatenPoint()) {
        score += 10;
        pacman.resetPoint(); // Resetăm punctul mâncat
    }
    
    // Verifică dacă PacMan a fost prins de o fantomă
    if (pacman.hasCollidedWithGhost(ghosts)) {
        lives -= 1;
        pacman.resetPosition(); // Resetăm poziția PacMan-ului
        if (lives <= 0) {
            endGame();
        }
    }
    
    // Redesenarea ecranului
    painter.draw(pacman, ghosts, score, lives);
}

void GameEngine::checkCollisions() {
    // Logica de coliziune între PacMan și puncte
    for (auto& point : points) {
        if (pacman.position == point.position) {
            pacman.eatPoint();
            score += 10;
            points.erase(std::remove(points.begin(), points.end(), point), points.end()); // Șterge punctul
        }
    }
}

void GameEngine::endGame() {
    // Logica pentru finalul jocului
    std::cout << "Game Over! Scor final: " << score << std::endl;
}
