#ifndef COMPLEX_H
#define COMPLEX_H

#include "Number.h"

class Complex:public Number
{
  static int count;

protected:
  virtual void print_real() = 0;        //pure virtual methods
  virtual void print_imag() = 0;

public:
  Complex();
  void print();
  static int get_count();
};

#endif
