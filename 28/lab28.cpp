// Derek Cook
// CS 1337
// Lab 28

#include <iostream>
#include <bits.h>

using namespace std;

extern const int N /*= sizeof(int) * CHAR_BIT*/; // # of bits in an int

// printHexadecimal:  Writes the hexadecimal representation of word to
// output stream os.
void printHexadecimal(int word, ostream& os)
{
    int n, k = 4;
	
	for (n = (N - 1) / k * k; n >= 0; n -= k)
	{
		int hexDigit = getBits(word ,n ,k);
		if (hexDigit < 10)
			os << hexDigit;
		else
		{
			hexDigit += 55;
			os << static_cast<char>(hexDigit);
		}
	}
}
//A = 65 in the code