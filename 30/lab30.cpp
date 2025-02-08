// Derek Cook
// CS 1337
// Lab 30

#include <climits>
#include <bits.h> // for getBit
using namespace std;

extern const int N;

/*
Scan word, starting from bit startingBit, toward more significant
bits, until the first 0 bit is found. Return the index of the found
bit.  If the bit at startingBit is already what's sought, then
startingBit is returned.  If there's no bit found, then UINT_MAX is
returned.
*/
unsigned int scan0(unsigned int word, unsigned int startingBit)
{
    int mask = 1 << startingBit;
    int base = startingBit;
    while (base < N)
    {
        if ((word & mask) == 0)
        {
            return base;
        }

        else
        {
            base++;
            mask = mask << 1;
        }

    }
    return UINT_MAX;
}


