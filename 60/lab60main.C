#include <iostream>
#include <cstdlib>
#include <string>
#include <lab59.h>

using namespace std;

// Function sort - sorts the n-element array of Rationals in
// ascending order
void sort(Rational array[], int n);

// Function writeArray - Writes the n-element array of Rationals to
// output stream out, each element on a separate line
ostream& writeArray(ostream& out, const Rational array[], int n);

int main()
{
  Rational rationals[100];
  unsigned int count = 0;

  while (count < 100 && rationalInput(cin, rationals[count]))
    ++count;

  cout << "Before Sort:" << endl;
  writeArray(cout, rationals, count);
  sort(rationals, count);
  cout << "After Sort:" << endl;
  writeArray(cout, rationals, count);

  return EXIT_SUCCESS;
}
