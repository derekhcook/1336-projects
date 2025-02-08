// Derek Cook
// CS 1337
// lab 29

#include <bits.h>

// decompress: decompresses the low-order 16 bits of info and
// returns age, grade, sex, and GPA
void decompress(unsigned int info, unsigned int& age,
                unsigned int& grade, char& sex, double& GPA)
{
    //place age from bits 12, 13, 14, and 15 of info
    age = getBits(info, 12, 4) + 3;
    
    grade = getBits(info, 8, 4);

    sex = getBits(info, 7, 1);
    
    if (sex == 1)
        sex = 'M';
    else
        sex = 'F';
    
    double totalGpa = getBits(info, 4, 3);
                    
    double secondTotal = getBits(info, 0, 4);
    
    secondTotal = secondTotal * (.10);
    
    GPA = totalGpa + secondTotal;
    
}

