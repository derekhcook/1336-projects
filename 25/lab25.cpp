// Derek Cook
// CS 1337
// lab 25
//test

#include <bits.h>

// compress:  compresses age, grade, sex, and GPA into the lower 16
// bits of an unsigned int
unsigned int compress(unsigned int age, unsigned int grade, char sex, double GPA)
{
	unsigned int info = 0;
	
	//place (age - 3) into bits 12, 13, 14, and 15 of info
	info = setBits(info, 12, 4, age - 3);

	info = setBits(info, 8, 4, grade);

	if (sex == 'M')
	{
		info = setBits(info, 7, 1, 1);
	}
	
	if (sex == 'F')
	{
		info = setBits(info, 7, 1, 0);
	}

	
	info = setBits(info, 4, 3, static_cast<int>(GPA * 10) / 10);

	info = setBits(info, 0, 4, static_cast<int>(GPA * 10) % 10);

	
	return info;
}
