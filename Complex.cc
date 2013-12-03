#include "Complex.h"
#include <iostream.h>

int Complex::count = 0;  //initial static var.

Complex::Complex()
{
  count++;
}

void Complex::print()
{
  cout << "(";
  print_real();
  cout << " , ";
  print_imag();
  cout << ")";
}

int Complex::get_count()
{
  return count;
}