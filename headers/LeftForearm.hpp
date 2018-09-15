#pragma once
#include "../headers/Node.hpp"

class LeftForearm : public Node
{
  public:
    LeftForearm();
    virtual void update(const sf::Shape& parent);

  private:
    int rotation;
    int direction;
    std::vector<Node *> m_children;
};