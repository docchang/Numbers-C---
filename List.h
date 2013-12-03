#ifndef LIST_H
#define LIST_H

#include "Number.h"

class List;

class Node
{
  Number *data;
  Node *next;

public:
  Node (Node *N, Number *D);
  friend class List;
  friend class ListIt;
};

class List
{
  Node *Head;
  Node *Curr;
  Node *Tail;

public:
  List();
  void insert(Number *item);
  void print();
  friend class ListIt;
};

#endif