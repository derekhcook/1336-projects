// Derek Cook
// CS 1337
// Lab 22

#include <iostream>
#include <climits> //for CHAR_BIT


// sizeOfShort determines the number of bits in the internal
// representation of a short
unsigned int sizeOfShort(void)
{
	short s = 1;
	int i;
	for (i = 1; s > 0; ++i)
	{
		
		s <<= 1;
	
	}
	return i;
}
// sizeOfInt determines the number of bits in the internal
// representation of an int
unsigned int sizeOfInt(void)
{
	int s = 1;
	int i;
	for (i = 1; s > 0; ++i)
	{
		
		s <<= 1;
	
	}
	return i;
}
// sizeOfLong determines the number of bits in the internal
// representation of a long
unsigned int sizeOfLong(void)
{
	long s = 1;
	int i;
	for (i = 1; s > 0; ++i)
	{
		
		s <<= 1;
	
	}
	return i;
}
// sizeOfLongLong determines the number of bits in the internal
// representation of a long long
unsigned int sizeOfLongLong(void)
{
	long long s = 1;
	int i;
	for (i = 1; s > 0; ++i)
	{
		
		s <<= 1;
	
	}
	return i;
}