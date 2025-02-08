//Derek Cook
//CS 1337
//lab 45

#include <iostream>
#include <string>

#include <cctype>

using namespace std;

const string ID = "Derek Cook - CS 1337 - Lab 45\n\n";

int main()
{
    char prevCh = ' ', currCh;
    int lineCount = 0;         //word counter
    
    

    //input ID
    cout << ID;

    //read from standard inout charachter-by-charachter until end of data is found
    while(cin.get(currCh))
    {
        if (currCh == '\n')
        {
            ++lineCount;
        }

        prevCh = currCh;
    }

    if (prevCh != '\n' && prevCh != ' ')
        ++lineCount;

    cout << "Number of lines = " << lineCount << endl;

        return 0;
}