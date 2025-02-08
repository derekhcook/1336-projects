#include <iostream>

using namespace std;

// Function orderThree has three reference parameters:  small, medium,
// and large.  The function returns the smallest of small, medium, and
// large in small; the middle value in medium; and the largest value
// in large.
void orderThree(int& small, int& medium, int& large);

// Function orderThree has three parameters, each a pointer to an int
// value.  The function reorders the data so that the smallest of the
// values is pointed to by small, the middle value by medium, and the
// largest value by large.
void orderThree(int *small, int *medium, int *large);

int main()
{
  int a, b, c, copyA, copyB, copyC;

  while (cin >> a >> b >> c)
  {
    copyA = a;
    copyB = b;
    copyC = c;

    cout << "Reference -- Before:  "
         << "a = " << a << ", b = " << b << ", c = " << c;
    orderThree(a, b, c);
    cout << " After:  "
         << "a = " << a << ", b = " << b << ", c = " << c << endl;

    a = copyA;
    b = copyB;
    c = copyC;

    cout << "Pointer   -- Before:  "
         << "a = " << a << ", b = " << b << ", c = " << c;
    orderThree(&a, &b, &c);
    cout << " After:  "
         << "a = " << a << ", b = " << b << ", c = " << c << endl;
  }

  return 0;
}
