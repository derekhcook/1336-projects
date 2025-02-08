// Derek Cook
// Lab 57
// cs 1337

#include <lab57.h>
#include <cmath>

using namespace std;

// Function rationalValid returns true if rational represents a valid
// rational number and false otherwise.
bool rationalValid(const Rational& rational)
{
    return rational.denominator != 0;
}

// Function rationalNormalize reduces rational to lowest
// terms. Negative rationals should be manipulated so that the
// minus sign goes with the numerator.  Zero is represented by zero
// (0) as the numerator and one (1) as the denominator.
void rationalNormalize(Rational& rational)
{
    if (rational.denominator < 0)
    {
        rational.numerator *= -1;
        rational.denominator *= -1;
    }
    if (rational.numerator == 0)
    {
        rational.denominator = 1;
    }
    int myGCD = gcd(rational.numerator, rational.denominator);
    rational.numerator /= myGCD;
    rational.denominator /= myGCD;
}

// Function rationalInput initializes rational from input stream in
istream& rationalInput(istream& in, Rational& rational)
{
    in >> rational.numerator >> rational.denominator;
    return in;
}

// Function rationalOutput writes rational to output stream out in the
// format rational.numerator/rational.denominator

ostream& rationalOutput(ostream& out, const Rational& rational)
{
    out << rational.numerator << "/" << rational.denominator;
    return out;
}

// Function gcd returns the greatest common divisor of u & v
int gcd(int u, int v)
{
    if (u == 0 && v == 0)
        return 0;

    if (v == 0)
        return abs(u);

    if (u == 0)
        return abs(v);

    for (int i = min(abs(u), abs(v)); i > 0; --i)
    {
        if (u % i == 0 && v % i == 0)
            return i;
    }

    return 1;
}
