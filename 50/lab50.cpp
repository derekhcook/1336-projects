// Derek Cook
// CS 1337
// Lab 50

#include <iostream>
#include <string>

using namespace std;

const string ID = "Derek Cook - CS 1337 - Lab 50\n\n";

bool isVowel(char ch);
bool isCons(char ch);


int main()
{
    string word;
    int numWords = 0;
    int numVowel = 0;
    int numCons = 0;

    //output ID
    cout << ID;

    //read from staandard input word by word until end of data
    while (cin >> word)
    {
        numWords++;
        if (isVowel(word.front()))
            numVowel++;

        else
        if (isCons(word.front()))
            numCons++;
    }

    cout << "Total Number of Words = " << numWords << endl;
    cout << "Number of Words Beginning with a Vowel = " << numVowel << endl;
    cout << "Number of Words Beginning with a Consonant = " << numCons << endl;
    cout << "Number of Words Beginning with a Non-Alpha = " << (numWords - numVowel) - numCons << endl;
    
    return 0;
}

bool isVowel(char ch)
{
    string vowels = "AEIOUaeiou";

    if (vowels.find_first_of(ch) != string::npos)
        return true;

    return false;
}

bool isCons(char ch)
{
    string consonant = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";

    if (consonant.find_first_of(ch) != string::npos)
        return true;

    return false;
}