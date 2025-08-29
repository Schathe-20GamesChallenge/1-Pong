#include "Bar.hpp"

Bar::Bar()
{
    barShape.setSize(sf::Vector2f(10.f, 100.f));
    barShape.setFillColor(sf::Color::White);
}

Bar::~Bar() {}

void Bar::update()
{
    // Update the bar
}

void Bar::move(float y, int windowHeight)
{
    sf::Vector2f pos = barShape.getPosition();
    if (y > 0 && pos.y + barShape.getSize().y < windowHeight || y < 0 && pos.y > 0)
        barShape.move({0, y});
    // if (pos.y < 0 || pos.y + barShape.getSize().y > windowHeight)
}

void Bar::checkCollision(const sf::CircleShape& ballShape)
{
    // Check collision with the ball
}