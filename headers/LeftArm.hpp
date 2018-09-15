#pragma once
#include "../headers/Node.hpp"

class LeftArm : public Node
{
  public:
    LeftArm();
    virtual void update(const sf::Shape& parent);

  private:
    int rotation;
    int direction;
    std::vector<Node *> m_children;
};