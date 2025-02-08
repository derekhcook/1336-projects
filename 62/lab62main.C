#include <iostream>
#include <iomanip>
#include <lab62.h>

using namespace std;

int main()
{
  Circle circle1(5.0), circle2, circle3(-5.25);
  double r;

  cout << fixed << showpoint << setprecision(3);

  cout << "radius of circle1 = " << circle1.getRadius() << endl;
  cout << "radius of circle2 = " << circle2.getRadius() << endl;
  cout << "radius of circle3 = " << circle3.getRadius() << endl << endl;

  while (cin >> r)
  {
    circle2.setRadius(r);
    cout << "radius = " << circle2.getRadius() << endl;
    cout << "diameter = " << circle2.diameter() << endl;
    cout << "area = " << circle2.area() << endl;
    cout << "circumference = " << circle2.circumference() << endl << endl;
  }

  return 0;
}
