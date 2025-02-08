// Derek Cook
// CS 1337
// Lab 42

#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>

using namespace std;

const string ID = "Derek Cook - CS 1337 - Lab 42\n\n";

//initializes each element of the n-element array to value
void initialize (int *array, int n, int value);

// Function printLine writes n hyphens to output stream out
void printLine(ostream& out, int n);


int main()
{
    char ch;
    int ws = 0;         //white space counter
    int punct = 0;      //punctuation counter
    int digits[10];     /*digit counters*/
    int alpha[26];      //alpha counters

    //input ID
    cout << ID;
    
    //initialize the elements of the digits and alpha arrays
    initialize(digits, 10, 0);
    initialize(alpha, 26, 0);

    //read from standard inout charachter-by-charachter until end of data is found
    while(cin.get(ch))
    {
        if (isspace(ch))
            ++ws;
        else if (ispunct(ch))
            ++punct;
        else if (isdigit(ch))
            ++digits[ch - '0'];
        else if (isalpha(ch))
        ++alpha[toupper(ch) - 'A'];
    }

    if (ws > 0)
        cout << "whitespace = " << ws << endl;

    if (punct > 0)
        cout << "punctuation = " << punct << endl;

    //output table heading
    printLine(cout, 17);
    cout << "Character   Count" << endl;
    printLine(cout, 17);

    for (ch = '0'; ch <= '9'; ++ch)
    {
        if(digits[ch - '0'] > 0)
            cout << setw(5) << ch << setw(12) << digits[ch - '0'] << endl;
    }

    for (ch = 65; ch <= 90; ++ch)
    {
        if(alpha[ch - 'A'] > 0)
            cout << setw(5) << ch << setw(12) << alpha[ch - 'A'] << endl;
    }

    return 0;


}


//initializes each element of the n-element array to value*/
void initialize (int *array, int n, int value)
{
    int *ptr, *const end = array + n;

    for (ptr = array; ptr < end; ++ptr)
        *ptr = value;
}

// Function printLine writes n hyphens to output stream out*/
void printLine(ostream& out, int n)
{
    char ch = out.fill();
    out << setfill('-') << setw(n) << "-" << setfill(ch) << endl;
    return;
}