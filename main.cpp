#include <SFML/Graphics.hpp>
#include "Arena.hpp"

int main()
{
    // Initialize program
    sf::RenderWindow window(sf::VideoMode({800, 600}), "ping...PONG", sf::Style::Titlebar | sf::Style::Close);
    window.setSize(sf::Vector2u(800, 600));
    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(120);

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

        // Input handling
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
            arena.movePlayer(-10);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
            arena.movePlayer(10);
        
        // Temp input handling (for testing)
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
            arena.moveOpponent(-10);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
            arena.moveOpponent(10);

        window.clear();
        
        // Draw elements
        arena.draw(window);

        window.display();
    }

    return 0;
}