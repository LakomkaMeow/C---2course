#include "Rat.hpp"

Rat::Rat(sf::RenderWindow& window){
    if (!ratTexture.loadFromFile("Rat.png")) {
        std::cerr << "Failed to load rat.png" << std::endl;
    }
    ratSprite.setTexture(ratTexture);

    ratX = window.getSize().x - ratSprite.getGlobalBounds().width;
    ratY = window.getSize().y - ratSprite.getGlobalBounds().height;
    ratSprite.setPosition(ratX, ratY);
}

void Rat::Do(){
    std::cout << "I am Rat!" << std::endl;
    ratX -= 0.1f;
    ratSprite.setPosition(ratX, 400);
}

void Rat::Draw(sf::RenderWindow& window){
    window.draw(ratSprite);
}