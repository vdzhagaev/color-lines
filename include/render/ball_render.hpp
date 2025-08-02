//
// Created by bee4boop on 31.07.25.
//

#pragma once
#include "logic/ball.h"
#include "SFML/Graphics/CircleShape.hpp"
#include "SFML/Window/Window.hpp"

namespace render
{
    class BallRender
    {
    public:
        BallRender(float size, float margin);
        void render(const logic::Ball& ball, sf::Window& window) const;

    private:
        float m_size;
        float m_margin;
        sf::CircleShape m_shape;
    };
} // render
