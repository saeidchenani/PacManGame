#include "TitlePage.hpp"
#include "../State.hpp"
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "../../Config.hpp"
#include <string.h>
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

    //set Instructions that tell the player how to act
    if ( bg_font.loadFromFile("../../../Font/vazir-font/Vazir.ttf") )
    {
        bg_text.setFont(bg_font);
        bg_text.setString(std::string(PM_TEXT_SET_STRING));
        bg_text.setCharacterSize(20);	
        bg_text.setFillColor(sf::Color(235,201,46));
        bg_text.setPosition( sf::Vector2f(330,400));
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