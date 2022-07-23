 #include "Button.hpp" 
 using namespace PacMan;

 
 
Button::Button(float xpos, float ypos, float width, float height, sf::Font font, std::string text)
{   
    this->btn_state= IDEL_BTN;

    this->shape.setPosition(sf::Vector2f(xpos,ypos));  
    this->shape.setSize(sf::Vector2f(width,height));

    this->font=font;
    this->text.setFont(this->font);
    this->text.setString(text);     
    this->text.setCharacterSize(16);


}
       


void Button::update(sf::Vector2f mous_pos)
{

}
        
void Button::render(sf::RenderTarget * target)
{

}