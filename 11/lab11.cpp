//Derek Cook
// CS 1337
// Lab 11

#include <iostream>
#include <string>

using namespace std;

const string ID = "Derek Cook - cs 1337 - lab 11\n\n";

int main()
{
	uint abc, a, b, c;
	
	// output ID line
	cout << ID;
	
	//Loop through the integers 100 101 102 ... 999
	// looking for3 digit integers where abc is divisible by 9
	// and each of a, b, and c is even 
	for (abc = 100; abc <= 999; ++abc)
	{
		a = abc / 100;
		b = abc / 10 % 10;
		c = abc % 10;
		
		if(abc % 9 == 0 && a % 2 == 0 && b % 2 == 0 && c % 2 == 0)
		{
			cout << abc << endl;
		}
		
	}
	
	return 0;
}