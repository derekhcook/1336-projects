//Derek Cook
//CS 1337
//Lab 17

void initializeDigits(bool digits[], int n, bool value)
{
	for (int i = 0; i < n; ++i)
	{
		digits[i] = value;
	}

}


void determineDigits(bool digits[], int n, int abcde)
{
	int a, b, c, d, e;
	
	a = (abcde / 10000) % 10;
	b = (abcde / 1000) % 10;
	c = (abcde / 100) % 10;
	d = (abcde / 10) % 10;
	e = abcde % 10;
	
	
	digits[a] = true;
	digits[b] = true;
	digits[c] = true;
	digits[d] = true;
	digits[e] = true;
}


bool checkDigits(const bool digits[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		if(digits[i] == false)
		{
			return false;
		}
		
	}
	return true;
}