// Derek Cook
// CS 1337
// Lab 62

#include <lab62.h>
#include <cmath>


Circle::Circle()                        // default constructor; sets radius to 0.0
{
    setRadius(0.0);
}
Circle::Circle(double r)                // constructor; Initializes radius to r
{
    setRadius(r);
}
double Circle::getRadius() const        // returns radius
{
    return radius;
}
void Circle::setRadius(double x)        // if x >= 0 sets radius to x else sets
{
    if (x >= 0)
        radius = x;
    else
        radius = 0.0;
}
                                 //   radius to 0.0
double Circle::diameter() const         // returns the diameter of the circle
{
    return 2 * getRadius();
}
double Circle::area() const             // returns the area of the circle
{
    return PI * (getRadius() * getRadius());
}
double Circle::circumference() const    // returns the circumference of the circle
{
    return (2 * PI) * getRadius();
}