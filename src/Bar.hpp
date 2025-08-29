#pragma once
#include <SFML/Graphics.hpp>


class Bar
{
    private:
        float speed{2.f};

    public:
        Bar();
        ~Bar();

        sf::RectangleShape barShape;
        
        void update();
        void move(float y, int windowHeight);
        void checkCollision(const sf::CircleShape& ballShape);
};