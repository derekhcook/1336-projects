// Derek Cook
// CS 1337
// Lab 51

#include <string>
#include <cctype>

using namespace std;

// Function removePunctuation removes all punctuation characters from
// string s. The transformed string is returned to the calling function.

string removePunctuation(string s)
{
    string::iterator itr;

    for (itr = s.begin(); itr < s.end(); ++itr)
    {
        if (ispunct(*itr))
        {
            s.erase(itr);
            --itr;
        }

    }
    return s;
}