#include "painter.hpp"
#include <SFML/Graphics.hpp>

void Painter::DrawImage(Point topLeft, Point bottomRight, const std::vector<std::string>& image) {
    // Creare fereastră SFML
    sf::RenderWindow window(sf::VideoMode(800, 600), "Pacman Game");

    // Încarcă o imagine și o plasează într-o locație pe ecran
    sf::Texture texture;
    if (!texture.loadFromFile("image.png")) {
        // Verifica dacă imaginea a fost încărcată corect
        std::cerr << "Failed to load image." << std::endl;
        return;
    }
    sf::Sprite sprite(texture);
    sprite.setPosition(topLeft.x, topLeft.y);  // Setează poziția imaginii

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(sprite);  // Desenează imaginea
        window.display();
    }
}

void Painter::WriteText(Point position, const std::string& text) {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Pacman Game");

    sf::Font font;
    if (!font.loadFromFile("arial.ttf")) {  // Asigură-te că ai fontul corect
        std::cerr << "Failed to load font." << std::endl;
        return;
    }

    sf::Text textObj;
    textObj.setFont(font);
    textObj.setString(text);
    textObj.setCharacterSize(24);  // Setează mărimea textului
    textObj.setFillColor(sf::Color::White);  // Setează culoarea textului
    textObj.setPosition(position.x, position.y);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(textObj);  // Desenează textul
        window.display();
    }
}
