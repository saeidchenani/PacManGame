
#include "SFML/Graphics.hpp"
#include <vector>
#include "../App.hpp"


namespace PacMan
{

    class State
    {
  
    public:

        State(sf::RenderWindow * , std::vector<State*>*  );
        ~State();
        // virtual state* eventHandling(sf::RenderWindow *,sf::Event)=0;

        //update objects of each state 
        virtual State* update()=0;
    
        //for draw state
        virtual void render()=0;

    protected:
        sf::RenderWindow *window;
        std::vector<State*>* stateLists;

    };
    
   
    
}