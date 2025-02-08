// Derek Cook
// 1337
// Lab 16

// Function encrypt receives a four-digit integer abcd and returns a
// new integer as follows: Replace each digit of abcd by ((digit + 7) mod
// 10). Then looking at the number from the left, swap the first digit
// with the third, swap the second digit with the fourth, and return the
// new number.
unsigned int encrypt(unsigned int abcd)
{
	unsigned int a, b, c, d, f, g;
	//find a,b,c,d
	a = (abcd / 1000) % 10;
	
	b = (abcd / 100) % 10;
	
	c = (abcd / 10) % 10;
	
	d = abcd % 10;
	
	//calc code
	 a = (a + 7) % 10;
	 b = (b + 7) % 10;
	 c = (c + 7) % 10;
	 d = (d + 7) % 10;
	
	//swap a and c and b and d 
	g = a;
	a = c;
	c = g;
	f = d;
	d = b;
	b = f;
	
	//recompute abcd
	a = a * 1000;
	b = b * 100;
	c = c * 10;
	d = d;
	
	abcd = a + b + c + d;
	
	return abcd;
	
}