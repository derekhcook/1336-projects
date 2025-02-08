//Derek Cook
//CS 1337
//Lab 18

#include <iostream>
#include <cstdlib>

unsigned int reverseint(unsigned int num)
{
	unsigned int digit, reverse = 0;
	
	while(num > 0)
	{
		digit = num % 10;
		
		reverse = reverse * 10 + digit;
		
		num = num / 10;
	}
	
	return reverse;
}

unsigned int generateSequence(unsigned int num, ostream& out)
{
	unsigned int k = 0;
	
	while( num != 1)
	{
		out << num << ", ";
		num = num + 4;
		num = reverseint(num);
		k++;
	}
	out << num << endl;
	
	return k;
}