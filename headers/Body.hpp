#pragma once

/*Since body is*/

#include "Node.hpp"
#include <SFML/Graphics.hpp>
class Body
{
public:
        Body(void);
        void addChild(Node* n);
        virtual void update();
        void draw(sf::RenderWindow &window) const;
        void setPosition(float x, float y);
private:
        sf::RectangleShape m_shape;
        std::vector<Node*> m_children;
        int rotation;
        int direction;      
};