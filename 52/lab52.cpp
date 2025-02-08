// Derek Cook
// CS 1337
// Lab 51

#include <string>
#include <cctype>

using namespace std;

// Function removeWhitespace removes all whitespace characters from
// string s. The transformed string is returned to the calling function.

string removeWhitespace(string s)
{
    string::iterator itr;

    for (itr = s.begin(); itr < s.end(); ++itr)
    {
        if (isspace(*itr))
        {
            s.erase(itr);
            --itr;
        }

    }
    return s;
}