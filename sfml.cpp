#include <iostream>
using namespace std;
#include <SFML/Graphics.hpp>

int main()
{
    // Crear la ventana
    sf::RenderWindow window(sf::VideoMode(800, 600), "Mi primera ventana con SFML");

    // Crear un círculo
    sf::CircleShape circle(50.f); // radio
    circle.setFillColor(sf::Color::Green);
    circle.setPosition(375, 275);

    // Bucle principal
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Limpiar pantalla
        window.clear();

        // Dibujar objeto
        window.draw(circle);

        // Mostrar en pantalla
        window.display();
    }

    return 0;
}