//
// Created by bee4boop on 31.07.25.
//

#pragma once
#include "logic/board.h"
#include "SFML/Window/Window.hpp"

namespace core
{
    class Game
    {
    public:
        sf::Window window;
        Game();
        ~Game();

        void run();

        logic::Board& getBoard();

    private:
        void handleEvent(const std::optional<sf::Event>& event);
        void update();
        void render();

        logic::Board& m_board;
        logic::Ball* m_selected_ball = nullptr;
    };
}
