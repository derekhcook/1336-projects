//Derek Cook
// CS 1337
// Lab 07

#include <iostream>
#include <string>

using namespace std;

const string ID = "Derek Cook - cs 1337 - lab 07\n\n";

int main()
{
	uint abc, a, b, c;
	
	// output ID line
	cout << ID;
	
	//Loop through the integers 100 101 102 ... 999
	// looking for3 digit integers where the sum of the
	//digits is to the product of the digits 
	for (abc = 100; abc <= 999; ++abc)
	{
		a = abc / 100;
		b = abc / 10 % 10;
		c = abc % 10;
		
		if(a + b + c == a * b * c)
		{
			cout << abc << endl;
		}
	}
	
	return 0;
}