#ifndef INTEGER_H
#define INTEGER_H

#include "Number.h"

//forward declaration
class Float;
class Complex_Integer;
class Complex_Float;

class Integer:public Number
{
  int TheInt;
  static int count;

public:
  Integer(const int v);
  void print();
  static int get_count();
  Number * operator+(Number & right);  //virtual
  Number * operator+(Integer & right);
  Number * operator+(Float & right);
  Number * operator+(Complex_Float & right);
  Number * operator+(Complex_Integer & right);
  friend class Float;
  friend class Complex_Integer;
  friend class Complex_Float;
};

#endif
