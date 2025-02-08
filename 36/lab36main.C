#include <iostream>
#include <cstdlib>

using namespace std;

// largestUsingIndexing:  receives an n-element integer array and returns
// the index of the largest element; the function uses indexing
int largestUsingIndexing(const int array[], int n);

// largestUsingPointers:  receives an n-element integer array and returns
// a pointer to the largest element; the function uses pointers
int *largestUsingPointers(const int *array, int n);

// printArrayUsingPointers:  prints the n-element integer array to
// output stream os; the function uses pointers
void printArrayUsingPointers(const int *array, int n, ostream& os);

int main()
{
  int i, array[100], *ptr, largestIndex, *largestPtr;
  
  i = 0;
  ptr = array;
  while (i < 100 && cin >> *ptr)
  {
    i++;
    ptr++;
  }

  if (i == 0) 
    cout << "No data" << endl;
  else
  {
    printArrayUsingPointers(array, i, cout);
    largestIndex = largestUsingIndexing(array, i);
    cout << "Largest Using Indexing = " << array[largestIndex]
         << " and located at index " << largestIndex << endl;
    largestPtr = largestUsingPointers(array, i);
    cout << "Largest Using Pointers = " << *largestPtr
         << " and located at index " << largestPtr - array << endl;
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
