#ifndef LISTIT_H
#define LISTIT_H

#include "List.h"

class ListIt
{
  Node *Current;
  Number *temp;

public:
  ListIt(List &L);
  bool hasNext();
  Number *next();
};

#endif
