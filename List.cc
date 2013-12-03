#include "List.h"
#include <iostream.h>

//constructing node with its element and next pointer
Node::Node(Node *N, Number *D)
{
  next = N;
  data = D;
}

//List constructor
List::List()
{
  Head = NULL;
}

void List::insert(Number *item)
{
  if (Head)
  {
    Tail->next = new Node(NULL, item);
    Tail = Tail->next;
    return;
  }

  //a new list (Head = NULL)
  Head = new Node(NULL, item);
  Tail = Head;
}

void List::print()
{
  if (Head)
  {
    Curr = Head;
    Curr->data->print();
    Curr = Curr->next;
    for (; Curr!=NULL; Curr = Curr->next)
    {
      cout << ", ";
      Curr->data->print();
    }
  }
  cout << endl;
}