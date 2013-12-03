#ifndef FLOAT_H
#define FLOAT_H

#include "Number.h"

//forward declaration
class Integer;
class Complex_Integer;
class Complex_Float;

class Float:public Number
{
  float TheFloat;
  static int count;

public:
  Float(const float v);
  void print();
  static int get_count();
  Number * operator+(Number & right);   //virtual
  Number * operator+(Float & right);
  Number * operator+(Integer & right);
  Number * operator+(Complex_Float & right);
  Number * operator+(Complex_Integer & right);
  friend class Integer;
  friend class Complex_Integer;
  friend class Complex_Float;
};

#endif
