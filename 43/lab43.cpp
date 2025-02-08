// Derek Cook
// CS 1337
// Lab 43


#include <iostream>
#include <string>

using namespace std;

const string ID = "Derek Cook - CS 1337 - Lab 43\n\n";

int main()
{
    char ch;
    int charCount = 0;         //charachter counter
    

    //input ID
    cout << ID;

    //read from standard inout charachter-by-charachter until end of data is found
    while(cin.get(ch))
    {
        charCount++;
    }

        cout << "Number of characters = " << charCount << endl;

        return 0;
}