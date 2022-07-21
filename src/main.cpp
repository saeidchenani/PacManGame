#include <SFML/Window.hpp>
#include <iostream>
int main() 
{
    sf::Window window(sf::VideoMode(800,600),"pacman");

    while ( window.isOpen())
    {
        
        sf::Event evnt;
        
        while ( window.pollEvent(evnt))
        {
            if(evnt.type== sf::Event::Closed)
            {   
                cout << "are you shour??";

                window.close();
            }
        }
        
    }

 return 0;   
}