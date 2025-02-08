//derek cook
//cs 1337
//lab 12

#include <iostream>
#include <string>

using namespace std;

const string ID = "Derek Cook - CS 1337 - Lab 12\n\n";

int main()
{
	uint abcde, a, b, c, d, e, ab;
	
	//output ID line
	cout << ID;
	
	//Loop through the 5-digit integers 10000, 10001, 10002, ..., 99999
	//looking for those where
	//1) ab is the product of d and e
	//2) b is four times e
	//3) e is seven less than d
	//4) c is the sum of a and b
	for (abcde = 10000; abcde <= 99999; ++abcde)
	{
		a = (abcde / 10000) % 10;
		b = (abcde / 1000) % 10;
		c = (abcde / 100) % 10;
		d = (abcde / 10) % 10;
		e = abcde % 10;
		ab = abcde / 1000;
		
		if (ab == d * e && b == e * 4 && e == d - 7 && c == a + b)
		{
			cout << abcde << endl;
		}
	}
	return 0;
}