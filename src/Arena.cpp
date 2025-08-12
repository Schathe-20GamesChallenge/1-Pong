#include "Arena.hpp"

Arena::Arena() : scoreLeft(0), scoreRight(0) {}

Arena::~Arena() {}

void Arena::init(sf::RenderWindow& window)
{;
    height = window.getSize().y;
    width = window.getSize().x;
}

void Arena::draw(sf::RenderWindow& window)
{
    ball.update();
    window.draw(ball.ballShape);
}

bool Arena::isInbounds(int x, int y)
{
    //
    return true;
}