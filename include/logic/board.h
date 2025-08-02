//
// Created by bee4boop on 31.07.25.
//

#pragma once
#include <memory>
#include <vector>

#include "ball.h"
#include "SFML/System/Vector2.hpp"
#include "SFML/Graphics/Color.hpp"

namespace logic
{
    class Board
    {
    public:
        Board(int size);
        ~Board();

        bool addBall(sf::Vector2u position, sf::Color color);
        bool moveBall(sf::Vector2u from, sf::Vector2u to);
        Ball* getBallAt(sf::Vector2u position) const;
        bool isEmptyAt(sf::Vector2u position) const;

        int getSize() const;

        Board setBackgroundColor(sf::Color color);
        Board setBoardColor(sf::Color color);
        Board setBorderColor(sf::Color color);

    private:
        std::vector<std::unique_ptr<Ball>> m_balls;
        std::vector<std::vector<Ball>> m_grid;
        int m_size;

        sf::Color m_background_color;
        sf::Color m_board_color;
        sf::Color m_border_color;
    };
} // logic
