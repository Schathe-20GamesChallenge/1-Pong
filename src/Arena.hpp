#pragma once
#include <SFML/Graphics.hpp>
#include <array>
#include <iostream>

#include "Ball.hpp"
#include "Bar.hpp"

class Arena
{
    private:
        int scoreLeft{0};
        int scoreRight{0};

        int height{0};
        int width{0};

        Ball ball;
        std::array<Bar, 2> bars;

    public:
        Arena();
        ~Arena();

        void init(sf::RenderWindow& window);
        void draw(sf::RenderWindow& window);

        bool isInbounds(int x, int y);
};