//
// Created by bee4boop on 31.07.25.
//

#pragma once

#include "SFML/System/Vector2.hpp"
#include "SFML/Graphics/Color.hpp"

namespace logic
{
    class Ball
    {
    public:
        Ball(sf::Vector2u position, sf::Color color);

        void activate();
        void setPosition(sf::Vector2u position);
        sf::Color getColor();

    private:
        bool m_is_active = false;
        sf::Vector2u m_position;
        sf::Color m_color;
    };
} // logic
