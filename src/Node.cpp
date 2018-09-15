#include "../headers/Node.hpp"

Node::Node(sf::Shape* s):m_shape(s){}
Node::Node():m_shape(new sf::RectangleShape()){}

void Node::draw(sf::RenderWindow& window, const sf::Shape &parent) const
{       
        window.draw(*m_shape);
        for (std::size_t i = 0; i < m_children.size(); ++i){
                m_children[i]->update(*m_shape);
                m_children[i]->draw(window,*m_shape);
        }
}

void Node::addChild(Node* n)
{
        m_children.push_back(n);
}