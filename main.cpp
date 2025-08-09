#include <SFML/Graphics.hpp>
#include "Arena.hpp"

int main()
{
    // Initialize program
    sf::RenderWindow window(sf::VideoMode({800, 600}), "ping...PONG", sf::Style::Titlebar | sf::Style::Close);
    window.setSize(sf::Vector2u(800, 600));

    // Create the arena
    Arena arena;
    arena.init(window);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        
        window.clear();
        
        // Draw elements
        arena.draw(window);

        window.display();
    }

    return 0;
}