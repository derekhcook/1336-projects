#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <bitset>
#include <climits>

using namespace std;

// printHexadecimal:  Writes the hexadecimal representation of word to
// output stream os.
void printHexadecimal(int word, ostream& os);

// printLine:  Prints a horizontal line of length hyphens to output stream os
void printLine(int length, ostream& os);

extern const int N = sizeof(int) * CHAR_BIT; // # of bits in an int

int main()
{
  int num;

  // Print heading
  printLine(60, cout);
  cout << setw(9) << "Decimal" << setw(24) << "Binary" 
       << setw(27) << "Hexadecimal" << endl;
  printLine(60, cout);

  while (cin >> num)
  {
    cout << right << setw(11) << num << setw(3) << " "
         << bitset<N>(num) << setw(4) << " ";
    printHexadecimal(num, cout);
    cout << endl;
  }

  printLine(60, cout);

  return EXIT_SUCCESS;
}

void printLine(int length, ostream& os)
{
  char ch = os.fill();
  os << setfill('-') << setw(length) << "-" << setfill(ch) << endl;
}
