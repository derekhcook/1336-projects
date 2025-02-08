#include <iostream>
#include <iomanip>

using namespace std;

// Function initializeDigits initializes each of the elements in the
// n-element boolean array digits to value
void initializeDigits(bool digits[], int n, bool value);   

// Function determineDigits receives as arguments an n-element boolean
// array digits and a five digit number abcde.  The function sets
// digits[i], 0 <= i <= 9, to true if i occurs in the decimal
// representation of abcde.
void determineDigits(bool digits[], int n, int abcde);   

// Function checkDigits returns true if each of the elements in the
// n-element boolean array digits is true and false otherwise
bool checkDigits(const bool digits[], int n);

// Function printLine writes n hyphens to output stream out
void printLine(ostream& out, int n);

int main()
{
  int n;
  bool digits[10];

  printLine(cout, 13);
  cout << "  n      2n  " << endl;
  printLine(cout, 13);

  for (n = 1234; n <= 49876; ++n)
  {
    initializeDigits(digits, 10, false);
    determineDigits(digits, 10, n);
    determineDigits(digits, 10, 2 * n);
    if (checkDigits(digits, 10))
      cout << setfill('0') << setw(5) << n << "   " 
           << setw(5) << 2 * n << setfill(' ') << endl;
  }

  printLine(cout, 13);

  return 0;
}

void printLine(ostream& out, int n)
{
  char ch = out.fill();
  out << setfill('-') << setw(n) << "-" << setfill(ch) << endl;
  return;
}
