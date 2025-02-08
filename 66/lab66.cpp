// Derek Cook
// Cs 1337
// lab 66

#include <lab66.h>

Rational Rational::add(const Rational& addend) const     // addition
{
    Rational sum;

    int myLCM = lcm(getDenominator(), addend.getDenominator());

    sum.setNumerator(myLCM / getDenominator() * getNumerator()
                    + myLCM / addend.getDenominator() * addend.getNumerator());

    sum.setDenominator(myLCM);

    sum.reduce();

    return sum;
}
Rational Rational::additiveInverse() const               // given a/b, returns -a/b
{
   Rational addInv = *this;

   addInv.setNumerator(addInv.getNumerator() * -1);

   return addInv;
}
Rational Rational::subtract(const Rational& subtrahend) const // subtraction
{
    Rational sum;

    int myLCM = lcm(getDenominator(), subtrahend.getDenominator());

    sum.setDenominator(myLCM);
    sum.setNumerator(myLCM / getDenominator() * getNumerator()
                    - myLCM / subtrahend.getDenominator() * subtrahend.getNumerator());

    sum.reduce();

    return sum;
}
Rational Rational::multiply(const Rational& multiplicand) const // multiplication
{
    Rational product;

    product.setNumerator(getNumerator() * multiplicand.getNumerator());
    product.setDenominator(getDenominator() * multiplicand.getDenominator());

    product.reduce();

    return product;
}
Rational Rational::multiplicativeInverse() const         // given a/b, returns b/a
{
    Rational mulInv = *this;
    int temp = getDenominator();
    mulInv.setDenominator(getNumerator());
    mulInv.setNumerator(temp);

    return mulInv;
}
Rational Rational::divide(const Rational& divisor) const // division
{
    Rational quotient;

    quotient.setNumerator(getNumerator() * divisor.getDenominator());
    quotient.setDenominator(getDenominator() * divisor.getNumerator());

    quotient.reduce();

    return quotient;
}
ostream& Rational::print(ostream& os) const              // print Rational to output stream os
{
    os << getNumerator() << "/" << getDenominator();
    return os;
}
istream& Rational::read(istream& is)                     // read Rational from input stream is
{
    int n, d;

    is >> n >> d;

    if(is)
    {
        setNumerator(n);
        setDenominator(d);
    }

    return is;
}

int Rational::lcm(int u, int v) const                    // returns the least common
{
    if (u == 0 && v == 0)
        return 0;
    else
        return abs(u * v) / gcd(u, v);
}