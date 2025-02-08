// Derek Cook
// CS 1337
// Lab 24

#include <iostream>
#include <bits.h>

using namespace std;

extern const int N /*= sizeof(int) * CHAR_BIT*/; // # of bits in an int

// printQuaternary:  Writes the quaternary representation of word to
// output stream os.
void printQuaternary(int word, ostream& os)
{
	int n, k = 2;
	
	for (n = (N - 1) / k * k; n >= 0; n -= k)
	{
		os << getBits(word ,n ,k);
	}
}

// printOctal:  Writes the octal representation of word to output
// stream os.
void printOctal(int word, ostream& os)
{
	int n, k = 3;
	
	for (n = (N - 1) / k * k; n >= 0; n -= k)
	{
		os << getBits(word ,n ,k);
	}
}