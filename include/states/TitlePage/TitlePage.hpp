#ifndef TITLEPAGE_HPP
#define TITLEPAGE_HPP
#include "SFML/Graphics.hpp"
#include "../State.hpp"
#include "Button/Button.hpp"
namespace PacMan{



    class TitlePage :public State
    {   
    public:

        TitlePage(sf::RenderWindow *, std::vector<State*>* );
        ~TitlePage();
        void update();
        void render();

    private:
        //BackGround Texture 
        sf::Texture bg_txtur;    
        //BackGround Sprite
        sf::Sprite bg_sp;

        //BackGround Font 
        sf::Font bg_font;
        //BackGround Text
        sf::Text bg_text;

        Button * newGame_btn;
    };
    
    
    
}


#endif