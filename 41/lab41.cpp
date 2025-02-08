// Derek Cook
// CS 1337
// Lab 41

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

const string ID = "Derek Cook - CS 1337 - Lab 41\n\n";

int main()
{
    char ch;

    //output ID line
    cout << ID;

    // read an unknown # of charachters from standard input,
    // charachter-by-charachter-by-c

    while(cin.get(ch))
    {
        ch = tolower(ch);
        if (!isdigit(ch) && !ispunct(ch))
            cout << ch;
    }

    return 0;
}