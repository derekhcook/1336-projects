#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Function removePunctuation removes all punctuation characters from
// string s. The transformed string is returned to the calling function.
string removePunctuation(string s);

int main()
{
  string str, newString;

  while (getline(cin, str))
  {
    cout << "Before:  " << str << endl;
    newString = removePunctuation(str);
    cout << " After:  " << newString << endl;
  }

  return EXIT_SUCCESS;
}
