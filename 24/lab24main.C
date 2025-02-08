#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <bits.h>
#include <bitset>
#include <climits>

using namespace std;

// printQuaternary:  Writes the quaternary representation of word to
// output stream os.
void printQuaternary(int word, ostream& os);

// printOctal:  Writes the octal representation of word to output
// stream os.
void printOctal(int word, ostream& os);

// printLine:  prints a horizontal line of length hyphens to output
// stream os
void printLine(int length, ostream& os);

extern const int N = sizeof(int) * CHAR_BIT; // # of bits in an int

int main()
{
  int num;

  // Print heading
  printLine(79, cout);
  cout << setw(9) << "Decimal" << setw(24) << "Binary"
       << setw(29) << "Quaternary" << setw(14) << "Octal" << endl;
  printLine(79, cout);

  while (cin >> num)
  {
    cout << right << setw(11) << num << setw(3) << " "
         << bitset<N>(num) << setw(3) << " ";
    printQuaternary(num, cout);
    cout << setw(3) << " ";
    printOctal(num, cout);
    cout << endl;
  }

  printLine(79, cout);

  return EXIT_SUCCESS;
}

void printLine(int length, ostream& os)
{
  char ch = os.fill();
  os << setfill('-') << setw(length) << "-" << setfill(ch) << endl;
}
