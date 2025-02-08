#ifndef LAB64_H
#define LAB64_H

using namespace std;

class Rational
{
 public:
  Rational();                           // default constructor
  Rational(int num, int denom);         // additional constructor
  void setNumerator(int num);           // set numerator to num
  void setDenominator(int denom);       // set denominator to denom
  int  getNumerator() const;            // return numerator
  int  getDenominator() const;          // return denominator
  void reduce();                        // reduce to lowest terms and
                                        //   normalize
 private:
  int numerator;
  int denominator;
  int gcd(int u, int v) const;          // returns the gcd of u and v
};

#endif
