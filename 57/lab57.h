/*
 * Prototypes for operations on rational numbers.
 */

#ifndef LAB57_H
#define LAB57_H

#include <iostream>

using namespace std;

typedef struct
{
  int numerator;
  int denominator;
} Rational;

// Function rationalValid returns true if rational represents a valid
// rational number and false otherwise.
bool rationalValid(const Rational& rational);

// Function rationalNormalize reduces rational to lowest
// terms. Negative rationals should be manipulated so that the
// minus sign goes with the numerator.  Zero is represented by zero
// (0) as the numerator and one (1) as the denominator.
void rationalNormalize(Rational& rational);

// Function rationalInput initializes rational from input stream in
istream& rationalInput(istream& in, Rational& rational);

// Function rationalOutput writes rational to output stream out in the
// format rational.numerator/rational.denominator
ostream& rationalOutput(ostream& out, const Rational& rational);

// Function gcd returns the greatest common divisor of u & v
int gcd(int u, int v);

#endif
