#pragma once
#include "Node.h"

class LinkedList
{
private:
  Node *head;
public:
  LinkedList();
  ~LinkedList();
  void PrintList();
};

LinkedList::LinkedList()
{
  head = nullptr;
}

LinkedList::~LinkedList()
{
}

inline void LinkedList::PrintList()
{
  if (this->head == nullptr)
  {
    std::cout << "List is empty.\n";
  }  
}
