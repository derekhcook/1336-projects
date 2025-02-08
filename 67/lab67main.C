#include <lab67.h>
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
  while (first.read(cin) && second.read(cin))
  {
    for (i = 0; i < 6; ++i)
    {
      first.print(cout);
      cout << ' ' << operators[i] << ' ';
      second.print(cout);
      cout << " = ";
      switch (i)
      {
        case 0: cout << first.equal(second); break;
        case 1: cout << first.notEqual(second); break;
        case 2: cout << first.lessThan(second); break;
        case 3: cout << first.lessThanOrEqual(second); break;
        case 4: cout << first.greaterThan(second); break;
        case 5: cout << first.greaterThanOrEqual(second); break;
        default:  cerr << "Error.  Unknown operator.  Exiting." << endl;
                  exit(EXIT_FAILURE);
      }
      cout << endl;
    }
  }

  return EXIT_SUCCESS;
}
