//
// Created by bee4boop on 31.07.25.
//

#pragma once
#include "logic/board.h"
#include "SFML/Window/Window.hpp"

namespace render
{
    class BoardRender
    {
    public:
        BoardRender(float size, float margin);
        void render(const logic::Board& board, sf::Window& window) const;
    };
} // render
