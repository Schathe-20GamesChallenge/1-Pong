#pragma once
#include <SFML/Graphics.hpp>

class Ball
{
    private: 
        // Speed of the ball in pixels per image
        float velocity{1.f};
        float speed{4.f};

    public:
        Ball();
        ~Ball();

        sf::CircleShape ballShape;

        void update();
};