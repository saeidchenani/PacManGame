#include "TitlePage.hpp"
#include "../State.hpp"
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"

using namespace PacMan;


TitlePage::TitlePage(sf::RenderWindow * window, std::vector<State*>* stateListes):State(window,stateListes)
{   
    this->window->setTitle("TITLE PAGE");
    this->window->setSize(sf::Vector2u(1100,1000));

    //set PacMan Logo
    if ( bg_txtur.loadFromFile("../../../assets/PacManLogo.png"))
    {
        bg_sp.setTexture(bg_txtur);
        bg_sp.setOrigin(  bg_txtur.getSize().x/float(2) , bg_txtur.getSize().y/float(2)  );
        bg_sp.setPosition( sf::Vector2f( window->getSize().x/ float(2) , 150));

    }

    //set PacMan 
    if ( bg_font.loadFromFile())
    {
        /* code */
    }
    

    
}


State* TitlePage::update()
{
    return this;
} 



void TitlePage::render()
{
    window->clear(sf::Color::Black);



    window->display();
}