#include <lab59.h>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
  Rational first, second;
  string operators[6] = {"==", "!=", "< ", "<=", "> ", ">="};
  uint i;

  cout << boolalpha;
  while (rationalInput(rationalInput(cin, first), second))
  {
    if (rationalValid(first) && rationalValid(second))
    {
      for (i = 0; i < 6; ++i)
      {
        rationalOutput(cout, first);
        cout << ' ' << operators[i] << ' ';
        rationalOutput(cout, second);
        cout << " = ";
        switch (i)
        {
          case 0: cout << rationalEqual(first, second); break;
          case 1: cout << rationalNotEqual(first, second); break;
          case 2: cout << rationalLessThan(first, second); break;
          case 3: cout << rationalLessThanOrEqual(first, second); break;
          case 4: cout << rationalGreaterThan(first, second); break;
          case 5: cout << rationalGreaterThanOrEqual(first, second); break;
          default:  cerr << "Error.  Unknown operator.  Exiting." << endl;
                    exit(EXIT_FAILURE);
        }
        cout << endl;
      }
    }
  }

  return EXIT_SUCCESS;
}
