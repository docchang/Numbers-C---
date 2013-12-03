#ifndef COMPLEX_INTEGER_H
#define COMPLEX_INTEGER_H

#include "Complex.h"

//forward declaration
class Integer;
class Float;
class Complex_Float;

class Complex_Integer:public Complex
{
  int Real;
  int Img;
  static int count;

public:
  Complex_Integer(const int re, const int im);
  void print_real();
  void print_imag();
  static int get_count();
  Number * operator+(Number & right);  //virtual
  Number * operator+(Complex_Integer & right);  
  Number * operator+(Integer & right);
  Number * operator+(Float & right);
  Number * operator+(Complex_Float & right);
  friend class Integer;
  friend class Float;
  friend class Complex_Float;
};

#endif
