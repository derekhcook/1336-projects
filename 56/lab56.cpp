// Derek Cook
// CS 1337
// Lab 56

#include <iostream>
#include <string>
#include <cstdlib>

#include <cctype>

using namespace std;

// Function passwordVerifier returns true if string password
// represents a valid password and false otherwise. A valid 
// password must
//   1) be at least six characters long,
//   2) contain at least one uppercase letter,
//   3) contain at least one lowercase letter, and
//   4) contain at least one digit character.

bool passwordVerifier(string password)
{
   /* string::size_type i; // i is an  unsigned int

    int upper = 0;
    int digit = 0;
    int lower = 0;
    int symbol = 0;
    

    // Loop through the elements of sb_type

    for (i = 0; i < password.length(); ++i) //could say: s.at(i) = toupper(s.at(i));
    {
        if (isupper(password[i]))
            upper++;


        if (isdigit(password[i]))
            digit++;


        if (islower(password[i]))
            lower++;


        if (ispunct(password[i]))
            symbol++;

        
    }

     

    if (upper >=1 && digit >=1 && lower >= 1 && digit >= 1 && password.length() >= 6)
        return true;

    else
        return false; */

    int capital = 0;
    int lower = 0;
    int digit = 0;
    //int specialCharachter = 0;
    //int total = 0;
    //int lettersAndNumbers = 0;

    
    
        string uppercaseLetter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

        if (uppercaseLetter.find_first_of(password) != string::npos)
            capital++;


        string lowercaseLetter = "abcdefghijklmnopqrstuvwxyz";

        if (lowercaseLetter.find_first_of(password) != string::npos)
            lower++;


        string number = "1234567890";

        if (number.find_first_of(password) != string::npos)
            digit++;


        if (capital >= 1 && lower >= 1 && digit >= 1 && password.length() >= 6)
            return true;

        else
            return false;

}
