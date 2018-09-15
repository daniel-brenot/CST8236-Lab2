#include <SFML/Graphics.hpp>
#include "../headers/Body.hpp"
#define WIDTH 1024
#define HEIGHT 768

int main()
{
    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "Wacky wavy arm inflatable tube man!");
    window.setFramerateLimit(140);
    Body body;
    body.setPosition(WIDTH/2,HEIGHT/4*3);
    

    while (window.isOpen())
    {
        /*Start Animation logic*/
        body.update();

        /*End animation logic*/
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        body.draw(window);
        window.display();
    }

    return 0;
}

