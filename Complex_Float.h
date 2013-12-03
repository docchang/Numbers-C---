#ifndef COMPLEX_FLOAT_H
#define COMPLEX_FLOAT_H

#include "Complex.h"

//forward declaration
class Integer;
class Float;
class Complex_Integer;

class Complex_Float:public Complex
{
  float Real;
  float Img;
  static int count;

public:
  Complex_Float(const float re, const float im);
  void print_real();
  void print_imag();
  static int get_count();
  Number * operator+(Number & right);  //virtual
  Number * operator+(Complex_Float & right);
  Number * operator+(Integer & right);
  Number * operator+(Float & right);
  Number * operator+(Complex_Integer & right);
  friend class Integer;
  friend class Float;
  friend class Complex_Integer;
};

#endif
