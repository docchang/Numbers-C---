#ifndef NUMBER_H
#define NUMBER_H

//foward declaration
class Integer;
class Float;
class Complex_Integer;
class Complex_Float;

class Number
{
  static int count;

public:
  Number();
  virtual void print() = 0; // pure virtual method
  static int get_count();
  virtual Number * operator+(Number & right) = 0;
  virtual Number * operator+(Integer & right) = 0;
  virtual Number * operator+(Float & rihgt) = 0;
  virtual Number * operator+(Complex_Integer & right) = 0;
  virtual Number * operator+(Complex_Float & right) = 0;
};

#endif
