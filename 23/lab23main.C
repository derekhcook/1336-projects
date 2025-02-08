#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <bitset>
#include <climits>

using namespace std;

// Returns the number of bits that are on (i.e., equal to 1) in word
unsigned int bitsOn(int word);

extern const int N = sizeof(int) * CHAR_BIT; // # of bits in an int

int main()
{
  int num, numBitsOn;

  while (cin >> num)
  {
    cout << right << setw(11) << num << " base 10 = ";
    cout << bitset<N>(num) << " base 2 has ";
    numBitsOn = bitsOn(num);
    cout << setw(2) << numBitsOn
         << left << setw(5) << (numBitsOn == 1 ? " bit" : " bits")
         << right << " on" << endl;
  }

  return EXIT_SUCCESS;
}
