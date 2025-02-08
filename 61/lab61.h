#ifndef LAB61_H
#define LAB61_H

using namespace std;

class RealNumber
{
 public:
  RealNumber(double x = 0.0);      // Initializes realValue
  int round() const;               // Returns realValue rounded to the
                                   // nearest integer
  int wholePart() const;           // Returns the integer part of realValue
  double fracPart() const;         // Returns the fractional part of realValue
  double getReal() const;          // Returns realValue
  void setReal(double x);          // Sets realValue to x
 private:
  double realValue;
};

#endif
