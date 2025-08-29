#include "Arena.hpp"

Arena::Arena() : scoreLeft(0), scoreRight(0) {}

Arena::~Arena() {}

void Arena::init(sf::RenderWindow& window)
{;
    height = window.getSize().y;
    width = window.getSize().x;
    float i = 0;
    bars[0].barShape.setPosition({10.f, height / 2.f - bars[0].barShape.getSize().y / 2.f});
    bars[1].barShape.setPosition({width - 20.f, height / 2.f - bars[1].barShape.getSize().y / 2.f});
}

void Arena::draw(sf::RenderWindow& window)
{
    ball.update(width, height);
    window.draw(ball.ballShape);
    for (auto& bar : bars)
    {
        bar.update();
        window.draw(bar.barShape);
    }
}

void Arena::movePlayer(float y)
{
    // Move the player bar
    bars[0].move(y, height);
}

void Arena::moveOpponent(float y)
{
    // Move the opponent bar
    bars[1].move(y, height);
}

bool Arena::isInbounds(int x, int y)
{
    //
    return true;
}