// Derek Cook
// CS 1337
// Lab 44


#include <iostream>
#include <string>

#include <cctype>

using namespace std;

const string ID = "Derek Cook - CS 1337 - Lab 44\n\n";

int main()
{
    char prevCh = ' ', currCh;
    int wordCount = 0;         //word counter
    
    

    //input ID
    cout << ID;

    //read from standard inout charachter-by-charachter until end of data is found
    while(cin.get(currCh))
    {
        if (isspace(prevCh) && currCh != ' ')
        {
            ++wordCount;
        }

        prevCh = currCh;
    }

        cout << "Number of words = " << wordCount << endl;

        return 0;
}