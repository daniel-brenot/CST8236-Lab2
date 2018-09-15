#pragma once
#include "../headers/Node.hpp"

class RightArm : public Node
{
  public:
    RightArm();
    virtual void update(const sf::Shape& parent);

  private:
    int rotation;
    int direction;
    std::vector<Node *> m_children;
};