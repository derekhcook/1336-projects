#include <lab58.h>
#include <cstdlib>

using namespace std;

int main()
{
  Rational first, second, result;
  string operators = "+-*/";
  string::size_type i;

  while (rationalInput(rationalInput(cin, first), second))
  {
    if (rationalValid(first) && rationalValid(second))
    {
      cout << "The additive inverse of ";
      rationalOutput(cout, first);
      cout << " is ";
      rationalOutput(cout, rationalAdditiveInverse(&first));
      if (first.numerator != 0)
      {
        cout << " and the multiplicative inverse of ";
        rationalOutput(cout, first);
        cout << " is ";
        rationalOutput(cout, rationalMultiplicativeInverse(&first));
      }
      cout << endl;
    
      cout << "The additive inverse of ";
      rationalOutput(cout, second);
      cout << " is ";
      rationalOutput(cout, rationalAdditiveInverse(&second));
      if (second.numerator != 0)
      {
        cout << " and the multiplicative inverse of ";
        rationalOutput(cout, second);
        cout << " is ";
        rationalOutput(cout, rationalMultiplicativeInverse(&second));
      }
      cout << endl;

      for (i = 0; i < operators.length(); ++i)
      {
        rationalOutput(cout, first);
        cout << ' ' << operators[i] << ' ';
        rationalOutput(cout, second);
        cout << " = ";
        if (operators[i] == '/' && second.numerator == 0)
          cout << "Division by zero is not allowed";
        else
        {
          switch (operators[i])
          {
            case '+': result = rationalAdd(first, second); break;
            case '-': result = rationalSubtract(first, second); break;
            case '*': result = rationalMultiply(first, second); break;
            case '/': result = rationalDivide(first, second); break;
            default:  cerr << "Error.  Unknown operator.  Exiting." << endl;
                      exit(EXIT_FAILURE);
          }
          rationalOutput(cout, result);
        }
        cout << endl;
      }
    }
    else
    {
      cerr << "Error. Exiting." << endl;
      exit(EXIT_FAILURE);
    }
  }

  return EXIT_SUCCESS;
}
