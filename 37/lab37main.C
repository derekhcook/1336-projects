#include <iostream>
#include <cstdlib>

using namespace std;

// reverseArrayUsingIndexing:  Using indexing, this function reverses
// the elements of the n-element integer array in place; that is, the
// function exchanges the first and last elements, the second and
// next-to-last elements, and so on.
void reverseArrayUsingIndexing(int array[], int n);

// reverseArrayUsingPointers:  Using pointers, this function reverses
// the elements of the n-element integer array in place; that is, the
// function exchanges the first and last elements, the second and
// next-to-last elements, and so on.
void reverseArrayUsingPointers(int *array, int n);

// printArrayUsingPointers:  prints the n-element integer array to
// output stream os; the function uses pointers
void printArrayUsingPointers(const int *array, int n, ostream& os);

int main()
{
  int i, array[100], *ptr;
  
  i = 0;
  ptr = array;
  while (i < 100 && cin >> *ptr++)
    i++;

  if (i == 0) 
    cout << "No data" << endl;
  else
  {
    cout << "Before call to reverseArrayUsingIndexing()" << endl;
    printArrayUsingPointers(array, i, cout);
    reverseArrayUsingIndexing(array, i);
    cout << "After call to reverseArrayUsingIndexing()" << endl;
    printArrayUsingPointers(array, i, cout);
    reverseArrayUsingPointers(array, i);
    cout << "After call to reverseArrayUsingPointers()" << endl;
    printArrayUsingPointers(array, i, cout);
  }

  return EXIT_SUCCESS;
}

void printArrayUsingPointers(const int *array, int n, ostream& os)
{
  const int *ptr;
  const int *const endPtr = array + n;

  if (n > 0)
  {
    os << "array" << endl << '{' << endl;
    for (ptr = array; ptr < endPtr; ++ptr)
      os << "  [" << ptr - array << "] = " << *ptr << endl;
    os << '}' << endl;
  }
}
