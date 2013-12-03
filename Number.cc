#include "Number.h"

int Number::count = 0;  //initial static var.

Number::Number()
{
  count++;
}

int Number::get_count()
{
  return count;
}