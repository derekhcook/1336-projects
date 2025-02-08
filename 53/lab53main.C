#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Function sort - sorts the n-element array of strings in
// ascending order using an exchange sort
void sort(string array[], int n);

// Function writeArray - Writes the n-element array of strings to
// output stream out, each element on a separate line
ostream& writeArray(ostream& out, const string array[], int n);

int main()
{
  string words[100];
  unsigned int count = 0;

  while (count < 100 && cin >> words[count])
    ++count;

  cout << "Before Sort:" << endl;
  writeArray(cout, words, count);
  sort(words, count);
  cout << "After Sort:" << endl;
  writeArray(cout, words, count);

  return EXIT_SUCCESS;
}
