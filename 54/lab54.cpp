// Derek Cook
// CS 1337
// lab 54

#include <lab54.h>

// Function rightToLeftSort - sorts the n-element array of strings by
// comparing the last characters first, then the next-to-last
// characters, and so forth

void rightToLeftSort(string array[], int n)
{
    string *ptr, *const end = array + n;

    //step 1: reverse each element of array
    for (ptr = array; ptr < end; ++ptr)
    {
        *ptr = stringReverse(*ptr);
    }

    //step2 :Call the exchange from lab 53
    sort(array, n);

    //step 3: reverse each element of array
    for (ptr = array; ptr < end; ++ptr)
    {
        *ptr = stringReverse(*ptr);
    }

}