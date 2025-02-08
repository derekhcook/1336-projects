#ifndef LAB66_H
#define LAB66_H

#include <iostream>

using namespace std;

class Rational
{
 public:
  Rational();                                     // default constructor
  Rational(int num, int denom);                   // additional constructor
  void setNumerator(int num);                     // set numerator to num
  void setDenominator(int denom);                 // set denominator to denom
  int  getNumerator() const;                      // returns numerator
  int  getDenominator() const;                    // returns denominator
  void reduce();                                  // reduce to lowest terms
                                                  //   and normalize
  Rational add(const Rational& addend) const;     // addition
  Rational additiveInverse() const;               // given a/b, returns -a/b
  Rational subtract(const Rational& subtrahend) const; // subtraction
  Rational multiply(const Rational& multiplicand) const; // multiplication
  Rational multiplicativeInverse() const;         // given a/b, returns b/a
  Rational divide(const Rational& divisor) const; // division
  ostream& print(ostream& os) const;              // print Rational to output
                                                  //   stream os
  istream& read(istream& is);                     // read Rational from input
                                                  //   stream is
 private:
  int numerator;
  int denominator;
  int gcd(int u, int v) const;                    // returns the greatest
                                                  //   common divisor of u
                                                  //   and v
  int lcm(int u, int v) const;                    // returns the least common
                                                  //   multiple of u and v
};

#endif
