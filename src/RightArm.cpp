#include "../headers/RightArm.hpp"
#include "../headers/RightForearm.hpp"

RightArm::RightArm(){
    ((sf::RectangleShape *)m_shape)->setFillColor(sf::Color::Red);
    ((sf::RectangleShape *)m_shape)->setSize(sf::Vector2f(35.0f,150.0f));
    ((sf::RectangleShape *)m_shape)->setOrigin(((sf::RectangleShape *)m_shape)->getSize().x/2,((sf::RectangleShape *)m_shape)->getSize().y);
    rotation=-45;
    direction=1;
    addChild(new RightForearm());
}

void RightArm::update(const sf::Shape& parent)
{
    sf::Transform parentTransform = parent.getTransform();
    if(rotation<=-45&&direction==-1){direction=1;}
    else if(rotation>=45&&direction==1){direction=-1;}
    rotation+=(direction*2);
    sf::Vector2f newOrigin=parentTransform.transformPoint(60,10);
    ((sf::RectangleShape *)m_shape)->setPosition(newOrigin.x,newOrigin.y);
    ((sf::RectangleShape *)m_shape)->setRotation(parent.getRotation()+90+rotation);
}