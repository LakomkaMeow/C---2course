#include "Bird.hpp"

Bird::Bird(){
    if (!birdTexture.loadFromFile("Bird.png")) {
        std::cerr << "Failed to load bird.png" << std::endl;
    }
    birdSprite.setTexture(birdTexture);
    birdX = 0.0f;
}

void Bird::Do(){
    std::cout << "I am bird!" << std::endl;
    birdX += 0.1f;
    birdSprite.setPosition(birdX, 15);
}

void Bird::Draw(sf::RenderWindow& window){
    window.draw(birdSprite);
}