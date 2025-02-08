// Derek Cook
// CS 1337
// Lab 31

#include <iostream>
#include <string>
#include <bits.h>

using namespace std;

const string ID = "Derek Cook - CS 1337 - Lab 31 \n\n";


int main()
{
    short HammingCharacter;
    unsigned int bit1, bit2, bit4, bit8, offendingBit;

    
    cout << ID;
    //read an unknown # of short ints, each representing a
    // Hamming character with at most one bit error
    while (cin >> HammingCharacter)
    {
        //calculate the parity bits using formulas
         offendingBit = 0;
        // Parity Bit 1
        bit1 = (getBit (HammingCharacter, 11 - 3) +
                     getBit (HammingCharacter, 11 - 5) + 
                     getBit (HammingCharacter, 11 - 7) +
                     getBit (HammingCharacter, 11 - 9) +
                     getBit (HammingCharacter, 11 - 11)) % 2;

        if (bit1 != getBit (HammingCharacter, 11-1))
        {
            offendingBit += 1;
        }

        // Parity Bit 2
        bit2 = (getBit (HammingCharacter, 11 - 3) +
                     getBit (HammingCharacter, 11 - 6) + 
                     getBit (HammingCharacter, 11 - 7) +
                     getBit (HammingCharacter, 11 - 10) +
                     getBit (HammingCharacter, 11 - 11)) % 2;

        if (bit2 != getBit (HammingCharacter, 11-2))
        {
            offendingBit += 2;
        }

        // Parity Bit 4

        bit4 = (getBit (HammingCharacter, 11 - 5) +
                     getBit (HammingCharacter, 11 - 6) +
                     getBit (HammingCharacter, 11 - 7)) % 2;

        if (bit4 != getBit (HammingCharacter, 11-4))
        {
            offendingBit += 4;
        }

        // Parity Bit 8
        bit8 = (getBit (HammingCharacter, 11 - 9) +
                     getBit (HammingCharacter, 11 - 10) +
                     getBit (HammingCharacter, 11 - 11)) % 2;

        if (bit8 != getBit (HammingCharacter, 11-8))
        {
            offendingBit += 8;
        }

        //cout << "Debug: offendingBit" << offendingBit << endl;

        if (offendingBit != 0)
        {
            // invert
            if (getBit (HammingCharacter, 11 - offendingBit) == 0)
            {
                setBit (HammingCharacter, 11 - offendingBit, 1);
            } 
            else if(getBit (HammingCharacter, 11 - offendingBit) == 1)
            {
                setBit (HammingCharacter, 11 - offendingBit, 0);
            }

            
        }

        // build the printable charachter

        char ch = 0;
        ch = setBit (ch, 6, getBit (HammingCharacter, 11 - 3));
        ch = setBit (ch, 5, getBit (HammingCharacter, 11 - 5));
        ch = setBit (ch, 4, getBit (HammingCharacter, 11 - 7));
        ch = setBit (ch, 3, getBit (HammingCharacter, 11 - 7));
        ch = setBit (ch, 2, getBit (HammingCharacter, 11 - 9));
        ch = setBit (ch, 1, getBit (HammingCharacter, 11 - 10));
        ch = setBit (ch, 0, getBit (HammingCharacter, 11 - 11));
        cout << ch;

    }

    return 0;

}