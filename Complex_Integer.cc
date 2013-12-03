#include "Complex_Integer.h"
#include "Integer.h"
#include "Float.h"
#include "Complex_Float.h"
#include <iostream.h>

int Complex_Integer::count = 0;  //initial static var.

Complex_Integer::Complex_Integer(const int re, const int im): Real(re), Img(im)
{
  count++;
}

void Complex_Integer::print_real()
{
  cout << Real;
}

void Complex_Integer::print_imag()
{
  cout << Img;
}

int Complex_Integer::get_count()
{
  return count;
}

//virtual + op.
Number * Complex_Integer::operator+(Number & right)
{
  return right + *this;
}

//Complex_integer + Complex_integer
Number * Complex_Integer::operator+(Complex_Integer & right)
{
  Complex_Integer * return_value = new Complex_Integer(Real + right.Real, Img + right.Img);
  return return_value;
}

//Complex_integer + integer
Number * Complex_Integer::operator+(Integer & right)
{
  Complex_Integer * return_value = new Complex_Integer(Real + right.TheInt, Img);
  return return_value;
}

//Complex_integer + float
Number * Complex_Integer::operator+(Float & right)
{
  Complex_Float * return_value = new Complex_Float(Real + right.TheFloat, Img);
  return return_value;
}

//Complex_integer + Complex_float
Number * Complex_Integer::operator+(Complex_Float & right)
{
  Complex_Float * return_value = new Complex_Float(Real + right.Real, Img + right.Img);
  return return_value;
}