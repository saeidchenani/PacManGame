#include "../include/App.hpp"
#include "../include/states/TitlePage/TitlePage.hpp"
#include "../include/Config.hpp"
using namespace PacMan;



//start and initilize game
void App::startGame()
{   
    //CREATE Graphical window
    this->window->create(sf::VideoMode(PM_WINDOW_WIDTH , PM_WINDOW_HEIGHT ), PM_WINDOW_TITLE);

    //Initilize the vector of States
    for (auto& state: stateVec)
    {          
        state = nullptr;
    }

    currentState =nullptr;
    //end Initilize

    //CREATE FIRST GAME STATE THAT IS MENU-PAGE and USING POLYMORPHISM
    this->stateVec.push_back( new TitlePage(window,&stateVec));

     
}


void App::update()
{
    //  run the main loop
    while (window->isOpen())
    {
        // handle events
        sf::Event event;
        while (window->pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window->close();
        }

        // clear Previous  frame
        window->clear();
      
        window->display();
    }
}

