
#include "State.hpp"

using namespace PacMan;


State::State(sf::RenderWindow * window, std::vector<State*>* stateList)
{
    this->window = window;
    this->stateLists = stateList;

}   