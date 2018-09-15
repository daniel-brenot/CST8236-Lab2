#pragma once
#include "../headers/Node.hpp"

class Head : public Node
{
  public:
    Head();
    virtual void update(const sf::Shape& parent);

  private:
    std::vector<Node *> m_children;
};  