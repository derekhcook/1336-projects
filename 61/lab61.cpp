// Derek Cook
// CS 1337
// lab 61

#include <lab61.h>
#include <cmath>

RealNumber::RealNumber(double x /*= 0.0*/)      // Initializes realValue
{
    setReal(x);
}
int RealNumber::round() const               // Returns realValue rounded to the
{
    if (abs(fracPart()) >= 0.50)
        return wholePart() + ((getReal() <0) ? -1 : 1);
    else
        return wholePart();
}
                                            // nearest integer

int RealNumber::wholePart() const           // Returns the integer part of realValue
{
    return static_cast<int>(getReal());
}
double RealNumber::fracPart() const         // Returns the fractional part of realValue
{
    return getReal() - wholePart();
}
double RealNumber::getReal() const          // Returns realValue
{
    return realValue;
}
void RealNumber::setReal(double x)          // Sets realValue to x
{
    realValue = x;
}