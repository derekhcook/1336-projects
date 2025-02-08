// Derek Cook
// Cs 1337
// lab 60

#include <lab59.h>
#include <iostream>
#include <iomanip>

#include <string>


using namespace std;

// Function sort - sorts the n-element array of Rationals in
// ascending order
void sort(Rational array[], int n)
{
    Rational *outer, *inner, *const end = array + n;

    for (outer = array; outer < end - 1; ++outer)
    {
        for (inner = outer + 1; inner < end; ++inner)
        {
            if (rationalGreaterThan(*outer, *inner))
            {
                Rational temp;
                temp = *outer;
                *outer = *inner;
                *inner = temp;
            }
        }
    }
}

// Function writeArray - Writes the n-element array of Rationals to
// output stream out, each element on a separate line

ostream& writeArray(ostream& out, const Rational array[], int n)
{
  const Rational *ptr;
  const Rational *const endPtr = array + n;

  if (n > 0)
  {
    out << "array" << endl << '{' << endl;
    for (ptr = array; ptr < endPtr; ++ptr)
    {
        out << "  [" << setw(2) << ptr - array << "] = ";

        rationalOutput(out, *ptr);

        out << endl;

    }
    out << '}' << endl;
  }
    
    return out;

}
