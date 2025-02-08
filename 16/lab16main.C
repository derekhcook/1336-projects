#include <iostream>
#include <iomanip>

using namespace std;

// Function encrypt receives a four-digit integer abcd and returns a
// new integer as follows: Replace each digit of abcd by ((digit + 7) mod
// 10). Then looking at the number from the left, swap the first digit
// with the third, swap the second digit with the fourth, and return the
// new number.
unsigned int encrypt(unsigned int abcd);

// Function printLine writes n hyphens to output stream out
void printLine(ostream& out, int n);

int main()
{
  unsigned int num;

  printLine(cout, 23);
  cout << "Original      Encrypted" << endl
       << " Number        Number  " << endl;
  printLine(cout, 23);

  while (cin >> num)
  {
    cout << setw(8) << num << setw(6) << " "
         << setw(9) << encrypt(num) << endl;
  }

  printLine(cout, 23);

  return 0;
}

void printLine(ostream& out, int n)
{
  char ch = out.fill();
  out << setfill('-') << setw(n) << "-" << setfill(ch) << endl;
  return;
}
