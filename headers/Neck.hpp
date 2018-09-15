#pragma once
#include "../headers/Node.hpp"

class Neck : public Node
{
  public:
    Neck();
    virtual void update(const sf::Shape& parent);

  private:
    int rotation;
    int direction;
    std::vector<Node *> m_children;
};  