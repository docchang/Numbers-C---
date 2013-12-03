#include "Integer.h"
#include "Float.h"
#include "Complex_Integer.h"
#include "Complex_Float.h"
#include <iostream.h>

int Integer::count = 0;  //initial static var.

Integer::Integer(const int v): TheInt(v)
{
  count++;
}

void Integer::print()
{
  cout << TheInt;
}

int Integer::get_count()
{
  return count;
}

//virtual + op.
Number * Integer::operator+(Number & right)
{
  return right + *this;
}

//integer + integer
Number * Integer::operator+(Integer & right)
{
  Integer * return_value = new Integer(TheInt + right.TheInt);
  return return_value;
}

//integer + float
Number * Integer::operator+(Float & right)
{
  Float * return_value = new Float(TheInt + right.TheFloat);
  return return_value;
}

//integer + Complex_integer
Number * Integer::operator+(Complex_Integer & right)
{
  Complex_Integer * return_value = new Complex_Integer(TheInt + right.Real, right.Img);
  return return_value;
}

//integer + Complex_float
Number * Integer::operator+(Complex_Float & right)
{
  Complex_Float * return_value = new Complex_Float(TheInt + right.Real, right.Img);
  return return_value;
}