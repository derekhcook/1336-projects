//derek cook
//cs 1337
//lab 15





unsigned int reverseInt(unsigned int num)
{
	unsigned int digit, reverse = 0;
	
	while (num > 0)
	{
		//calc rightmost digit
		digit = num % 10;
		
		//incorporate in to reverse
		reverse = reverse * 10 + digit;
		
		//eliminate right most digit
		num = num /10;
	}
	return reverse;
}