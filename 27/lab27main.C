#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <bitset>
#include <climits>

using namespace std;

// invBit:  returns value of word with bit n inverted
unsigned int invBit(unsigned int word, int n);

// printLine:  prints a horizontal line of length hyphens to output stream os
void printLine(int length, ostream& os);

// printTableHeader:  prints table header to output stream os
void printTableHeader(ostream& os);

extern const int N = sizeof(int) * CHAR_BIT; // # of bits in an int

int main()
{
  int num;
  unsigned int i;

  while (cin >> num)
  {
    cout << "     " << setw(11) << num << " base 10 = "
         << bitset<N>(num) << " base 2" << endl;
    printTableHeader(cout);
    for (i = 0; i <= sizeof(int) * CHAR_BIT - 1; ++i)
    {
      num = invBit(num, i);
      cout << setw(8) << i << setw(8) << "|" << setw(14) << num
           << setw(4) << "|" << "   " << bitset<N>(num) << endl;
    }
    printLine(72, cout);
  }

  return EXIT_SUCCESS;
}

void printLine(int length, ostream& os)
{
  char ch = os.fill();
  os << setfill('-') << setw(length) << "-" << setfill(ch) << endl;
}

void printTableHeader(ostream& os)
{
  printLine(72, os);
  os << setw(10) << "After" << "     |" << setw(19) << "num" << endl;
  os << setw(12) << "Inverting" << "   |";
  printLine(56, os);
  os << setw(9) << "Bit" << "      |" << setw(12) << "Base 10";
  os << "     |" << setw(23) << "Base 2" << endl;
  printLine(72, os);
}
