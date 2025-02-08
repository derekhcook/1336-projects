// Derek Cook
// CS 1337
// Lab 49


#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;



// Function stringReverse reverses the characters of string s; that is,
// the function exchanges the first and last characters, the second and
// next-to-last characters, and so on. The transformed string is 
// returned to the calling function.

string stringReverse(string s)
{
    
   //string::size_type i; // i is an  unsigned int
   //string::size_type j;
   int n = s.length();
    int j, i;
   // Loop through the elements of sb_type

   for (i = 0, j = n - 1; i < j; ++i, --j)
   {
        swap(s[i], s[j]);
   }

   return s;
}

