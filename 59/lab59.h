#ifndef LAB59_H
#define LAB59_H

#include <lab58.h>

using namespace std;

// Function rationalEqual returns true if rational first is equal to
// rational second and false otherwise.
bool rationalEqual(const Rational& first, const Rational& second);

// Function rationalNotEqual returns true if rational first is not
// equal to rational second and false otherwise.
bool rationalNotEqual(const Rational& first, const Rational& second);

// Function rationalLessThan returns true if rational first is less
// than rational second and false otherwise.
bool rationalLessThan(const Rational& first, const Rational& second);

// Function rationalLessThanOrEqual returns true if rational first
// is less than or equal to rational second and false otherwise.
bool rationalLessThanOrEqual(const Rational& first, const Rational& second);

// Function rationalGreaterThan returns true if rational first is greater
// than rational second and false otherwise.
bool rationalGreaterThan(const Rational& first, const Rational& second);

// Function rationalGreaterThanOrEqual returns true if rational first
// is greater than or equal to rational second and false otherwise.
bool rationalGreaterThanOrEqual(const Rational& first, const Rational& second);

#endif
