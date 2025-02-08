// Derek Cook
// CS 1337
// lab 58

#include <lab58.h>
#include <cmath>

// Function lcm returns the least common multiple of u & v
int lcm(int u, int v)
{
    if (u == 0 && v == 0)
        return 0;
    else
        return abs(u * v) / gcd(u, v);
}

// Function rationalAdd returns augend + addend.  The result is
// returned in reduced form.
Rational rationalAdd(const Rational& augend, const Rational& addend)
{
    Rational sum;

    int myLCM = lcm(augend.denominator, addend.denominator);

    sum.denominator = myLCM;
    sum.numerator = myLCM / augend.denominator * augend.numerator;
    sum.numerator += myLCM / addend.denominator * addend.numerator;

    rationalNormalize(sum);

    return sum;
}

// Function rationalAdditiveInverse returns the additive inverse.
// The additive inverse, or opposite, of a number a is the number
// that, when added to a, yields zero. Thus, the fraction a/b is
// returned as -a/b.
Rational rationalAdditiveInverse(const Rational *rational)
{
    Rational addInv = *rational;

    addInv.numerator *= -1;

    return addInv;
}

// Function rationalSubtract returns minuend - subtrahend.  The result
// is returned in reduced form.
Rational rationalSubtract(const Rational& minuend, const Rational& subtrahend)
{
    Rational diff;

    int myLCM = lcm(minuend.denominator, subtrahend.denominator);

    diff.denominator = myLCM;
    diff.numerator = myLCM / minuend.denominator * minuend.numerator;
    diff.numerator -= myLCM / subtrahend.denominator * subtrahend.numerator;


    rationalNormalize(diff);

    return diff;
}

// Function rationalMultiply returns multiplier x multiplicand.  The
// result is returned in reduced form.
Rational rationalMultiply(const Rational& multiplier, const Rational& multiplicand)
{
    Rational product;

    product.numerator = multiplier.numerator * multiplicand.numerator;
    product.denominator = multiplier.denominator * multiplicand.denominator;

    rationalNormalize(product);

    return product;
}

// Function rationalMultiplicativeInverse returns the multiplicative inverse.
// The multiplicative inverse, or reciprocal, of a number a is the
// number that, when multiplied by a, yields the multiplicative
// identity, 1.  The multiplicative inverse of the fraction a/b is b/a. 
Rational rationalMultiplicativeInverse(const Rational *rational)
{
    Rational mulInv = *rational;
    int temp = mulInv.denominator;
    mulInv.denominator = mulInv.numerator;
    mulInv.numerator = temp;

    
    
    return mulInv;
}

// Function rationalDivide returns dividend / divisor.  The result is
// returned in reduced form.

Rational rationalDivide(const Rational& dividend, const Rational& divisor)
{
    Rational quotient;

    quotient.numerator = dividend.numerator * divisor.denominator;
    quotient.denominator = dividend.denominator * divisor.numerator;

    rationalNormalize(quotient);

    return quotient;
}
