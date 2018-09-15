#include "../headers/LeftArm.hpp"
#include "../headers/Head.hpp"
Head::Head()
{
    m_shape=new sf::CircleShape(50.0f);
    m_shape->setFillColor(sf::Color::Red);
    m_shape->setOrigin(50,100);
}

void Head::update(const sf::Shape &parent)
{
    sf::Transform parentTransform = parent.getTransform();
    sf::Vector2f newOrigin = parentTransform.transformPoint(((sf::RectangleShape&)parent).getSize().x/2,0);
    m_shape->setPosition(newOrigin.x, newOrigin.y);
    m_shape->setRotation(parent.getRotation());
}