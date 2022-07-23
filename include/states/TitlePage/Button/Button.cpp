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
       

// Call Update function in each frame 
void Button::update(sf::RenderWindow * window)
{
    //IDEL
    this->btn_state=IDEL_BTN;

    if
    (  sf::Mouse::getPosition(*window).x >= this->shape.getPosition().x 
        && sf::Mouse::getPosition(*window).x <= (this->shape.getPosition().x + this->shape.getSize().x) 
        && sf::Mouse::getPosition(*window).y >= this->shape.getPosition().y 
        && sf::Mouse::getPosition(*window).y <= (this->shape.getPosition().y + this->shape.getSize().y)
    )
    {
        //HOVER
        this->btn_state=HOVER_BTN;
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            // BTN PRESSED
            this->btn_state=PRESSED_BTN;
            
        }
        
    }

    switch ( btn_state )
    {
    case  IDEL_BTN  :
        this->idelColor= sf::Color(235,201,41);
        break;
    case  HOVER_BTN  :
        this->hoveColor= sf::Color::White;
        break;
    case  PRESSED_BTN  :
        this->activeColor= sf::Color::Green;
        break;
    default:
        break;
    }
    
}
        
void Button::render(sf::RenderTarget * target)
{
    target->draw(this->shape);
}