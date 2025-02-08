// Derek Cook
// CS 1337
// Lab 64

#include <lab64.h>
#include <iostream>
#include <cmath>

using namespace std;

Rational::Rational()                           // default constructor
{
    setNumerator(0);
    setDenominator(1);
}
Rational::Rational(int num, int denom)         // additional constructor
{
    setNumerator(num);

    if (getDenominator() == 0)
        setDenominator(1);
    else
        setDenominator(denom);
}
void Rational::setNumerator(int num)           // set numerator to num
{
    numerator = num;
}
void Rational::setDenominator(int denom)       // set denominator to denom
{
    denominator = denom;
}
int  Rational::getNumerator() const            // return numerator
{
    return numerator;
}
int  Rational::getDenominator() const          // return denominator
{
    return denominator;
}
void Rational::reduce()                        // reduce to lowest terms and
{
    int myGCD = gcd(numerator, denominator);

    if (getDenominator() < 0)
        myGCD = myGCD * -1;

    setNumerator(getNumerator()/myGCD);
    setDenominator(getDenominator()/myGCD);
        
}
                                      //   normalize