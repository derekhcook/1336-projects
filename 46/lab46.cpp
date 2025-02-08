//Derek Cook
//CS 1337
//lab 46

#include <iostream>
#include <string>

#include <cctype>

using namespace std;

const string ID = "Derek Cook - CS 1337 - Lab 46\n\n";

int main()
{
    char prevCh = '\n', currCh;
    int lineCount = 0;         //word counter
    
    

    //input ID
    cout << ID;

    //read from standard inout charachter-by-charachter until end of data is found

    while(cin.get(currCh))
    {
        if (prevCh == '\n')
        {
            ++lineCount;
            cout << "   " << lineCount << ":  ";
        }
        cout << currCh;
        prevCh = currCh;
    }

        return 0;
}