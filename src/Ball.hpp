#pragma once
#include <SFML/Graphics.hpp>

class Ball
{
    private: 
        // Would be use to speed up the ball on bounces
        float velocity{1.f}; 
        // Speed of the ball in pixels per image
        float speed{4.f};
        std::array<int, 2> directions{1, 1};

    public:
        Ball();
        ~Ball();

        sf::CircleShape ballShape;

        void update(int windowWidth, int windowHeight);
        void updateBounce();
};