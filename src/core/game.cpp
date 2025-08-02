//
// Created by bee4boop on 31.07.25.
//

#include "../../include/core/game.hpp"

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

namespace core {
    Game::Game() : window(sf::VideoMode({1920, 1080}), "Color Lines 94") {
    }

    Game::~Game() = default;

    void Game::run() {
        while (this->window.isOpen()) {
            while (const std::optional event = this->window.pollEvent()) {
                this->handleEvent(event);
            }

            // rest code

            window.display();
        }
    }

    void Game::handleEvent(const std::optional<sf::Event> &event) {
        if (event->is<sf::Event::Closed>()) {
            this->window.close();
        }
    }
}
