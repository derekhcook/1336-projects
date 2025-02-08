// Derek Cook
// CS 1337
// lab 48

#include <string>

#include <cctype>

using namespace std;

// Function replaceDigits replaces each digit character of s with '#';
// all other characters are left unchanged. The transformed string is
// returned to the calling function.


string replaceDigits(string s)
{
    string::size_type i; // i is an  unsigned int

    // Loop through the elements of sb_type

    for (i = 0; i < s.length(); ++i) //could say: s.at(i) = toupper(s.at(i));
    {
        if (isdigit(s[i]))
            s[i] = '#';
    }
    return s;
}

