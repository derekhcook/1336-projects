#ifndef LAB62_H
#define LAB62_H

#include <cmath>

using namespace std;

const double PI = acos(-1.0);

class Circle
{
 public:
  Circle();                        // default constructor; sets radius to 0.0
  Circle(double r);                // constructor; Initializes radius to r
  double getRadius() const;        // returns radius
  void setRadius(double x);        // if x >= 0 sets radius to x else sets
                                   //   radius to 0.0
  double diameter() const;         // returns the diameter of the circle
  double area() const;             // returns the area of the circle
  double circumference() const;    // returns the circumference of the circle
 private:
  double radius;
};

#endif
