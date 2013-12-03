#include "Complex_Float.h"
#include "Integer.h"
#include "Float.h"
#include "Complex_Integer.h"
#include <iostream.h>

int Complex_Float::count = 0;   //initial static var.

Complex_Float::Complex_Float(const float re, const float im): Real(re), Img(im)
{
  count++;
}

void Complex_Float::print_real()
{
  cout << Real;
}

void Complex_Float::print_imag()
{
  cout << Img;
}

int Complex_Float::get_count()
{
  return count;
}

//virtual + op.
Number * Complex_Float::operator+(Number & right)
{
  return right + *this;
}

//Complex_float + Complex_float
Number * Complex_Float::operator+(Complex_Float & right)
{
  Complex_Float * return_value = new Complex_Float(Real + right.Real, Img + right.Img);
  return return_value;
}

//Complex_float + integer
Number * Complex_Float::operator+(Integer & right)
{
  Complex_Float * return_value = new Complex_Float(Real + right.TheInt, Img);
  return return_value;
}

//Complex_float + float
Number * Complex_Float::operator+(Float & right)
{
  Complex_Float * return_value = new Complex_Float(Real + right.TheFloat, Img);
  return return_value;
}

//Complex_float + Complex_integer
Number * Complex_Float::operator+(Complex_Integer & right)
{
  Complex_Float * return_value = new Complex_Float(Real + right.Real, Img + right.Img);
  return return_value;
}