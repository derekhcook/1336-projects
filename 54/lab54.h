#ifndef LAB54_H
#define LAB54_H

#include <iostream>
#include <string>

using namespace std;

// Function rightToLeftSort - sorts the n-element array of strings by
// comparing the last characters first, then the next-to-last
// characters, and so forth
void rightToLeftSort(string array[], int n);

// Functions from Lab 53

// Function sort - sorts the n-element array of strings in
// ascending order using an exchange sort
void sort(string array[], int n);

// Function writeArray - Writes the n-element array of strings to
// output stream out, each element on a separate line
ostream& writeArray(ostream& out, const string array[], int n);

// Function from Lab 49

// Function stringReverse - Returns the reverse of string s
string stringReverse(string s);

#endif
