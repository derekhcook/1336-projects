// Derek Cook
// CS 1337
// Lab 59

#include <lab59.h>

#include <cmath>

// Function rationalEqual returns true if rational first is equal to
// rational second and false otherwise.
bool rationalEqual(const Rational& first, const Rational& second)
{

    Rational equal1;
    Rational equal2;

    equal1.denominator = first.denominator;
    equal1.numerator = first.numerator;
    equal2.denominator = second.denominator;
    equal2.numerator = second.numerator;

    rationalNormalize(equal1);
    rationalNormalize(equal2);

    if (equal1.numerator == equal2.numerator && equal1.denominator == equal2.denominator)
        return true;
    else
        return false;

}
// Function rationalNotEqual returns true if rational first is not
// equal to rational second and false otherwise.
bool rationalNotEqual(const Rational& first, const Rational& second)
{
    Rational equal1;
    Rational equal2;

    equal1.denominator = first.denominator;
    equal1.numerator = first.numerator;
    equal2.denominator = second.denominator;
    equal2.numerator = second.numerator;

    rationalNormalize(equal1);
    rationalNormalize(equal2);

    if (equal1.numerator == equal2.numerator && equal1.denominator == equal2.denominator)
        return false;
    else
        return true;
}
// Function rationalLessThan returns true if rational first is less
// than rational second and false otherwise.

bool rationalLessThan(const Rational& first, const Rational& second)
{
    Rational equal1;
    //Rational equal2;

   int myLCM = lcm(first.denominator, second.denominator);

    equal1.denominator = myLCM;
    equal1.numerator = myLCM / first.denominator * first.numerator;
    equal1.numerator -= myLCM / second.denominator * second.numerator;

    rationalNormalize(equal1);

    if (equal1.numerator < 0)
        return true;
    else
        return false;
}
// Function rationalLessThanOrEqual returns true if rational first
// is less than or equal to rational second and false otherwise.
bool rationalLessThanOrEqual(const Rational& first, const Rational& second)
{
    Rational equal1;
    //Rational equal2;

   int myLCM = lcm(first.denominator, second.denominator);

    equal1.denominator = myLCM;
    equal1.numerator = myLCM / first.denominator * first.numerator;
    equal1.numerator -= myLCM / second.denominator * second.numerator;

    rationalNormalize(equal1);

    if (equal1.numerator <= 0)
        return true;
    else
        return false;
}
// Function rationalGreaterThan returns true if rational first is greater
// than rational second and false otherwise.

bool rationalGreaterThan(const Rational& first, const Rational& second)
{
   Rational equal1;
    //Rational equal2;

   int myLCM = lcm(first.denominator, second.denominator);

    equal1.denominator = myLCM;
    equal1.numerator = myLCM / first.denominator * first.numerator;
    equal1.numerator -= myLCM / second.denominator * second.numerator;

    rationalNormalize(equal1);

    if (equal1.numerator > 0)
        return true;
    else
        return false;

}
// Function rationalGreaterThanOrEqual returns true if rational first
// is greater than or equal to rational second and false otherwise.
bool rationalGreaterThanOrEqual(const Rational& first, const Rational& second)
{
   Rational equal1;
    //Rational equal2;

   int myLCM = lcm(first.denominator, second.denominator);

    equal1.denominator = myLCM;
    equal1.numerator = myLCM / first.denominator * first.numerator;
    equal1.numerator -= myLCM / second.denominator * second.numerator;

    rationalNormalize(equal1);

    if (equal1.numerator >= 0)
        return true;
    else
        return false;
}