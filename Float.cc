#include "Float.h"
#include "Integer.h"
#include "Complex_Integer.h"
#include "Complex_Float.h"
#include <iostream.h>

int Float::count = 0;   //initial static var.

Float::Float(const float v) : TheFloat(v)
{
  count++;
}

void Float::print()
{
  cout << TheFloat;
}

int Float::get_count()
{
  return count;
}

//virtual + op.
Number * Float::operator+(Number & right)
{
  return right + *this;
}

//float + float
Number * Float::operator+(Float & right)
{
  Float * return_value = new Float(TheFloat + right.TheFloat);
  return return_value;
}

//float + integer
Number * Float::operator+(Integer & right)
{
  Float * return_value = new Float(TheFloat + right.TheInt);
  return return_value;
}

//float + Complex_integer
Number * Float::operator+(Complex_Integer & right)
{
  Complex_Float * return_value = new Complex_Float(TheFloat + right.Real, right.Img);
  return return_value;
}

//float + Complex_float
Number * Float::operator+(Complex_Float & right)
{
  Complex_Float * return_value = new Complex_Float(TheFloat + right.Real, right.Img);
  return return_value;
}