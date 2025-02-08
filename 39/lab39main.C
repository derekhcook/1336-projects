#include <iostream>
#include <cstdlib>

using namespace std;

// modeUsingIndexing:  Using indexing, this function returns the mode
// of the n-element integer array.  The mode is defined as the value
// which occurs most frequently in a set of data.  The count of the
// number of times the mode occurs in the array is returned via the
// third parameter.
int modeUsingIndexing(const int array[], int n, int& count);

// modeUsingPointers:  Using pointers, this function returns the mode
// of the n-element integer array.  The mode is defined as the value
// which occurs most frequently in a set of data.  The count of the
// number of times the mode occurs in the array is returned via the
// third parameter.
int modeUsingPointers(const int *array, int n, int& count);

// printArrayUsingPointers:  prints the n-element integer array to
// output stream os; the function uses pointers
void printArrayUsingPointers(const int *array, int n, ostream& os);

int main()
{
  int i, array[100], *ptr, mode, count;
  
  i = 0;
  ptr = array;
  while (i < 100 && cin >> *ptr++)
    i++;

  if (i == 0) 
    cout << "No data" << endl;
  else
  {
    printArrayUsingPointers(array, i, cout);
    mode = modeUsingIndexing(array, i, count);
    cout << "Using Indexing Mode = " << mode << " count = " << count << endl;
    mode = modeUsingPointers(array, i, count);
    cout << "Using Pointers Mode = " << mode << " count = " << count << endl;
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
