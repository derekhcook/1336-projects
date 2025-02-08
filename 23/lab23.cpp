//Derek Cook
//CS 1337
//Lab 23

#include <bits.h>

extern const int N; // # of bits in an int

typedef unsigned int uint;

// Returns the number of bits that are on (i.e., equal to 1) in word
unsigned int bitsOn(int word)
{
	uint numBitsOn = 0;
	
	for (int i = 0; i < N; ++i)
	{	
		numBitsOn += getBit(word, i);
	}
	return numBitsOn;
}