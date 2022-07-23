#ifndef BUTTON_HPP
#define BUTTON_HPP
#include "SFML/Graphics.hpp"

namespace PacMan
{   
    enum buttonState { IDEL_BTN=0 , HOVER_BTN, PRESSED_BTN };


    class Button
    {
    private:
      sf::RectangleShape shape;
      sf::Font font;       
      sf::Text text;

      sf::Color idelColor;
      sf::Color hoveColor;
      sf::Color activeColor;
      short unsigned int btn_state;
    public:
        Button(float, float , float,float, sf::Font,std::string);
        ~Button();


        void update(sf::RenderWindow* );
        
        void render(sf::RenderTarget *);


    };
    
    


}



#endif