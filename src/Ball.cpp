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
    ballShape.move({directions[0] * speed, directions[1] * speed});

    sf::Vector2f pos = ballShape.getPosition();
    if (pos.x < 0 || pos.x + ballShape.getRadius() * 2 > 800)
        directions[0] = -directions[0];
    
    if (pos.y < 0 || pos.y + ballShape.getRadius() * 2 > 600)
        directions[1] = -directions[1];
}

void Ball::updateBounce()
{

}