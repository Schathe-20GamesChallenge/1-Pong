#include "Bar.hpp"

Bar::Bar()
{
    barShape.setSize(sf::Vector2f(10.f, 100.f));
    barShape.setFillColor(sf::Color::White);
}

Bar::~Bar() {}

void Bar::update()
{
    // Update the bar's position
}

void Bar::move()
{
    // Move the bar
}

void Bar::checkCollision(const sf::CircleShape& ballShape)
{
    // Check collisino with the ball
}