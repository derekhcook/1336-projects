// Derek Cook
// CS 1337
// Lab 53

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

// Function sort - sorts the n-element array of strings in
// ascending order using an exchange sort
void sort(string array[], int n)
{
    string *outer, *inner, *const end = array + n;

    for (outer = array; outer < end - 1; ++outer)
    {
        for (inner = outer + 1; inner < end; ++inner)
        {
            if (*outer > *inner)
            {
                (*outer) .swap(*inner);
            }
        }
    }
}

// Function writeArray - Writes the n-element array of strings to
// output stream out, each element on a separate line
ostream& writeArray(ostream& out, const string array[], int n)
{
  const string *ptr;
  const string *const endPtr = array + n;

  if (n > 0)
  {
    out << "array" << endl << '{' << endl;
    for (ptr = array; ptr < endPtr; ++ptr)
      out << "  [" << setw(2) << ptr - array << "] = " << *ptr << endl;
    out << '}' << endl;
  }
    return out;
}
