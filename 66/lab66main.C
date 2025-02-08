#include <lab66.h>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
  unsigned i;
  Rational first(1, -2), second(-3, 0), result;
  string operators = "+-*/";

  first.print(cout);
  cout << ' ';
  second.print(cout);
  cout << ' ';
  result.print(cout);
  cout << endl;

  while (first.read(cin) && second.read(cin))
  {
    for (i = 0; i < operators.length(); ++i)
    {
      first.print(cout);
      cout << ' ' << operators[i] << ' ';
      second.print(cout);
      cout << " = ";

      if (operators[i] == '/' && second.getNumerator() == 0)
        cout << "Division by zero is not allowed";
      else
      {
        switch (operators[i])
        {
          case '+':  result = first.add(second); break;
          case '-':  result = first.subtract(second); break;
          case '*':  result = first.multiply(second); break;
          case '/':  result = first.divide(second); break;
          default :  cerr << "Unknown op"; exit(EXIT_FAILURE);
        }
        result.print(cout);
      }
      cout << endl;
    }
  }

  return EXIT_SUCCESS;
}
