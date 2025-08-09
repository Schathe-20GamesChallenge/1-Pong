#include "Ball.hpp"

Ball::Ball()
{
    this->ballShape = sf::CircleShape(10.f);
    ballShape.setFillColor(sf::Color::White);
    ballShape.setPosition({400.f, 300.f});
}

Ball::~Ball() {}

void Ball::update()
{
    
}