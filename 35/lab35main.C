#include <iostream>
#include <cstdlib>

using namespace std;

// sumUsingIndexing:  receives an n-element integer array and returns
// the sum of the elements; the function uses indexing
int sumUsingIndexing(const int array[], int n);

// sumUsingPointers:  receives an n-element integer array and returns
// the sum of the elements; the function uses pointers
int sumUsingPointers(const int *array, int n);

// printArrayUsingIndexing:  prints the n-element integer array to
// output stream os; the function uses indexing
void printArrayUsingIndexing(const int array[], int n, ostream& os);

int main()
{
  int i;
  int array[100];
  
  i = 0;
  while (i < 100 && cin >> array[i])
    i++;

  if (i == 0) 
    cout << "No data" << endl;
  else
  {
    printArrayUsingIndexing(array, i, cout);
    cout << "Sum Using Indexing = " << sumUsingIndexing(array, i) << endl;
    cout << "Sum Using Pointers = " << sumUsingPointers(array, i) << endl;
  }

  return EXIT_SUCCESS;
}

void printArrayUsingIndexing(const int array[], int n, ostream& os)
{
  int i;

  if (n > 0)
  {
    os << "array" << endl << '{' << endl;
    for (i = 0; i < n; ++i)
      os << "  [" << i << "] = " << array[i] << endl;
    os << '}' << endl;
  }
}
