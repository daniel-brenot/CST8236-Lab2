#pragma once
#include <SFML/Graphics.hpp>

class Node: public sf::Transformable
{
public:
        Node(sf::Shape* s);
        Node();
        virtual void update(const sf::Shape& parent) = 0;
        void draw(sf::RenderWindow& window, const sf::Shape &parent) const;
        void addChild(Node* n);
protected:
        sf::Shape* m_shape;
        std::vector<Node *> m_children;
};