#include "../headers/RightForearm.hpp"

RightForearm::RightForearm()
{
    m_shape->setFillColor(sf::Color::Red);
    ((sf::RectangleShape *)m_shape)->setSize(sf::Vector2f(35.0f, 150.0f));
    m_shape->setOrigin(15,150);
    rotation = 30;
    direction = 1;
}

void RightForearm::update(const sf::Shape &parent)
{
    if (rotation <= -90 && direction == -1){
        direction = 1;
    }
    else if (rotation >= 90 && direction == 1){
        direction = -1;
    }
    rotation += (direction * 5);
    sf::Vector2f newOrigin = parent.getTransform().transformPoint(17,0);
    m_shape->setPosition(newOrigin.x,newOrigin.y);
    m_shape->setRotation(rotation+90);
}