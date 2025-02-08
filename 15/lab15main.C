#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

// Function reverseInt returns an integer whose digits are in the
// reverse order of num.  For example, if num is 1234, the returned
// integer would be 4321.
unsigned int reverseInt(unsigned int num);

// Function printLine writes n hyphens to output stream out
void printLine(ostream& out, int n);

int main()
{
  unsigned int num;

  printLine(cout, 26);
  cout << " Original         Reverse " << endl
       << "  Number           Number " << endl;
  printLine(cout, 26);

  while (cin >> num)
  {
    cout << setw(10) << num << setw(6) << " "
         << setw(10) << reverseInt(num) << endl;
  }

  printLine(cout, 26);

  return EXIT_SUCCESS;
}

void printLine(ostream& out, int n)
{
  char ch = out.fill();
  out << setfill('-') << setw(n) << "-" << setfill(ch) << endl;
  return;
}
