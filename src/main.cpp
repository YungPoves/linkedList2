#include <iostream>
#include "LinkedList.h"

int main()
{
  LinkedList *llist = new LinkedList();
  Node n1;
  n1.data = 12345;
  std::cout << "Hello." << std::endl;
  std::cout << n1.data << std::endl;
  llist->PrintList();

  return 0;
}