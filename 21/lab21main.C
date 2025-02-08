#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

// printBinary writes the binary representation of the integer n to
// output stream os
void printBinary(int n, ostream& os);

int main()
{
  int num;

  while (cin >> num)
  {
    cout << right << setw(11) << num << " base 10 = ";
    printBinary(num, cout);
    cout << " base 2" << endl;
  }

  return EXIT_SUCCESS;
}
