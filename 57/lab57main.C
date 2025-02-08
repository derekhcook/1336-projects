#include <iostream>
#include <lab57.h>

using namespace std;

int main()
{
  Rational rational;

  while (rationalInput(cin, rational))
  {
    if (rationalValid(rational))
    {
      rationalOutput(cout, rational);
      cout << " = ";
      rationalNormalize(rational);
      rationalOutput(cout, rational);
      cout << endl;
    }
    else
    {
      rationalOutput(cout, rational);
      cout << " is invalid " << endl;
    }
  }

  return 0;
}
