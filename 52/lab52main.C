#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Function removeWhitespace removes all whitespace characters from
// string s. The transformed string is returned to the calling function.
string removeWhitespace(string s);

int main()
{
  string str, newString;

  while (getline(cin, str))
  {
    cout << "Before:  " << str << endl;
    newString = removeWhitespace(str);
    cout << " After:  " << newString << endl;
  }

  return EXIT_SUCCESS;
}
