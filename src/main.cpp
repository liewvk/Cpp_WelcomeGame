#include <SFML/Graphics.hpp>

#include <filesystem>
#include <iostream>

int main()
{
    const std::filesystem::path fontPath =
        std::filesystem::path(GAME_ASSET_DIR)
        / "fonts"
        / "welcome.ttf";

    sf::Font font;

    if (!font.openFromFile(fontPath))
    {
        std::cerr
            << "Unable to load the font.\n"
            << "Expected location: "
            << fontPath.string()
            << '\n';

        return 1;
    }

    sf::RenderWindow window(
        sf::VideoMode({800, 600}),
        "My First C++ Game - Visual Studio 2026",
        sf::Style::Titlebar | sf::Style::Close
    );

    window.setFramerateLimit(60);

    sf::Text welcome(font);
    welcome.setString("Welcome to C++ Game Programming!");
    welcome.setCharacterSize(30);
    welcome.setFillColor(sf::Color::White);
    welcome.setPosition({70.f, 220.f});

    sf::Text instruction(font);
    instruction.setString("Close the window to exit.");
    instruction.setCharacterSize(22);
    instruction.setFillColor(sf::Color(180, 200, 220));
    instruction.setPosition({70.f, 290.f});

    while (window.isOpen())
    {
        while (const auto event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        if (!window.isOpen())
        {
            break;
        }

        window.clear(sf::Color(20, 30, 50));
        window.draw(welcome);
        window.draw(instruction);
        window.display();
    }

    return 0;
}
