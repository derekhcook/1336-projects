#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

// sizeOfShort determines the number of bits in the internal
// representation of a short
unsigned int sizeOfShort(void);

// sizeOfInt determines the number of bits in the internal
// representation of an int
unsigned int sizeOfInt(void);

// sizeOfLong determines the number of bits in the internal
// representation of a long
unsigned int sizeOfLong(void);

// sizeOfLongLong determines the number of bits in the internal
// representation of a long long
unsigned int sizeOfLongLong(void);

// Function printLine writes n hyphens to output stream out
void printLine(ostream& out, int n);

int main()
{
  // output table title and heading
  cout << "     Number of Bits in the" << endl
       << "  Internal Representation of" << endl
       << "Fundamental Integral Data Types" << endl;
  printLine(cout, 31);
  cout << "     Data Type      # Bits" << endl;
  printLine(cout, 31);

  cout << "     short" << setw(14) << sizeOfShort() << endl;
  cout << "     int" << setw(16) << sizeOfInt() << endl;
  cout << "     long" << setw(15) << sizeOfLong() << endl;
  cout << "     long long" << setw(10) << sizeOfLongLong() << endl;

  printLine(cout, 31);

  return EXIT_SUCCESS;
}

void printLine(ostream& out, int n)
{
  char ch = out.fill();
  out << setfill('-') << setw(n) << "-" << setfill(ch) << endl;
  return;
}
