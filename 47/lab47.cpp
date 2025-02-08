// Derek Cook
// CS 1337
// Lab 47

#include <string>

#include <cctype> //for toupper

using namespace std;

// Function uppercase converts each lowercase character of s to its
// uppercase equivalent; all other characters are left unchanged. The
// transformed string is returned to the calling function.

/*
string uppercase(string s)
{
    string::size_type i; // i is an  unsigned int

    // Loop through the elements of sb_type

    for (i = 0; i < s.length(); ++i) //could say: s.at(i) = toupper(s.at(i));
    {
        s[i] = toupper(s[i]);
    }
    return s;
}
*/

/*
string uppercase(string s)
{
    string::iterator start, stop = s.end();

    // Loop through the elements of sb_type

    for (start = s.begin(); start < stop; ++start)
    {
        *start = toupper(*start);
    }
    return s;
}
*/

string uppercase(string s)
{
    string::pointer ptr, start, stop;

    start = const_cast<string::pointer>(s.data());
    stop = const_cast<string::pointer>(s.data() + s.length());

    // Loop through the elements of sb_type

    for (ptr = start; ptr < stop; ++ptr)
    {
        *ptr = toupper(*ptr);
    }
    return s;
}
