#include "../headers/Body.hpp"
#include "../headers/LeftArm.hpp"
#include "../headers/RightArm.hpp"
#include "../headers/Neck.hpp"

Body::Body(void)
{
    m_shape.setFillColor(sf::Color::Red);
    m_shape.setSize(sf::Vector2f(50.0f, 300.0f));
    m_shape.setOrigin(m_shape.getSize().x / 2, m_shape.getSize().y);
    rotation = -45;
    direction = 1;
    addChild(new LeftArm());
    addChild(new RightArm());
    addChild(new Neck());
}

void Body::update()
{
    if (rotation <= -45 && direction == -1){
        direction = 1;
    }
    else if (rotation >= 45 && direction == 1){
        direction = -1;
    }
    rotation += direction;
    m_shape.setRotation(rotation);
}

void Body::draw(sf::RenderWindow &window) const
{
    window.draw(m_shape);
    for (std::size_t i = 0; i < m_children.size(); ++i){
        m_children[i]->update(m_shape);
        m_children[i]->draw(window, m_shape);
    }
}

void Body::addChild(Node *n)
{
    m_children.push_back(n);
}

void Body::setPosition(float x, float y){
    m_shape.setPosition(x,y);
}