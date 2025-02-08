#ifndef LAB58_H
#define LAB58_H

#include <lab57.h>

using namespace std;

// Function lcm returns the least common multiple of u & v
int lcm(int u, int v);

// Function rationalAdd returns augend + addend.  The result is
// returned in reduced form.
Rational rationalAdd(const Rational& augend, const Rational& addend);

// Function rationalAdditiveInverse returns the additive inverse.
// The additive inverse, or opposite, of a number a is the number
// that, when added to a, yields zero. Thus, the fraction a/b is
// returned as -a/b.
Rational rationalAdditiveInverse(const Rational *rational);

// Function rationalSubtract returns minuend - subtrahend.  The result
// is returned in reduced form.
Rational rationalSubtract(const Rational& minuend, const Rational& subtrahend);

// Function rationalMultiply returns multiplier x multiplicand.  The
// result is returned in reduced form.
Rational rationalMultiply(const Rational& multiplier, const Rational& multiplicand);

// Function rationalMultiplicativeInverse returns the multiplicative inverse.
// The multiplicative inverse, or reciprocal, of a number a is the
// number that, when multiplied by a, yields the multiplicative
// identity, 1.  The multiplicative inverse of the fraction a/b is b/a. 
Rational rationalMultiplicativeInverse(const Rational *rational);

// Function rationalDivide returns dividend / divisor.  The result is
// returned in reduced form.
Rational rationalDivide(const Rational& dividend, const Rational& divisor);

#endif
