#pragma once
#include "../headers/Node.hpp"

class RightForearm : public Node
{
  public:
    RightForearm();
    virtual void update(const sf::Shape& parent);

  private:
    int rotation;
    int direction;
    std::vector<Node *> m_children;
};