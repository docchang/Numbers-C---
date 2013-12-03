#include "ListIt.h"
#include <iostream.h>

ListIt::ListIt(List &L)
{
  Current = L.Head;  //reference to Object
}

bool ListIt::hasNext()
{
  //Current exist
  if (Current)
    return true;

  //Null Current pointer
  return false;
}

Number * ListIt::next()
{
  temp = Current->data;
  Current = Current->next;
  return temp;
}