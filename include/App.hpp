#ifndef APP_HPP
#define APP_HPP

#include <iostream>
#include <vector>
#include "states/State.hpp"
#include "SFML/Graphics.hpp"

namespace PacMan
{

    class App
    {
       
        
        public:
       

        //start and initilize the game
        void startGame();

        //update state function
        void update();
        ~App();


        private:
        
        sf::RenderWindow* window;

        //vector of States
        std::vector<State*> stateVec;

        //current state
        State* currentState;
        

    };


}


#endif