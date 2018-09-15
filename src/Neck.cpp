#include "../headers/LeftArm.hpp"
#include "../headers/Neck.hpp"
#include "../headers/Head.hpp"

Neck::Neck()
{
    m_shape->setFillColor(sf::Color::Red);
    ((sf::RectangleShape *)m_shape)->setSize(sf::Vector2f(20.0f, 75.0f));
    m_shape->setOrigin(((sf::RectangleShape *)m_shape)->getSize().x / 2, ((sf::RectangleShape *)m_shape)->getSize().y);
    rotation = -30;
    direction = 1;
    addChild(new Head());
}

void Neck::update(const sf::Shape &parent)
{
    sf::Transform parentTransform = parent.getTransform();
    if (rotation <= -45 && direction == -1){
        direction = 1;
    }
    else if (rotation >= 45 && direction == 1){
        direction = -1;
    }
    rotation += (direction * 2);
    sf::Vector2f newOrigin = parentTransform.transformPoint(((sf::RectangleShape&)parent).getSize().x/2,0);
    m_shape->setPosition(newOrigin.x, newOrigin.y);
    m_shape->setRotation(parent.getRotation() + rotation);
}